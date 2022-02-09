//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright : EVE Contributors & Maintainers
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#include "test.hpp"
#include <eve/module/core.hpp>
#include <eve/module/core.hpp>
#include <eve/module/math.hpp>
#include <cmath>
#include <eve/detail/function/tmp/boost_math_cospi.hpp>
#include <eve/detail/function/tmp/boost_math_sinpi.hpp>

//==================================================================================================
// Types tests
//==================================================================================================
EVE_TEST_TYPES( "Check return types of cospi"
            , eve::test::simd::ieee_reals
            )
<typename T>(eve::as<T>)
{
  using v_t = eve::element_type_t<T>;

  TTS_EXPR_IS( eve::cospi(T())  , T);
  TTS_EXPR_IS( eve::cospi(v_t()), v_t);
};

//==================================================================================================
// cospi  tests
//==================================================================================================
auto mquarter_c  = []<typename T>(eve::as<T> const & ){  return T(-0.25); };
auto quarter_c = []<typename T>(eve::as<T> const & ){  return T( 0.25); };
auto mhalf_c = []<typename T>(eve::as<T> const & ){  return T(-0.5 ); };
auto half_c  = []<typename T>(eve::as<T> const & ){  return T( 0.5 ); };
auto mmed   = []<typename T>(eve::as<T> const & tgt){  return -eve::detail::Rempio2_limit(eve::detail::medium_type(), tgt)*eve::invpi(tgt); };
auto med    = []<typename T>(eve::as<T> const & tgt){  return  eve::detail::Rempio2_limit(eve::detail::medium_type(), tgt)*eve::invpi(tgt); };

EVE_TEST( "Check behavior of cospi on wide"
        , eve::test::simd::ieee_reals
        , eve::test::generate( eve::test::randoms(mquarter_c, quarter_c)
                             , eve::test::randoms(mhalf_c, half_c)
                             , eve::test::randoms(mmed, med)
                             , eve::test::randoms(eve::valmin, eve::valmax))
                             )
<typename T>(T const& a0, T const& a1, T const& a2, T const& a3)
{
  using eve::detail::map;
  using eve::cospi;
  using eve::diff;
  using eve::deginrad;
  using eve::pi;
  using v_t = eve::element_type_t<T>;
  long double ldpi = 3.1415926535897932384626433832795028841971693993751;
  auto ref = [](auto e) -> v_t { return boost::math::cos_pi(e); };
  TTS_ULP_EQUAL(eve::quarter_circle(cospi)(a0)      , map(ref, a0), 2);
  TTS_ULP_EQUAL(eve::half_circle(cospi)(a0)           , map(ref, a0), 2);
  TTS_ULP_EQUAL(eve::half_circle(cospi)(a1)           , map(ref, a1), 2);
  TTS_ULP_EQUAL(cospi(a0)                       , map(ref, a0), 2);
  TTS_ULP_EQUAL(cospi(a1)                       , map(ref, a1), 2);
  TTS_ULP_EQUAL(cospi(a2)                       , map(ref, a2), 2);
  TTS_ULP_EQUAL(cospi(a3)                       , map(ref, a3), 2);
  TTS_ULP_EQUAL(diff(cospi)(a0), map([ldpi](auto e) -> v_t { return  -ldpi*boost::math::sin_pi(e); }, a0), 2);
  TTS_ULP_EQUAL(diff(cospi)(a1), map([ldpi](auto e) -> v_t { return  -ldpi*boost::math::sin_pi(e); }, a1), 2);
  TTS_ULP_EQUAL(diff(cospi)(a2), map([ldpi](auto e) -> v_t { return  -ldpi*boost::math::sin_pi(e); }, a2), 2);
  TTS_ULP_EQUAL(diff(cospi)(a3), map([ldpi](auto e) -> v_t { return  -ldpi*boost::math::sin_pi(e); }, a3), 2);
};

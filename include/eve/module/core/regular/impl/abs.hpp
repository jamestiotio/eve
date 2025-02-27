//==================================================================================================
/*
  EVE - Expressive Vector Engine
  Copyright : EVE Project Contributors
  SPDX-License-Identifier: BSL-1.0
*/
//==================================================================================================
#pragma once

#include <eve/concept/value.hpp>
#include <eve/detail/apply_over.hpp>
#include <eve/detail/has_abi.hpp>
#include <eve/detail/implementation.hpp>
#include <eve/module/core/constant/mzero.hpp>
#include <eve/module/core/constant/zero.hpp>
#include <eve/module/core/regular/bit_andnot.hpp>
#include <eve/module/core/regular/max.hpp>

#include <concepts>

namespace eve::detail
{
template<real_value T>
EVE_FORCEINLINE constexpr T
abs_(EVE_SUPPORTS(cpu_), T const& a) noexcept
{
  if constexpr( has_native_abi_v<T> )
  {
    if constexpr( floating_value<T> ) return bit_andnot(a, mzero(eve::as(a)));
    else if constexpr( unsigned_value<T> ) return a;
    else if constexpr( signed_integral_scalar_value<T> ) return a < T(0) ? -a : a;
    else return eve::max(a, -a);
  }
  else { return apply_over(eve::abs, a); }
}

// -----------------------------------------------------------------------------------------------
// Masked case
template<conditional_expr C, value U>
EVE_FORCEINLINE auto
abs_(EVE_SUPPORTS(cpu_), C const& cond, U const& t) noexcept
{
  return mask_op(cond, eve::abs, t);
}

template<conditional_expr C, decorator D, value U>
EVE_FORCEINLINE auto
abs_(EVE_SUPPORTS(cpu_), C const& cond, D const & d, U const& t) noexcept
requires(std::convertible_to<U, decltype(abs(t))>)
{
  return mask_op(cond, d(eve::abs), t);
}
}

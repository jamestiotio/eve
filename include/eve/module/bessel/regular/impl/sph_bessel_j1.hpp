//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright : EVE Project Contributors
  SPDX-License-Identifier: BSL-1.0
**/
//==================================================================================================
#pragma once

#include <eve/module/core.hpp>
#include <eve/module/math.hpp>

namespace eve::detail
{
template<floating_value T>
EVE_FORCEINLINE auto
sph_bessel_j1_(EVE_SUPPORTS(cpu_), T x) noexcept
{
  return if_else((abs(x) <= eps(as(x))) || (x == inf(as(x))), zero, (sinc(x) - cos(x)) / x);
}

// -----------------------------------------------------------------------------------------------
// Masked cases
template<conditional_expr C, typename ... Ts>
EVE_FORCEINLINE auto
sph_bessel_j1_(EVE_SUPPORTS(cpu_), C const& cond, Ts ... ts) noexcept
{
  return mask_op(cond, eve::sph_bessel_j1, ts ...);
}

template<conditional_expr C, decorator D, typename  ... Ts>
EVE_FORCEINLINE auto
sph_bessel_j1_(EVE_SUPPORTS(cpu_), C const& cond, D const & d, Ts ... ts) noexcept
{
  return mask_op(cond, d(eve::sph_bessel_j1), ts ...);
}
}

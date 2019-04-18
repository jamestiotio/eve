//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2019 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef EVE_MODULE_CORE_FUNCTION_SIMD_X86_AVX2_IS_EQUAL_HPP_INCLUDED
#define EVE_MODULE_CORE_FUNCTION_SIMD_X86_AVX2_IS_EQUAL_HPP_INCLUDED

#include <eve/detail/overload.hpp>
#include <eve/detail/skeleton.hpp>
#include <eve/detail/abi.hpp>
#include <eve/as_logical.hpp>
#include <eve/forward.hpp>
#include <type_traits>

namespace eve::detail
{
  // -----------------------------------------------------------------------------------------------
  // avx2
  template < typename T,  typename N>
  EVE_FORCEINLINE auto is_equal_(EVE_SUPPORTS(avx2_),
                                 wide<T, N, avx_> const &v0,
                                 wide<T, N, avx_> const &v1) noexcept
  {
    using t_t = wide<T, N ,avx_>;
    using l_t = as_logical_t<t_t>;

    if constexpr(std::is_same_v<T, float> ) return l_t(_mm256_cmp_ps(v0, v1, _CMP_EQ_OQ));
    if constexpr(std::is_same_v<T, double>) return l_t(_mm256_cmp_pd(v0, v1, _CMP_EQ_OQ));
    if constexpr(std::is_integral_v<T> && sizeof(T) == 1) return l_t(_mm256_cmpeq_epi8(v0,v1));
    if constexpr(std::is_integral_v<T> && sizeof(T) == 2) return l_t(_mm256_cmpeq_epi16(v0,v1));
    if constexpr(std::is_integral_v<T> && sizeof(T) == 4) return l_t(_mm256_cmpeq_epi32(v0,v1));
    if constexpr(std::is_integral_v<T> && sizeof(T) == 8) return aggregate(eve::is_equal, v0, v1);
  }
}

#endif

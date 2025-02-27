##==================================================================================================
##  EVE - Expressive Vector Engine
##  Copyright : EVE Project Contributors
##  SPDX-License-Identifier: BSL-1.0
##==================================================================================================

add_custom_target(unit.core.exe                )
add_dependencies(unit.exe unit.core.exe        )


##==================================================================================================
## tests
##==================================================================================================
make_unit("unit.core" abs.cpp                 )
make_unit("unit.core" absmax.cpp              )
make_unit("unit.core" absmin.cpp              )
make_unit("unit.core" add.cpp                 )
make_unit("unit.core" agm.cpp                 )
make_unit("unit.core" all.cpp                 )
make_unit("unit.core" any.cpp                 )
make_unit("unit.core" as_value.cpp            )
make_unit("unit.core" average.cpp             )
make_unit("unit.core" binarize.cpp            )
make_unit("unit.core" binarize_not.cpp        )
make_unit("unit.core" bit_and.cpp             )
make_unit("unit.core" bit_andnot.cpp          )
make_unit("unit.core" bit_cast.cpp            )
make_unit("unit.core" bit_ceil.cpp            )
make_unit("unit.core" bit_floor.cpp           )
make_unit("unit.core" bit_mask.cpp            )
make_unit("unit.core" bit_notand.cpp          )
make_unit("unit.core" bit_not.cpp             )
make_unit("unit.core" bit_notor.cpp           )
make_unit("unit.core" bitofsign.cpp           )
make_unit("unit.core" bit_or.cpp              )
make_unit("unit.core" bit_ornot.cpp           )
make_unit("unit.core" bit_select.cpp          )
make_unit("unit.core" bit_shl.cpp             )
make_unit("unit.core" bit_shr.cpp             )
make_unit("unit.core" bit_width.cpp           )
make_unit("unit.core" bit_xor.cpp             )
make_unit("unit.core" ceil.cpp                )
make_unit("unit.core" clamp.cpp               )
make_unit("unit.core" constant.cpp            )
make_unit("unit.core" constants.cpp           )
###make_unit("unit.core" constants.cpp        )
make_unit("unit.core"  convert/to_double.cpp  )
make_unit("unit.core"  convert/to_float.cpp   )
make_unit("unit.core"  convert/to_int16.cpp   )
make_unit("unit.core"  convert/to_int32.cpp   )
make_unit("unit.core"  convert/to_int64.cpp   )
make_unit("unit.core"  convert/to_int8.cpp    )
make_unit("unit.core"  convert/to_tuple.cpp   )
make_unit("unit.core"  convert/to_uint16.cpp  )
make_unit("unit.core"  convert/to_uint32.cpp  )
make_unit("unit.core"  convert/to_uint64.cpp  )
make_unit("unit.core"  convert/to_uint8.cpp   )
make_unit("unit.core" copysign.cpp            )
make_unit("unit.core" countl_one.cpp          )
make_unit("unit.core" countl_zero.cpp         )
make_unit("unit.core" countr_one.cpp          )
make_unit("unit.core" countr_zero.cpp         )
make_unit("unit.core" count_true.cpp          )
make_unit("unit.core" dec.cpp                 )
make_unit("unit.core" decorated.div.cpp       )
make_unit("unit.core" decorated.rem.cpp       )
make_unit("unit.core" dist.cpp                )
make_unit("unit.core" div.cpp                 )
make_unit("unit.core" epsilon.cpp             )
make_unit("unit.core" exponent.cpp            )
make_unit("unit.core" fam.cpp                 )
make_unit("unit.core" fanm.cpp                )
make_unit("unit.core" fdim.cpp                )
make_unit("unit.core" firstbitset.cpp         )
make_unit("unit.core" firstbitunset.cpp       )
make_unit("unit.core" first_true.cpp          )
make_unit("unit.core" floor.cpp               )
make_unit("unit.core" fma.cpp                 )
#make_unit("unit.core" fmod.cpp                 )
make_unit("unit.core" fms.cpp                 )
make_unit("unit.core" fnma.cpp                )
make_unit("unit.core" fnms.cpp                )
make_unit("unit.core" frac.cpp                )
make_unit("unit.core" fracscale.cpp           )
make_unit("unit.core" frexp.cpp               )
make_unit("unit.core" fsm.cpp                 )
make_unit("unit.core" fsnm.cpp                )
make_unit("unit.core" gather.cpp              )
make_unit("unit.core" has_single_bit.cpp      )
make_unit("unit.core" hi.cpp                  )
make_unit("unit.core" if_else.cpp             )
make_unit("unit.core" ifrexp.cpp              )
make_unit("unit.core" inc.cpp                 )
make_unit("unit.core" is_denormal.cpp         )
make_unit("unit.core" is_equal.cpp            )
make_unit("unit.core" is_eqz.cpp              )
make_unit("unit.core" is_even.cpp             )
make_unit("unit.core" is_finite.cpp           )
make_unit("unit.core" is_flint.cpp            )
make_unit("unit.core" is_gez.cpp              )
make_unit("unit.core" is_gtz.cpp              )
make_unit("unit.core" is_imag.cpp             )
make_unit("unit.core" is_less.cpp             )
make_unit("unit.core" is_less_equal.cpp       )
make_unit("unit.core" is_lessgreater.cpp      )
make_unit("unit.core" is_lez.cpp              )
make_unit("unit.core" is_ltz.cpp              )
make_unit("unit.core" is_nan.cpp              )
make_unit("unit.core" is_negative.cpp         )
make_unit("unit.core" is_ngez.cpp             )
make_unit("unit.core" is_ngtz.cpp             )
make_unit("unit.core" is_nlez.cpp             )
make_unit("unit.core" is_nltz.cpp             )
make_unit("unit.core" is_normal.cpp           )
make_unit("unit.core" is_not_denormal.cpp     )
make_unit("unit.core" is_not_equal.cpp        )
make_unit("unit.core" is_not_finite.cpp       )
make_unit("unit.core" is_not_flint.cpp        )
make_unit("unit.core" is_not_greater.cpp      )
make_unit("unit.core" is_not_greater_equal.cpp)
make_unit("unit.core" is_not_imag.cpp         )
make_unit("unit.core" is_not_infinite.cpp     )
make_unit("unit.core" is_not_less.cpp         )
make_unit("unit.core" is_not_less_equal.cpp   )
make_unit("unit.core" is_not_nan.cpp          )
make_unit("unit.core" is_not_real.cpp         )
make_unit("unit.core" is_odd.cpp              )
make_unit("unit.core" is_ordered.cpp          )
make_unit("unit.core" is_positive.cpp         )
make_unit("unit.core" is_pow2.cpp             )
make_unit("unit.core" is_real.cpp             )
make_unit("unit.core" is_unordered.cpp        )
make_unit("unit.core" last_true.cpp          )
make_unit("unit.core" ldexp.cpp               )
make_unit("unit.core" lerp.cpp                )
make_unit("unit.core" lo.cpp                  )
make_unit("unit.core" logeps.cpp              )
make_unit("unit.core" logical_andnot.cpp      )
make_unit("unit.core" logical_notand.cpp      )
make_unit("unit.core" logical_notor.cpp       )
make_unit("unit.core" logical_ornot.cpp       )
make_unit("unit.core" logical_xor.cpp         )
make_unit("unit.core" lohi.cpp                )
make_unit("unit.core" lookup.cpp              )
make_unit("unit.core" manhattan.cpp           )
make_unit("unit.core" mantissa.cpp            )
make_unit("unit.core" maxabs.cpp              )
make_unit("unit.core" max.cpp                 )
make_unit("unit.core" maximum.cpp             )
make_unit("unit.core" maxmag.cpp              )
make_unit("unit.core" minabs.cpp              )
make_unit("unit.core" min.cpp                 )
make_unit("unit.core" minimum.cpp             )
make_unit("unit.core" minmag.cpp              )
make_unit("unit.core" minus.cpp               )
make_unit("unit.core" modf.cpp                )
make_unit("unit.core" mul.cpp                 )
make_unit("unit.core" nearest.cpp             )
make_unit("unit.core" negabsmax.cpp           )
make_unit("unit.core" negabsmin.cpp           )
make_unit("unit.core" negate.cpp              )
make_unit("unit.core" negatenz.cpp            )
make_unit("unit.core" negmaxabs.cpp           )
make_unit("unit.core" negminabs.cpp           )
make_unit("unit.core" nextafter.cpp           )
make_unit("unit.core" next.cpp                )
make_unit("unit.core" none.cpp                )
make_unit("unit.core" oneminus.cpp            )
make_unit("unit.core" oneosqrteps.cpp         )
make_unit("unit.core" plus.cpp                )
make_unit("unit.core" popcount.cpp            )
make_unit("unit.core" prev.cpp                )
make_unit("unit.core" rat.cpp                 )
make_unit("unit.core" rec.cpp                 )
make_unit("unit.core" reduce.cpp              )
#make_unit("unit.core" remainder.cpp          )
make_unit("unit.core" rem.cpp                 )
make_unit("unit.core" remdiv.cpp              )
make_unit("unit.core" rotl.cpp                )
make_unit("unit.core" rotr.cpp                )
make_unit("unit.core" round.cpp               )
make_unit("unit.core" roundscale.cpp          )
make_unit("unit.core" rshl.cpp                )
make_unit("unit.core" rshr.cpp                )
make_unit("unit.core" rsqrt.cpp               )
make_unit("unit.core"  saturate/as_double.cpp )
make_unit("unit.core"  saturate/as_float.cpp  )
make_unit("unit.core"  saturate/as_int16.cpp  )
make_unit("unit.core"  saturate/as_int32.cpp  )
make_unit("unit.core"  saturate/as_int64.cpp  )
make_unit("unit.core"  saturate/as_int8.cpp   )
make_unit("unit.core"  saturate/as_uint16.cpp )
make_unit("unit.core"  saturate/as_uint32.cpp )
make_unit("unit.core"  saturate/as_uint64.cpp )
make_unit("unit.core"  saturate/as_uint8.cpp  )
make_unit("unit.core" scan.cpp                )
make_unit("unit.core" shl.cpp                 )
make_unit("unit.core" shr.cpp                 )
make_unit("unit.core" sign_alternate.cpp      )
make_unit("unit.core" sign.cpp                )
make_unit("unit.core" signnz.cpp              )
make_unit("unit.core" sqr_abs.cpp             )
make_unit("unit.core" sqr.cpp                 )
make_unit("unit.core" sqrt.cpp                )
make_unit("unit.core" sqrteps.cpp             )
make_unit("unit.core" sqrtvalmax.cpp          )
make_unit("unit.core" sub.cpp                 )
make_unit("unit.core" trunc.cpp               )
#####make_unit("unit.core" two_add.cpp              )
#####make_unit("unit.core" two_prod.cpp             )
make_unit("unit.core" ulpdist.cpp             )

##==================================================================================================
##  EVE - Expressive Vector Engine
##  Copyright : EVE Project Contributors
##  SPDX-License-Identifier: BSL-1.0
##==================================================================================================

add_custom_target(unit.polynomial.exe           )
add_dependencies(unit.exe unit.polynomial.exe   )

make_unit("unit.polynomial"  gegenbauer.cpp     )
make_unit("unit.polynomial"  hermite.cpp        )
make_unit("unit.polynomial"  horner.cpp         )
make_unit("unit.polynomial"  laguerre.cpp       )
# make_unit("unit.polynomial"  legendre.cpp       )
make_unit("unit.polynomial"  newton.cpp         )
make_unit("unit.polynomial"  reverse_horner.cpp )
make_unit("unit.polynomial"  tchebytchev.cpp    )
make_unit("unit.polynomial"  tchebeval.cpp      )
make_unit("unit.polynomial"  jacobi.cpp         )

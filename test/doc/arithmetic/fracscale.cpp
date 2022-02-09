//#include <eve/function/fracscale.hpp>
#include <eve/module/core.hpp>
#include <eve/wide.hpp>
#include <iostream>
#include <iomanip>

using wide_ft = eve::wide<float, eve::fixed<4>>;

int main()
{
  wide_ft pf( [](auto i, auto) { return 1.2345678+i; } );

  std::cout << "---- simd" << '\n'
            << "<- pf            = " << pf << '\n'
            << "-> fracscale(pf, 4) = " << eve::fracscale(pf, 4) << '\n';

  float xf = 0x1.fffffep0f;

  std::cout << "---- scalar" << '\n'
                << "<- xf                             = " << std::hexfloat << xf << '\n';
    for (int i = 0;  i < 16; ++i)
      std::cout << "-> toward_zero(fracscale)(xf," << std::setw(2) << i << ")  = " << std::hexfloat << eve::toward_zero(eve::fracscale)(xf, i) << '\n';
  return 0;
}

#include <eve/module/bessel.hpp>
#include <eve/wide.hpp>
#include <iostream>

using wide_ft = eve::wide<double, eve::fixed<8>>;

int main()
{

  wide_ft pf = {0.5, 1.5, 0.1, 1.0, 19.0, 25.0, 21.5, 10000.0};
  std::cout << "---- simd" << '\n'
            << "<- pf                = " << pf << '\n'
            << "-> sph_bessel_j1(pf) = " << eve::sph_bessel_j1(pf) << '\n'
            ;

  double xd = -1.0;

  std::cout << "---- scalar" << '\n'
            << "<- xd                = " << xd << '\n'
            << "-> sph_bessel_j1(xd) = " << eve::sph_bessel_j1(xd) << '\n';


  return 0;
}

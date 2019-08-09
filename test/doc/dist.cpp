#include <eve/function/dist.hpp>
#include <eve/wide.hpp>
#include <eve/constant/valmax.hpp>
#include <eve/constant/valmin.hpp>
#include <eve/tags.hpp>
#include <iostream>

using wide_it = eve::wide <int16_t, eve::fixed<4>>;

int main()
{
  wide_it pf = { 0, 1, -1, -eve::Valmax<int16_t>() };
  wide_it qf = { 1, -1, 0, eve::Valmax<int16_t>() };

  std::cout
    << "---- simd" << '\n'
    << "<- pf =                          " << pf << '\n'
    << "<- qf =                          " << qf << '\n'
    << "-> eve::dist(pf, qf) =            " << eve::dist(pf, qf) << '\n'
    << "-> eve::saturated_(eve::dist)(pf, qf) = " << eve::saturated_(eve::dist)(pf, qf) << '\n';

  int16_t xf = -eve::Valmax<int16_t>();
  int16_t yf = eve::Valmax<int16_t>();

  std::cout
    << "---- scalar"  << '\n'
    << "<- xf =                          " << xf << '\n'
    << "<- yf =                          " << yf << '\n'
    << "-> eve::dist(xf, yf) =            " << eve::dist(xf, yf) << '\n'
    << "-> eve::saturated_(eve::dist)(xf, yf) = " << eve::saturated_(eve::dist)(xf, yf) << '\n';
  return 0;
}

#include <iostream>
#include <tuple>

int main(int argc, char** argv)
{
  auto tuple = std::make_tuple(1, "foo", 3.1);

  auto [ i, s, f ] = tuple;

  std::cout << i << std::endl << s << std::endl << f << std::endl;

  return 0;
}

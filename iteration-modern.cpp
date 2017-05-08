#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
  std::vector<std::string> list = { "hello", "world" };

  for(auto s : list)
    std::cout << s << std::endl;

  return 0;
}

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
  std::vector<std::string> list;
  list.push_back("hello");
  list.push_back("world");

  for(std::vector<std::string>::iterator it = list.begin(); it != list.end(); it ++)
  {
    std::string s = *it;
    std::cout << s << std::endl;
  }

  return 0;
}

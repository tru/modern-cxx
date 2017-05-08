#include <iostream>
#include <string>
#include <vector>
#include <thread>

class Test
{
  public:
    Test(const std::string& name) : m_name(name) {}
    std::string getName() const { return m_name; }
    
  private:
    std::string m_name;
};

int main(int argc, char** argv)
{
  Test t("Hello world");

  std::thread([=]()
  {
    std::cout << t.getName() << std::endl;
  }).join();
  
  return 0;
}

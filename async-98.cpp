#include <iostream>
#include <string>
#include <vector>
#include <pthread.h>

class Test
{
  public:
    Test(const std::string& name) : m_name(name) {}
    std::string getName() { return m_name; }
    
  private:
    std::string m_name;
};

void* async_do(void* cls)
{
  Test *t = static_cast<Test*>(cls);

  if (t)
    std::cout << t->getName() << std::endl;

  return 0;
}

int main(int argc, char** argv)
{
  Test t("Hello world");
  
  pthread_t thread;
  pthread_create(&thread, NULL, &async_do, &t);

  pthread_join(thread, NULL);

  return 0;
}

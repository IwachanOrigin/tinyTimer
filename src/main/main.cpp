
#include "timer.h"
#include <iostream>

int main(int argc, char* argv[])
{
  Timer timer;

  for (auto i = 0; i < 5000; i++)
  {
    // loop
  }

  std::wcout << "Result : " << timer.elapsed() << " ms" << std::endl;
  return 0;
}


#include "timer.h"
#include <iostream>

constexpr int USE_MICRO_S = 0;

int main(int argc, char* argv[])
{
  Timer timer;

  for (auto i = 0; i < 1000000; i++)
  {
    // loop
  }

#if USE_MICRO_S
  std::wcout << "Result : " << timer.elapsed_micro() << " micro s" << std::endl;
#else
  std::wcout << "Result : " << timer.elapsed() << " ms" << std::endl;
#endif

  return 0;
}

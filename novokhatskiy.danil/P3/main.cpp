#include "changeString.hpp"
#include "inputString.hpp"
#include <iostream>
#include <stdexcept>

int main()
{
  using namespace novokhatskiy;
  char* buffer = nullptr;
  try
  {
    buffer = inputString(std::cin);
    if (!std::cin)
    {
      std::cerr << "Can't read the string\n";
      return 1;
    }
    else
    {
      buffer = changeString(buffer, buffer);
      std::cout << buffer << "\n";
    }
  }
  catch (const std::bad_alloc &e)
  {
    delete[] buffer;
    throw e;
  }
  delete[] buffer;
  return 0;
}


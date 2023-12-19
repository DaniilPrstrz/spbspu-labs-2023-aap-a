#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <fstream>
#include <cstddef>

namespace sakovskaia
{
  void inputMatrix(std::ifstream & input, int * a, int b);
  struct counterclockWiseMatrixCounter
  {
    counterclockWiseMatrixCounter();
    void operator()(int *, int, int);
    int n;
    int cnt;
    int cntcolumns;
    int circle;
    int index;
  };
}
#endif

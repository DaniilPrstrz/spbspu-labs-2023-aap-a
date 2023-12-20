#include "CreateMatrix.hpp"

std::istream  &vyzhanov::createMatrix(size_t rows, size_t cols, int matrix[], std::istream &inputFile)
{
  for (size_t i = 0; i < rows * cols; i++)
  {
    if (!(inputFile >> matrix[i]))
    {
      return inputFile;
    }
  }
  return inputFile;
}
// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
#include <ctime>
#include <chrono>
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  TDynamicMatrix<int> a(10), b(10), c(10), e(10);
  a[0][0] = 1;
  b[1][1] = 1;
  cout << "Тестирование класс работы с матрицами"
    << endl;
  for (int i = 0; i < 10; i++) {
      for (int j = i; j < 10; j++)
      {
          a[i][j] = i * 11 + j;
          b[i][j] = (i * 17 + j) * 137;
      }
  }
  std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
  c = a + b;
  //d = a - b;
  std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

  std::chrono::high_resolution_clock::time_point start_time1 = std::chrono::high_resolution_clock::now();
  e = a * b;
  std::chrono::high_resolution_clock::time_point end_time1 = std::chrono::high_resolution_clock::now();
  auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end_time1 - start_time1).count();

  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl;
  std::cout << "Время выполнения: " << duration << " микросекунд" << std::endl;
  //cout << "Matrix c = a - b" << endl << d << endl;
  cout << "Matrix c = a * b" << endl;
  std::cout << "Время выполнения: " << duration1 << " микросекунд" << std::endl;
 
  //cout << d;
  


}
//---------------------------------------------------------------------------

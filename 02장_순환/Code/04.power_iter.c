/**
P. 50 (2.4) 
거듭제곱 반복 코드
**/

#include <stdio.h>

double power(double x, int n) {
  double result = 1.0;
  for(int i = 0; i < n; i++) result *= x;
  
  return result;
}

int main() {
  printf("2^3 = %.0lf", power(2, 3));
}

/**
실행결과
2^3 = 8
**/

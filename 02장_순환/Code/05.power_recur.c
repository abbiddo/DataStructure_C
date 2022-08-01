/**
P. 52 (2.5) 
거듭제곱 순환 코드
**/

#include <stdio.h>

double power(double x, int n) {
  if (n == 0) return 1;
  else if ((n % 2) == 0) return power(x * x, n / 2);
  else return x * power(x * x, (n - 1) / 2);
}

int main() {
  printf("2^3 = %.0lf", power(2, 3));
}

/**
실행결과
2^3 = 8
**/

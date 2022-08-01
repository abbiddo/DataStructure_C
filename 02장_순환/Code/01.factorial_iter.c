/**
P. 41 (2.1) 
팩토리얼 순환 코드
**/

#include <stdio.h>

int factorial(int n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  printf("3! = %d", factorial(3));
}

/**
실행결과
3! = 6
**/

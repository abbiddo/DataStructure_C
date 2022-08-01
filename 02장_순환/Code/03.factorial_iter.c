/**
P. 48 (2.3) 
팩토리얼 반복 코드
**/

#include <stdio.h>

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) result *= i;
  
  return result;
}

int main() {
  printf("3! = %d", factorial(3));
}

/**
실행결과
3! = 6
**/

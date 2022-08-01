/**
P. 54 (2.6) 
피보나치 순환 코드
**/

#include <stdio.h>

int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  printf("3번째 수 : %d", fib(3));
}

/**
실행결과
3번째 수 : 2
**/

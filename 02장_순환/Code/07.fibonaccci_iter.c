/**
P. 56 (2.7) 
피보나치 반복 코드
**/

#include <stdio.h>

int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  
  int pp = 0, p = 1, result = 0;
  
  for (int i = 2; i <= n; i++) {
    result = p + pp;
    pp = p;
    p = result;
  }
  
  return result;
}

int main() {
  printf("3번째 수 : %d", fib(3));
}

/**
실행결과
3번째 수 : 2
**/

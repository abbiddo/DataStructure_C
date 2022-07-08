/**
P. 23 (1.2) 
프로그램 시간 측정 코드 
**/

#include <stdio.h>
#include <time.h>

int main() {
  clock_t start, stop;
  double duration;
  start = clock();
  
  for (int i = 0; i < 1000000; i++) ;
  
  stop = clock();
  duration = (double)(stop - start) / CLOCKS_PER_SEC;
  
  printf("수행시간 : %lf초", duration);
}

/**
int main() {
  time_t start, stop;
  double duration;
  start = time(NULL);
  
  for (int i = 0; i < 1000000; i++) ;
  
  stop = time(NULL);
  duration = (double) difftime(stop, start);
  
  printf("수행시간 : %lf초", duration);
}
**/
// 해당 주석 코드로도 시간을 측정할 수 있으나 단위가 sec로 정밀도가 떨어져 위의 코드를 선호한다.

/**
실행결과
수행시간 : 0.001928초
**/

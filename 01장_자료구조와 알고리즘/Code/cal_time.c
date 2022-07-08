/**
P. 23 (1.2) 
프로그램 시간 측정 코드 
**/

#include <stdio.h>
#include <time.h>

int main(){
  clock_t start, stop;
  double duration;
  start = clock();
  
  for (int i = 0; i < 1000000; i++) ;
  stop = clock();
  duration = (double)(stop - start) / CLOCKS_PER_SEC;
  
  printf("수행시간 : %lf초", duration);
}

/**
실행결과
수행시간 : 0.001928초
**/

/**
P. 61 (2.8) 
하노이탑 순환 코드
**/

#include <stdio.h>

void hanoi(int n, char from, char tmp, char to) {
  if (n == 1) printf("원판 1을 %c에서 %c(으)로 옮긴다.\n", from, to);
  else {
    hanoi(n - 1, from, to, tmp);
    printf("원판 %d을 %c에서 %c(으)로 옮긴다.\n", n, from, to);
    hanoi(n - 1, tmp, from, to);
  }
}

int main() {
  hanoi(3, 'A', 'B', 'C');
}

/**
실행결과
원판 1을 A에서 C(으)로 옮긴다.
원판 2을 A에서 B(으)로 옮긴다.
원판 1을 C에서 B(으)로 옮긴다.
원판 3을 A에서 C(으)로 옮긴다.
원판 1을 B에서 A(으)로 옮긴다.
원판 2을 B에서 C(으)로 옮긴다.
원판 1을 A에서 C(으)로 옮긴다.
**/

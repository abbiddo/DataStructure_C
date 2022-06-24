1. 2개의 정수를 서로 교환하는 알고리즘을 의사 콬드로 작성해보자.
```
change(a, b):
  tmp <- a
  a <- b
  b <- tmep
```

2. 사용자로부터 받은 2개의 정수 중에서 더 큰 수를 찾는 알고리즘을 의사코드로 작성해보자.
```
greater(a, b):
  if a > b 
    then return a
  else return b
```

3. 1부터 n까지의 합을 계산하는 알고리즘을 의사 코드로 작성해보자.
```
get_sum(n):
  sum <- 0
  for i <- 1 to n do
    sum <- sum + i
  return sum
```

4. Set(집합) 추상 자료형을 정의하라. 다음과 같은 연산자들을 포함시켜라.<br>
Create, Insert, Remove, Is_In, Union, Intersection, Difference
```
객체 : 서로 구분되는 값들의 순서 없는 무리
함수 : 
Set Create()             ::= Set S
Insert(S, x)             ::= 집합 S에 원소 x 삽입
Remove(S, x)             ::= 집합 S에서 원소 x 제거
Boolean Is_In(S, x)      ::= 집합 S에 원소 x가 포함되어 있는지 확인
Set Union(S1, S2)        ::= 집합 S1과 S2의 모든 원소를 하나의 집합으로 생성해 반환
Set Intersection(S1, S2) ::= 집합 S1과 S2의 공통 원소를 하나의 집합으로 생성해 반환
Set Difference(S1, S2)   ::= 집합 S1의 원소들 중 집합 S2의 원소와 공통되지 않은 원소들을 하나의 집합으로 생성해 반환
```

5.Boolean 추상 자료형을 정의하고 다음과 같은 연산자들을 포함시켜라.
And, Or, Not, Xor
```
Boolean And(x, y) ::= if (x && y) return true
                      else return false
Boolean Or(x, y)  ::= if (x || y) return true
                     else return false
Boolean Not(x)    ::= if (x) return false
                   else return true
Boolean Xor(x, y) ::= if ((x && !y) || (!x && y)) return true
                      return false
```

6. 다음과 같은 코드의 시간 복잡도는? 여기서 n이 프로그램의 입력이라고 가정하자.
```
for(i = 1; i < n; i *= 2)
  printf("Hello");
```
```
n = 2^t 라고 가정하면, 반복문은 t번 반복된다.
t=log2n이므로 이 코드의 반복문은 log2n번 실행되고, 시간 복잡도는 O(logn)이다.
```

7. 다음과 같은 코드의 시간 복잡도는? 여기서 n이 프로그램의 입력이라고 가정하자.
```
for(i = 0; i < n; i++)
  for(j = 1; j < n; j *= 2)
    printf("Hello");
```
```
외부 반복문은 n번, 내부 반복문은 log2n번 반복된다.
따라서 시간 복잡도는 O(nlogn)이다.
```

8. 시간 복잡도 함수 n^2 + 10n + 8을 빅오 표기법으로 나타내면? **(O(n^2))**

9. 시간 복잡도 함수가 7n + 10이라면 이것이 나타내는 것은 무엇인가? **(①연산의 횟수)**

10. O(n^2)의 시간 복잡도를 가지는 알고리즘에서 입력의 개수가 2배로 되었다면 실행시간은 어떤 추세로 증가하는가? **(③4배)**

11. f(n)에 대하여 엄격한 상황을 제공하는 표기법은 무엇인가? **(②빅오)**

12. 빅오 표기법들을 수행시간이 적게 걸리는 것부터 나열하라.<br>
**O(1) < O(logn) < O(n) < O(nlogn) < O(n^2) < O(2^n) < O(n!)**

13. 두 함수 30n + 4와 n^2를 여러 가지 n값으로 비교하라. 언제 30n + 4가 n^2보다 작은 값을 갖는지를 구하라.
```
        30n + 4     n^2
n = 10    304       100
n = 20    604       400
n = 30    904       900

n > 30 일 때 30n + 4가 n^2 보다 작은 값을 갖는다.
```

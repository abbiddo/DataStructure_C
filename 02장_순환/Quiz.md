<details>
    <summary>p.50</summary>
  
1. 다음과 같은 함수를 sub(10)으로 호출하는 경우에 어떤 값이 반환되는가? **(22)**
```
int sub(int n) {
  if (n < 0) return 0;
  return n + sub(n - 3);
}
```
```
fib(10)
10 + fib(7)
10 + 7 + fib(4)
10 + 7 + 4 + fib(1)
10 + 7 + 4 + 1 + fib(-2)
10 + 7 + 4 + 1 + 0
10 + 7 + 4 + 1
10 + 7 + 5
10 + 12
22
```

2. 위의 함수를 반복기법을 이용하여 반복 함수로 다시 작성하시오.
```
int sum = 0;
for (int i = 10; i >= 0; i -= 3)
  sum += i;
```
  
</details>
  
<details>
    <summary>p.53</summary>
  
1. power(2,6)과 같이 호출하였을 경우에 호출 체인을 그리시오.
```
power(2,6)
power(4,3)
4 * power(16,1)
4 * 16 * power(256,0)
4 * 16 * 1
4 * 16
64
```

2. 거듭 제곱값을 계산하는 함수를 다음의 순환적인 정의를 이용하여 작성하면 실행 시간이 줄어드는가? **Yes**
```
x^n = 1          (if n = 0)
      x*x^(n-1)  (if n > 0)
```
```
순환 코드와 반복 코드의 차이
```
순환 : https://github.com/abbiddo/DataStructure_C/blob/main/02%EC%9E%A5_%EC%88%9C%ED%99%98/Code/05.power_recur.c <br>
반복 : https://github.com/abbiddo/DataStructure_C/blob/main/02%EC%9E%A5_%EC%88%9C%ED%99%98/Code/04.power_iter.c
  
</details>

<details>
    <summary>p.56</summary>
  
```
int fib(int n){
  if (n == 0) return 0;
  if (n == 1) return 1;
  return (fib(n - 1) + fib(n - 2));
}
```
1. fib(5)이 호출되었을 경우에 fib(2)는 몇 번이나 중복 계산되는가? **(3)**
```
                    5
            4               3
        3       2       2       1
      2   1   1   0   1   0
    1   0
```
2. 반복적인 피보나치 수열에서 계산 함수의 시간 복잡도는? **(O(n))**
3. 순환적인 피보나치 수열에서 계산 함수의 대략적인 시간 복잡도는? **(O(2^n))**
  
</details>
  
<details>
    <summary>p.62</summary>
  
1. 순환을 사용하는 방법에 대한 설명 중 잘못된 것은? **②**<br>
① 순환적으로 정의된 문제에 적합하다. <br>
② 반복을 이용하는 것보다 효율적이다. **반례) 피보나치 수열** <br>
③ 간접적으로 시스템 스택이 사용된다. <br>
④ 순환이 될 때마다 문제의 크기는 작아진다. <br>
  
</details>

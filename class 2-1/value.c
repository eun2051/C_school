#include <stdio.h>

int plus(int x, int y)
{
  int sum;
  sum = x + y;
  printf("x+y sum is %d\n", sum);
  return sum;   //변수만으로 이루어진 함수
}

int st1(void) 
{
  int x;
  x = plus(3, 6); // 변수를 지정

  printf("sum is %d\n", x);
  return 0;
}
#include <stdio.h>

int me(void) 
{
  int x = 20;   
  int y = 10;   
  int sum, min, mul, nng;

  sum = x + y;
  min = x - y;
  mul = x * y;
  nng = x / y;
  
  printf("두 수의 합: %d\n", sum);
  printf("두 수의 차: %d\n", min);
  printf("두 수의 곱: %d\n", mul);
  printf("두 수의 몫: %d\n", nng);

  return 0;
}


int tchr()
{
  int x = 20;
  int y = 10;
  int sm, minus, gob, nanugi;

  sm = x + y;
  minus = x - y;
  gob = x * y;
  nanugi = x / y;

  printf("%d + %d = %d\n", x, y, sm);
  printf("%d - %d = %d\n", x, y, minus);
  printf("%d * %d = %d\n", x, y, gob);
  printf("%d / %d = %d\n", x, y, nanugi);

  return 0;
}
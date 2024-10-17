// 변수와 입출력
#include <stdio.h>

int cls2(void) {
  int x;   // 첫 번째 정수를 저장할 변수
  int y;   // 두 번째 정수를 저장할 변수
  int sum; // 2개의 정수의 합을 저장할 변수 & 자료형 선언

  x = 100; // 변수에 100 저장
  y = 200; // 변수에 200 저장

  sum = x + y; // 변수 2개를 더하여 sum에 저장
  printf("두 수의 합 = %d\n", sum);

  return 0; // 0을 외부로 반환
}
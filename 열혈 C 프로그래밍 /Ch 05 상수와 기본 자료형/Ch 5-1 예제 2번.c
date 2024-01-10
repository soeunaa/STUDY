#include <stdio.h>

int main(void)
{
  char num1 = 1, num2 = 2, result1 = 0;
  short num3 = 300, num4 = 400, result2 = 0;

  printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
  printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));
  printf("size of char add: %d \n", sizeof(num1+num2));
  printf("size of short add: %d \n", sizeof(num3+num4));

  result1 = num1 + num2;
  result2 = num3 + num4;
  // num1과 num2의 합, num3과 num4의 합 계산
  printf("size of result1 & result2 : %d, %d \n", sizeof(result1), sizeof(result2));
  // num1+num2의 결과로 반환되는 값과 num3+num4의 결과로 반환되는 값을 상대로 sizeof 연산 진행
  // → num1+num2의 결과값과 num3+num4의 결과값의 크기를 바이트 단위로 변환
  // sizeof 연산의 반환 값을 대상으로 printf 함수 호출
  return 0;
}

/*
문제 2. 프로그램 사용자로부터 두 개의 실수를 입력 받아서 double형 변수에 저장하자.
       그리고 두 수의 사칙연산 결과를 출력해보자.
*/


#include <stdio.h>

int main(void)
{
  double num1, num2;
  printf("두 개의 실수를 입력하세요: ");
  scanf("%f %f", &num1, &num2);

  printf("두 수의 덧셈: %d \n", num1 + num2);
  printf("두 수의 뺄셈: %d \n", num1 - num2);
  printf("두 수의 곱셈: %d \n", num1 * num2);
  printf("두 수의 나눗셈: %d \n", num1 / num2);
  return 0;
}


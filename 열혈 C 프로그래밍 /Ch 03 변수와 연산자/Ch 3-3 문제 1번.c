/*
문제 1. 프로그램 사용자로부터 두 개의 정수를 입력받아
       두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자
*/


#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("두 개의 정수 입력: ");
  scanf("%d %d", &num1, &num2);

  printf("두 수의 차: %d \n", num1-num2);
  printf("두 수의 곱: %d \n", num1*num2);
  return 0;
}


/* 답안

#include <stdio.h>

int main(void)
{
  int num1, num2;
  
  printf("두 개의 정수를 입력하세요: ");
  scanf("%d %d", &num1, &num2);

  printf("%d-%d=%d \n", num1, num2, num1-num2);
  printf("%dx%d=%d \n", num1, num2, num1*num2);
  return 0;
}
*/

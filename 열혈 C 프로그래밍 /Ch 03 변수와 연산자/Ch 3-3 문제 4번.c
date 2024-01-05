/*
문제 4. 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자.
       예를 들어 7과 2가 입력되었다면 몫으로 3, 나머지로 1이 출력되어야 한다.
*/


#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("두 정수를 입력하세요: ");
  scanf("%d %d", &num1, &num2);

  printf("%d를 %d로 나눈 몫: %d \n", num1, num2, num1/num2);
  printf("%d를 %d로 나눈 나머지: %d \n", num1, num2, num1%num2);
  return 0;
}

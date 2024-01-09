/*
문제 2. 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
       3 x 8 ÷ 4
       단, * 연산자와 / 연산자를 사용하지 않고 대응하는 연산을 거쳐 해결해야 한다.
*/


#include <stdio.h>

int main(void)
{
  int num = 3;

  num << 3;
  num >> 2;

  printf("연산 결과: %d \n", num);
  return 0;
}

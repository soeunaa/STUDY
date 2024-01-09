#include <stdio.h>

int main(void)
{
  int num1 = -16;    // 11111111 11111111 11111111 11110000
  printf("2칸 오른쪽으로 이동한 결과: %d \n", num1 >> 2);
  printf("3칸 오른쪽으로 이동한 결과: %d \n", num1 >> 3);
  return 0;
}

/*
Ch 02 프로그램의 기본구성
2-1 Hello world! 들여다보기 예제 Hello.c
*/


#include <stdio.h>
// 헤더파일 선언하기

int main(void)
// 출력형태 함수이름(입력형태)
{
  printf("Hello world! \n");
  // printf 함수 호출과 동시에 인자로 문자열 전달
  return 0;
  // main 함수를 호출한 영역으로 0 전달, 프로그램 종료
}

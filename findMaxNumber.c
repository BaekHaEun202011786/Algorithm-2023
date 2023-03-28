/*
프로그램 내용: 최대 숫자 찾기(findMaxNumber)
개발자: 백하은
학번: 202011786
*/

#define findMaxNumber
#include <stdio.h>
int main()
{
	int Array[9]; // 배열 선언
	int i; // 반복변수
	int Max = 0; // 최댓값을 0으로 초기화
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d", &Array[i]);
		if (Max < Array[i])
		{
			Max = Array[i];
		}
	}

	printf("최댓값은 %d입니다.\n", Max); // 최댓값 출력

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "euclid.h"
#include <time.h>
#include <iostream>

int main()
{
	long long ret[1000], ret1[1000]; //재귀, 반복함수 결과 출력받아 저장

	int i;  //반복문 변수

	long long a[1000];
	long long b[1000];
	//변수를 담을 배열

	clock_t start, end, start2, end2; //시간 측정 함수
	double result, result2; //시간 측정 결과값 설정


	srand(time(NULL)); //랜덤함수 초기화

	for (i = 0; i < 1000; i++) //40억 이상의 랜덤 실수 입력
	{
		a[i] = (long long)rand() << 32 | rand() + 4000000000;
		b[i] = (long long)rand() << 32 | rand() + 4000000000;
	}

	start = clock(); //재귀함수 시간 측정 시작

	for (i = 0; i < 1000; i++) //재귀함수 호출
	{
		ret[i] = euclidRecursive(a[i], b[i]);
	}

	end = clock(); //재귀함수 시간 측정 종료
	result = (double)(end - start); //재귀함수 실행 시간 계산

	start2 = clock(); //반복함수 시간 측정 시작

	for (i = 0; i < 1000; i++) //반복함수 호출
	{
		ret1[i] = euclidRepeatitive(a[i], b[i]);
	}

	end2 = clock(); //반복함수 시간 측정 종료
	result2 = (double)(end2 - start2); //반복함수 실행 시간 계산

	for (i = 0; i < 1000; i++) //n번째 숫자쌍의 재귀, 반복함수 결과 출력 및 재귀, 반복함수 결과값 비교 결과 출력
	{
		printf("[%d번째] : %lld %lld\n", i + 1, a[i], b[i]);

		printf("재귀함수 결과:");
		printf(" %lld, ", ret[i]);

		printf("반복함수 결과:");
		printf("%lld, ", ret1[i]);

		printf("함수 결과값 비교: %d\n", (ret[i] == ret1[i]));
	}

	std::cout << "재귀함수 시간 result: " << ((result) / CLOCKS_PER_SEC) << " seconds, ";
	printf("(%f ms, %f ~ %f)\n", result, (double)end, (double)start);

	std::cout << "반복함수 시간 result: " << ((result2) / CLOCKS_PER_SEC) << " seconds, ";
	printf("(%f ms, %f ~ %f)\n", result2, (double)end2, (double)start2);

	// 재귀, 반복함수의 소요 시간 출력

	return 0;
}
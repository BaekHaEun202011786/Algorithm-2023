/*
프로그램 내용: 임의의 숫자 찾기(searchNumber)
학번: 202011786
개발자: 백하은
*/

#define searchNumber
#include <stdio.h>
int main()
{
    int Array[] = { 5, 3, 7, 8, 1, 6, 9, 10, 2, 4 }; // 배열 선언
    int searchNum;

    printf("찾으려는 값을 입력: "); // 목표 숫자 입력
    scanf_s("%d", &searchNum);

    for (int i = 0; i < 10; i++) { // 배열 순회, 검색
        if (Array[i] == searchNum) {
            printf("탐색 성공!\n");
            printf("찾는 숫자는 %d번째에 있습니다.", i + 1); // 인덱스값에 1을 더해 출력
            
            return 0;
        }
    }
}

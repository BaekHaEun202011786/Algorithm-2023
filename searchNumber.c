/*
���α׷� ����: ������ ���� ã��(searchNumber)
�й�: 202011786
������: ������
*/

#define searchNumber
#include <stdio.h>
int main()
{
    int Array[] = { 5, 3, 7, 8, 1, 6, 9, 10, 2, 4 }; // �迭 ����
    int searchNum;

    printf("ã������ ���� �Է�: "); // ��ǥ ���� �Է�
    scanf_s("%d", &searchNum);

    for (int i = 0; i < 10; i++) { // �迭 ��ȸ, �˻�
        if (Array[i] == searchNum) {
            printf("Ž�� ����!\n");
            printf("ã�� ���ڴ� %d��°�� �ֽ��ϴ�.", i + 1); // �ε������� 1�� ���� ���
            
            return 0;
        }
    }
}

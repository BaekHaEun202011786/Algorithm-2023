/*
���α׷� ����: �ִ� ���� ã��(findMaxNumber)
������: ������
�й�: 202011786
*/

#define findMaxNumber
#include <stdio.h>
int main()
{
	int Array[9]; // �迭 ����
	int i; // �ݺ�����
	int Max = 0; // �ִ��� 0���� �ʱ�ȭ
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d", &Array[i]);
		if (Max < Array[i])
		{
			Max = Array[i];
		}
	}

	printf("�ִ��� %d�Դϴ�.\n", Max); // �ִ� ���

	return 0;
}

#include <stdio.h>

int main_array(void)
{
	//�迭
	/*
	int subway_1 = 30; //1ȣ�� 30��
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ������ %d���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ������ %d���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ������ %d���� Ÿ�� �ֽ��ϴ�.\n", subway_3);
	*/

	//���� ���� ���� ���ÿ� ����
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ������ %d���� Ÿ�� �ֽ��ϴ�.\n", i+1, subway_array[i]);
	}
	*/

	//�� ���� ���
	//�׻� �ʱ�ȭ ����ߵ�.
	/*
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //�� �̴ϼȶ���¡
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//�迭 ũ��� �׻� ���
	//int size = 10;
	//int arr[size]; ����

	/*
	int arr[10] = {1,2}; //3��° �� ���ʹ� �ڵ����� 0���� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1,2 }; // arr[2]
	//�Ǽ�
	/*
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	// ���� vs ���ڿ�
	/*
	char c = 'A'; // ����
	printf("%c\n", c);
	*/

	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL���� '\0' �ʿ�
	/*
	char str[7] = "coding"; // [c][o][d][i][n][g]
	printf("%s\n", str);
	*/

	//char str[] = "coding";
	////printf("%s\n", str);
	////printf("%d\n", sizeof(str)); // coding + NULL = 7

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	/*
	char kor[] = "�����ڵ�"; // 2byte x 4 + NULL = 9byte
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//���� = 1���� 1byte
	//�ѱ� = 1���� 2byte
	//char = 1byte
	*/

	/*
	char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	printf("%s\n", c_array);
	*/

	return 0;

}
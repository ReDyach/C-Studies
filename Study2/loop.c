#include <stdio.h>

int main(void)
{


	/*
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n");
	printf("Hello, world!\n"); �ʹ� ��ȿ����!
	*/


	// ++ �Ի�

	/*int a = 10;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	*/

	/*
	int b = 20;
	// b++ = b + 1
	printf("b �� %d\n", ++b); // ���� �� +1
	printf("b �� %d\n", b++); // ���� �� +1
	printf("b �� %d\n", b);
	*/

	/*
	int i = 1;
	printf("Hello, world! %d\n", i++); // 1
	printf("Hello, world! %d\n", i++); // 2
	printf("Hello, world! %d\n", i++); // 3 ...
	printf("Hello, world! %d\n", i++);
	printf("Hello, world! %d\n", i++);
	printf("Hello, world! %d\n", i++);
	printf("Hello, world! %d\n", i++);
	printf("Hello, world! %d\n", i++); // 8
	*/


	//�ݺ���
	//for, while, do while

	//for
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello, world! %d\n", i); 
		//i�� 1���� 10���� 1�� �����ϸ鼭 �ݺ�
	}
	*/


	//while (����) { }
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("Hello, world! %d\n", i++);
		//i++;
	}
	*/


	//do { } while (����)
	/*
	int i = 1;
	do {
		printf("Hello, world! %d\n", i++);
	} while (i <= 10);
	*/


	//2�� �ݺ���
	/*
	for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("	�� ��° �ݺ��� : %d\n", j);
		}
	} // i �ѹ� ������ �� ���� j  5�� �ݺ�, �� j 15��
	*/


	//������ ���α׷�
	/*
	for (int i = 2; i < 10; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++) 
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/


//�Ƕ�̵� �ױ� ������Ʈ
/*
    *
   ***
  *****
 *******
********* 
*/
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) // ������ŭ �ݺ�
	{
		for (int j = i; j < floor - 1; j++) // ���� ����
		{
			printf(" ");
		}

		for (int k = 0; k < i * 2 + 1 ; k++) // �� ����
		{
			printf("*");
		}
		printf("\n"); // �ٹٲ�
	}


	return 0;
}
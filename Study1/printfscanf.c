#include<stdio.h>

int main(void) {

	// ������ ������ ���� ����
	/*
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);
	*/

	// �Ǽ��� ������ ���� ����
	/*
	float f = 46.5f;
	printf("%f\n", f); // 46.500000

	printf("%.2f\n", f); // 46.50

	double d = 4.428;
	printf("%lf\n", d); // 4.428000

	printf("%.2lf\n", d); // 4.43���� �ݿø�
	*/

	// ���
	/*
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);
	YEAR = 2001; 
	*/
	

	// printf ����
	// ����
	/*
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add); //3 + 7 = 10 ���
	printf("%d + %d = %d\n", 3, 7, 3 + 7); // 3 + 7 = 10 ���
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf ����
	//Ű���� �Է� �޾Ƽ� ����
	/*
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input); //input�� �� ���� �Է�
	printf("�Է°��� %d", input);
	*/

	/* ������ �Է�
	int one, two, three;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° ��: %d\n", one);
	printf("�� ��° ��: %d\n", two);
	printf("�� ��° ��: %d\n", three);
	*/

	//����(�ѱ���), ���ڿ�(��������)
	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*
	char str[256]; //���ڿ��� ������ ���� �迭 ���
	
	//���ڿ��� & �ʿ����, ũ�� ��� �ʿ�
	
	scanf_s("%s", str, sizeof(str)); 
	printf("%s", str);
	*/

	//���� ������Ʈ
	//�������� �������� ���� �Լ�(���� �ۼ�)
	//�̸� ���� ������ Ű ���˸� �ʿ�

	//���� ����
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̴� ����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ���̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ���̿���? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�        : %s\n", name);
	printf("����        : %d\n", age);
	printf("������      : %.2f\n", weight);
	printf("Ű          : %.2lf\n", height);
	printf("���˸�      : %s\n", what);

	return 0;
}
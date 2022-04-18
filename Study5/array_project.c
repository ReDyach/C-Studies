#include <stdio.h>
#include <time.h>

int main(void)
{
	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

	srand(time(NULL));
	int answer; //����� �Է°�
	int treatment = rand() % 4; //���� 0~3 ����

	int cntShowBottle = 0; // ���� �� �߸��� ���� ����
	int prevCntSHowBottle = 0; // �տ��� ������ ���� ����
	//���� �����ִ� �� ���� �ٸ��� �ؼ� ����� ���

	//3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4���� ��
		do {
			cntShowBottle = rand() % 2 + 2; // �̹��� ������ �� ���� 2~3
		} while (cntShowBottle == prevCntSHowBottle); // ���� ������ �޶��� ������ ����
		prevCntSHowBottle = cntShowBottle;

		int isIncluded = 0; // ������ �� �߿� �߸����� �������� ���� ǥ��
		printf(" > %d ��° �õ� : ", i);

		//������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; // 4���߿� ���� �� �� ����

			// ���� ���õ��� ���� ���̸�, ���� ó��
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment) //������ = �߸���
				{
					isIncluded = 1;
				}
			}
			else // �̹� ���õ� ���̸� �ߺ��̹Ƿ� �ٽ� ����
			{
				j--; // �̹� j�� ++�� ������
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d ", k + 1);

		}
		printf("������ �Ӹ��� �ٸ��ϴ�....\n");

		if (isIncluded == 1)
		{
			printf("\n  >> ���� ! �Ӹ��� �����!\n");
		}
		else
		{
			printf("\n  >> ���� ! �Ӹ��� ���� �ʾҾ��!\n");
		}

		printf("\n ... ��� �Ϸ��� �ƹ� Ű�� ��������\n\n");
		getchar();
	}

	printf("\n\n �߸����� �� �� �ϱ��? ");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n >> �����Դϴ�!\n");
	}
	else
	{
		printf("\n >> Ʋ�Ƚ��ϴ�! ������ %d�� �Դϴ�.", treatment + 1);
	}


	return 0;


}
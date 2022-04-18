#include <stdio.h>
#include <time.h>

int main(void)
{
	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	srand(time(NULL));
	int answer; //사용자 입력값
	int treatment = rand() % 4; //정답 0~3 사이

	int cntShowBottle = 0; // 보여 줄 발모제 병의 갯수
	int prevCntSHowBottle = 0; // 앞에서 보여준 병의 갯수
	//서로 보여주는 병 갯수 다르게 해서 정답률 향상

	//3번의 기회
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4개의 병
		do {
			cntShowBottle = rand() % 2 + 2; // 이번에 보여줄 병 갯수 2~3
		} while (cntShowBottle == prevCntSHowBottle); // 앞의 갯수와 달라질 때까지 진행
		prevCntSHowBottle = cntShowBottle;

		int isIncluded = 0; // 보여줄 병 중에 발모제가 포함인지 여부 표시
		printf(" > %d 번째 시도 : ", i);

		//보여줄 병 종류 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; // 4개중에 보여 줄 병 선택

			// 아직 선택되지 않은 병이면, 선택 처리
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment) //랜덤병 = 발모제
				{
					isIncluded = 1;
				}
			}
			else // 이미 선택된 병이면 중복이므로 다시 선택
			{
				j--; // 이미 j가 ++된 상태임
			}
		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d ", k + 1);

		}
		printf("물약을 머리에 바릅니다....\n");

		if (isIncluded == 1)
		{
			printf("\n  >> 성공 ! 머리가 났어요!\n");
		}
		else
		{
			printf("\n  >> 실패 ! 머리가 나지 않았어요!\n");
		}

		printf("\n ... 계속 하려면 아무 키나 누르세요\n\n");
		getchar();
	}

	printf("\n\n 발모제는 몇 번 일까요? ");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n >> 정답입니다!\n");
	}
	else
	{
		printf("\n >> 틀렸습니다! 정답은 %d번 입니다.", treatment + 1);
	}


	return 0;


}
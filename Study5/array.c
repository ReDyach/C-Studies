#include <stdio.h>

int main_array(void)
{
	//배열
	/*
	int subway_1 = 30; //1호차 30명
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에는 %d명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에는 %d명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에는 %d명이 타고 있습니다.\n", subway_3);
	*/

	//여러 개의 변수 동시에 생성
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에는 %d명이 타고 있습니다.\n", i+1, subway_array[i]);
	}
	*/

	//값 설정 방법
	//항상 초기화 해줘야됨.
	/*
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //값 이니셜라이징
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//배열 크기는 항상 상수
	//int size = 10;
	//int arr[size]; 오류

	/*
	int arr[10] = {1,2}; //3번째 값 부터는 자동으로 0으로 초기화
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1,2 }; // arr[2]
	//실수
	/*
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	// 문자 vs 문자열
	/*
	char c = 'A'; // 문자
	printf("%c\n", c);
	*/

	// 문자열 끝에는 '끝'을 의미하는 NULL문자 '\0' 필요
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
	char kor[] = "준혁코딩"; // 2byte x 4 + NULL = 9byte
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//영어 = 1글자 1byte
	//한글 = 1글자 2byte
	//char = 1byte
	*/

	/*
	char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	printf("%s\n", c_array);
	*/

	return 0;

}
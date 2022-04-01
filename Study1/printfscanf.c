#include<stdio.h>

int main(void) {

	// 정수형 변수에 대한 예제
	/*
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);
	*/

	// 실수형 변수에 대한 예제
	/*
	float f = 46.5f;
	printf("%f\n", f); // 46.500000

	printf("%.2f\n", f); // 46.50

	double d = 4.428;
	printf("%lf\n", d); // 4.428000

	printf("%.2lf\n", d); // 4.43으로 반올림
	*/

	// 상수
	/*
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	YEAR = 2001; 
	*/
	

	// printf 배우기
	// 연산
	/*
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add); //3 + 7 = 10 출력
	printf("%d + %d = %d\n", 3, 7, 3 + 7); // 3 + 7 = 10 출력
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf 배우기
	//키보드 입력 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //input에 들어갈 수를 입력
	printf("입력값은 %d", input);
	*/

	/* 여러개 입력
	int one, two, three;
	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값: %d\n", one);
	printf("두 번째 값: %d\n", two);
	printf("세 번째 값: %d\n", three);
	*/

	//문자(한글자), 문자열(여러글자)
	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*
	char str[256]; //문자열을 저장할 때는 배열 사용
	
	//문자열은 & 필요없음, 크기 명시 필요
	
	scanf_s("%s", str, sizeof(str)); 
	printf("%s", str);
	*/

	//실제 프로젝트
	//경찰관이 범죄자의 정보 입수(조서 작성)
	//이름 나이 몸무게 키 범죄명 필요

	//정보 수집
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이는 몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇이에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름        : %s\n", name);
	printf("나이        : %d\n", age);
	printf("몸무게      : %.2f\n", weight);
	printf("키          : %.2lf\n", height);
	printf("범죄명      : %s\n", what);

	return 0;
}
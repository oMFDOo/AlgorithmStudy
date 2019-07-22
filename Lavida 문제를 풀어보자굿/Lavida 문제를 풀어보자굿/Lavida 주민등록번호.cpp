
SPA : 웹에서 돌아가는 친구들
일렉트론
node.js

 graph 자료구조 (adjacency-matrix, adjacency list, etc.)

#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int Fyear, Year, Month, Day;
int LeapYear, Remainder, MDCheck, FYCheck, Result;

// 성별로 년도 측정
void FYear_ (char Num[]) {
	int check = Num[6] - '0';
	if (check == 1 || check == 2) {
		FYCheck = 1;
		Fyear = 1900;
	}
	else if (check == 3 || check == 4) {
		FYCheck = 1;
		Fyear = 2000;
	}
	else {
		FYCheck = 0;
	}
	// printf("Fyear : %d FYCheck : %d\n", Fyear, FYCheck);
}

// 10의 자리 연도 측정
void Year_ (char Num[]) {
	// FYear + (첫 번째 문자 - '0') * 10 + (두 번째문자 - '0')
	Year = Fyear + (Num[0] - '0') * 10 + (Num[1] - '0');
	// printf("%d\n", Year);
}


// 월 측정
void Month_(char Num[]) {
	// (세 번째 문자 - '0') * 10 + (네 번째문자 - '0')
	Month = (Num[2] - '0') * 10 + (Num[3] - '0');
	// printf("%d\n", Month);
}

// 일 구하기
void Day_(char Num[]) {
	// (다섯 번째 문자 - '0') * 10 + (여섯 번째문자 - '0')
	Day = (Num[4] - '0') * 10 + (Num[5] - '0');
	// printf("%d\n", Day);
}

// 윤년의 여부
void LeapYear_ (char Num[]) {
	/*- 400의 배수
		- Yes = 1
		- No  = 0
	- 100의 배수
		- Yes = 0
		- No = 1
	- 4의 배수
		- Yes = 1
		- No = 0*/
	if (Year % 400 == 0) {
		LeapYear = 1;
	}
	else if (Year % 100  == 0) {
		LeapYear = 0;
	}
	else if (Year % 4 == 0){
		LeapYear = 1;
	}
	else {
		LeapYear = 0;
	}
	// printf("%d\n", Year);
}

// 나머지 값과 일치여부
void Remainder_ (char Num[]) {
	int sum = 0;
	for (int i = 0; i < 12; i++) {
		sum += Num[i] - '0';
	}
	sum %= 10;
	if (sum == Num[12] - '0') {
		Remainder = 1;
	}
	else {
		Remainder = 0;
	}
	// printf("%d %d\n", sum, Num[12] - '0');
}

// 윤년의 여부와 월에 따른 일의 타당성
void MDCheck_ (char Num[]) {
	/* 	
	28일 : 2
	30일 : 4, 6, 9, 11
	31일 : 1, 3, 5, 7, 8, 10, 12
	윤년 (LeapYear == 1)
	윤년X (LeapYear == 0)
	*/
	// printf("M : %d D : %d\n", Month, Day);
	if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
		if (Day > 0 && Day < 31) {
			MDCheck = 1;
		}
		else {
			MDCheck = 0;
		}
	}
	else if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
		if (Day > 0 && Day < 32) {
			MDCheck = 1;
		}
		else {
			MDCheck = 0;
		}
	}
	else if (Month == 2) {
		if (Day > 0 && Day < 29) {
			MDCheck = 1;
		}
		else if (Day == 29) {
			if (LeapYear) {
				MDCheck = 1;
			}
			else {
				MDCheck = 0;
			}
		}
		else {
			MDCheck = 0;
		}
	}
	else {
		MDCheck = 0;
	}
}

// 종합적으로 참 거짓 판독
void Result_ (int a, int b, int c) {
	//printf("MD : %d R : %d FYCheck : %d\n", a, b, c);
	if (a+b+c == 3) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		char Number[15];
		scanf("%s", Number);
		FYear_(Number);
		Year_(Number);
		Month_(Number);
		Day_(Number);
		LeapYear_(Number);
		Remainder_(Number);
		MDCheck_(Number);
		Result_(MDCheck, Remainder, FYCheck);
	}
}
/*
◆조건◆
1900년~1999년 : 7번째 숫자 ‘1’ or ‘2’
2000년~2099년 : 7번째 숫자 ‘3’, or ‘4’
1번째 자리부터 12번째 자리까지 더한 값을 ‘10’으로 나눈 나머지가 13번째 숫자
4의 배수가 되는 해는 윤년이다.
4의 배수 중 100의 배수가 되는 해는 윤년이 아니다.
100의 배수 중 400의 배수가 되는 해는 윤년이다.

◆고려할 점◆
1. 성별 표기
2. 달의 표기 (윤년, 30일, 31일)
3. (1~12)합의 나머지가 13번째 수인가

집중할 자릿수 :
(0,1) / (2,3,4,5) / (0,1,7)

◆구할 값◆
1. 연(ABCD)
	- AB
	- CD
2. 월
3. 일
4. 윤년의 여부
5. 나머지 값과 일치여부			v
6. 윤년의 여부와 월에 따른 일의 타당성	v
7. 성별 표기의 타당성			v
7. 종합적으로 참 거짓 판독

◆해결◆

Fyear, Year, Month, Day, LeapYear, Remainder, MDCheck, FYCheck, Result;



0. 성별 표기 통한 년도 (FYear)
	- (일곱 번째 문자 - '0')이 1 or 2
		- 1900
	- (일곱 번째 문자 - '0')이 3 or 4
		- 2000
	- 그 외
		- FYCheck = 0

1. 년 (Year)
	- FYear + (첫 번째 문자 - '0') * 10 + (두 번째문자 - '0')

2. 월 (Month)
	- (세 번째 문자 - '0') * 10 + (네 번째문자 - '0')

3. 일 (Day)
	- (다섯 번째 문자 - '0') * 10 + (여섯 번째문자 - '0')

4. 윤년의 여부 (LeapYear)
	- 400의 배수
		- Yes = 1
		- No  = 0
	- 100의 배수
		- Yes = 0
		- No = 1
	- 4의 배수
		- Yes = 1
		- No = 0

5. 나머지 값과 일치여부	(Remainder)		v
	- (1~12)까지 더한 뒤 / 10 이 열세번 째 값인가?
		- Yes = 1
		- No  = 0

6. 윤년의 여부와 월에 따른 일의 타당성 (MDCheck)	v
 	28일 : 2
	30일 : 4, 6, 9, 11
	31일 : 1, 3, 5, 7, 8, 10, 12
	윤년 (LeapYear == 1)
	윤년X (LeapYear == 0)

	- Month가 (4, 6, 9, 11)
		- 0 < Day < 32
			- Yes = 1
			- No  = 0
	- Month가 (1, 3, 5, 7, 8, 10, 12)
		- 0 < Day < 31
			- Yes = 1
			- No  = 0
	- Month가 (2)
		- 0 < Day < 29
			- Yes = 1
			- No  = 0
		- 29
			윤년 (LeapYear == 1)
				- MDCheck = 1
			윤년X (LeapYear == 0)
				- MDCheck = 0

		- else : MDCheck = 0
	- Month가 (else)
		MDCheck = 0
			
7. 종합적으로 참 거짓 판독 (Result)
	- MDCheck + Remainder + FYCheck == 3
		 - "YES"
	- else
		 - "NO"
*/	
	
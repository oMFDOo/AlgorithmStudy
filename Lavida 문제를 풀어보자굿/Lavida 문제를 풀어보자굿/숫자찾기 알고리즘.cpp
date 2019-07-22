#include <iostream>
using namespace std;
#define MAX 10000
#define	MAXNUM 10000	// 전처리 방식에서만 쓰여욤
/*
		안녕 난 첫 뇌피셜이야!

		그냥 다 돌면서 찾자

bool find(int a[], int Size, int Num) {
for (int i = 0; i < Size; i++) {
	if (a[i] == Num) {
		return true;
	}
}
return false;
}

*/


/*
		안녕 난 이진탐색이야!
		: 정렬 안 되어 있음 못 씀
{
	int min = 0, max = size - 1;

	{
		int mid = (min + max - 1) / 2;

		a[mid] 의 값이 입력값 보다

			- 같다 : TRUE
			- 크다 : min = mid + 1
			- 작다 : max = mid - 1


		min이 max보다 크다
			- FALSE
	}

}

bool find(int a[],int Size, int Num) {
	int min = 0, max = Size - 1;
	while (true) {
		int mid = (min + max) / 2;

		if (a[mid] == Num) {
			return true;
		}
		else if (a[mid] < Num) {
			min = mid + 1;
		}
		else if (a[mid] > Num) {
			max = mid - 1;
		}

		if (min > max) {
			return false;
		}
	}
}

*/
/*
		안녕 난 전처리 방식일 거야 아마!
		: 입력되는 정수 값이 정해져 있어야해

1. 배열 제작
- 숫자를 입력 받을 인트 배열
- 숫자 존재 여부를  기록할 불 배열

2. 불 배열 0으로 초기화(= 'false'으로 표기)

3. 참인 위치 표시
- 배열 사이즈 만큼 반복문을 돈다
	- 불 배열의 인트배열의 값 위치를 true로 전환

4. 입력 받은 숫자가 불 인덱스에 있는가
- 불[입력받은 값] 을 되돌려줌.


				◈메인에 들어가야 함◈

	아래의 값을 //여기부터//  //여기까지// 사이에 넣어줌
	그 후 //여기까지// 아래는 주석처리

	bool pre[MAXNUM] = {0};
	prepare(pre, A, size);

	int num;
	for (int i = 0; i < turn; i++) {
		cin >> num;
		if (find(pre, num)) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
	}


			◈ 함수들 ◈

void prepare(bool pre[], int arr[], int Num) {
	int i;
	for (i = 0; i < Num; i++) {
		pre[arr[i]] = true;
	}
}

bool find(bool pre[], int target) {
	return pre[target];
}
*/

int main() {
	int A[MAX], turn, size;
	cin >> size >> turn;

	// 배열 입력받음
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}

	// 여기부터 //

	// 여기까지 //

	int num;
	for (int i = 0; i < turn; i++) {
		cin >> num;
		if (find( A, size, num)) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
	}
}
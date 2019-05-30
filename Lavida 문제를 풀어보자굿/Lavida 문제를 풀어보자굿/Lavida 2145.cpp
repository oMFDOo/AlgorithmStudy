//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int tC;
//	scanf("%d", &tC);
//	while (tC--) {
//		
//		double size;
//		scanf("%lf", &size);
//		for (int y = 0; y < size; y++) {
//			int a = 0;
//			for (int x = 0; x < size; x++) {
//				if (y <= size / 2.0 && x <= y) {
//					a++;
//				}
//				/*else if()*/
//				printf("%d", a);
//			}
//			printf("\n");
//		}
//	}
//}


#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {

		int size;
		scanf("%d", &size);

		for (int y = 0; y < size; y++) {
			int A = 1;
			for (int x = 0; x < size; x++) {
				if (x >= y && x < size - y) {
					printf("%d", A + y);
				}

				else if (x <= size / 2 && x < size - y) {
					printf("%d", A+x);
				}
				else if (x < y) {
					printf("%d", A + size - y - 1);

				}
				else {
					printf("%d", A + size - x - 1);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}


#include<iostream>
#include<cstring> 
using namespace std;

int map[20][20];

int main()
{
	int t, n;

	cin >> t;

	while (t--)
	{
		cin >> n;
		int row = 0, col = -1;
		int len, cnt = 1, check_cnt = 0, check = 1;

		len = n;
		while (true)
		{
			if (check_cnt == 2)
			{
				check_cnt = 0;
				cnt++;
			}
			for (int i = 0; i < len; i++)
			{
				col += check;
				map[row][col] = cnt;
			}
			len--;
			if (len < 0)
				break;
			for (int i = 0; i < len; i++)
			{
				row += check;
				map[row][col] = cnt;
			}
			check *= -1;
			check_cnt++;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				printf("%d", map[i][j]);
			cout << "\n";
		}
		cout << "\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				map[i][j] = 0;
		}
		// memset(map, 0, sizeof(map) * sizeof(int));
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int t;
	int w;
	scanf("%d", &t);
	while (t--) {
		int l[20][20] = { 0, };
		scanf("%d", &w);
		for (int i = 0; i < w; i++) {
			for (int y = 0 + i; y < w - i; y++) {
				for (int x = 0 + i; x < w - i; x++) {
					l[y][x]++;
				}
			}
		}
		for (int y = 0; y < w; y++) {
			for (int x = 0; x < w; x++) {
				printf("%d", l[y][x]);
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
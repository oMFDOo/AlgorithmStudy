//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//struct Player {
//	char Name[16], Position[25];
//	int Age, backNumber;
//};
//
//int main() {
//	int People, sum = 0;
//	int min = 10000, max = -1, MinIndex, MaxIndex;
//	double AverageAge;
//	struct Player Huaa[16];
//
//	scanf("%d", &People);
//	for (int i = 0; i < People; i++) {
//		scanf("%s %d %s %d", Huaa[i].Name, &Huaa[i].Age, Huaa[i].Position, &Huaa[i].backNumber);
//		sum += Huaa[i].Age;
//
//		if (min >= Huaa[i].Age) {
//			min = Huaa[i].Age;
//			MinIndex = i;
//		}
//		if (max <= Huaa[i].Age) {
//			max = Huaa[i].Age;
//			MaxIndex = i;
//		}
//	}
//
//	AverageAge = sum / People;
//
//	printf("average age : %.lf \nthe oldest : %s %s %d\nthe youngest : %s %s %d\n",
//		AverageAge,
//		Huaa[MaxIndex].Name, Huaa[MaxIndex].Position, Huaa[MaxIndex].backNumber,
//		Huaa[MinIndex].Name, Huaa[MinIndex].Position, Huaa[MinIndex].backNumber);
//
//}
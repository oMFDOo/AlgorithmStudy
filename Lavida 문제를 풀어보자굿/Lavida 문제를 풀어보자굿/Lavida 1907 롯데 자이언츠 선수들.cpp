//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//struct Player {
//	char Name[16], Position[25];
//	int Age;
//};
//
//int main() {
//	int People, sum = 0;
//	int min = 55, max = 0, MinIndex, MaxIndex;
//	double AverageAge;
//	struct Player Huaa[16];
//
//	scanf("%d", &People);
//	for (int i = 0; i < People; i++) {
//		scanf("%s %d %s", Huaa[i].Name, &Huaa[i].Age, Huaa[i].Position);
//		sum += Huaa[i].Age;
//
//		if (min > Huaa[i].Age) {
//			min = Huaa[i].Age;
//			MinIndex = i;
//		}
//		if (max < Huaa[i].Age) {
//			max = Huaa[i].Age;
//			MaxIndex = i;
//		}
//	}
//
//	AverageAge = (double) sum / People ;
//
//	printf("average age : %.lf \nthe oldest : %s %s \nthe youngest : %s %s\n", AverageAge, Huaa[MaxIndex].Name, Huaa[MaxIndex].Position, Huaa[MinIndex].Name, Huaa[MinIndex].Position);
//
//}
//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996) 
//
//int main() {
//	char String[85] = { 0 }, URI_Type_String[85] = { 0 };
//	scanf("%s", String);
//
//	int Len_String, Count = 0;
//	Len_String = strlen(String);
//
//	for (int Y = 0; Y < Len_String; Y++) {
//		if (String[Y] == '%' && String[Y + 1] == '2') {
//			switch (String[Y + 2]) {
//			case '0':
//				URI_Type_String[Count] = ' ';
//				break;
//			case '1':
//				URI_Type_String[Count] = '!';
//				break;
//			case '4':
//				URI_Type_String[Count] = '$';
//				break;
//			case '5':
//				URI_Type_String[Count] = '%';
//				break;
//			case '8':
//				URI_Type_String[Count] = '(';
//				break;
//			case '9':
//				URI_Type_String[Count] = ')';
//				break;
//			case 'a':
//				URI_Type_String[Count] = '*';
//				break;
//			}
//			Y += 2;
//		}
//		else {
//			URI_Type_String[Count] = String[Y];
//		}
//		Count++;
//	}
//	printf("%s\n", URI_Type_String);
//}
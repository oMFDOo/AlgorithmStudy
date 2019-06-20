//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	while (1)
//	{
//		char findString[6], originString[129];
//		scanf("%s %s", &findString, &originString);
//		if (strcmp(findString, "NULL") == 0 && strcmp(originString, "NULL") == 0)
//		{
//			return 0;
//		}
//		char convertedString[17];
//		int i;
//		for (i = 0; i < 128; i += 8)
//		{
//			int charNum = 0;
//			int multiple = 128;
//			int index;
//			for (index = i; index < i + 8; index++)
//			{
//				if (originString[index] == '1')
//				{
//					charNum += multiple;
//				}
//
//				multiple /= 2;
//			}
//			convertedString[(index / 8) - 1] = charNum;
//
//		}
//		if (strstr(convertedString, findString))
//		{
//			printf("Found!\n");
//		}
//		else
//		{
//			printf("Not found!\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//
//		// 기본요금, 기기요금
//		double BasicRate, DeviceRate;
//
//		// 기본 제공 전화양, 기본 제공 메시지 양, 기본 제공 데이터 양  
//		double BasicCallAmount, BasicMessageAmount, BasicDataAmount;
//
//		// 초과 사용 전화 요금, 초과 사용 메시지 요금, 초과 사용 데이터 요금
//		double ExcessCallRate, ExcessMessageRate, ExcessDataRate;
//
//		// 사용한 전화 양, 사용한 메시지 양, 사용한 데이터 양
//		double UsingCall, UsingMessage, UsingData;
//
//		scanf("%lf %lf", &BasicRate, &DeviceRate);
//		scanf("%lf %lf %lf", &BasicCallAmount, &BasicMessageAmount, &BasicDataAmount);
//		scanf("%lf %lf %lf", &ExcessCallRate, &ExcessMessageRate, &ExcessDataRate);
//		scanf("%lf %lf %lf", &UsingCall, &UsingMessage, &UsingData);
//
//		// 기본 제공 을 초과 한 경우 : 전화
//		if (BasicCallAmount * 60.0 < UsingCall) {
//			ExcessCallRate *= ceil((UsingCall - BasicCallAmount * 60.0)/10.0);
//			/// printf("ExcessCallRate : %lf\n", ExcessCallRate);
//		}
//		else {
//			ExcessCallRate = 0;
//			/// printf("ExcessCallRate : %lf\n", ExcessCallRate);
//		}
//		// 기본 제공 을 초과 한 경우 : 메시지
//		if (BasicMessageAmount < UsingMessage) {
//			ExcessMessageRate *= UsingMessage - BasicMessageAmount;
//			/// printf("ExcessMessageRate : %lf\n", ExcessMessageRate);
//		}
//		else {
//			ExcessMessageRate = 0;
//			/// printf("ExcessMessageRate : %lf\n", ExcessMessageRate);
//		}
//		// 기본 제공 을 초과 한 경우 : 데이터
//		if (BasicDataAmount*1024.0 < UsingData) {
//			ExcessDataRate *= UsingData - BasicDataAmount*1024.0;
//			/// printf("ExcessDataRate : %lf\n", ExcessDataRate);
//		}
//		else {
//			ExcessDataRate = 0;
//			/// printf("ExcessDataRate : %lf\n", ExcessDataRate);
//		}
//
//		double TotalRate = 0;
//
//		TotalRate = BasicRate + DeviceRate + ExcessCallRate + ExcessMessageRate + ExcessDataRate;
//		TotalRate = (int) (TotalRate / 10) * 10;		// 1의 자리수 버림
//		printf("%.lf\n", TotalRate);
//
//	}
//}
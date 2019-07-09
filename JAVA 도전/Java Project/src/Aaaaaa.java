import java.util.Scanner;

public class Aaaaaa {
	
	public static double PercentageCalculator(int g, int l) {
		// ������ = ( G  / L ) �� 100 (%)
		double PCResult;
		PCResult =  ((double)g / l) * 100.0;
		return PCResult;
	}
	
	public static int PassOrFailCheck (String type, double value) {
		int PassFail = 0;
		
		// 80 : CA, PM, AF, NE
		// 100 : CG, PA
		// 400 : CI
		// 500 : CD
		// 1500 : CC
		
		if (type.equals("CA") || type.equals("PM") || type.equals("AF") || type.equals("NE")) {
			if (value > 80) {
				PassFail = 0;
			}
			else {
				PassFail = 1;
			}
		}
		else if (type.equals("CG") || type.equals("PA")) {
			if (value > 100) {
				PassFail = 0;
			}
			else {
				PassFail = 1;
			}
		}
		else if (type.equals("CI")) {
			if (value > 400) {
				PassFail = 0;
			}
			else {
				PassFail = 1;
			}
		}
		else if (type.equals("CD")) {
			if (value > 500) {
				PassFail = 0;
			}
			else {
				PassFail = 1;
			}
		}
		else if (type.equals("CC")) {
			if (value > 1500) {
				PassFail = 0;
			}
			else {
				PassFail = 1;
			}
		}
		
		return PassFail;
	}
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int TC = input.nextInt();
		
		while(TC--!=0) {
		
		// Ÿ�԰� ������(G) ��������(L)�� �Է¹���
		String Type = input.next();
		int G = input.nextInt();
		int L = input.nextInt();
		
		// ������ ���
		double Percentage = PercentageCalculator(G, L);
		int Pass = PassOrFailCheck(Type, Percentage);
		if (Pass == 1) {
			System.out.print("Pass" + " ");
		}
		else {
			System.out.print("Fail" + " ");
		}
		System.out.println(String.format("%.2f", Percentage) + " %");
		}
	}
}

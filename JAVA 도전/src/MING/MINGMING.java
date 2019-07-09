package MING;

import java.util.Scanner;

public class MINGMING {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int TC = input.nextInt();
        while (TC--!=0) {
        	
        	int a = input.nextInt();
        	int b = input.nextInt();
        	int[][] matrix1 = new int [15][15];
        	
        	for (int y = 0; y < a; y++) {
        		for (int x = 0; x < b; x++) {
        			matrix1[y][x] = input.nextInt();
        		}
        	}
        	
        	int c = input.nextInt();
        	int d = input.nextInt();
        	int[][] matrix2 = new int [15][15];
        	int[][] matrix3 = new int [15][15];
        	
        	int zerocnt = 0;
        	for (int y = 0; y < c; y++) {
        		for (int x = 0; x < d; x++) {
        			matrix2[y][x] = input.nextInt();
        			matrix3[y][x] = matrix1[y][x] - matrix2[y][x];
        			if (matrix3[y][x] == 0) {
        				zerocnt++;
        			}
        		}
        	}
        	
        	if (a != c || b != d) {
        		System.out.println("Impossible");
        	}
        	
        	else if (zerocnt == a*b) {
        		System.out.println("Identical");
        	}
        	else {
        		for (int y = 0; y < a; y++) {
            		for (int x = 0; x < b; x++) {
            			System.out.print(matrix1[y][x] - matrix2[y][x]+" ");
            		}
            	System.out.println();
        		}
        	}
        }
    }
}
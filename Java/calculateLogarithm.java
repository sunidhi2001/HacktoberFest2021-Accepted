package Logarithm;

import java.util.Scanner;

public class calculateLogarithm {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a positive integer: ");
		int num = input.nextInt();
		double total=0;
		int num2 =1;
		
		for (int x=1; x<=num;x++){
		    total+= (2.0*num2)/x;
		    num2 *= -1;
		}
		System.out.println("Total logarithm of 2 up to "+ num + " is "+total);
		input.close();
		}
	}
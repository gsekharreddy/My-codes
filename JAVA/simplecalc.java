package JAVA;

import java.util.*;

class operators
{
    int a;
	int b;
	double res;
	double sum(int a,int b){
		res=a+b;
		return res;//ht
	}
	double sub(int a,int b){
		res=a-b;
		return res;
	}
	double mul(int a,int b){
		res=a*b;
		return res;
	}
	double div(int a,int b){
		res=a/b;
		return res;
	}
	double remd(int a,int b){
		res=a%b;
		return res;
	}
}

public class simplecalc {
    public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		while(true)
		{
			int a,b,choice;
			double res=0;
			System.out.println("\n\n\n\nLIST OF OPERATIONS--------------------\n1 . Add (+)\n2 . Subtract (-)\n3 . Multiply (x)\n4 . Divide (/)\n5 . Remainder Division (%)\n6 . Exit the loop\n");
			System.out.println("Enter first operand : ");
			a=sc.nextInt();
			System.out.println("Enter your Operatin of choice : ");
			choice=sc.nextInt();
			System.out.println("Enter second operand : ");
			b=sc.nextInt();
			switch(choice)
			{
				case 1:
				operators o1 = new operators();
				res=o1.sum(a,b);
				System.out.println(a+" + "+b+" = " +res);
				break;
				case 2:
				operators o2 = new operators();
				res=o2.mul(a,b);
				System.out.println(a+" - "+b+" = "+res);
				break;
				case 3:
				operators o3 = new operators();
				res=o3.mul(a,b);
				System.out.println(a+" x "+b+" = "+res);
				break;
				case 4:
				operators o4 = new operators();
				res=o4.mul(a,b);
				System.out.println(a+" / "+b+" = "+res);
				break;
				case 5:
				operators o5 = new operators();
				res=o5.mul(a,b);
				System.out.println(a+" % "+b+" = "+res);
				break;
				case 6:
				System.exit(0);
				default:
				System.out.println("Please enter a valid choice\n");
			}


		}
	}
}

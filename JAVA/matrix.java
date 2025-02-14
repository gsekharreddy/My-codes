package JAVA;

import java.util.*;

public class matrix {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
		int i=0,j=0,m,n;
		System.out.println("\nPlease enter row and column sizes : ");
		m=sc.nextInt();
		n=sc.nextInt();
		int mat1[][]= new int[m][n];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.println("Enter the value for the position mat["+i+"]["+j+"]");
				mat1[i][j]=sc.nextInt();
			}
		}
		System.out.println("The matrix entered is : ");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.print(+mat1[i][j]+" ");
			}
			System.out.print("\n");
		}
		
    }
}

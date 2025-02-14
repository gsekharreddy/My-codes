package JAVA;

import java.util.*;

public class DiagonalSum {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int m,n,i,j,sum=0;
        System.out.println("Enter the row and column sizes of the matrix : ");
        m=sc.nextInt();
        n=sc.nextInt();       
        int a[][]=new int [m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                System.out.println("Enter the value for the position a["+i+"]["+j+"]");
                a[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    sum+=a[i][j];
                }
            }
        }
        System.out.println("The sum of the diagonal elements is : "+sum);
    }
}

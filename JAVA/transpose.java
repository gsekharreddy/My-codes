package JAVA;

import java.util.Scanner;

public class transpose 
{
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        int i,j;
        int a[][] = new int[3][3];
        int b[][] = new int[3][3];
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                System.out.println("Enter the value for the position a["+i+"]["+j+"]");
                a[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                b[i][j]=a[j][i];
            }
        }
        System.out.println("The matrix entered is : ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                System.out.print(a[i][j]+" ");
            }System.out.print("\n");
        }
        System.out.println("The transpose of the matrix is : ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                System.out.print(b[i][j]+" ");
            }System.out.print("\n");
        }
    }    
}
package JAVA;

import java.util.*;

class hello
{
    int m1;
    int m2;
    int hell(int a, int b)
    {
        return a+b;
    }
}

public class constructor {
    public static void main(String[] args) {
        int a,b;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter two values : ");
            a = sc.nextInt();
            b = sc.nextInt();
        }
        hello h=new hello();
        int sum=h.hell(a, b);
        System.out.println("The sum of the values is : "+sum);
    }

}

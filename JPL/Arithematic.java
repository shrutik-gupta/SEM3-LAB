import java.util.Scanner;

public class Arithematic {
    public int factorial(int n){
        if(n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }

    public int armstrong(int n){
        int temp, sum=0, rem;
        temp= n;
        while(n>0){
            rem= n%10;
            n = n/10;
            sum= sum+ rem*rem*rem;
        }
        if(temp==sum){
            System.out.println(""+temp+" is an armstrong number");
        }
        else{
            System.out.println(""+temp+" is not an armstrong number");
        }
        return 0;
    }

    public int palindrome(int n){
        int temp, digit, reverse=0;
        temp= n;
        while(n>0){
            digit= n%10;
            reverse= reverse*10 + digit;
            n = n/10;
        }
        if(temp==reverse){
            System.out.println(""+temp+" is a palindrome number");
        }
        else{
            System.out.println(""+temp+" is not a palindrome number");
        }
        return 0;
    }

    public int prime(int n){
        int count=0;
        for(int i=2; i<=n; i++){
            if (n%i==0){
                count++;
            }
        }
        if(count==1){
            System.out.println(""+n+" is a prime number");
        }
        else{
             System.out.println(""+n+" is not a prime number");
        }
        return 0;
    }

    public int fibonacci(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Arithematic ob= new Arithematic();
        int choice=0, n;
        System.out.println("----------Arithematic Calculations----------");
        while(choice!=6){
            System.out.println("1. Factorial\n2. Armstrong\n3. Palindrome\n4. Prime\n5. Fibonacci\n6. Exit\n");
            choice= sc.nextInt();
            switch(choice){
                case 1:
                    System.out.println("Enter a number: ");
                    n= sc.nextInt();
                    System.out.println("factorial of "+n+" is " +ob.factorial(n));
                    break;
                case 2:
                    System.out.println("Enter a number: ");
                    n= sc.nextInt();
                    ob.armstrong(n);
                    break;
                case 3:
                    System.out.println("Enter a number: ");
                    n= sc.nextInt();
                    ob.palindrome(n);
                    break;
                case 4:
                    System.out.println("Enter a number: ");
                    n= sc.nextInt();
                    ob.prime(n);
                    break;
                case 5:
                    System.out.println("Enter a number: ");
                    n= sc.nextInt();
                    System.out.println("fibonacci of "+n+" is " +ob.fibonacci(n));
                    break;
                case 6:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Enter valid choice");
                    break;
            }
        }
        sc.close();

    }
}

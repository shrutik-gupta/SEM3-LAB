// import java.util.Scanner;
// public class matrix{ 
//      public static void main(String[] args) {
//         int r, c, val,temp, count=0;
//         Scanner sc= new Scanner(System.in);
//         System.out.println("Enter the number of rows : ");
//         r= sc.nextInt();
//         System.out.println("Enter the number of columns : ");
//         c= sc.nextInt();
//         int[][] m= new int[r][c] ;
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c;j++){
//                 System.out.println("Enter the value: ");
//                 val= sc.nextInt();
//                 m[i][j]= val;
//             }
//         }
//         System.out.println("The matrix entered is: ");
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c;j++){
//                 System.out.print(" "+m[i][j]);
//             }
//             System.out.println();
//         }
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c;j++){
//                 temp= m[i][j];
//                 count= count+temp;
//             }
//             System.out.println();
//         }
//         System.out.print("The summision of matrix is: "+ count);
//         sc.close();
//      }   
// }

import java.util.Scanner;
public class matrix{ 
     public static void main(String[] args) {
        int r1, c1, r2, c2, val1, val2;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of rows of matrix 1: ");
        r1= sc.nextInt();
        System.out.println("Enter the number of columns of matrix 1: ");
        c1= sc.nextInt();
        int[][] m1= new int[r1][c1] ;
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1;j++){
                System.out.println("Enter the value: ");
                val1= sc.nextInt();
                m1[i][j]= val1;
            }
        }
        System.out.println("The matrix entered is: ");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1;j++){
                System.out.print(" "+m1[i][j]);
            }
            System.out.println();
        }

        System.out.println("Enter the number of rows of matrix 2 : ");
        r2= sc.nextInt();
        System.out.println("Enter the number of columns of matrix 2: ");
        c2= sc.nextInt();
        int[][] m2= new int[r2][c2] ;
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2;j++){
                System.out.println("Enter the value: ");
                val2= sc.nextInt();
                m2[i][j]= val2;
            }
        }
        System.out.println("The matrix entered is: ");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2;j++){
                System.out.print(" "+m2[i][j]);
            }
            System.out.println();
        }
        if(r1==r2 && c1==c2){
            int [][] m3= new int[r1][c1];
            for(int i=0; i<r1; i++){
                for(int j=0; j<c1;j++){
                m3[i][j]= m1[i][j]+ m2[i][j];
                }
            }
            System.out.println("The resultant matrix is: ");
            for(int i=0; i<r2; i++){
                for(int j=0; j<c2;j++){
                    System.out.print(" "+m3[i][j]);
                }
                System.out.println();
            }
        }
        else{
            System.out.println("Addition not possible");
        }
        sc.close();
     }   
}
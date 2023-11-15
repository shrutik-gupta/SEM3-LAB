// Let's say:

// Basic Salary = $50,000
// DA = 10%
// HRA = 15%
// CCA = $500
// PF = 5%
// PT = $200
// Gross Salary Calculation:

// DA = (10/100) * $50,000 = $5,000
// HRA = (15/100) * $50,000 = $7,500
// Gross Salary = $50,000 + $5,000 + $7,500 + $500 = $63,000
// Net Salary Calculation:

// PF = (5/100) * $50,000 = $2,500
// Net Salary = $63,000 - $2,500 - $200 = $60,300

import java.util.Scanner;
public class Salary{
    public void salaryCalculate(double principal, double DA, double HRA, double CCA, double PF, double PT){
        double grossSalary, netSalary;
        grossSalary= principal+((DA/100)*principal)+((HRA/100)*principal)+CCA;
        System.out.println("Gross salary is: "+ grossSalary);
        netSalary= grossSalary - ((PF/100)*principal) - PT;
        System.out.println("Net salary is: "+ netSalary);
    }
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        double principal, DA, HRA, CCA, PF, PT;
        System.out.println("Enter principal amount: ");
        principal= sc.nextDouble();
        System.out.println("Enter DA: ");
        DA= sc.nextDouble();
        System.out.println("Enter HRA: ");
        HRA= sc.nextDouble();
        System.out.println("Enter CCA: ");
        CCA= sc.nextDouble();
        System.out.println("Enter PF: ");
        PF= sc.nextDouble();
        System.out.println("Enter PT: ");
        PT= sc.nextDouble();
        Salary ob= new Salary();
        ob.salaryCalculate(principal, HRA, DA, CCA, PF, PT); //since salaryCalculate method is non static, it is called using object
        sc.close();
    }
}
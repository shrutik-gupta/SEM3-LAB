import java.util.Scanner;
class Adder{
    private int Total=0;
    public Adder(){

    }
    void add(int price){
        Total = Total + price;
    }
    int getTotalEarning(){
        return Total;
    }
}

class Encapculation{
    public static void main(String[] args){
        Adder obj = new Adder();
        int chocolate = 600,strawberry = 700, mango = 1000;
        int choice, exit =1;
        Scanner sc = new Scanner(System.in);
        while(exit != 0){
            System.out.println("Choose the Cake:\n1.Chocolate\n2.Strawberry\n3.Mango\n4.Get Earning\n");
            choice = sc.nextInt();
            switch (choice){
                case 1:
                    obj.add(chocolate);
                    break;
                case 2:
                    obj.add(strawberry);
                    break;
                case 3:
                    obj.add(mango);
                    break;
                case 4:
                    System.out.println("\nThe total earning is: "+ obj.getTotalEarning());
                    System.out.println();
                    break;
                default:
                    exit = 0;
                    System.out.println("Invalid Input");
            }
        }
        sc.close();
    }
}
import java.util.Scanner;
public class Area {
    int length, breadth, area;
    public void setDim(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter length: ");
        length= sc.nextInt();
        System.out.println("Enter breadth: ");
        breadth= sc.nextInt();
        area= length*breadth;
        sc.close();
    }
    public int getArea(){
        return area;
    }
    public static void main(String[] args){
        Area ob = new Area();
        ob.setDim();
        System.out.println("the area of given rectangle is: "+ob.getArea());
    }
}

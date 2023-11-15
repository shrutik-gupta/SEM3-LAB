public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            int age=17, data;
            if(age<18){
                throw new ArithmeticException("Person cant vote");
            }
            int arr[]= new int[5];
            data = 50/0;
            arr[10] = 20;
        } 
        catch (ArithmeticException e) {
            System.out.println(e);
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
    }
}

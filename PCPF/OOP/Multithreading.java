class one extends Thread{
    public void run(){
        for(char i='A'; i<='Z'; i++){
            System.out.println(i);
        }
    }
}
class two extends Thread{
    public void run(){
        for(int i=1; i<=26; i++){
            System.out.println(i);
        }
    }
}
public class Multithreading{
    public static void main(String[] args) {
        one th1= new one();
        two th2= new two();
        th1.start();
        th2.start();
    }
}

//USING THREADS-
// class one extends Thread{
//     public void run(){
//         for(char i='A'; i<='Z'; i++){
//             System.out.println(i);
//         }
//     }
// }
// class two extends Thread{
//     public void run(){
//         for(int i=1; i<=26; i++){
//             System.out.println(i);
//         }
//     }
// }
// public class Multithreading{
//     public static void main(String[] args) {
//         one th1= new one();
//         two th2= new two();
//         th1.start();
//         th2.start();
//     }
// }

//USING RUNNABLE-
class one implements Runnable{
    public void run(){
        for(char i='A'; i<='Z'; i++){
             System.out.println(i);
         }
    }
}

class two implements Runnable{
    public void run(){
        for(int i=1; i<=26; i++){
             System.out.println(i);
         }
    }
}

class Multithreading{
    public static void main(String[] args) {
        one obj1 = new one();
        two obj2 = new two();
        Thread t1= new Thread(obj1);
        Thread t2= new Thread(obj2);
        t1.start();
        t2.start();
    }
}

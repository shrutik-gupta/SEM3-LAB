interface vehicle{
    void tyre();
    void brake();
    void engine();
}

class bike implements vehicle{
    public void brake(){
        System.out.println("Brake strength is 100%");
    }
    public void tyre(){
        System.out.println("tyre size is 40cm");
    }
    public void engine(){
        System.out.println("engine model is 2023");
    }
}
class car implements vehicle{
    public void brake(){
        System.out.println("Brake strength is 90%");
    }
    public void tyre(){
        System.out.println("tyre size is 60cm");
    }
    public void engine(){
        System.out.println("engine model is 2021");
    }
}
class truck implements vehicle{
    public void brake(){
        System.out.println("Brake strength is 100%");
    }
    public void tyre(){
        System.out.println("tyre size is 80cm");
    }
    public void engine(){
        System.out.println("engine model is 2019");
    }
}

public class InterfaceDemo {
    public static void main(String[] args){
        bike obj1= new bike();
        obj1.brake();
        obj1.tyre();
        obj1.engine();

        car obj2= new car();
        obj2.brake();
        obj2.tyre();
        obj2.engine();

        truck obj3= new truck();
        obj3.brake();
        obj3.tyre();
        obj3.engine();
    }
}

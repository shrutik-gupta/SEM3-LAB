class Book{
    void display(){
        System.out.println("Name- Money heist");
        System.out.println("Author- professor");
    }
}

class Reference_book extends Book{
    void display(){
        System.out.println("Name- Breaking bad");
        System.out.println("Author- Walter white");
    }
}

class Magazine extends Book{
    void display(){
        System.out.println("Name- Stranger things");
        System.out.println("Author- Dustin");
    }
}

public class Inheritence {
    public static void main(String[] args){
        Book obj = new Book();
        obj.display();
        Book obj1 = new Reference_book();
        obj1.display();
        Book obj2 = new Magazine();
        obj2.display();
    }
}

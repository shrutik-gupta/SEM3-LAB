class Constructor {
    public Constructor(){ //default constructor
        this(13, 2); //constructor chaining
        System.out.println("This is a default constructor");
    }

    public Constructor(int a, int b){ //parameterized constructor
        int c= a+b;
        System.out.println("The sum of "+a+" and "+b+" is "+c);
    }

    public static void main(String[] args){
        Constructor ob1= new Constructor();
        Constructor ob2= new Constructor(12,8);
    }
}

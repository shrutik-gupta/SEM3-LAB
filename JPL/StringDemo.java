public class StringDemo {
    public static void main(String[] args){
        String s1= "HELLO THIS IS A JAVA PROGRAM";

        String s2 = s1.toLowerCase();                                         //lowercase a string
        String s3= s2.toUpperCase();                                          //uppercase a string

        System.out.println("String s1 is- "+s1);
        System.out.println("String s2 is- "+s2);
        System.out.println("String s3 is- "+s3);

        System.out.println("Length of s1 is "+s1.length());                        //returns length

        System.out.println("character at index 21 in s1 is "+s1.charAt(21)); //returns value at an index

        System.out.println("index of character 'A' is "+s1.indexOf("A"));     //returns the index of entered character

        String s4= s1.concat(s2);                                                  //concates some string into a string 
        System.out.println("String s1 after concating is- "+s4); 

        String s5 = s1.substring(6, 10);                      //slice a new string out of an existingstring
        System.out.println("Substring s5 of s1 is- "+s5);        
        
        if(s1.contains("HELLO")){                                              //checks if a set of characters is present in string
            System.out.println("HELLO exists in the string s1");
        }
        else{
            System.out.println("HELLO does not exists in the string s1");      
        }

        if(s1.startsWith("H")){                                        //checks if a string starts with entered character
            System.out.println("s1 starts with H");
        }
        else{
            System.out.println("s1 does not starts with H");
        }
        if(s1.endsWith("y")){                                        //checks if a string ends with entered character
            System.out.println("s1 ends with y");
        }
        else{
            System.out.println("s1 does not end with y");
        }
    }
}

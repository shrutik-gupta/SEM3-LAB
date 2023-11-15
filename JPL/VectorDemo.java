import java.util.*;
public class VectorDemo {
    public static void main(String[] args){

        Vector v = new Vector<>();
        ArrayList arr = new ArrayList<>();

        v.add(0, 1);                          //adds elements into a vector
        arr.add(0, 2);
        arr.add(1, "Java");
        arr.add(2, 3);
        arr.add(3, "Vectors");

        v.addAll(arr);                                       //adds an array into a vector

        System.out.println();                                
        System.out.println("Vector is"+ v);

        v.clear();                                           //clear the entire vector
        
        if(v.isEmpty()){                                    //checks if the vector is empty
            System.out.println("Vector is empty");
        }
        else{
            System.out.println("Vector is not empty");
        }

        v.add(1);
        v.add("Hello");
        v.add(10);
        v.add("JavaProgram");
        System.out.println("Vector again filled is"+ v);

        Vector vclone = new Vector<>();
        vclone = (Vector)v.clone();                      //clones a vector into another vector
        System.out.println("Cloned vector is"+ vclone);    

        if(v.contains("Hello")){                             //checks if an element is present in array
            System.out.println("'Hello' exists in vector");
        }
        else{
            System.out.println("'Hello' does not exists in vector");
        }

        v.ensureCapacity(10);                               //sets a maximum capacity

        System.out.println("Maximum capacity is: "+ v.capacity());      //returns the maximum capacity

        System.out.println("Element at index 3 is: "+ v.get(3));  //returns value at an index

        System.out.println("Index of 'JavaProgram is': "+ v.indexOf("JavaProgram"));   //returns then index of a value
    }
}

import java.util.ArrayList;

public class datastructures {
    public static void main(String[] args) {
     
        // array
        int[] num = {2,3}; 

        System.out.println(num[0]); // 2

        String[] names = {"Byron", "Turing","Alonso"};

        System.out.println(names[0]); // Byron
        System.out.println(names.length); // 3

        num[0] = 5;
        System.out.println(num[0]);
        System.out.println(num.length);

        // List
        ArrayList<String> namesList = new ArrayList<>();
        var numbers = new ArrayList<Integer>();

        namesList.add("Hamilton");
        namesList.add("Starman");

        numbers.add(3);

        System.out.println(namesList);
        System.out.println(namesList.get(1));

        // set an index position
        namesList.set(1, "Bowie");
        System.out.println(namesList.get(1));
        namesList.remove(0);
        System.out.println(namesList);

        //contains
        System.out.println(namesList.contains("Bowie"));


        System.out.println(numbers);



    }    
}

import java.util.HashSet;

public class foreach {
    public static void main(String[] args) {
     
    String[] names = {"Sharona", "Bowie", "Mayor Tom"};

    for(String name : names)
    {
        System.out.println(name);
    }

    // works with sets

    var set = new HashSet<Integer>();

    set.add(1);
    set.add(2);
    set.add(3);
    set.add(4);

    for( Integer num:set)
    {
        System.out.println(num);
    }

    }    
}

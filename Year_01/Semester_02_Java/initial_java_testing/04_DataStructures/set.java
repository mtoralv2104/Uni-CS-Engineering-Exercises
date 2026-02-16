import java.util.HashSet;

public class set {
    public static void main(String[] args) {
        
        // Set(Used for exclusive elements) initialization

        var SetTest = new HashSet<String>();

        SetTest.add("Queen");
        SetTest.add("Queen");
        SetTest.add("Jamiroquai");
        SetTest.add("ACDC");
        
        System.out.println(SetTest);
        System.out.println(SetTest.size());
        System.out.println(SetTest.contains("Queen"));

        SetTest.remove("ACDC");

        System.out.println(SetTest);

        var Songs = new HashSet<String>();

        Songs.add("Radio Ga Ga");
        Songs.add("Invisible");

        // addAll and removeAll

        SetTest.addAll(Songs);

        System.out.println(SetTest);

        SetTest.removeAll(Songs);
        
        System.out.println(SetTest);



    }
    
}

import java.util.HashMap;

public class maps {
    public static void main(String[] args) {
        
        var members = new HashMap<String,Integer>();

        members.put("Abba",4);
        members.put("Aerosmith",5);


        System.out.println(members.size());
        System.out.println(members);

        // Get from key
        System.out.println(members.get("Abba"));

        // Check key/value

        System.out.println(members.containsKey("Aerosmith"));
        System.out.println(members.containsValue(4));

    }
    
}

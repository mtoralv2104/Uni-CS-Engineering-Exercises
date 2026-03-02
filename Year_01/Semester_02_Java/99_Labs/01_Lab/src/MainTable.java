import jugs.Table;
import jugs.Position;

public class MainTable {
    public static void main(String[] args) {
        Table table = new Table(7, 5);

        table.fill(Position.right);
        System.out.println(table);

        table.pourFrom(Position.right);
        System.out.println(table);

        table.fill(Position.right);
        System.out.println(table);

        table.pourFrom(Position.right);
        System.out.println(table);

        table.empty(Position.left);
        System.out.println(table);

        table.pourFrom(Position.right);
        System.out.println(table);

        table.fill(Position.right);
        System.out.println(table);

        table.pourFrom(Position.right);
        System.out.println(table);
    }
}
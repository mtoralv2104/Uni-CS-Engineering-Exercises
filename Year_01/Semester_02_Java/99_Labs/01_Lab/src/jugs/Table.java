package jugs;

public class Table {
    private Jug leftJug;
    private Jug rightJug;

    public Table(Jug leftJug, Jug rightJug) {
        if (leftJug == rightJug) {
            throw new RuntimeException("Table cannot contain the same jug twice.");
        }
        this.leftJug = leftJug;
        this.rightJug = rightJug;
    }

    public Table(int capLeft, int capRight) {
        this.leftJug = new Jug(capLeft);
        this.rightJug = new Jug(capRight);
    }

    public int getCapacity(Position pos) {
        return switch (pos) {
            case left -> leftJug.capacity();
            case right -> rightJug.capacity();
        };
    }

    public int getContent(Position pos) {
        return switch (pos) {
            case left -> leftJug.content();
            case right -> rightJug.content();
        };
    }

    public void fill(Position pos) {
        switch (pos) {
            case left -> leftJug.fill();
            case right -> rightJug.fill();
        }
    }

    public void empty(Position pos) {
        switch (pos) {
            case left -> leftJug.empty();
            case right -> rightJug.empty();
        }
    }

    public void pourFrom(Position sourcePos) {
        switch (sourcePos) {
            case left -> rightJug.pourFrom(leftJug);
            case right -> leftJug.pourFrom(rightJug);
        }
    }

    @Override
    public String toString() {
        return "T(" + leftJug.toString() + ", " + rightJug.toString() + ")";
    }
}
package Question_3;
class Point {
    private int x, y;
    public Point() {
        x = 0;
        y = 0;
        System.out.println("This is public Point constructor.");
    }
    Point (int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void setX (int x) {
        this.x = x;
    }
    public void setY (int y) {
        this.y = y;
    }
    public void setXY (int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void display() {
        System.out.println("(" + x + ", " + y + ")");
}
}

public class Check {
    public static void main (String args[]) {
        Point p1 = new Point();
        Point p2 = new Point(3, 5);
        p1.setX(10);
        p1.setY(20);
        p2.setXY(7, 8);
        p1.display();
        p2.display();
    }
}

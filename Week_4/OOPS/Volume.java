class Box {
    protected int length, breadth;
    Box (int l, int b) {
        this.length = l;
        this.breadth = b;
    }
    public void area () {
        System.out.println("Area of box: " + length*breadth);
    }
}

class Box3d extends Box {
    protected int height;
    Box3d (int l, int b, int h) {
        super(l, b);
        this.height = h;
    }
    public void volume () {
        System.out.println("Volume of box: " + length*breadth*height);
    }
}

public class Volume {
    public static void main(String[] args) {
        Box b = new Box(10, 20);
        b.area();
        Box3d b3 = new Box3d(10, 20, 30);
        b3.volume();
    }
}

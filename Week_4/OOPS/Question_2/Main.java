package Question_2;
class Outer {
    public void display() {
        System.out.println("This is outer class.");
    }
    class Inner {
    public void display() {
        System.out.println("This is inner class.");
    }
}
}

public class Main {
    public static void main (String args[]) {
        Outer o = new Outer();
        o.display();
        Outer.Inner i = o.new Inner();
        i.display();
    }
}

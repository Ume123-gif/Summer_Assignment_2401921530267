abstract class Compartment {
    public abstract String notice(); 
}
class FirstClass extends Compartment {
    public String notice() {
        return "This is first class compartment.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "This is ladies compartment.";
    }
}

class General extends Compartment {
    public String notice() {
        return "This is general compartment.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "This is luggage compartment.";
    }
}
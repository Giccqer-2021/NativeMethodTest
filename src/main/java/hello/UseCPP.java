package hello;

public class UseCPP {
    static {
        System.loadLibrary("UseCPP");
    }

    public native void sayHello();

    public static void main(String[] args) {
        UseCPP useCPP = new UseCPP();
        useCPP.sayHello();
    }
}

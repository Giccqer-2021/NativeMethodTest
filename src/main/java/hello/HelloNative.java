package hello;

public class HelloNative {

    static {
        System.loadLibrary("HelloNative");
    }

    public static native void printHello();

    public static void main(String[] args) {
        printHello();
    }
}

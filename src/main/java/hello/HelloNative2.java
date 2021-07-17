package hello;

public class HelloNative2 {
    static {
        System.loadLibrary("HelloNative2");
    }

    public static native void printHello2();

    public static void main(String[] args) {
        printHello2();
    }
}

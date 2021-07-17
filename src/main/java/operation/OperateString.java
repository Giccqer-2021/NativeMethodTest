package operation;

public class OperateString {
    static {
        System.loadLibrary("OperateString");
    }

    public native String stringCopy(String str);

    public native String sayHello(String str);

    public native String sayHello2(String str);

    public static void main(String[] args) {
        OperateString operation = new OperateString();
        System.out.println(operation.stringCopy("我很好啊"));
        System.out.println("--------------------");
        System.out.println(operation.sayHello("啊啊嗷嗷啊"));
        System.out.println("--------------------");
        System.out.println(operation.sayHello2("我不好呵呵呵"));
    }
}

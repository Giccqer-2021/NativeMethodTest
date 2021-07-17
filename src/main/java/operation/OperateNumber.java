package operation;

public class OperateNumber {
    static {
        System.loadLibrary("OperateNumber");
    }

    public native int numberAdd(int a, int b);

    public native void testIntArray(int[] array);

    public static void main(String[] args) {
        OperateNumber operation = new OperateNumber();
        System.out.println(operation.numberAdd(10, -100));
        System.out.println("--------------------");
        int[] arr = {4, 1, 7, 8, 1, 9, 0, 13, 5};
        operation.testIntArray(arr);
        System.out.println("--------------------");
        for (int i : arr) {
            System.out.print(i + "  ");
        }
        System.out.println();
    }
}

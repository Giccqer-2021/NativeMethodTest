package sort;

public class NumberSort {
    static {
        System.loadLibrary("NumberSort");
    }

    public native void DirectInsertion(int[] array);

    public native void SimpleSelection(int[] array);

    public native void bubble(int[] array);

    public static void main(String[] args){
        NumberSort numberSort = new NumberSort();
        int[] arr1 = {11, 53, 23, 76, 13, 74, 43, 56, 88, 79};
        numberSort.DirectInsertion(arr1);
        System.out.print("直接插入排序: ");
        for (int i : arr1) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");

        int[] arr2 = {11, 53, 23, 76, 13, 74, 43, 56, 88, 79};
        numberSort.SimpleSelection(arr2);
        System.out.print("简单选择排序: ");
        for (int i : arr2) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");

        int[] arr3 = {11, 53, 23, 76, 13, 74, 43, 56, 88, 79};
        numberSort.bubble(arr3);
        System.out.print("冒泡排序: ");
        for (int i : arr3) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");
    }
}

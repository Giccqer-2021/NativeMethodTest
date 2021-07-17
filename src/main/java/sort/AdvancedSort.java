package sort;

public class AdvancedSort {
    static {
        System.loadLibrary("AdvancedSort");
    }

    public native void mergeSort(int[] array);

    public native void quickSort(int[] array);

    public native void shellSort(int[] array);

    public static void main(String[] args) throws InterruptedException {
        AdvancedSort advancedSort = new AdvancedSort();
        int[] arr1 = {12, 42, 87, 11, 21, 43, 80, 14, 31, 78, 13, 17, 65, 19, 32, 56};
        advancedSort.mergeSort(arr1);
        System.out.print("归并排序: ");
        for (int i : arr1) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");

        int[] arr2 = {12, 42, 87, 11, 21, 43, 80, 14, 31, 78, 13, 17, 65, 19, 32, 56};
        advancedSort.quickSort(arr2);
        System.out.print("快速排序: ");
        for (int i : arr2) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");

        int[] arr3 = {12, 42, 87, 11, 21, 43, 80, 14, 31, 78, 13, 17, 65, 19, 32, 56};
        advancedSort.mergeSort(arr3);
        System.out.print("希尔排序: ");
        for (int i : arr3) {
            System.out.print(i + "  ");
        }
        System.out.println("\n--------------------");
    }
}

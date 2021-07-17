package path_test;

import java.io.File;

public class TestMain {
    public static void main(String[] args) {
        File f = new File("clibrary\\hello_test_HelloNative.dll");
        System.out.println(f.exists());
    }
}

rem javah -jni -classpath (搜寻类目录) -d (输出目录) (类名)
javah -jni -classpath  target/classes -d jni  hello.HelloNative
pause
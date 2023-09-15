# JNI / FFI

## Start / Quick start

https://developer.okta.com/blog/2022/04/08/state-of-ffi-java

## JNI Array Access
https://stackoverflow.com/questions/3421300/passing-a-byte-in-java-to-a-function-in-c-through-jni-how-to-use-jarraybyte 

https://stackoverflow.com/questions/20771803/where-can-i-find-the-jni-headers-for-mac-os 

```
gcc -c -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin Main.c
gcc -dynamiclib -o Main.dylib -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin Main.c
```

https://stackoverflow.com/questions/14173260/creating-shared-libraries-in-c-for-osx 

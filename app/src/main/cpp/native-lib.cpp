#include <jni.h>  //代表了这一层的作用
#include <string>
#include "Test.h"


extern "C" {
//通过快捷键生成的方法，并不在这个体的包括内，这是值得注意的

JNIEXPORT jint JNICALL
Java_com_ntanougat_practiceproject4ndk_NDKHelper_NDKHelper_addNum(JNIEnv *env, jclass type, jint a,
                                                                  jint b) {
    // TODO
    TestClass test;
    int c = test.addNum(a, b);
    //实际上应当注意类型转换，在这里不明显，下面的方法有所不同
    return c;
}


JNIEXPORT jstring JNICALL
Java_com_ntanougat_practiceproject4ndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());//JNI提供了转换的方法
}

}

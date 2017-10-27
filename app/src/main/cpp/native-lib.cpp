#include <jni.h>
#include <string>
#include "Test.h"

extern "C" {
JNIEXPORT jint JNICALL
Java_com_ntanougat_practiceproject4ndk_NDKHelper_NDKHelper_addNum(JNIEnv *env, jclass type, jint a,
                                                                  jint b) {
    // TODO
    TestClass test;
    int c = test.addNum(a, b);
    return c;
}


JNIEXPORT jstring JNICALL
Java_com_ntanougat_practiceproject4ndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
}

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_msgsd_mobapps_scenator5_MainActivity_testJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

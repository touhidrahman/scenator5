#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>

extern "C"
JNIEXPORT jstring JNICALL
Java_msgsd_mobapps_scenator5_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

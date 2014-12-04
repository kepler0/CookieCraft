#include "native.h"

extern "C" {
JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_preInit(JNIEnv *env, jobject obj, jobject jevent) {
  jclass Class = env->GetObjectClass(obj);
  jclass Event = env->GetObjectClass(event);
}

JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_init(JNIEnv *env, jobject obj, jobject jevent) {
  jclass Class = env->GetObjectClass(obj);
  jclass Event = env->GetObjectClass(event);
}

JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_postInit(JNIEnv *env, jobject obj, jobject jevent) {
  jclass Class = env->GetObjectClass(obj);
  jclass Event = env->GetObjectClass(event);
}
}

#include "native.h"

extern "C" {
JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_preInit(JNIEnv *env, jobject obj, jobject jevent) {
  /* This Class */
  jclass Class = env->GetObjectClass(obj);

  /* The Event (FMLPreInitializationEvent) Class */
  jclass Event = env->GetObjectClass(jevent);

  /* Gets the getModLog method */
  jmethodID modLogID = env->GetMethodID(Event, "getModLog", "()Lorg/apache/logging/log4j/Logger");
  if (modLogID == NULL) {
    /* error handling */
  }

  /* Gets the Logger object from the getModLog method ID */
  jobject Loggger = env->CallObjectMethod(obj, modLogID);

  /* Gets the info method */
  jmethodID logInfoMethodID = env->GetMethodID(Event, "info", "(Ljava/lang/String)V");
  if (logInfoMethodID == NULL) {
    /* error handling */
  }

  /* Logs Things */
  env->CallObjectMethod(obj, logInfoMethodID, "Hello from C++");
}

JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_init(JNIEnv *env, jobject obj, jobject jevent) {
  /* This Class */
  jclass Class = env->GetObjectClass(obj);

  /* The Event (FMLInitializationEvent) Class */
  jclass Event = env->GetObjectClass(jevent);
}

JNIEXPORT void JNICALL Java_com_k2b6s9j_ccraft_CCraft_postInit(JNIEnv *env, jobject obj, jobject jevent) {
  /* This Class */
  jclass Class = env->GetObjectClass(obj);

  /* The Event (FMLPostInitialization) Class */
  jclass Event = env->GetObjectClass(jevent);
}
}

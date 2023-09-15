#include "Main.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_Main_crypt(JNIEnv *env, jclass clz, jbyteArray array)
{
  jbyte *bufferPtr = (*env)->GetByteArrayElements(env, array, NULL);
  jsize lengthOfArray = (*env)->GetArrayLength(env, array);

  printf("Size of array is %d\n", lengthOfArray);

  (*env)->ReleaseByteArrayElements(env, array, bufferPtr, 0);
}
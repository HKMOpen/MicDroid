/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intervigil_micdroid_recorder_JNIRecorder */

#ifndef _Included_com_intervigil_micdroid_recorder_JNIRecorder
#define _Included_com_intervigil_micdroid_recorder_JNIRecorder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intervigil_micdroid_recorder_JNIRecorder
 * Method:    jniRecorderStart
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intervigil_micdroid_recorder_JNIRecorder_jniRecorderStart
  (JNIEnv *, jobject);

/*
 * Class:     com_intervigil_micdroid_recorder_JNIRecorder
 * Method:    jniRecorderStop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intervigil_micdroid_recorder_JNIRecorder_jniRecorderStop
  (JNIEnv *, jobject);

/*
 * Class:     com_intervigil_micdroid_recorder_JNIRecorder
 * Method:    jniIsRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intervigil_micdroid_recorder_JNIRecorder_jniIsRunning
  (JNIEnv *, jobject);

/*
 * Class:     com_intervigil_micdroid_recorder_JNIRecorder
 * Method:    jniRecorderCleanup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intervigil_micdroid_recorder_JNIRecorder_jniRecorderCleanup
  (JNIEnv *, jobject);

/*
 * Class:     com_intervigil_micdroid_recorder_JNIRecorder
 * Method:    jniRecorderInit
 * Signature: (ILandroid/media/AudioRecord;Landroid/media/AudioTrack;)I
 */
JNIEXPORT jint JNICALL Java_com_intervigil_micdroid_recorder_JNIRecorder_jniRecorderInit
  (JNIEnv *, jobject, jint, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif

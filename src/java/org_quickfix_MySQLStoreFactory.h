/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_quickfix_MySQLStoreFactory */

#ifndef _Included_org_quickfix_MySQLStoreFactory
#define _Included_org_quickfix_MySQLStoreFactory
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_quickfix_MySQLStoreFactory
 * Method:    create
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_quickfix_MySQLStoreFactory_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_quickfix_MySQLStoreFactory
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_quickfix_MySQLStoreFactory_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_quickfix_MySQLStoreFactory
 * Method:    create
 * Signature: (Lorg/quickfix/SessionID;)Lorg/quickfix/MessageStore;
 */
JNIEXPORT jobject JNICALL Java_org_quickfix_MySQLStoreFactory_create__Lorg_quickfix_SessionID_2
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif

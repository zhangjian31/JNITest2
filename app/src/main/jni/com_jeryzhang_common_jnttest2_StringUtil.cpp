//
// Created by zhangjian on 2018/12/21.
//
#include "com_jeryzhang_common_jnttest2_StringUtil.h"

JNIEXPORT jstring JNICALL Java_com_jeryzhang_common_jnttest2_StringUtil_getStr
  (JNIEnv *env, jobject){
    const char *cc="hello";
    jstring jrstr;
    jrstr=env->NewStringUTF(cc);
    return jrstr;
 }
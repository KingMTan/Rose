// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     java/util/Map

#ifndef java_util_Map_JNI
#define java_util_Map_JNI

#include "sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char kClassPath_java_util_Map[];
const char kClassPath_java_util_Map[] = "java/util/Map";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_java_util_Map_clazz = 0;
#ifndef java_util_Map_clazz_defined
#define java_util_Map_clazz_defined
inline jclass java_util_Map_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_java_util_Map,
      &g_java_util_Map_clazz);
}
#endif

namespace JNI_Map {

// Step 2: method stubs.

static base::subtle::AtomicWord g_java_util_Map_size = 0;
static jint Java_Map_size(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) __attribute__ ((unused));
static jint Java_Map_size(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "size",
      "()I",
      &g_java_util_Map_size);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_isEmpty = 0;
static jboolean Java_Map_isEmpty(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static jboolean Java_Map_isEmpty(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "isEmpty",
      "()Z",
      &g_java_util_Map_isEmpty);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_containsKey = 0;
static jboolean Java_Map_containsKey(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jboolean Java_Map_containsKey(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "containsKey",
      "(Ljava/lang/Object;)Z",
      &g_java_util_Map_containsKey);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_containsValue = 0;
static jboolean Java_Map_containsValue(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jboolean Java_Map_containsValue(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "containsValue",
      "(Ljava/lang/Object;)Z",
      &g_java_util_Map_containsValue);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_get = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_get(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_get(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "get",
      "(Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_get);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_put = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_put(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_put(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "put",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_put);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_removeJUV_JLO = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_removeJUV_JLO(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_removeJUV_JLO(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "remove",
      "(Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_removeJUV_JLO);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_putAll = 0;
static void Java_Map_putAll(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static void Java_Map_putAll(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "putAll",
      "(Ljava/util/Map;)V",
      &g_java_util_Map_putAll);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_Map_clear = 0;
static void Java_Map_clear(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) __attribute__ ((unused));
static void Java_Map_clear(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "clear",
      "()V",
      &g_java_util_Map_clear);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_Map_keySet = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_keySet(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_keySet(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "keySet",
      "()Ljava/util/Set;",
      &g_java_util_Map_keySet);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_values = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_values(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_values(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "values",
      "()Ljava/util/Collection;",
      &g_java_util_Map_values);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_entrySet = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_entrySet(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_entrySet(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "entrySet",
      "()Ljava/util/Set;",
      &g_java_util_Map_entrySet);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_equals = 0;
static jboolean Java_Map_equals(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jboolean Java_Map_equals(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "equals",
      "(Ljava/lang/Object;)Z",
      &g_java_util_Map_equals);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_hashCode = 0;
static jint Java_Map_hashCode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static jint Java_Map_hashCode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "hashCode",
      "()I",
      &g_java_util_Map_hashCode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_getOrDefault = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_getOrDefault(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_getOrDefault(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "getOrDefault",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_getOrDefault);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_forEach = 0;
static void Java_Map_forEach(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static void Java_Map_forEach(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "forEach",
      "(Ljava/util/function/BiConsumer;)V",
      &g_java_util_Map_forEach);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_Map_replaceAll = 0;
static void Java_Map_replaceAll(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static void Java_Map_replaceAll(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "replaceAll",
      "(Ljava/util/function/BiFunction;)V",
      &g_java_util_Map_replaceAll);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_Map_putIfAbsent = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_putIfAbsent(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_putIfAbsent(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "putIfAbsent",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_putIfAbsent);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_removeZ_JLO_JLO = 0;
static jboolean Java_Map_removeZ_JLO_JLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static jboolean Java_Map_removeZ_JLO_JLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "remove",
      "(Ljava/lang/Object;Ljava/lang/Object;)Z",
      &g_java_util_Map_removeZ_JLO_JLO);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_replaceZ_JUK_JUV_JUV = 0;
static jboolean Java_Map_replaceZ_JUK_JUV_JUV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1,
    const base::android::JavaRef<jobject>& p2) __attribute__ ((unused));
static jboolean Java_Map_replaceZ_JUK_JUV_JUV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1,
    const base::android::JavaRef<jobject>& p2) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "replace",
      "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
      &g_java_util_Map_replaceZ_JUK_JUV_JUV);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj(), p1.obj(), p2.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_Map_replaceJUV_JUK_JUV = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_replaceJUV_JUK_JUV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_replaceJUV_JUK_JUV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "replace",
      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
      &g_java_util_Map_replaceJUV_JUK_JUV);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_computeIfAbsent = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_computeIfAbsent(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_computeIfAbsent(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "computeIfAbsent",
      "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
      &g_java_util_Map_computeIfAbsent);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_computeIfPresent = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_computeIfPresent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Map_computeIfPresent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "computeIfPresent",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &g_java_util_Map_computeIfPresent);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_compute = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_compute(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_compute(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "compute",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &g_java_util_Map_compute);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_Map_merge = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Map_merge(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1,
    const base::android::JavaRef<jobject>& p2) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_Map_merge(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0,
    const base::android::JavaRef<jobject>& p1,
    const base::android::JavaRef<jobject>& p2) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_Map_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_util_Map_clazz(env),
      "merge",
"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
      &g_java_util_Map_merge);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, p0.obj(), p1.obj(), p2.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace JNI_Map

#endif  // java_util_Map_JNI
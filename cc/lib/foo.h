#ifndef CC_LIB_FOO_H_
#define CC_LIB_FOO_H_

#if !defined(FOO_DISABLE_SHLIB_EXPORT)
#if defined(_WIN32)

#if defined(FOO_IMPLEMENTATION)
#define FOO_EXPORT __declspec(dllexport)
#else
#define FOO_EXPORT __declspec(dllimport)
#endif  // defined(FOO_IMPLEMENTATION)

#else  // defined(_WIN32)
#if defined(FOO_IMPLEMENTATION)
#define FOO_EXPORT __attribute__((visibility("default")))
#else
#define FOO_EXPORT
#endif  // defined(FOO_IMPLEMENTATION)
#endif

#else
#define FOO_EXPORT
#endif

extern "C" FOO_EXPORT void Foo(void* ctx);

#endif  // CC_LIB_FOO_H_

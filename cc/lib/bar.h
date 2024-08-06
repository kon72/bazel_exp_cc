#ifndef CC_LIB_BAR_H_
#define CC_LIB_BAR_H_

#if !defined(BAR_DISABLE_SHLIB_EXPORT)
#if defined(_WIN32)

#if defined(BAR_IMPLEMENTATION)
#define BAR_EXPORT __declspec(dllexport)
#else
#define BAR_EXPORT __declspec(dllimport)
#endif  // defined(BAR_IMPLEMENTATION)

#else  // defined(_WIN32)
#if defined(BAR_IMPLEMENTATION)
#define BAR_EXPORT __attribute__((visibility("default")))
#else
#define BAR_EXPORT
#endif  // defined(BAR_IMPLEMENTATION)
#endif

#else
#define BAR_EXPORT
#endif

extern "C" BAR_EXPORT void Bar(void* ctx);

#endif  // CC_LIB_BAR_H_

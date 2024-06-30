#ifndef __STDDEF_H
#define __STDDEF_H

#pragma once

typedef __SIZE_TYPE__    size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __WCHAR_TYPE__   wchar_t;

#ifdef __cplusplus
#   define NULL __null
#else
#   define NULL ((void *)0)
#endif

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif // !__STDDEF_H

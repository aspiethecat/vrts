#ifndef VRTS_DEFS_H
#define VRTS_DEFS_H

#pragma once

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>

// Logical operators ‘and’, ‘or’, ‘not’.
#include <iso646.h>

#define loop while (true)

#define type_bits(t)   (sizeof(t) * CHAR_BIT)

#define type_signed(t) (! ((t)0 < (t)-1))
#define type_min(t) ((t) (!type_signed(t) ? (t)0 : ((t)1 << (type_bits(t) - 1))))
#define type_max(t) ((!type_signed(t) ? (t)-1 : (t) ~ (~(t)0 << (type_bits(t) - 1))))

// Applicable to static arrays only.
#define lengthof(x) (sizeof(x) / sizeof(*(x)))

#if !defined(min)
#define min(a, b) ((a) < (b) ? (a) : (b))
#endif

#if !defined(max)
#define max(a, b) ((a) > (b) ? (a) : (b))
#endif

#endif // !VRTS_DEFS_H

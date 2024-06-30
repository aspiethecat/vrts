#ifndef __STDBOOL_H
#define __STDBOOL_H

#pragma once

#ifndef __cplusplus
#if __STDC_VERSION__ < 202311L
#define bool _Bool
#define true 1
#define false 0
#endif // __STDC_VERSION__
#endif // !__cplusplus

#define __bool_true_false_are_defined 1

#endif // !__STDBOOL_H

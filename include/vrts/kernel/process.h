#ifndef __VRTS_KERNEL_PROCESS_H
#define __VRTS_KERNEL_PROCESS_H

#pragma once

#include <vrts/defs.h>

struct process
{
    int pid;
    int parent_pid;
    char *name;
};

#endif // !__VRTS_KERNEL_PROCESS_H

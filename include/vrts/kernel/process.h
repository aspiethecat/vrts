#ifndef VRTS_KERNEL_PROCESS_H
#define VRTS_KERNEL_PROCESS_H

#pragma once

#include <vrts/defs.h>

struct process
{
    int pid;
    int parent_pid;
};

#endif // !VRTS_KERNEL_PROCESS_H

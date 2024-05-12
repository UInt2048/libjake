#include <stdio.h> // stderr
#define LIBJAKE_KERNEL_BASE 0xfffffff007004000
#define LIBJAKE_LOG(fmt, args ...) fprintf(stderr, "[libjake] " fmt "\n", ##args)

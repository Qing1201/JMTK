#ifndef HOSTED_MMAP_H
#define HOSTED_MMAP_H

#define MMAP_KERNEL_START 0xC0000000

#define MMAP_KERNEL_VMSPACE_START \
                          0xD0000000
#define MMAP_KERNEL_VMSPACE_END \
                          0xFEFF0000

#define MMAP_PMM_BITMAP   0xFF000000

#define MMAP_PHYS_BASE (0x20000000UL)
#define MMAP_PHYS_END  (0x20100000UL) /* 16MB */

#endif

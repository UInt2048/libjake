#include <string.h> // memmem
#include <stdlib.h> // exit

#include "common.h"
#include "img.h"

#ifndef LIBJAKE_PATCHFINDER
#define LIBJAKE_PATCHFINDER
#define FAILED_TO_FIND() exit(1)
#define file2vm_sub(offset) jake_fileoff_to_vaddr(img,offset-(uint64_t)img->map)
#define file2vm(offset) jake_fileoff_to_vaddr(img,offset)
#define vm2file(addr) jake_vaddr_to_fileoff(img,addr)
uint64_t libjake_find_str(jake_img_t syms, char * str);
uint64_t find_xref(jake_img_t syms,uint64_t start_addr,uint64_t xref_address);
uint64_t find_trustcache(jake_img_t syms);
uint64_t find_swapprefix(jake_img_t syms);
uint64_t find_realhost(jake_img_t syms);
uint64_t find_zonemap(jake_img_t syms);
#define P_LOG_DBG(fmt, args ...) LIBJAKE_LOG(fmt,##args)
#endif

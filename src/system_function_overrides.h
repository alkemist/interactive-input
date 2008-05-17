#ifndef _SYSTEM_FUNCTION_OVERRIDES_H_
#define _SYSTEM_FUNCTION_OVERRIDES_H_

#include <sys/types.h>
#include <sys/select.h>

ssize_t read(int, void *, size_t) __asm("_read");
ssize_t read_unix2003(int, void *, size_t) __asm("_read$UNIX2003");
ssize_t read_nocancel_unix2003(int, void *, size_t) __asm("_read$NOCANCEL$UNIX2003");

ssize_t write(int, const void*, size_t) __asm("_write");
ssize_t write_unix2003(int, const void*, size_t) __asm("_write$UNIX2003");
ssize_t write_nocancel_unix2003(int, const void*, size_t) __asm("_write$NOCANCEL$UNIX2003");

int dup(int);

int close(int);

int select(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict) __asm("_select");
int select_darwinextsn(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict) __asm("_select$DARWIN_EXTSN");
int select_darwinextsn_nocancel(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict) __asm("_select$DARWIN_EXTSN$NOCANCEL");
int select_nocancel_unix2003(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict) __asm("_select$NOCANCEL$UNIX2003");
int select_unix2003(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict) __asm("_select$UNIX2003");

#endif /* _SYSTEM_FUNCTION_OVERRIDES_H_ */
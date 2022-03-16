#include <stddef.h>
#include <stdlib.h>
#include <alloca.h>

#define __unlikely(x) x
#define __likely(x) x


extern int __VERIFIER_nondet_int(void);

size_t strlen(const char *s) {
  register size_t i;
  if (__unlikely(!s)) return 0;
  for (i=0; __likely(*s); ++s) ++i;
  return i;
}

char* strcat(register char* s,register const char* t)
{
  char *dest=s;
  s+=strlen(s);
  for (;;) {
    if (!(*s = *t)) break; ++s; ++t;
#ifndef WANT_SMALL_STRING_ROUTINES
    if (!(*s = *t)) break; ++s; ++t;
    if (!(*s = *t)) break; ++s; ++t;
    if (!(*s = *t)) break; ++s; ++t;
#endif
  }
  return dest;
}


int main(){

  int in_len = __VERIFIER_nondet_int();
  if(in_len < 1){return 1;}
  char* in = alloca(in_len);
  in[in_len-1]=0;

  int out_len = __VERIFIER_nondet_int();
  if(out_len < 1){return 1;}
  int out_end = __VERIFIER_nondet_int();
  if(out_len < out_end+in_len){return 1;}
  char* out = alloca(out_len);
  out[out_end]=0;

  return (int) strcat(in, out);
}

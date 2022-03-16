#include <stddef.h>
#include <stdlib.h>
#include <alloca.h>

#define __unlikely(x) x
#define __likely(x) x


extern int __VERIFIER_nondet_int(void);


char * strcpy (char *s1, const char *s2) {
    char           *res = s1;
    while ((*s1++ = *s2++));
    return (res);
}

int main(){
  int in_len = __VERIFIER_nondet_int();
  if(in_len < 1){return 1;}
  char* in = alloca(in_len);
  in[in_len-1]=0;
  int out_len = __VERIFIER_nondet_int();
  if(out_len < in_len){return 1;}
  char* out = alloca(out_len);
  return (int) strcpy(out, in);
}

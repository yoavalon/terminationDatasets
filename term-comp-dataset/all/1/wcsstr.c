#include <stddef.h>
#include <stdlib.h>
#include <alloca.h>

#define __unlikely(x) (x)
#define __likely(x) (x)
#define wchar_t int

extern int __VERIFIER_nondet_int(void);

wchar_t *wcsstr(const wchar_t *haystack, const wchar_t *needle) {
  size_t i,j;
  for (i=0; haystack[i]; ++i) {
    //for (j=0; haystack[i+j]==needle[j]; ++j) ; //actually not memory safe
    for (j=0; needle[j] && haystack[i+j]==needle[j]; ++j) ; //this should be memsafe

    if (!needle[j]) return (wchar_t*)haystack+i;
  }
  return 0;
}


int main(){
  int in_len = __VERIFIER_nondet_int();
  if(in_len < 1){return 1;}
  wchar_t* hay = alloca(in_len);
  hay[in_len-1]=0;
  int out_len = __VERIFIER_nondet_int();
  if(out_len < 1){return 1;}
  wchar_t* needle = alloca(out_len);
  needle[out_len-1]=0;
  return (int) wcsstr(hay, needle);
}

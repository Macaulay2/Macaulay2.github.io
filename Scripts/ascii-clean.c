#include <stdio.h>
int main () {
  int n = 0, pos = 0;
  while (1) {
    int c = getchar();
    if (c == -1) break;
    pos++;
    if (c >= 32 && c < 127) continue;
    if (c == '\t') continue;
    if (c == '\r') continue;
    if (c == '\n') continue;
    n++;
    fprintf(stderr,"non-ascii character 0x%02x at position %d\n",c,pos);
    if (n >= 20) {
      fprintf(stderr,"too many, quitting\n");
      break;
    }
  }
  return n != 0;
}

/*
Local variables:
  compile-command: "scons"
End:
   */

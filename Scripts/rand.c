/* this program is no good, because it depends only on the pid */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main () {
     srand(getpid());
     printf("%5d\n",rand() & 0xffff);
     return 0;
}

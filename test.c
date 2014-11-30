#include <stdlib.h>
#include <stdio.h>
void main() {
char que[100];
char *wak;
wak = "/";
sprintf(que,"/bin/ls %s",wak);
system(que);
}

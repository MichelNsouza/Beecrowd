#include <stdio.h>
int main() {
    
    char alf[26] = {'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j','k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w', 'x', 'y', 'z'};
    int valor[26] = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    
    for(int i = 0; i < 26 ;i++){
    printf("%d e %c\n", valor[i], alf[i]);
    }
    return 0;
}
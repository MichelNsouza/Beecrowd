#include <iostream>

int main() {
    
    int A, B, C, D;
    //Leia 4 valores inteiros A, B, C e D. 
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    if(B > C && D > A &&  C + D > A + B && C > 0 && D > 0 && A%2 == 0){
        
       printf("Valores aceitos\n");
       
    }else{
        
       printf("Valores nao aceitos\n");
       
    }
    
    return 0;
}


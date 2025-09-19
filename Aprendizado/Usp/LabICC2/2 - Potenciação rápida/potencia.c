#include <stdio.h>

int interactive_sol(int n, int exp){

    int resultado = 1;
    int pot_dois = n;

    if(exp&1){ // se o primeiro bit do exp = 1, ent add o n^1 a ele
        resultado *= pot_dois;
    }
    exp >>= 1; // e faço o shift do bit

    // faço isso separado, pq se nao teria um problema com o pot_dois.

    while(exp > 0){ // agora para cada bit do exp vejo se preciso somar n^x, sendo as potencias de n multiplas de 2
        int devo_mul = exp&1;
        pot_dois *= pot_dois;
        pot_dois %= 1000;
        //printf("n [%d] pt2[%d] devo_mult(%d) \n",n,pot_dois,devo_mul);
        if(devo_mul){
            resultado *= pot_dois;
            resultado %= 1000;
            //printf("\n res(%d)",resultado);
        }
        exp >>= 1;
    }
    return resultado;
}

int recursive_sol(int n, int exp){
    if (exp == 0 || n == 1) return 1; // casos base
    if (exp == 1) return n % 1000; // caso base
    int half = recursive_sol(n, exp / 2);
    int result = (half * half) % 1000;
    if (exp % 2) result = (result * (n % 1000)) % 1000;
    return result;
}

// Nova função baseada na imagem
int interative_IA(int n, long long k) {
    int result = 1;
    int base = n % 1000;
    while (k > 0) {
        if (k % 2 == 1) {
            result = (result * base) % 1000;
        }
        base = (base * base) % 1000;
        k /= 2;
    }
    return result;
}

int main(){
    int n;
    long long k;
    scanf("%d %lld", &n, &k);

    printf("%d\n", interactive_sol(n, (int)k));
    printf("%d\n", recursive_sol(n, (int)k));
    int opt_result = interative_IA(n, k);
    if (opt_result == 0) {
        printf("0\n");
    } else {
        printf("%d\n", opt_result);
    }
    return 0;
}

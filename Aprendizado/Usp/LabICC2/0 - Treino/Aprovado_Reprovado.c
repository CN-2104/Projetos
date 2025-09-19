#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n<1){
        return 0;
    }

    int qnt = 0;
    float avg = 0;

    float in;
    float big = 0;

    for(int i = 0;i<n;i++){
        in = 0.0;
        scanf("%f", &in);
        if(in > 10 || in < 0){
            printf("Nota fora do intervalo.");
            return 0;
        }
        if(in>=5){
            qnt++;
        }
        if(in>big){
            big = in;
        }
        avg += in;
    }
    avg /= (float)n;
    printf("Foram %d aprovado(s). Maior nota = %.2f. Nota m\u00E9dia = %.2f.",qnt,big,avg);
}

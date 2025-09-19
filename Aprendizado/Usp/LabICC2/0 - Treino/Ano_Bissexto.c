#include <stdio.h>

int DiasNoMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {

    const char* Mes[] = {
    "",         // placeholder for index 0, since janeiro=1
    "janeiro",
    "fevereiro",
    "marco",
    "abril",
    "maio",
    "junho",
    "julho",
    "agosto",
    "setembro",
    "outubro",
    "novembro",
    "dezembro"
    };

    char str[100];
    int bis = 0; // not bissexto by standard
    int numvalid = 1; // valid by standard
    fgets(str, 100, stdin);

    int dia = (str[0] - '0') * 10 + (str[1] - '0');
    int mes = (str[3] - '0') * 10 + (str[4] - '0');
    int ano = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + (str[9] - '0');


    if(ano%4 ==0 && (ano % 100 !=0 || ano % 400 == 0)){
        bis = 1;
        DiasNoMes[1]++;
    }

    if (dia > DiasNoMes[mes-1]) {
        numvalid = 0;
    }

    printf("%d %s. %sxiste o dia %d em %s.\n",ano, bis ? "\u00E9 bissexto" : "n\u00E3o \u00E9 bissexto",numvalid ? "E" : "N\u00E3o e", dia, Mes[mes]);
}

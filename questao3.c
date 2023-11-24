#include <stdio.h>
#include <string.h>





int main(){
 char placas[8];
 char dias[13];

 scanf("%8[^\n]", placas);
 scanf("%13[^\n]", dias);

    switch(char placa ){
        case 0: case 1:
            if(strcmp(dia, "SEGUNDA-FEIRA") == 0){
                printf("%s nao pode circular segunda-feira\n", placa);
            }else{
                printf("%s pode circular segunda-feira\n", placa);
            }
            break;
        case 2: case 3:
            if(strcmp(dia, "TERCA-FEIRA") == 0){
                printf("%s nao pode circular terca-feira\n", placa);
            }else{
                printf("%s pode circular terca-feira\n", placa);
            }
            break;
        case 4: case 5:
            if(strcmp(dia, "QUARTA-FEIRA") == 0){
                printf("%s nao pode circular quarta-feira\n", placa);
            }else{
                printf("%s pode circular quarta-feira\n", placa);
            }
            break;
        case 6: case 7:
            if(strcmp(dia, "QUINTA-FEIRA") == 0){
                printf("%s nao pode circular quinta-feira\n", placa);
            }else{
                printf("%s pode circular quinta-feira\n", placa);
            }
            break;
        case 8: case 9:
            if(strcmp(dia, "SEXTA-FEIRA") == 0){
                printf("%s nao pode circular sexta-feira\n", placa);
            }else{
                printf("%s pode circular sexta-feira\n", placa);
            }
            break;
            case 10: case 11:
            if(strcmp(dia, "SABADO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            }
            break;
            case 12: case 13:
            if(strcmp(dia, "DOMINGO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            }
            break;
    
    

    }

    return 0;
}
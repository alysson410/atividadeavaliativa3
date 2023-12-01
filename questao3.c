#include <stdio.h>
#include <string.h>
#include <ctype.h>

char validaultimodigito(char* placa){
    int ultima_posicao = strlen(placa) - 1;
    return placa[ultima_posicao];
    
}

    int valida_placa(char placa[]){

        // checando placa antiga (LLL-NNNN)
        if(strlen(placa) == 8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && 
            placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
                
            }else if(strlen(placa) == 8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && 
            isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){

            }else{
                return 1;
            }
   
    }


// isalpha() checar letras
// isdigit() checar numeros

int main(){
 char placa[8];
 char dia[13];
 

 scanf("%8[^\n]", placa);
 scanf(" %13[^\n]", dia);

char ultimo_digito = validaultimodigito(placa);


if(valida_placa(placa) == 1){
    printf("Placa invalida\n");
}
 
 

            if(strcmp(dia, "SABADO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            }
            
            
            else if(strcmp(dia, "DOMINGO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            } else{
switch(ultimo_digito){
        
        case '0': case '1':
            if(strcmp(dia, "SEGUNDA-FEIRA") == 0){
                printf("%s nao pode circular segunda-feira\n", placa);
            }else{
                printf("%s pode circular segunda-feira\n", placa);
            }
            break;
        case '2': case '3':
            if(strcmp(dia, "TERCA-FEIRA") == 0){
                printf("%s nao pode circular terca-feira\n", placa);
            }else{
                printf("%s pode circular terca-feira\n", placa);
            }
            break;
        case '4': case '5':
            if(strcmp(dia, "QUARTA-FEIRA") == 0){
                printf("%s nao pode circular quarta-feira\n", placa);
            }else{
                printf("%s pode circular quarta-feira\n", placa);
            }
            break;
        case '6': case '7':
            if(strcmp(dia, "QUINTA-FEIRA") == 0){
                printf("%s nao pode circular quinta-feira\n", placa);
            }else{
                printf("%s pode circular quinta-feira\n", placa);
            }
            break;
        case '8': case '9':
            if(strcmp(dia, "SEXTA-FEIRA") == 0){
                printf("%s nao pode circular sexta-feira\n", placa);
            }else{
                printf("%s pode circular sexta-feira\n", placa);
            }
            break;
}

            }
            
 

    return 0;
}


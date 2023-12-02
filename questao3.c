#include <stdio.h>
#include <string.h>
#include <ctype.h>


void converterMinusculo(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

char validaultimodigito(char* placa){
    int ultima_posicao = strlen(placa) - 1;
    return placa[ultima_posicao];
    
}



    int valida_placa(char* placa){

        // checando placa antiga (LLL-NNNN)
        if(strlen(placa) == 8 && isalpha(placa[0]) && isalpha(placa[1]) && 
        isalpha(placa[2]) && 
            placa[3] == '-' && isdigit(placa[4]) && 
            isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
                //placa (LLLNLNN)
                return 1;
            }else if(strlen(placa) == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && 
            isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
                return 1;
            } 
                return 0;
            
   
    }


// isalpha() checar letras
// isdigit() checar numeros

int main(){
 char placa[10];
 char dia[20];
 

 scanf("%s", placa);
 scanf("%s", dia);

char ultimo_digito = validaultimodigito(placa);
int placaValida = 1;
int diaValido = 1;

if(valida_placa(placa) == 0){
    printf("Placa invalida\n");
    placaValida = 0;
}

if (strcmp(dia, "SABADO") != 0 &&
         strcmp(dia, "DOMINGO") != 0 &&
          strcmp(dia, "SEGUNDA-FEIRA") != 0 &&
           strcmp(dia, "TERCA-FEIRA") != 0 &&
            strcmp(dia, "QUARTA-FEIRA") != 0 &&
            strcmp(dia, "QUINTA-FEIRA") != 0 &&
            strcmp(dia, "SEXTA-FEIRA")!= 0){
    printf("Dia da semana invalido\n");
    diaValido = 0;
}

if(placaValida && diaValido){

            if(strcmp(dia, "SABADO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            }
            
            
            else if(strcmp(dia, "DOMINGO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            } else{
switch(ultimo_digito){
        
        case '0': case '1':
            if(strcmp(dia, "SEGUNDA-FEIRA") == 0){
                converterMinusculo(dia);
                printf("%s nao pode circular %s\n", placa, dia);
            }else{
converterMinusculo(dia);
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case '2': case '3':
            if(strcmp(dia, "TERCA-FEIRA") == 0){
                converterMinusculo(dia);
                printf("%s nao pode circular %s\n", placa, dia);
            }else{
converterMinusculo(dia);
             printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case '4': case '5':
            if(strcmp(dia, "QUARTA-FEIRA") == 0){
converterMinusculo(dia);
                printf("%s nao pode circular %s\n", placa, dia);
            }else{
              converterMinusculo(dia);  
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case '6': case '7': 
            if(strcmp(dia, "QUINTA-FEIRA") == 0){
                converterMinusculo(dia);
                printf("%s nao pode circular %s\n", placa, dia);
            }else{
             converterMinusculo(dia);
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case '8': case '9':
            if(strcmp(dia, "SEXTA-FEIRA") == 0){
                converterMinusculo(dia);
                printf("%s nao pode circular %s\n", placa, dia);
            }else{
             converterMinusculo(dia);  
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
}

            }
}
 
 

            
 

    return 0;
}

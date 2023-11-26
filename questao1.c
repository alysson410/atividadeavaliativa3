#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valor_romano(char r){
  switch(r){
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
  }
}

int romano_para_decimal(char* romano){
  int n = strlen(romano); 
  int decimal = 0; 
  int i;
  for(i = 0; i < n; i++){
    int atual = valor_romano(romano[i]);
    int proximo = valor_romano(romano[i+1]); 
    if(atual < proximo){ 
      decimal -= atual;
    }else{ 
      decimal += atual;
    }
  }
  return decimal;
}

char* decimal_para_binario(int decimal){
  char* binario = (char*) malloc(33 * sizeof(char)); 
  int i = 0; 
  while(decimal > 0){
    binario[i] = (decimal % 2) + '0'; 
    decimal /= 2; 
    i++;
  }
  binario[i] = '\0'; 
  int j;
  for(j = 0; j < i/2; j++){
    char temp = binario[j];
    binario[j] = binario[i-j-1];
    binario[i-j-1] = temp;
  }
  return binario;
}

int main(){
  char romano[13];
  
  scanf("%s", romano);
  int decimal = romano_para_decimal(romano); 
  char* binario = decimal_para_binario(decimal);
  printf("%s na base 2: %s\n", romano, binario);
  printf("%s na base 10: %d\n", romano, decimal);
  printf("%s na base 16: %x\n", romano, decimal);
  
  free(binario);

  return 0;
}

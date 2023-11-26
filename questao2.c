#include <stdio.h>
#include <math.h>

//concluida
int main(){
int t;
double a;
double i;
double v;

scanf("%d", &t);
scanf("%lf", &a);
scanf("%lf", &i);



for(int j = 1; j <= t; j++){
  if(i != 0){
v = a * (1 + i) * (pow(1 + i, j) - 1) / i;
     printf("Montante ao fim do mes %d: R$ %.2lf\n", j, v);
     

  }else{
    return 0;
  }
}


    return 0;
}
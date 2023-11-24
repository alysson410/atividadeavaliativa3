#include <stdio.h>
#include <math.h>


int main(){
int t;
double a;
double i;
double v;

scanf("%d", &t);
scanf("%lf", &a);
scanf("%lf", &i);

v = a * (1 + i) * (pow(1 + i, t) - 1) / i;

for(int j = 1; j <= t; j++){
  if(i != 0){
     printf("Montante ao fim do mes %d: R$ %.2lf\n", j, a);
  }else{
    return 0;
  }
}


    return 0;
}

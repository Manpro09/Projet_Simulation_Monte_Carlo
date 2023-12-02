
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "TP3.h"

int main(void) {
    int i;
    unsigned long init[4]={0x123, 0x234, 0x345, 0x456}, length=4;
    init_by_array(init, length);
  
    /*
    printf("1000 outputs of genrand_int32()\n");
    for (i=0; i<1000; i++) {
      printf("%10lu ", genrand_int32());
      if (i%5==4) printf("\n"); 
    }
    
    printf("\n1000 outputs of genrand_real2()\n");
    for (i=0; i<1000; i++) {
      printf("%10.8f ", genrand_real2());
      if (i%5==4) printf("\n");
    }
    */
  /******************************************************/
//  double resultat;
 // long nb_points= 1000000 ;
 // resultat = simPi(nb_points);
 // printf("Simulation de PI :%f\n",resultat);
  int nb_exp=30;
  double Tab_exp[nb_exp];
  Experience_moyenne(Tab_exp , nb_exp);
  intervalle_confiance(Tab_exp, nb_exp);
    
  return 0;
    
  
}

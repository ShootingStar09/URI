#include <stdio.h>

int main()
 {
   int t,a,pa,pb;
   double ga,gb;

   scanf("%d",&t);
    for (int i = 0; i < t; i++) {
      scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb  );
      a = 0;
      while(pa <= pb && a <= 100){
        pa *= (ga/100) + 1.0;
        pb *= (gb/100) + 1.0;
        a++;
        if (a > 100) {
          printf("Mais de 1 seculo.");
      }
    }if(a <= 100){
        printf("%d anos.",a);
      }
     }
    return 0;
 }

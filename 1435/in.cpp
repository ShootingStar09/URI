#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n,i,j;


  while(1){
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    for ( i = 1; i <= n; i++) {

      for ( j = 1; j <= n; j++) {
        if ((i-1) + (j-1) < n) {
            if (i > j ) {
              (j == 1 ? printf("%3d",j ) : printf(" %3d",j ));
            }else{
              (j == 1 ? printf("%3d",i ) : printf(" %3d",i ));
            }
        }else{
          if(i < j){
            (j == 1 ? printf("%3d",(n - j)+1 ) : printf(" %3d",(n - j)+1 ));
          }else{
            (j == 1 ? printf("%3d",(n - i)+1 ) : printf(" %3d",(n - i)+1 ));
          }
        }
      }
      printf("\n" );
    }
    printf("\n" );
  }

  return 0;
}

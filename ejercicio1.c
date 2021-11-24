#include<stdio.h>
int main(){
 int m[2][3]={{0},{0}};
  int i=0,j=0;

  printf("ingrese los 6 valores");

  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
		scanf("%d",&m[i][j]);
	}
  }
  for(i=0;i<2;i++){
   for(j=0;j<3;j++){
    printf("%d\t",m[i][j]);
   }
   printf("\n");
  }

  return 0;
}

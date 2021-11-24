#include<stdio.h>
#include<math.h>
int main(){
 int m[2][3]={{0},{0}};
  int i=0,j=0,menor=pow(2,10),total=0;

  printf("ingrese los 6 valores: ");

  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
		scanf("%d",&m[i][j]);
	}
  }
 for(j=0;j<3;j++){
  m[0][j]=m[0][j]*4;
 }
 for(i=0;i<2;i++){
  m[i][2]=m[i][2]*3;
 }
 for(i=0;i<2;i++){
  for(j=0;j<3;j++){
   if(m[i][j]<menor){
     menor=m[i][j];
   }
  }
 }
 for(i=0;i<2;i++){
  for(j=0;j<3;j++){
   total+=m[i][j];
  }
 }
  for(i=0;i<2;i++){
   for(j=0;j<3;j++){
    printf("%d\t",m[i][j]);
   }
   printf("\n");
  }

   printf("el menor es %d\n",menor);
   printf("el valor total es: %d\n",total);

  return 0;
}

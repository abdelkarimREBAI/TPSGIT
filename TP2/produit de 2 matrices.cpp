
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
int n,i,j,l,c,k,r; 
int A[50][50];
int B[50][50];
int P[50][50]; 
 
printf("Donner le nombre des lignes de la matrice A\n"); 
scanf("%d",&l); 
printf("Donner le nombre des colonnes de la matrice A\n"); 
scanf("%d",&c); 
 
printf("Enter les elements de la matrice A\n");
for(i=0;i<l;i++)  
   for(j=0;j<c;j++)
     {
     printf("Enter la valeur de A[%d][%d]= ",i,j);
     scanf("%d",&A[i][j]);
     printf("\n");
     }
printf("\n===> Matrice A <===\n");
for (i=0;i<l;i++)
    {
     for(j=0;j<c;j++)
          printf("%7d", A[i][j]);
          printf("\n");
    }
 
printf("le nombre des lignes de la matrice B %d\n",c);

printf("Donner le nombre des colonnes de la matrice B\n"); 
scanf("%d",&k);
 
printf("Enter les elements de la matrice B\n");
for(i=0;i<c;i++)  
   for(j=0;j<k;j++)
     {
     printf("Enter la valeur de B[%d][%d]= ",i,j);
     scanf("%d",&B[i][j]);
     printf("\n");
     }
printf("\n===> Matrice B <===\n");
for (i=0;i<l;i++)
    {
     for(j=0;j<c;j++)
          printf("%7d", B[i][j]);
     printf("\n");
    }
 
 
for(i=0;i<l;i++)
   for(j=0;j<c;j++)        
       P[i][j]=A[i][j]*B[i][j];
       for(j=0;j<k;j++)        
          P[i][j]=P[i][j]+A[i][j]*B[i+1][j+1];
 
          /* voila le problème ici
          j'arrive pas à faire l'opération comme il faut */
 
printf("Le produit des matrices A et B est la matrice P : \n");
printf("\n===> Matrice P <===\n");
for (i=0;i<l;i++)
    {
     for(j=0;j<c;j++)
          printf("%7d", P[i][j]);
     printf("\n");
    }
 
  system("PAUSE");      
  return 0;
}

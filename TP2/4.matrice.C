#include<stdlib.h>
#include<string.h>

#include<stdio.h>
/*
void affiche_vecteur(int *vect,int dem)
{
	int i;
	//printf("( ");
	for(i=0;i<dem;i++)
	{
		printf("%d ",vect[i]);
	}
	printf(")\n");
	
}
*/
void saisie(int **matrice, int m, int n){
    int i, j;
     
    for (i=0; i<n; i++)
	    {
	
    for (j=0; j<m; j++)
        {
         printf("Coefficient[%d][%d] :",i,j);
         scanf("%d", &matrice[i][j]);
        }
        }
}
void affiche(int **mat, int m, int n)
{
     int i, j;
      
  
      printf("Matrice :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf(" %d ", mat[i][j]);
     printf("\n");
    }
}
int main()
{
int *mat2;
    
    int m, n;
    printf("Nombre colonne : ");
    scanf("%d", &m);
    printf("\n");
    printf("Nombre de ligne : ");
      scanf("%d", &n);
    printf("\n");
  //  saisie_matrice(mat, m, n);
  
    saisie(&mat2, m, n);
    printf("\n\n");
    printf("affichage de la matrice \n\n\n");
 //   affiche_matrice(mat, m, n);
 
    affiche(&mat2, m, n);
     
 return 0;

	
}


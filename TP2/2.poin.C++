#include<stdlibe>

main()
{
	// declaration du pointeur simple en c++
	int *pointeur;
	// declaration du double  pointeur  en c++
	int **pointeur;
	
	
	
	// allocation dynamique
	int *pi = new int;
	
	
	
	// un tableau
	int *tab []=new int [100];
	
	
	
	
	//liberrer memoire 
	delete pi;
	delete [] tab;
}

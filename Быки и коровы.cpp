#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
const int N=4;

int count;
int ones_place;
using namespace std;

void Generation_Number (int mas[]){
	int *active = (int *)malloc(sizeof(int) * N);
	int j=0;
	int k,i;
	mas[0]=rand()%9+1;
	active[0]=mas[0];
	for (j=1;j<N;j++){
		active[j]=10;
	}
	i=1;
	while (i<N){
		mas[i]=rand()%10;
		for (j=0;j<N;j++){
			if (mas[i]!=active[j])
			k++;
		}
		if (k==4){
			active[i]=mas[i];
			i++;
		}
		k=0;	
	}
	free (active);
}

main()
{
	srand (time (NULL));
	bool b;
	int *n = (int *)malloc(sizeof(int) * N);
	int *p = (int *)malloc(sizeof(int) * N);;
	int *u =(int *)malloc(sizeof(int) * N);;
	int q;	
	Generation_Number (n);
	//for (int i=0;i<N;i++){	
	//printf("%d ",n[i]);		
	//}
	printf("\n");
	while ( ones_place!=4){
		cout <<"go out  1-no/0-yes: ";
           				cin >> b;
            			if (b == false)
            			{
                			break;
            			}
		printf("Enter Number: for example->(1 2 3 4)\n");
	scanf("%d%d%d%d", &p[0], &p[1], &p[2], &p[3]);
		int c=0;
	 count=0;
	for (int i=0;i<N;i++){
		u[i]=11;
	}
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			if ((p[i]==n[j]) && (u[0]!=p[i]) && (u[1]!=p[i]) && (u[2]!=p[i]) && (u[3]!=p[i])){
				count++;
				u[c]=p[i];
				c++;
			}
		}
	}
	ones_place=0;
			for (int i=0;i<N;i++){
				for (int j=0;j<N;j++){
					if ((p[i]==n[i]) && (j==i)){
				ones_place++;
			}	
		}
	}
	q++;
	printf ("Cow=%d  Bull=%d",count,ones_place);
	printf("\n________________________________________________________________________\n");
	}
	system ("cls");
	if (ones_place==4){
	printf("You Win!!!! Number:%d%d%d%d     Trying=%d",n[0],n[1],n[2],n[3], q);
	}
	else {printf("You Lose!!!! Number:%d%d%d%d",n[0],n[1],n[2],n[3]);
	}
	free (n);
	free (p);
	free (u);
			
}




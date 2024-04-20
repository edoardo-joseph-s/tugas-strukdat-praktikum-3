#include <stdio.h>
#include <conio.h>

int main() {
    int data[]={1,6,2,9,12,87,43,11};
    int n=8;

    do {
        for(int i=0; i<n; i++)
            printf("%i ",data[i]);

        getch();
        printf("\n");

        for(int i=0; i>n-1; i++) 
            data[i]=data[i+1];

        n=n-1;

        printf("\n");
        if(n==0) printf("Data kosong!!!");
        
    } while(n!=1);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


        void InsertSort(int tab[],int i){

     for(int j=1;j<i;++j){

            int k=j;
            int temp=tab[k];
            while((k>0)&&(tab[k-1]>temp)){

                  tab[k]=tab[k-1];
                  --k;

                  }
                    tab[k]=temp;
            }
            }

        void BubbleSort(int tab[],int i){

           for(int j=1;j<i;++j){

    for(int k=i-1;k>=j;--k){
                if(tab[k-1]>tab[k]){
                    int temp=tab[k];
                    tab[k]=tab[k-1];
                    tab[k-1]=temp;

                                    }

                            }

                                }

                                            }

        void QuickSort(int tab[], int lewy, int prawy){
    if(prawy <= lewy) return;

    int i = lewy - 1, j = prawy + 1,
    os = tab[(lewy+prawy)/2];

    while(1)
    {

        while(os>tab[++i]);

        while(os<tab[--j]);

        if( i <= j){
            int temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
            }

        else
            break;
    }

    if(j > lewy)
    QuickSort(tab, lewy, j);
    if(i < prawy)
    QuickSort(tab, i, prawy);
}

        void FlagBubbleSort(int tab[],int i){

           bool flaga=true;

           for(int j=1;j<i;++j){
            flaga=false;
        for(int k=i-1;k>=j;--k){
                if(tab[k-1]>tab[k]){
                     flaga=true;
                    int temp=tab[k];
                    tab[k]=tab[k-1];
                    tab[k-1]=temp;

                                    }
}

            if(flaga==false) break;
                                }

           }

int main()
{

    clock_t start,stop;
    double czas;

    srand(time(NULL));
    FILE *f;
    f=fopen("Czasy.txt","w");
    for(int i=30000;i<=300000;i=i+30000){

        int* tab;
        tab =(int*) malloc(i * sizeof(int));

        int right=i-1;
        fprintf(f,"Tablica %d tysięcy \n\n",i);
        for(int j=0;j<i;++j){       //Zapelnienie tablicy kolejnymi liczbami całkowitymi zaczynając od 1
        tab[j]=j+1;

        }
        fprintf(f,"Kolejne Liczby Całkowite \n ");
        start=clock();
        InsertSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"InsertSort_Czas:   %lf s \n ",czas);

        start=clock();
        BubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"BubbleSort_Czas:   %lf s \n ",czas);

        start=clock();
        FlagBubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"FlagBubbleSort_Czas:%lf s \n ",czas);

        start=clock();
        QuickSort(tab,0,right);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"QuickSort_Czas:     %lf s \n\n ",czas);

        for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi
        tab[j]=rand();

        }

        fprintf(f,"Liczby Pseudolosowe całkowite \n ");
        start=clock();
        InsertSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"InsertSort_Czas:   %lf s \n ",czas);

        for(int j=0;j<i;++j){
        tab[j]=rand();

        }

        start=clock();
        BubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"BubbleSort_Czas:   %lf s \n ",czas);

        for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi
        tab[j]=rand();

        }

        start=clock();
        FlagBubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"FlagBubbleSort_Czas:%lf s \n ",czas);

        for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi
        tab[j]=rand();

        }

        start=clock();
        QuickSort(tab,0,right);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"QuickSort_Czas:    %lf s \n\n ",czas);

        for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi z przedia³u od 0 do 2
        tab[j]=rand()%3;

        }

        fprintf(f,"Liczby pseudolosowe całkowite z przedzialu od 0 do 2 \n ");
        start=clock();
        InsertSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"InsertSort_Czas:   %lf s \n ",czas);

         for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi z przedia³u od 0 do 2
        tab[j]=rand()%3;

        }

        start=clock();
        BubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"BubbleSort_Czas:   %lf s \n ",czas);

         for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi z przedia³u od 0 do 2
        tab[j]=rand()%3;

        }

        start=clock();
        FlagBubbleSort(tab,i);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"FlagBubbleSort_Czas:%lf s \n ",czas);

         for(int j=0;j<i;++j){       //Zapelnienie tablicy pseudolosowymi liczbami ca³kowitymi z przedia³u od 0 do 2
        tab[j]=rand()%3;

        }

        start=clock();
        QuickSort(tab,0,right);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        fprintf(f,"QuickSort_Czas:      %lf s \n\n ",czas);

             free(tab);

    }

        fclose(f);

    return 0;
}

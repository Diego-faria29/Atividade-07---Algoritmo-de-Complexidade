#include<iostream>  
using namespace std;  
int main ()  
{    
    int array[10] = { 8, 6, 3, 9, 5, 4, 2, 1, 7, 0};   //-------------1
       
    cout<<"\nLista aleatoria: \n";
    for(int i=0;i<10;i++)  //------------ N
    {  
        cout <<array[i]<<"\t";  //-----------1
    }                              
    for(int k=1; k<10; k++)  //---------- N 
    {  
        int temp = array[k];  //-------------1
        int j= k-1;             //-------------1
        while(j>=0 && temp <= array[j])  //-----------N
        {  
            array[j+1] = array[j];   //-------------1
            j = j-1;                     //-------------1
        }  
        array[j+1] = temp;             //-------------1
    }  
    cout<<"\nA Lista Crescente: \n";      //-------------1
    for(int i=0;i<10;i++)                //-------------N
    {  
        cout <<array[i]<<"\t";         //-------------1
    }
	cout<<"\n\n";  
}

//O(N) + O(N)* O(N) + O(N)

//2O(N) + O(N^2)

// Pior Caso: O(N^2)

// Melhor Caso: O(N)


// Mantem estabilidae pos preserva a ordem dos registros, cria uma ordenação sem
//sem precisar criar uma nova lista mantendo os algoritmos iguais na sua ordenacao.
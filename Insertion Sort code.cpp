#include<iostream>  
using namespace std;  
int main ()  
{    
	//10,2,0,14,43,25,18,1,5,45
	//1 ,2,3, 4, 5, 6, 7,8,9,10
	//10,9,8,7,6,5,4,3,2,1
    int array[10] = { 8, 6, 3, 9, 5, 4, 2, 1, 7, 0};   //-------------1
       
    cout<<"\nLista aleatória: \n";
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

// Algoritmo estável pois não altera a ordem de alg iguais
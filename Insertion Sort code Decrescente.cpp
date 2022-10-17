#include<iostream>  
using namespace std;  
int main ()  
{    
    int array[10] = {8, 6, 3, 9, 5, 4, 2, 1, 7, 0};   
       
    cout<<"\nLista aleatoria: \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<array[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = array[k];  
        int j= k-1;  
        while(j>=0 && temp >= array[j])  
        {  
            array[j+1] = array[j];   
            j = j-1;  
        }  
        array[j+1] = temp;  
    }  
    cout<<"\nLista ordenada de forma decrescente:\n";
    for(int i=0;i<10;i++)  
    {  
        cout <<array[i]<<"\t";  
    }  
}
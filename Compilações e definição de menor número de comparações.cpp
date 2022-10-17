#include<iostream>
using namespace std;
int main ()
{

    int i, j,temp,aux=0;
    int a[10] 		= {8, 6, 3, 9, 5, 4, 2, 1, 7, 0};
    int array[10] = {8, 6, 3, 9, 5, 4, 2, 1, 7, 0}; 
    cout <<"____ BUBBLE SORT ___\n";
    cout <<"Lista aleatoria:\n";
    for(i = 0; i<10; i++) {
        cout <<a[i]<<"\t";
    }
    cout<<endl;
    for(i = 0; i<10; i++) {
    for(j = i+1; j<10; j++)
    {
        if(a[j] < a[i]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    aux++;
    }
    cout <<"Lista ordenada:\n";
    for(i = 0; i<10; i++) {
    cout <<a[i]<<"\t";
    }
    
    cout<<"\nNumero necessario para Bubble Sort ordenar: "<<aux<<endl;
          
    cout<<"\n\n=================================================================\n\n"<<endl;
        int end2 = 0;
        cout <<"\n______INSERTION SORT______\n";
        cout<<"Lista aleatoria: \n";
        for(int i=0;i<10;i++)  
        {  
            cout <<array[i]<<"\t";  
        }    
        for(int k=1; k<10; k++)   
        {  
            int temp = array[k];  
            int j= k-1;  
            while(j>=0 && temp <= array[j])  
            {  
                array[j+1] = array[j];   
                j = j-1;
                end2 ++;  
            }  
            array[j+1] = temp;  
        }  
        cout<<"\nA lista ordenada: \n";
        for(int i=0;i<10;i++)  
        {  
            cout <<array[i]<<"\t";  
        }
        cout<<"\nNumero necessario para Insertion Sort ordenar: "<<end2;
        cout<<"\n\n"; 

    return 0;
}
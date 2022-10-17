#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[10] = { 8, 6, 3, 9, 5, 4, 2, 1, 7, 0};
   cout <<"Lista aleatória:\n";
   for(i = 0; i<10; i++) { //----------------N
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {  //----------------N
   for(j = i+1; j<10; j++) //-------------------N
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Lista ordenada de forma Crescente:\n";
for(i = 0; i<10; i++) { //-----------------N
   cout <<a[i]<<"\t";
}
return 0;
}

// Melhor caso O(N)
// Pior caso O(N^2)

// Mantem estabilidae pos preserva a ordem dos registros, cria uma ordenação sem
//sem precisar criar uma nova lista mantendo os algoritmos iguais na sua ordenacao.
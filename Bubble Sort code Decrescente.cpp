#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[10] = {8, 6, 3, 9, 5, 4, 2, 1, 7, 0};
   cout <<"Lista aleatoria:\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] > a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Lista ordenada de forma decrescente:\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
return 0;
}
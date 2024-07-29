#include<iostream>
using namespace std;
long int D;

int main(){
   
   char A;
   int B;
   static short int C;
   float E;
   double F;
   wchar_t G;
    A = 'T';
    B = 93;
    C = 46;
    D = 5;
    E = 8.22;
    F = 102.22;
    cout<<"Size of char: "<<sizeof(A)<<endl;
    cout<<"Size of int: "<<sizeof(B)<<endl;
    cout<<"Size of short int: "<<sizeof(C)<<endl;
    cout<<"Size of long int: "<<sizeof(D)<<endl;
    cout<<"Size of float: "<<sizeof(E)<<endl;
    cout<<"Size of double: "<<sizeof(F)<<endl;
    cout<<"Size of wchar_t: "<<sizeof(G)<<endl;   
}
#include <fstream>
#include <iostream>

using namespace std;

int iterativeFactorial(int n) {
   int p=1;
   for (int i=1;i<=n;i++){
      p*=i;
   }
   return p;
}

int recursiveFactorial (int n) {
   if(n==1) return 1;
   else return (n*recursiveFactorial(n-1));
}

int EMEfactorial (int n) {
   if(n==1) return 1;
   else return EMEfactorial(n
int NustFactorial (int n) {
   return n*NustFactorial(n-1);
}

int main (){
   int n;
   cout << "Enter the number: "; 
   cin >> n;
   cin.ignore();
   //cout<<iterativeFactorial(n)<<endl;
   cout<<recursiveFactorial(n)<<endl;
   //cout<<NustFactorial(n)<<endl;
   cout<<EMEfactorial(n)<<endl;
   
}

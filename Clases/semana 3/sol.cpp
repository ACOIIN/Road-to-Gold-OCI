#include <bits/stdc++.h>
using namespace std;

int main() {
   unordered_set<string> cartas;
   vector<string> letras;
   unordered_set<string> desecho;
   int n, k;

   cin>>n>>k;
   for(int i=0; i<n; i++) {
     string s;
     cin >> s;
     cartas.insert(s);
     letras.push_back(s);
   }
   //int r = 0;
   
   
   
   for (int i = 0; i<= n -2;i++){
     for(int j = i+1; j<=n-1; j++ ){
       vector<string> grupo;
       grupo.push_back(letras[i]);
       grupo.push_back(letras[j]);
       string la_carta;
       
       for (int count = 0; count< k ; count++){
         
         if(letras[i][count]==letras[j][count])
         {
           la_carta+=letras[i][count];
           
         } 
         else
         {
           if((letras[i][count]=='S' && letras[j][count]=='T') || (letras[i][count]=='T' && letras[j][count]=='S')){
             la_carta+= 'E';
                                  
           }
           if((letras[i][count]=='E' && letras[j][count]=='T') || (letras[i][count]=='T' && letras[j][count]=='E' )){
             la_carta+= 'S';
           }
           if((letras[i][count]=='E'  && letras[j][count]=='S') || (letras[i][count]=='S' && letras[j][count]=='E' )){
             la_carta+= 'T';
           }
         }
       }
       if (cartas.count(la_carta)){
         grupo.push_back(la_carta);
         sort(grupo.begin(), grupo.end());
         //cout << grupo[0] <<" " << grupo[1] <<" " << grupo[2] << '\n';
         desecho.insert(grupo[0]+grupo[1]+grupo[2]);
       }
       
       //r += cartas.count(la_carta);
       
     }
   }
   
   cout<<desecho.size();
  

	return 0;
}









//uwu

#include <bits/stdc++.h> 
using namespace std; 
   
int main() 
{  
   fstream file; 
   file.open("first.txt",ios::out); 
  
   if(!file) 
   { 
       cout<<"Error in creating file!!!"; 
       return 0; 
   } 
  
   cout<<"File created successfully."; 
   file.close(); 
  
   return 0; }
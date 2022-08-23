#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <ctype.h>

using namespace std;
 
void find(string);
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string test;
    cout<<"Введите слово: ";
    cin>>test;
    find(test);
}
 
void find(string tofind)
{
    ifstream dict("russian.txt"); 
    if(!dict)
     exit(100500);
    string temp; 
 
    while(dict>>temp)

     if (temp==tofind)
     {
         cout<<"\nПравильно.\n";
         return;
     }
 
    dict.clear();
    dict.seekg(0);
 
   
    cout<<"\nНеправильно.\n";
 
 /*  while(dict>>temp)
    {
        if(temp.length()==tofind.length())
        {
            for (int i=0;i<temp.length();i++)
            {
                for (int j=0;j<temp.length();j++)
                {
                    
                    string dtemp=temp;
                    char c=dtemp[i];
                    dtemp[i]=dtemp[j];
                    dtemp[j]=c;
 
                   {
					
                    if (dtemp==tofind)
                     cout<<"\nВозможно имели в виду \""<<temp<<"\""<<endl;
                 }
                    break;
                }
            }
        }
    }
*/
    dict.close();
}

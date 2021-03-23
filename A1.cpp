#include<iostream>
#include<string.h>
using namespace std;

 char* concat(const char* a, const char* b){
    char* p;
    int dem =0;
    for(const char* cp =a; *cp!= '\0';cp ++){
        dem++;
    }
    for(const char* cp =b; *cp!= '\0';cp ++){
        dem++;
    }
    p = new char[dem];
    strcpy(p, a);
    strcat(p,b);
    delete p;
    return p;
}

int main(){
     char a[]="abc";
    char b[] = "def";
   cout << concat(a,b);

    return 0;
}

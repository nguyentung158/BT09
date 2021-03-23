#include<iostream>
#include<string.h>
using namespace std;

int sizee(const char a[]){
    char* p = new char;
    strcpy(p,a);
    int dem=0;
    for(char* it = p; *it != '\0';it++){
        dem++;
    }
    delete p;
    return dem;
}

string reverse(const char a[]){
    string s;
    for(int i = 0; i <sizee(a);i++){
        s.push_back(*(a  +sizee(a) -1-i ));

    }
    return s;
}

char* delete_char(const char a[], char c){
char* p = new char;
    strcpy(p,a);
    for(int i =0; i<sizee(p) ; i++){
        if(*(p +i ) == c){
            for(int j =i;j< sizee(p)-1;j++){
                *(p + j) = *(p+j+1);
            }
            *(p+sizee(p) -1) = '\0';
        }

    }
    delete p;
    return p;
}

char* pad_right(const char a[], int n){
    char* p = new char;
    strcpy(p,a);
    int  l = sizee(p);
    if(sizee(p) >= n) return p;
    else{
        for(int i = l ;i< n;i++ ){
                *(p +i ) = ' ';
        }
    }
    delete p;
    return p;
}

char* truncate(const char a[], int n){
    char* p = new char;
    strcpy(p,a);
    int l = sizee(p);
    if( l <= n) {
        return p;
    } else {
        for(int i =l-1; i>= n;i--){
            *(p + i ) = '\0';
        }
    }
    delete p;

    return p;
}

bool is_palindrome(char a[]){
    int l =sizee(a);
    for(int i =0; i<  l/2;i++){
        if(*(a +i) != *(a+l-1-i)){
            return false;
        }
        return true;
    }

}

char* trim_left(const char a[]){
char* p = new char;
    strcpy(p,a);
    int l =sizee(p);
    for(int i =0; i <l;i++){
        int dem =0;
        if(* (p + i) == ' '){
                dem++;
            for(int j =i;j<l-1;j++){
                *(p+ j ) = *(p+j+1);
            }
            *(p+ l-dem) = '\0';
            i--;
        } else {
        return p;
        }
    }
    delete p;
    return p;
}

char*  trim_right(const char a[]){
    char* p = new char;
    strcpy(p,a);
    int l = sizee(a);
    for(int i =l-1;i >=0;i--){
        if(*(p + i ) == ' '){
            *(p+i) = '\0';
        } else {
    return p;
    }
    }
    delete p;
    return p;
}

int main(){
    char a[] = "abcdefghi";
    cout << sizee(a) << endl;
    cout << reverse(a) << endl;
    cout << delete_char(a, 'a' ) << endl;
    cout << pad_right(a,14) << endl;
    cout << truncate(a, 6)<< endl;
    cout << is_palindrome(a) << endl ;
    char b[] = "   abc";
    cout << trim_left(b) << endl;
    char c[] = "abc   ";
    cout << trim_right(c);

}

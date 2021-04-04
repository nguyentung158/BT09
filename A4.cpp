#include<iostream>
using namespace std;
int main(){
    int *p;
    int*pp =new int;
    *pp =1;
    *p = *pp;
    delete pp;// do ta xoa con tro duoc cap phat bo nho dong nen chuong trinh khong dam bao tinh chinh xac
    cout << *p << ' '<< p;


}

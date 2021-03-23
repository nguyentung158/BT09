 #include<iostream>
 using namespace std;
 int main(){

 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;// loi giai phong bo nho qua som dan toi p2 tro vao vung khong con hieu luc
*p2 = 100;
 cout << *p2;
 delete p2;

 }

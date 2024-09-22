#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Chuong trinh giai phuong trinh bac nhat" << endl;
    cout << "Nhap he so a:";
    cin >> a;
    cout << "Nhap he so b:";
    cin >> b;
    double result = (-b)/a;
    cout << "Ket qau cua phuong trinh la X = " << result << endl;
    return 0;
}
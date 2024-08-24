#include<iostream>
using namespace std;

class matrix_sub {
    private:
    int a,b,c,d;

    public:
    matrix_sub(int a = 0, int b = 0, int c = 0, int d = 0):a(a),b(b),c(c),d(d){}
    void input(){
        cout<<"Enter the elements of 2x2 matrix is : "<<endl;;
        cin>> a >> b>> c >> d;
    }


    void display(){
        cout<<a<<"   "<<b<<endl;
        cout<<c<<"   "<<d<<endl;
    }

    matrix_sub operator-(matrix_sub m){
        return matrix_sub(a - m.a, b - m.b, c - m.c, d - m.d);
    }
};
int main(){

matrix_sub m1,m2,m3;

cout<<"Enter the first matrix is : "<<endl;
m1.input();

cout<<"Enter the second matrix is : "<<endl;
m2.input();

m3 = m1-m2;
cout << "Sub of matrices: " << endl;

m3.display();


return 0;
}
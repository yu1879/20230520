#include  <iostream>
#include  <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
#define RANGE(r) r>=1 &&r<=30
#define CAREA(r) pow(r,2)*PI
#define CPERIMETER(r) 2*r*PI
#define ERROR_MSG "SET Range:1 To 30"
int main(int args, char **argv) {
    bool flag=true;
    double r;
    do{
        cout<<"設定半徑值:";
        cin>>r;
        if(RANGE(r)){
            flag=false;
        }else{
            cout<<ERROR_MSG;
        }
    }while(flag);
    cout<<"\n半徑為:"<<r<<"求得的圓面積為:" <<fixed<<setprecision(2)<< CAREA(r)<<endl;
    cout<<"\n半徑為:"<<r<<"求得的圓面積為:" <<fixed<<setprecision(2)<< CPERIMETER(r)<<endl;

    return 0;

    return 0;
}
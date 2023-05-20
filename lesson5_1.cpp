#include  <iostream>

using namespace std;
template<typename T>
T add(T a,T b){
    return a+b;

}
template<class T>
T maxNum(T a,T b){
    return a>b?a:b;
}
template<class T>
void mySwap (T *a,T *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(int args, char **argv) {
    int a=10,b=15;
    cout<<"change before --value a="<<a<<",value b="<<b<<endl;
    mySwap(&a,&b);
    cout<<"change after --value a="<<a<<",value b="<<b<<endl;
    int x[]={9,7,5,3,1};
    int y[]={0,2,4,6,8};
    cout<<"change before --value array x= \n";
    for(int m=0;m<5;m++){
        cout<<x[m]<<"\t";
    }
    cout<<endl;
    cout<<"change before --value array y= \n";
    for(int m=0;m<5;m++){
        cout<<y[m]<<"\t";
    }
    for(int m=0;m<5;m++){
        mySwap(x+m,y+m);
    }
    cout<<"\n====================\n";
    cout<<"change after --value array x= \n";
    for(int m=0;m<5;m++){
        cout<<x[m]<<"\t";
    }
    cout<<endl;
    cout<<"change after --value array y= \n";
    for(int m=0;m<5;m++){
        cout<<y[m]<<"\t";
    }
    //    cout<<"Set 二字元及二個整數 以空白分隔...";
//    int a,b;
//    char x,y;
//    cin>>x>>y>>a>>b;
//    cout<<"二個字元中較大者為:"<<maxNum(x,y)<<endl;
//    cout<<"二個字元中較大者為:"<<maxNum(a,b)<<endl;
//    string x="1234",y="5678";
//    cout<<add(1234,5678)<<endl;
//    cout<<add(12.34,56.78)<<endl;
//    cout<<add(x,y)<<endl;
    return 0;
}
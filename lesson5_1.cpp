#include  <iostream>

using namespace std;
template<typename T>
T add(T a,T b){
    return a+b;

}
template<typename T>
T maxNum(T a,T b){
    return a>b?a:b;
}
int main(int args, char **argv) {
    cout<<"Set 二字元及二個整數 以空白分隔...";
    int a,b;
    char x,y;
    cin>>x>>y>>a>>b;
    cout<<"二個字元中較大者為:"<<maxNum(x,y)<<endl;
    cout<<"二個字元中較大者為:"<<maxNum(a,b)<<endl;
//    string x="1234",y="5678";
//    cout<<add(1234,5678)<<endl;
//    cout<<add(12.34,56.78)<<endl;
//    cout<<add(x,y)<<endl;
    return 0;
}
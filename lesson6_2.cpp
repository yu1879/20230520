#include  <iostream>

using namespace std;
enum level{OK=60,GOOD=80,EXCELLENT=90
};
class Person{
private :
    int age;
public :
    string name;

    int height,weight;
    void walk(int n){
        cout<<"每天走的公里數為:"<<n<<"公里\n";
    }
    string toString(){
        return "姓名:"+name+",年齡:"+to_string(age)+"歲，身高"+to_string(height)+"公分,體重:"+to_string(weight)+"公斤\n";
    }
    void setAge(int age){
        if(age>25){
            this->age=25;
        }else{
            this->age=age;

        }
    }
    int getAge(){
        return age;
    }
};
int main(int args, char **argv) {

    Person p1;
    p1.name="蔡英文";
    p1.setAge(60);
    p1.height=180;
    p1.weight=90;
    cout<<p1.toString()<<endl;
    p1.walk(10);
//cout<<p1.getAge()<<endl;

    cout<<"\n=================\n";
    Person p2;
    p2.name="馬英九";
    p2.getAge();
    p2.height=180;
    p2.weight=90;
    cout<<p1.toString()<<endl;
    p2.walk(10);
//int score;
//cout<<"請輸入成績:"<<endl;
// cin>>score;
// if(score>=EXCELLENT){
// 	cout<<"非常棒\n";
// }else if(score>=GOOD){
// 	cout<<"很好\n";
//
// }else if(score>=OK){
//  	cout<<"尚可\n";
//
// }else{
//   	cout<<"有待加強\n";
//
// }
    return 0;
}
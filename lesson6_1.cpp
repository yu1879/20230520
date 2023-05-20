#include  <iostream>
#include <iomanip>

using namespace std;
struct student{
    int id;
    string name;
    int chi,eng,math,sum,rank;
};
void cswap(student*a,student*b);
int main(int args, char **argv) {
    int person;
    cout<<"請輸入學生人數:";
    cin>>person;
    student *p=new student[person];
    for(int m=0;m<person;m++){
        p[m].id=9001+m;
        cout<<"請輸入第"<<m+1<<"位同學姓名:" <<endl;
        cout<<"請輸入第"<<m+1<<"位同學的姓名:" <<endl;
        cin>>p[m].name;

        cout<<"請輸入第"<<m+1<<"位同學的國文成績:" <<endl;
        cin>>p[m].chi;

        cout<<"請輸入第"<<m+1<<"位同學的英文成績:" <<endl;
        cin>>p[m].eng;
        cout<<"請輸入第"<<m+1<<"位同學的數學姓名:" <<endl;
        cin>>p[m].math;

        p[m].sum=p[m].chi+p[m].eng+p[m].math;
        system("pause");
        system("cls");
    }
    cout<<"\n\n\t--------------------------巨匠學院成績單--------------------------\n\n" ;
    cout<<"\t學號\t姓 名\t國文\t英文\t數學\t總分\t名次\n";


    for(int m=0;m<person-1;m++){
        for(int x=m+1;x<person;x++){
            if(p[m].sum<p[x].sum){
                cswap(&p[m],&p[x]);
            }
        }
    }
    for(int m=0;m<person;m++){
        p[m].rank=m+1;
    }
    for(int m=0;m<person-1;m++){
        for(int x=m+1;x<person;x++){
            if(p[m].id>p[x].id){
                cswap(&p[m],&p[x]);
            }
        }
    }
    for(int m=0;m<person;m++){
        cout<<"\n\t"<<p[m].id<<"\t"<<p[m].name<<"\t"<<setw(4)<<p[m].chi<<"\t"<<setw(4)<<p[m].eng<<"\t"<<setw(4)<<p[m].math<<"\t"<<setw(4)<<p[m].sum<<"\t"<<setw(4)<<p[m].rank;
    }


//    student s1;
//    s1.id=9901;
//    s1.name="james";
//    s1.chi=66;
//    s1.eng=99;
//    s1.math=77;
//    cout<<"座號:"<<s1.id<<endl;
//    cout<<"姓名:"<<s1.name<<endl;
//    cout<<"國文:"<<s1.chi<<endl;
//    cout<<"英文:"<<s1.eng<<endl;
//    cout<<"數學:"<<s1.math<<endl;

    return 0;
}
void cswap(student*a,student*b){
    student temp=*a;
    *a=*b;
    *b=temp;
} ;
#include<iostream>
#include<cstring>
using namespace std;
class string1
{
    char *s;
    int len;
    public:
    string1()
    {
        len=0;
        s=NULL;
    }
    string1(char *t)
    {
        len=strlen(t);
        s=(char *)malloc(len*(sizeof(char)));
        strcpy(s,t);
    }
    string1(const string1 &t)
    {
        len=t.len;
        s=new char[len+1];
        strcpy(s,t.s);
    }
    ~string1()
    {
        delete(s);
    }
    friend ostream& operator<<(ostream &cout,string1 s1);
    friend istream& operator>>(istream &cin,string1 &s1);
    string1 operator+(string1 s1)
    {
        string1 temp;
        temp.len=(len+s1.len);
        temp.s=new char[temp.len+1];
        int i=0;
      //  cout<<temp.len<<endl;
        for(i=0;i<len;i++)
        {
            temp.s[i]=s[i];
        }
        for(int j=0;j<s1.len;j++)
        {
            temp.s[i]=s1.s[j];
            i++;
        }
        temp.s[i]='\0';
     //   cout<<temp.s<<endl;
        return temp;
    }
    string1 operator=(string1 t)
    {
        len=t.len;
        s=new char[len+1];
        strcpy(s,t.s);
        return (*this);
    }
};
ostream& operator<<(ostream &cout,string1 s1)
{
    cout<<s1.s<<endl;
    return (cout);
}
istream& operator>>(istream &cin,string1 &s1)
{
    char temp[50];
    cin>>temp;
    s1.s=(char *)malloc(strlen(temp)*sizeof(char));
    strcpy(s1.s,temp);
    return cin;
}
int main()
{
    char temp[10];
    cin>>temp;
    string1 s1(temp);
    string1 s2(s1);
    string1 s3=s1+s2;
    string1 s4=s2;
    cout<<s1<<s2<<s3<<s4;
    return 0;
}


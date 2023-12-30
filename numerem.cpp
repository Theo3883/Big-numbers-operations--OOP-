//! includem header
#include "numerem.h"

using namespace std;
numerem::numerem()
{

}
numerem::numerem(numerem &a)
{
    n=a.n;
    x=a.x;
}
numerem::~numerem()
{

}

istream& operator>>(istream &is, numerem&r)
{
    string z="";
    is>>z;
    r.x=z;
    r.n=z.size();
    return is;
}
ostream& operator<< (ostream &os, numerem&r)
{
    os<<r.x;
    return os;
}
int operator< (numerem xx, numerem yy)
{
    string x,y;
    x=xx.x;
    y=yy.x;
    if(x.size()>y.size())
        return -1;
    if(x.size()<y.size())
        return 1;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]-'0'>y[i]-'0')
            return -1;
        if(x[i]-'0'<y[i]-'0')
            return 1;
    }
    return 0;
}
numerem operator+(numerem xx, numerem yy)
{
    string x,y;
     x=xx.x;
     y=yy.x;
     if (x.size() > y.size())
        swap(x, y);
    string rez = "";
    int n1 = x.size(), n2 = y.size();
    int diff = n2 - n1;
    int rest = 0;
    for (int i=n1-1; i>=0; i--)
    {
        int sum = ((x[i]-'0') +
                   (y[i+diff]-'0') +
                   rest);
        rez.push_back(sum%10 + '0');
        rest = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((y[i]-'0')+rest);
        rez.push_back(sum%10 + '0');
        rest = sum/10;
    }
    if (rest)
        rez.push_back(rest+'0');
    reverse(rez.begin(), rez.end());
    numerem temp;
    temp.x=rez;
    return temp;
}
bool numarulmaimic(string x, string y)
{
    int n1 = x.size(), n2 = y.size();
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
    for (int i = 0; i < n1; i++) {
        if (x[i] < y[i])
            return true;
        else if (x[i] > y[i])
            return false;
    }
    return false;
}
numerem operator- (numerem xx, numerem yy)
{
    string x,y;
     x=xx.x;
     y=yy.x;
    if (numarulmaimic(x, y))
        swap(x, y);
    string rez = "";
    int n1 = x.size(), n2 = y.size();
    int diff = n1 - n2;
    int rest= 0;

    for (int i = n2 - 1; i >= 0; i--) {
        int sub = ((x[i + diff] - '0') - (y[i] - '0')- rest);
        if (sub < 0) {
            sub = sub + 10;
            rest = 1;
        }
        else
            rest = 0;
        rez.push_back(sub + '0');
    }
    for (int i = n1 - n2 - 1; i >= 0; i--)
        {
        if (x[i] == '0' && rest)
            rez.push_back('9');
        int sub = ((x[i] - '0') - rest);
        if (i > 0 || sub > 0)
            rez.push_back(sub + '0');
        rest = 0;
    }
    reverse(rez.begin(), rez.end());
     while((rez[0]-'0')==0)
        rez.erase(rez.begin());
    numerem temp;
    temp.x=rez;
    return temp;
}
numerem operator* (numerem xx,int yy)
{
    string t ="",x;
    x=xx.x;
    int rest=0;
    for(int i=x.size()-1;i>=0;i--)
    {
            int d=(x[i]-'0');
            int c=((x[i]-'0')*yy)+rest;
            t.push_back((c%10)+'0');
            rest=c/10;
    }
    if(rest!=0)
        t.push_back(rest+'0');
    reverse(t.begin(),t.end());
    numerem temp;
    temp.x=t;
    return temp;
}
bool operator% (numerem xx,int v)
{
        string x;
        x=xx.x;
        if((x[x.size()-1]-'0')%2==0)
            return 0;
        return 1;
}



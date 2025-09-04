#include<iostream>
using namespace std;
char cOnvert (char name)
{
   char ans = name - 'a' + 'A';
   return ans;
}
int main ()
{
    char name;
    cin>>name;
    cout<<cOnvert(name);

}
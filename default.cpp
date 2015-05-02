#include<iostream>
#include<string>
#include<map>
using namespace std;

void _printSpacedStrings(string S, int index, int num_spaces)
{
    cout<<S[index];
    if((index < S.length-1) && (S.length - index - 1 > num_spaces))
    {
        if(num_spaces)
        {
            cout<<" ";
            _printSpacedStrings(S, index+1, num_spaces-1);
        }
        _printSpacedStrings(S, index+1, num_spaces);
    }
}

void printSpacedStrings(string S)
{
    for(int i=0; i<S.length-2; i++)
    {
        _printSpacedStrings(S, 0, i);
    }

}


int main(){
    string S;
    cin>>S;
    printSpacedStrings(string S);
    cout<<S;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    char tac[1000];
    cin>>tac;
    int n=strlen(tac);
    char word[10];
    int j=0;
    while(isalpha(tac[i]))
    word[j++]=tac[i++];
    word[j]='\0';
    char temp[10];
    strcpy(temp,word);
    if(tac[i]!='=')
    {
        cout<<"Not three address code";
        exit(0);
    }
    i++;
    j=0;
    while(isalpha(tac[i]))
    word[j++]=tac[i++];
    word[j]='\0';
    cout<<"\nMove r0"<<","<<word;
    char op=' ';
    if(!isalpha(tac[i]))
    op=tac[i++];
    j=0;
    while(isalpha(tac[i]))
    word[j++]=tac[i++];
     word[j]='\0';
    cout<<"\nMove r1"<<","<<word;
    if(op!=' ')
    {
        switch(op)
        {
            case '+':{
                cout<<"\nADD r0 r1";
                break;
            }
            case '-':{
                cout<<"\nSUB r0 r1";
                break;
            }
            case '*':{
                cout<<"\nMUL r0 r1";
                break;
            }
            case '/':{
                cout<<"\nDIV r0 r1";
                break;
            }
            default:{
                cout<<"Not three address code";
                exit(0);
            }
            
        }
    }
    cout<<"\nMove "<<temp<<",r0";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string shoes;
  
    getline(cin,shoes);
    cout<<shoes<<endl;

    int customers;
    cout<<"Enter no of customers here \n";
    cin>>customers;
    bool shoe;

    for(int i=0;i<customers;i++){
        char s;
        cin>>s;
        for(int j=0;j<shoes.length();j++){
            if(s==shoes[j]){
                cout<<"Ordered item is in stock"<<endl;
                char con;
                cout<<"Confirm order by pressing 0"<<endl;
                cout<<"Cancel order bu pressing 1"<<endl;
                cin>>con;
                if(con=='0'){
                    cout<<"Your order is placed"<<endl;
                    cout<<"Thanks for shopping"<<endl;
                    shoes[j]='@';
                    }else if(con=='1'){
                    cout<<"Thanks for showing your interest\nYour order is canceled....."<<endl;
                }shoe=true;
                  break;
            }else{
                shoe=false;
            }
        }if(shoe==false){
            cout<<"Sorry, ordered item is out of stock"<<endl;
        }
    }
    
    cout<<shoes;


    return 0;
}
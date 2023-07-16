/**/
#include<iostream>
#include<fstream>
#include<istream>
using namespace std;

class publication{
    public:
        int decision;
        string title;
        float price;
        
    
};
class books:public publication
{   public:
    int pages;
};

void dataentry_books(books);


class tapes:public publication
{   public:
    float playtime;
};

void dataentry_tapes(tapes);

void decisions(int decision)
    {
        if(decision==0){
            books book1;
            cout<<"Enter title of book"<<endl;
            cin.ignore();
            getline(cin,book1.title);
            cout<<"Enter price of the book"<<endl;
            cin>>book1.price;
            cout<<"Enter number of pages here"<<endl;
            cin>>book1.pages;
            dataentry_books(book1);
        }else if(decision==1){
            tapes tape1;
            cout<<"Enter title of cassette"<<endl;
            cin.ignore();
            getline(cin,tape1.title);
            cout<<"Enter price of the cassette"<<endl;
            cin>>tape1.price;
            cout<<"Enter playtime of cassette "<<endl;
            cin>>tape1.playtime;
            dataentry_tapes(tape1);
        }
    }
void dataentry_books(books book1)
{   fstream infile;
    infile.open("pubdata.txt",ios::in|ios::app);
    infile<<"Books--->\n"<<book1.title<<"\n"<<book1.price<<"\n"<<book1.pages<<"\n"<<endl;
    infile.close();
    
}
void dataentry_tapes(tapes tape1)
{   fstream infile;
    infile.open("pubdata.txt",ios::in|ios::app);
    infile<<"Tapes--->\n"<<tape1.title<<"\n"<<tape1.price<<"\n"<<tape1.playtime<<"\n"<<endl;
    infile.close();
}
int main()
{   
    
    int dec;
    cout<<"Select 0 for books\n       1 for cassettes\n";
    cin>>dec;
    decisions(dec);
    
   
    return 0;
}

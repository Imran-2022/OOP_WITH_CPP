#include<bits/stdc++.h>
using namespace std;

void createAndWriteFile(){
    string filename,content; 
    cin>>filename; 
    ofstream outfile(filename);
    if(!outfile)return;
    cin.ignore();
    while(true){
        if(getline(cin,content)){
            if(content.empty())break;
            outfile<<content<<endl;
        }
        else break;
    }
}
void readFile(){
    string filename; 
    cin>>filename; 
    cin.ignore();
    string line;
    ifstream inFile(filename);
    while(true){
        if(getline(inFile,line)){
            cout<<line<<endl;
        }else break;
    }

}

void appendToFile(){
    string filename;
    cin>>filename; 
    ofstream outFile(filename,ios::app);
    cin.ignore();
    string line;
    while(true){
        getline(cin,line);
        if(line.empty())return;
        outFile<<line<<endl;
    }
}

void deleteFile(){
   string filename; 
   cin>>filename;
   remove(filename.c_str());
}

int main(){
    int choice; 

    do{
        cout<<"\nFile Operations Menu\n";
        cout<<"1. create and write\n";
        cout<<"2. Read\n";
        cout<<"3. Append\n";
        cout<<"4. Delete\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1 : createAndWriteFile();break;
            case 2 : readFile();break;
            case 3 : appendToFile();break;
            case 4 : deleteFile();break;
            case 5 : cout<<"Exiting program.\n"; break;
            default: cout<<"Invalid choice ! Try again\n";
        }

    }while(choice!=5);

    return 0;
}
#include<bits/stdc++.h>
using namespace std; 

void createAndWriteFile(){

    string filename,line; 
    cout<<"Enter filename : "; 
    cin>>filename;
    cin.ignore(); // clear newline from buffer. 
    cout<<"Enter content (end with a blank line):\n";
    ofstream outfile(filename);

    if(!outfile){
        cout<<"Erorr creating file! \n";
        return; 
    }

    while(true){
        getline(cin,line);
        if(line.empty())break;
        outfile<<line<<"\n";
    }

    outfile.close();
    cout<<"File created and written successfully.\n"; 

}

void readFile(){

    string filename, line;
    cout<<"Enter filename to read : ";
    cin>>filename; 
    ifstream infile(filename);

    if(!infile){
        cout<<"Error : File does not exist! \n";
        return; 
    }

    cout<<"\n --- File content --- \n"; 

    while(getline(infile,line)){
        cout<<line<<"\n";
    }

    infile.close();
    cout<<"----------------------------\n";

}

void appendToFile(){

    string filename, line;
    cout << "Enter filename to append: ";
    cin >> filename;
    ofstream outfile(filename, ios::app);

    if (!outfile) {
        cout << "Error: File does not exist!\n";
        return;
    }
    cin.ignore();
    cout << "Enter text to append (end with a blank line):\n";

    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        outfile << line << "\n";
    }

    outfile.close();
    cout << "Text appended successfully.\n";

}

void deleteFile(){

    string filename; 
    cout<<"Enter filename to delete : "; 
    cin>>filename;
    if(remove(filename.c_str())==0){
        cout<<"File deleted successfully.\n";
    }else{
        cout<<"Error deleting file (file may not exist).\n"; 
    }

}


int main(){

    int choice ; 
    do{
        cout<<"\nFile operations menu\n";
        cout<<"1. Create and Write\n";
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
            case 5 : cout<<"Exiting program.\n";break;
            default : cout<<"Ivalid choice ! Try again \n";
        }
    }
    while(choice!=5);

    return 0; 
}
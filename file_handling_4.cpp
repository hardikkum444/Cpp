#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream hardikfile;
    hardikfile.open("file_handling_class.txt", ios::out);
    if (hardikfile.is_open()){
        hardikfile<<"hi my name is hardik\n";
        hardikfile<<"and i like to code\n";
        hardikfile.close();

    }
    else
        cout<<("File was not properly opned! ");

    hardikfile.open("file_handling_class.txt", ios::app);
    if (hardikfile.is_open()){
        hardikfile<<"hi my name is hardik\n";
        hardikfile<<"and i like to code\n";
        hardikfile.close();
    }

    return 0;

}

// so from this expample we get to learn that 

// 1) we only need to open the file once, or declare it once i.e, 'fstream hardikfile'
// 2)hardikfile is just a name for my file and me working on my file
// 3)hardikfile<< is used instead of cou<<
// 4) if you want to add something extra and not delete the previous data in a file, you need to use ios::app instead out ios::out



/*HERE IS A COOL EXAMPLE, WHERE YOU CAN ADD MULTIPLE WORDS TO YOUR FILE*/ 



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream myfile;
    myfile.open("praise_the_lord.txt",ios::out);
    if (myfile.is_open()){
        string name;
        int i, num;
        cout<<"how many words does your name have?"<<endl;
        cin>>num;
        cout<<"please type your name word by word"<<endl;
        while (i<num){
            cin>>name;
            myfile<<name<<" ";
            i++;
         }
    }

    myfile.close();

    //now to write the code, which reads what's written in the file

    myfile.open("praise_the_lord.txt",ios::in);
    if (myfile.is_open()){
        cout<<"so, here is what you have entered as your name in the txt file: "<<endl;
        string lines;
        while (getline(myfile,lines)){
            cout<<lines;
        }
        cout<<"\n";

    }



    return 0;
}

        
// im pretty proud of myself for creating this code, did it in my firt go 
// hehehehehe   

// also this code also reads what you have entered into the file!
// heheheheh
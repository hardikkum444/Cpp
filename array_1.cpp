// #include <iostream>
// using namespace std;

//this is a very basic code on how arrays actually work in cp
//it shows how you can create an aary in cpp

// int main(){

//     int array[]={23,24,25,26};
    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    // cout<<array[2]<<endl;
    // cout<<array[3]<<endl;
    // int mathmarks[4];
    // mathmarks[0]=71;
    // mathmarks[1]=90;
    // mathmarks[2]=81;
    // mathmarks[3]=41;

    // int i;
    // for(i<0;i<4;i++)
    // {
    //     cout<<mathmarks[i]<<endl;
    // }
    //you can also change the value of the array[n]
    // mathmarks[3]=98;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;


    //now we will print arrays with the help of a loop





 
//     return 0;

// }


#include <iostream>
using namespace std;

int main(){

     int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<mathMarks[i]<<endl;
    }


    return 0;


}
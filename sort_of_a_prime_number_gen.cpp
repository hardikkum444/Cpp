#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // srand(time(NULL));
    // int k = rand()%10;

    // if(k)
    
    // cout<<k<<endl;

    //prime number upto 10 


    int arr[20];

    arr[0] = 2;

    int i = 3;
    
    int count = 0;
    
    while (i < 9) {
        int jk = 1; 
        for (int j = 0; j <= count; j++) {
            if (i % arr[j] == 0) {
                jk = 0;
                break; 
            }
        }

        if (jk == 1) {
            count++;
            arr[count] = i;
        }
        i++;
    }

    cout<<"hi"<<endl;

    for(int i =0;i<=count;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    srand(time(NULL));
    int k = rand()%10;
    int d = k;
    //cout<<k<<endl;

    for(int i=0;i<count;i++)
    {
        if (d == arr[i])
        {
            cout<<k<<endl;
            break;
        
        }
    }


}







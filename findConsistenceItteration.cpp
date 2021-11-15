#include<iostream>
#include <fstream>

using namespace std;

long axisX[100000];
long axisY[100000]; 
long countClock = 0;
long currentHighestItteration = 0;

long evenOrOdd(long num){
    if(num % 2 == 0){
        num = num / 2;
    }
    else{
        num = (num * 3) + 1;
    }
    return num;
}

long iteration(long num){

    bool flag1 = false; 
    long count = 0;
    long initialNum = num;
    while(flag1 == false){
        num = evenOrOdd(num);
        cout<<num<<"  ";
        if(num == 1){
            flag1 = true;
        }
        /* if(flag4 == true && flag2 == true){
            if(num == 1){
                flag1 = true;
            }
            else{
                flag4 = false;
                flag2 = false;
                flag1 = false; 
            }
        } */
        count += 1;
    }

    countClock += 1;

    if(count>currentHighestItteration){
        axisY[countClock] = count;
        currentHighestItteration = count;
        axisX[count] = num;
    }
    return count;
}

int main(){
    bool flag1 = false; 
    long num;
    cout<<"Enter a number: ";
    cin>>num;
    long initialNum = num;
    long highestNum = 0;
    long highestItteration = 0;

    

    for(long i =0; i<= 100000; i++){
        long totalIteration = iteration(num);
        cout<<endl;
        cout<<"Total iteration is "<<totalIteration<<endl;
        cout<<"Encountered 4-2-1 loop!"<<endl;
        cout<<"Initial number was: "<<i<<endl;
        cout<<endl;
        if(totalIteration > highestItteration){
            highestItteration = totalIteration;
            initialNum = num;
        }
        num = num+1;
    }
    for(int i = 0; i<100000; i++){
        axisX[i] = i;
    }
    cout<<"X and Y axis = ";
    /* for(int i = 0; i<100000; i++){
        cout<<axisX[i]<<" "<<axisY[i]<<" ";
        cout<<endl;
    } */

    cout<<endl;
    cout<<endl;
    cout<<"Highest itteration was: "<<highestItteration<<endl;
    cout<<"For initial number "<<initialNum<<endl;

    ofstream myfile ("plots1-100000.txt");
    if (myfile.is_open())
    {
        myfile << "X,Y asis: \n";
        for(long i = 1; i < 100000;i++)
        {
            if(axisY[i] != 0){
                /* myfile << axisX[i]<<" "<<axisY[i]<<" "; */
                myfile<<axisY[i]<<" ";
            }
        }
        /* myfile << "\n \n Y asis: \n";
        for(long i = 0; i <= 100000;i++)
        {
            myfile << axisY[i]<<" ";
        } */
        myfile<<"\nHighest itteration was: "<<highestItteration<<"\n";
        myfile<<"For initial number "<<initialNum;
        
    }
    else cout << "Unable to open file";
    return 0;
    
}
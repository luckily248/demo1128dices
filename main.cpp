//
//  main.cpp
//  demo1128dices
//
//  Created by lucky on 11/28/17.
//  Copyright © 2017 luck. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"how many rolls u want:\n";
    cin>>n;
    srand(time(0));
    
    int chance[11];
    for (int i=0; i<11; i++) {
        chance[i]=0;
    }
    for (int i=0; i<n; i++) {
        switch ((rand()%6+1)+(rand()%6+1)) {
            case 2:
                chance[0]++;
                break;
            case 3:
                chance[1]++;
                break;
            case 4:
                chance[2]++;
                break;
            case 5:
                chance[3]++;
                break;
            case 6:
                chance[4]++;
                break;
            case 7:
                chance[5]++;
                break;
            case 8:
                chance[6]++;
                break;
            case 9:
                chance[7]++;
                break;
            case 10:
                chance[8]++;
                break;
            case 11:
                chance[9]++;
                break;
            case 12:
                chance[10]++;
                break;
                
            default:
                break;
        }
    }
    for (int i=0; i<11; i++) {
        cout<<i+2<<"-"<<chance[i]<<"-"<<chance[i]*100/n<<"%"<<"\n";
    }
    return 0;
}

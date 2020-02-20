#include<iostream>
using namespace std;
int main(){
    int totalbooks, totallibraries, deadline;
    cin>>totalbooks>>totallibraries>>deadline;
    int score[totalbooks];
    for(int i=0; i<totalbooks; i++){
        cin>>score[i];
    }
    int sign[totallibraries], books[totallibraries], scan[totallibraries], listofbooks[totallibraries][];
    for(int i =0; i<totallibraries; i++){
        cin>>books[i]>>sign[i]>>scan[i];
        for(int j=0; j<books[i]; j++){
            cin>>listofbooks[i][j];
        }
    }
    return 0;
}
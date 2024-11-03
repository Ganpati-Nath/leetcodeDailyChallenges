#include <bits/stdc++.h>
using namespace std;

bool rotateString(string& s, string& goal) {
        
    //taking two queues que1 and que2 for strings s and goal for storing elements...
    queue<char> que1, que2;

    //pushing elements of string s on queue que1...
    for(int ele = 0; ele < s.size(); ++ele){
        que1.push(s[ele]);
    }

    //pushing elements of string goal on queue que2...
    for(int ele = 0; ele < goal.size(); ++ele){
        que2.push(goal[ele]);
    }

    if(que1 == que2) return true; //base case...
        
    int possibleRotation = goal.size() - 1;
    while(possibleRotation != 0){

        char ch = que2.front(); //take first character of string goal... //STEP: 1
        que2.pop(); //pop it... //STEP: 2
        que2.push(ch); //push it... //STEP: 3

        if(que1 == que2){
            return true; //After performing above steps... return true if both are equal...
        }

        possibleRotation--;
    }
    return false;
    //Time complexity : O(n) or O(possibleRotation)...
    //Space complexity : O(n) or O(size of queue)...
}

int main(){

    string s = "abcde";
    string goal = "cdeab";

    if(rotateString(s, goal)){

        cout << "true";

    }

    else {

        cout << "false";
        
    }

    return 0;
}
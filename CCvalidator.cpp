#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
//here we check if string entered is correct and doesn't contain any alphabets.
bool isNumberString(string& num) {
    int len =num.length();
    for (int i = 0; i < len; i++) {
        if (num[i] < '0' || num[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string ccNumber;
    cout << "Write exit to 'exit' the program" << endl;
    
    while (true) {
        
        cout << "Please enter a Credit card Number to validate: ";
        cin >> ccNumber;
        
        if (ccNumber == "exit")
            break;
        
        else if (!isNumberString(ccNumber)) {
            cout << "Bad input! ";
            continue;
        }
        //algorithm explained in README.
        //starting of luhn algorithm from here:
        int len = ccNumber.length(),sum=0,digit=0;
       for(int i=len-1;i>=0;i--){
           int digit=ccNumber[i]-'0';
          if((len-i)%2==0){
              digit*=2;
              if(digit>9){
                  digit-=9;
              }
          }
           sum+=digit;
       }
       if(sum%10==0){
           cout<<"Credit card Number "<<ccNumber<<" is valid."<<endl;
       }else{
           cout<<"Credit card Number "<<ccNumber<<" is invalid."<<endl;
       }
        continue;        
    }

    return 0;
}
//You can check more projects on my GITHUB profile...Thanks.

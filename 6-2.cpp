#include <iostream>
#include <string>

using namespace std;

/*Write a value-returning function, isVowel, that returns the value true if a given character is a vowel and 
otherwise returns false.*/

bool isVowel(char x) 
{
    if(x == 'a'|| x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        return true;
    }
    return false;

}

int main() 
{
    char vowel;
    bool isVow;
    string vowTrueFalse;
    cout << "Enter a character: ";
    cin >> vowel;
    
    isVow = isVowel(vowel);

    if (isVow == false) {
        vowTrueFalse = "False";
    }
    else{
        vowTrueFalse = "True";
    }

    cout << "Your entry is a vowel: " << vowTrueFalse;

}
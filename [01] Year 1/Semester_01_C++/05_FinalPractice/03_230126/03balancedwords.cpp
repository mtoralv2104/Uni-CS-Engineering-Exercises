#include <iostream>
#include <array>
#include <string>

using namespace std;

bool isBalanced(string word);
bool isVowel(char a);
void checkStr(string str);


int main()
{



    string hilo;

    hilo=cin.get();

    checkStr(hilo);



return 0;
}

void checkStr(string str)
{
    string currentWord="";
    string balanced="";
    string nonbalanced="";
    int i=0;
    
    for(int k=0; k<str.size();k++)
    { 
        while (i < str.size() && str[i] != ' ') 
        {
            currentWord += str[i];
            i++;
        }

        if(isBalanced(currentWord))
        {
            balanced+=' ' + currentWord;
        }
        else
        {
            nonbalanced+=' ' + currentWord;
        }
        currentWord="";
        i++;
        k+=i;
    }

    cout << "Balanced: " << balanced<< endl;
    cout << "Unbalanced: " << nonbalanced<< endl;

}


bool isBalanced(string word)
{
    int vowel=0;
    int consonant=0;
    for(int i=0; i<word.size();i++)
    {
        if(isVowel(word[i]))
        {
            vowel++;
        }
        else{
            consonant++;
        }
    }

    return isBalanced;
}

bool isVowel(char a)
{
    bool vowel;
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u')
    {
        vowel = true;
    }
    else{
        vowel = false;
    }
    return vowel;
}
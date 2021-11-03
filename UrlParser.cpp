#include <bits/stdc++.h>
using namespace std;

string URL;

//Containing scheme, authority and path respectively
string scheme, authority, path;

int main(){
    cout << "Please enter a URL: ";
    cin >> URL;
    //Get the string, with the last character is :
    scheme = URL.substr(0,URL.find(':') + 1);
    //Get the authority from excluding scheme at the beginning and look for the / signified the end
    authority = URL.substr(scheme.length(),
         URL.find("/", scheme.length() + 2) - scheme.length());

    //Path is the rest of URL
    path = URL.substr(authority.length() + scheme.length());
    cout << "scheme = " << scheme << endl;
    cout << "authority = " << authority << endl;
    cout << "path = " << path << endl;

    system("pause");
}
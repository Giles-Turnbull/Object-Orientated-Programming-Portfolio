#include <iostream>
#include <vector>
using namespace std;

//Write a function template palindrome that takes as a parameter a const vector and returns true or false depending upon whether the vector does or does not read the same forwards as backwards 
template <typename T>   //template function
bool palindrome(const vector<T> &v) 
{
    for (int i = 0; i < v.size(); i++)  //loop through vector
    {
        if (v[i] != v[v.size() - 1 - i])    //if the first element isnt equal to the last element
        {
            return false;
        }
    }
    return true;
}

int main(){
    //Test the function template with the following vectors
    vector<int> v1 = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //Test if the vectors are palindromes
    cout << palindrome(v1) << endl;
    cout << palindrome(v2) << endl;
}
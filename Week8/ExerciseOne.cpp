#include <iostream>
#include <set>
#include <map>
using namespace std;
//implement a multi set to hold car prices
//implement a set to hold more car prices
//implement a map to hold car prices and makes

int main(){
    std::multiset<double> carPrices;
    std::set<double> carPrices2;
    carPrices.insert(12342.00);
    carPrices.insert(223942.00);
    carPrices.insert(234234.00);
    carPrices.insert(9856985.00);
    carPrices.insert(12342.00);
    //print out the prices
    for(auto it = carPrices.begin(); it != carPrices.end(); ++it){  //print out the prices
        cout << *it << endl;
    }
    cout << "------------------" << endl;
    carPrices2.insert(12342.00);
    carPrices2.insert(223942.00);
    carPrices2.insert(234234.00);
    carPrices2.insert(9856985.00);
    carPrices2.insert(12342.00);
    //print out the prices
    for(auto it = carPrices2.begin(); it != carPrices2.end(); ++it){  //print out the prices
        cout << *it << endl;
    }
    cout << "==========================" << endl;
    std::map<std::string, double> Cars;
    Cars["Ford"] = 39845.00;
    Cars["Toyota"] = 56907.00;
    Cars["Honda"] = 34095.00;
    Cars["Chevy"] = 23423.00;
    Cars["BMW"] = 234234.00;
    Cars["Ford"] = 39845.00;
    //print out the map
    for(auto it = Cars.begin(); it != Cars.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    cout << "------------------" << endl;
    std::multimap<std::string, double> Cars2;
    Cars2.insert(std::pair<std::string, double>("Ford", 39845.00));
    Cars2.insert(std::pair<std::string, double>("Toyota", 56907.00));
    Cars2.insert(std::pair<std::string, double>("Honda", 34095.00));
    Cars2.insert(std::pair<std::string, double>("Chevy", 23423.00));
    Cars2.insert(std::pair<std::string, double>("BMW", 234234.00));
    Cars2.insert(std::pair<std::string, double>("Ford", 39845.00));
    //print out the map
    for(auto it = Cars2.begin(); it != Cars2.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
}
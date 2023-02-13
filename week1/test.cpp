#include<iostream>

int main(){
    int *i = new int;
    *i = 0;
    int &j = *i;
    j++;
    std::cout << *i << std::endl; 
    return 0;
}
#include <iostream>

int main(){int entierUser;std::cin>>entierUser;std::cout<<entierUser<<" ";while(entierUser != 1){if(entierUser%2==0){entierUser/=2;}else{entierUser=entierUser*3+1;}std::cout<<entierUser<<" ";}return 0;}

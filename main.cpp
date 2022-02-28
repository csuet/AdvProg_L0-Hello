#include <iostream>
#include "hello.h"
string printGameOver()
{
    return "GameOver";
}
int main(){
    std::cout << printGameOver() << std::endl ;
}

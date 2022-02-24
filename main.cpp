#include <iostream>
#include "hello.h"

std::string printGameOver(){
    return "Game Over!";
}

int main(){
    std::cout << printGameOver() << std::endl ;
}


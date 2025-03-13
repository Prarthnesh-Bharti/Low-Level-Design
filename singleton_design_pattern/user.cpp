// Uses the Logger class (Main File).
#include <iostream>
#include "logger.hpp"
#include <thread>
using namespace std;

void user1log(){
   Logger *logger1 = Logger::getLogger();
   logger1->log("This is a message from user1");
}

void user2log(){
   Logger *logger2 = Logger::getLogger();
   logger2->log("This is a message from user2");
}

int main() {
    thread t1(user1log);
    thread t2(user2log);

    t1.join();
    t2.join();
    return 0;
}

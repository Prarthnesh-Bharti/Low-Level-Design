//Defines the Logger class (Implementation File).
#include <iostream>
#include "logger.hpp"
using namespace std;

// Initialize static variables
int Logger::ctr = 0;
Logger *Logger::loggerInstance = nullptr;
mutex Logger::mtx;

// private constructor runs only once
Logger::Logger() {
    ctr++;
    cout << "Logger instance created. Count: " << ctr << endl;
}

// Function to get the singleton instance
Logger* Logger::getLogger() {
  if (loggerInstance == nullptr) {
  mtx.lock(); // Lock the mutex
    if (loggerInstance == nullptr) {
        loggerInstance = new Logger(); // Create instance if it doesn't exist
    }
    mtx.unlock(); 
    // Unlock the mutex
    }
    return loggerInstance;
}

// Function to log messages
void Logger::log(string msg) {
    cout << "Logging: " << msg << endl;
}

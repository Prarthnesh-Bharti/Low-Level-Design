// Declares the Logger class (Header File).
#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <mutex>
using namespace std;

class Logger {
private:
 /*In the Singleton pattern, we use static members to ensure that the class itself, rather than individual objects, manages the instance.*/

    static int ctr; // Number of instances
    static Logger *loggerInstance; // Single instance pointer
    static mutex mtx; // Mutex for thread safety

    // Private constructor to prevent direct instantiation
    Logger();
    Logger(const Logger &);
    Logger operator=(const Logger &);

public:
    // Function to get the singleton instance
    static Logger *getLogger();

    // Function to log messages
    void log(string msg);
};

#endif 


    

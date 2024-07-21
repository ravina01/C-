#include<iostream>

using namespace std;

class LOG
{
public:
    const int LogLevelWarning =1;
    const int LogLevelError =0;
    const int LogLevelInfo =2;
private:
    int m_LogLevel;

public:
    void setLogLevel(int level)
    {
        m_LogLevel = level;
    }
    void error(const char* message)
    {
        if(m_LogLevel >= LogLevelError)
            std::cout<<"[ERROR]: "<<message<<std::endl;
    }
    void warn(const char* message)
    {
        if(m_LogLevel >= LogLevelWarning)
            std::cout<<"[WARNING]: "<<message<<std::endl;
    }
    void info(const char* message)
    {
        if(m_LogLevel >= LogLevelInfo)
            std::cout<<"[INFO]: "<<message<<std::endl;
    }
};

int main()
{
    LOG log;
    int LogLevelwarnings=1;
    log.setLogLevel(log.LogLevelWarning);
    log.warn("You have been warned!");
    return 0;
}
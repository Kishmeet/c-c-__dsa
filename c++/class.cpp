#include <iostream>
class Log
{
public:
      enum Level{LevelError,LevelWarning,LevelInfo};
// or you can use static const int
       /* const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;*/

private:
        Level m_LogLevel = LevelInfo;

public:
        void SetLevel(Level level       )
        {
                m_LogLevel = level;
        }
        void Error(const char *message)
        {
                if (m_LogLevel >= LevelError)
                        std::cout << "[ERROR]: " << message << std::endl;
        }
        void Warn(const char *message)
        {
                if (m_LogLevel >= LevelWarning)
                        std::cout << "[WARNING]: " << message << std::endl;
        }
        void Info(const char *message)
        {
                if (m_LogLevel >= LevelInfo)
                        std::cout << "[INFO]: " << message << std::endl;
        }
};
int main()
{
        Log log;
        // log.SetLevel(log.LogLevelWarning);
        log.SetLevel(Log::LevelWarning);
        log.Warn("Hello");
        log.Error("Hello");
        log.Info("Hello");
        return 0;
}
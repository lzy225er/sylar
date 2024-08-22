#include "log.h"

namespace sylar {



Logger::Logger(const std::string& name) 
    :m_name(name){

}


void addAppender(LogAppender::ptr appender){
    m_appenders.push_back(appender);
}
 
void delAppender(LogAppender::ptr appender){
    for(auto it = m_appenders.begin(); it != m_appenders.end(); ++it){
        m_appenders.erase(it);
        break;
    }
}

void Logger::log(LogLevel::Level, level, LogEvent::ptr event){
    if(level >= m_level) {
        for(suto& i : m_appenders) {
            i->log(level,event);
        }
    }
}

void Logger::debug(LogEvent::ptr event){
    log(LogLevel::DEBUG, event);
}

void Logger::info(LogEvent::ptr event){
    log(LogLevel::INFO, event);
}

void Logger::warn(LogEvent::ptr event){
    log(LogLevel::WARN, event);
}

void Logger::error(LogEvent::ptr event){
    log(LogLevel::ERROR, event);
}

void Logger::fatal(LogEvent::ptr event){
    log(LogLevel::FATAL, event);
}

FileLogAppender::FileLogAppender(const std::string& filename);
void FileLogAppender::log(LogLevel::Level level, LogEvent::ptr event) {

}
void StdoutLogAppender::log(LogLevel::Level level, LogEvent::ptr event) {
    if(level >= m_level){
        std::out <<
    }
}

};
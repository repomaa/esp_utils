#pragma once

#ifndef LOGLEVEL
#define LOGLEVEL 1
#endif

#if LOGLEVEL < 5
#define FATAL_LOGF(...) Serial.printf(__VA_ARGS__)
#define FATAL_LOGLN(string) Serial.println(string)
#endif

#if LOGLEVEL < 4
#define ERROR_LOGF(...) Serial.printf(__VA_ARGS__)
#define ERROR_LOGLN(string) Serial.println(string)
#endif

#if LOGLEVEL < 3
#define WARN_LOGF(...) Serial.printf(__VA_ARGS__)
#define WARN_LOGLN(string) Serial.println(string)
#endif

#if LOGLEVEL < 2
#define INFO_LOGF(...) Serial.printf(__VA_ARGS__)
#define INFO_LOGLN(string) Serial.println(string)
#endif

#if LOGLEVEL < 1
#define DEBUG_LOGF(...) Serial.printf(__VA_ARGS__)
#define DEBUG_LOGLN(string) Serial.prinln(string)
#endif

#ifndef FATAL_LOGF
#define FATAL_LOGF(...)
#endif

#ifndef FATAL_LOGLN
#define FATAL_LOGLN(string)
#endif

#ifndef ERROR_LOGF
#define ERROR_LOGF(...)
#endif

#ifndef ERROR_LOGLN
#define ERROR_LOGLN(string)
#endif

#ifndef WARN_LOGF
#define WARN_LOGF(...)
#endif

#ifndef WARN_LOGLN
#define WARN_LOGLN(string)
#endif

#ifndef INFO_LOGF
#define INFO_LOGF(...)
#endif

#ifndef INFO_LOGLN
#define INFO_LOGLN(string)
#endif

#ifndef DEBUG_LOGF
#define DEBUG_LOGF(...)
#endif

#ifndef DEBUG_LOGLN
#define DEBUG_LOGLN(string)
#endif

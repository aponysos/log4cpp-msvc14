#pragma once

void init_log();

#define ROOT_LOG()  (log4cpp::Category::getRoot())
#define DEBUG_LOG() (ROOT_LOG().debugStream())
#define INFO_LOG()  (ROOT_LOG().infoStream())
#define WARN_LOG()  (ROOT_LOG().warnStream())
#define ERROR_LOG() (ROOT_LOG().errorStream())
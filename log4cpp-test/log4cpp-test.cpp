// log4cpp-test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
  init_log();

  INFO_LOG() << "program begin";
  INFO_LOG() << "program end";

  return 0;
}


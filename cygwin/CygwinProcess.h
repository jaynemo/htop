#ifndef HEADER_CygwinProcess
#define HEADER_CygwinProcess
/*
htop - CygwinProcess.h
(C) 2015 Hisham H. Muhammad
Released under the GNU GPLv2, see the COPYING file
in the source distribution for its full text.
*/

#include "Settings.h"

#define Process_delete CygwinProcess_delete

Process* CygwinProcess_new(Settings* settings);

void CygwinProcess_delete(Object* cast);

#endif

/* Copyright (c) 2011 Los Alamos National Security, LLC.
 *                    All rights reserved.
 *
 * This program was prepared by Los Alamos National Security, LLC at Los Alamos
 * National Laboratory (LANL) under contract No. DE-AC52-06NA25396 with the U.S.
 * Department of Energy (DOE). All rights in the program are reserved by the DOE
 * and Los Alamos National Security, LLC. Permission is granted to the public to
 * copy and use this software without charge, provided that this Notice and any
 * statement of authorship are reproduced on all copies. Neither the U.S.
 * Government nor LANS makes any warranty, express or implied, or assumes any
 * liability or responsibility for the use of this software.
 */

#ifndef SMGC_BASE_UTIL_INCLUDED
#define SMGC_BASE_UTIL_INCLUDED

char *
smgc_get_time_str(void);

char **
smgc_base_util_dupargv(int argc,
                       char **argv);

void
smgc_base_util_freeargv(char **argv);

#endif /* ifndef SMGC_BASE_UTIL_INCLUDED */

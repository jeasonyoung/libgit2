/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_win32_compat__
#define INCLUDE_win32_compat__

#include <stdint.h>
#include <time.h>
#include <wchar.h>
#include <sys/stat.h>
#include <sys/types.h>

struct p_timespec {
	time_t tv_sec;
	long tv_nsec;
};

#define timespec p_timespec

struct p_stat {
	_dev_t st_dev;
	_ino_t st_ino;
	mode_t st_mode;
	short st_nlink;
	short st_uid;
	short st_gid;
	_dev_t st_rdev;
	uint64_t st_size;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
#define st_atime st_atim.tv_sec
#define st_mtime st_mtim.tv_sec
#define st_ctime st_ctim.tv_sec
};

#define stat p_stat

#endif /* INCLUDE_win32_compat__ */

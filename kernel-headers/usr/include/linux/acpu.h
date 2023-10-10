/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 * Definitions for Android Adaptive CPU (ACPU) support.
 */
#ifndef __ACPU_H
#define __ACPU_H

#include <linux/types.h>

struct acpu_stats {
	__u64 weighted_sum_freq;
	__u64 total_idle_time_ns;
};

#endif /* __ACPU_H */

/*
 * Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */

#ifndef _BSD_PPC_DISKLABEL_H_
#define _BSD_PPC_DISKLABEL_H_

#include <sys/appleapiopts.h>

#ifdef __APPLE_API_OBSOLETE
#define	LABELSECTOR	(1024 / DEV_BSIZE)	/* sector containing label */
#define	LABELOFFSET	0			/* offset of label in sector */
#define	MAXPARTITIONS	8			/* number of partitions */
#define	RAW_PART	2			/* raw partition: xx?c */

/* Just a dummy */
struct cpu_disklabel {
	int	cd_dummy;			/* must have one element. */
};

#endif /* __APPLE_API_OBSOLETE */

#endif /* _BSD_PPC_DISKLABEL_H_ */

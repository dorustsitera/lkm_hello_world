// SPDX-License-Identifier: GPL-2.0
/*
 * lkm_template - Loadable Kernel Module template
 *
 * A minimal LKM skeleton: init/exit hooks, pr_fmt, module metadata.
 * Intended as a starting point for out-of-tree kernel module development.
 *
 * Author:  D'Orus Tsitera
 * Date:    2026-07-02
 * Version: 0.1
 *
 * Tested on: Linux dorus 6.18.37 #1 SMP PREEMPT_DYNAMIC x86_64 GNU/Linux

 */

#define pr_fmt(fmt) "%s:%s(): " fmt, KBUILD_MODNAME, __func__

#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("D'Orus Tsitera");
MODULE_DESCRIPTION("a simple hello world lkm");
MODULE_LICENSE("GPL");	// or whatever
MODULE_VERSION("0.1");

static int __init lkm_template_init(void)
{
	pr_info("Hello lonely world !\n");
	return 0;		/* success */
}

static void __exit lkm_template_exit(void)
{
	pr_info("Goodebey lonely world !\n");
}

module_init(lkm_template_init);
module_exit(lkm_template_exit);


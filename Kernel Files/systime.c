#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>

asmlinkage int sys_my_xtime(struct timespec *cur_time)
{
	struct timespec ns;
        ns=current_kernel_time();	


	if(!access_ok(VERIFY_WRITE, cur_time, sizeof(struct timespec)))
	{
                printk(KERN_INFO "This is invalid space");
		return -EFAULT;
	}

	cur_time->tv_sec = ns.tv_sec;
	cur_time->tv_nsec = ns.tv_nsec;

	printk(KERN_INFO "current time in nanoseconds: %ld", cur_time->tv_nsec);
	
	return 0;
}
EXPORT_SYMBOL(sys_my_xtime); 

#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>

asmlinkage int sys_my_retincorrect(void)
{
	
		
        printk(KERN_INFO "REturning no value or incorrect value");	
	return -1;
}
EXPORT_SYMBOL(sys_my_retincorrect); 





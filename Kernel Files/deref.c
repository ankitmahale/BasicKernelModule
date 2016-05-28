#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>

asmlinkage int sys_my_deref(void)
{
	int *p=NULL;
        int i;
        *p=i;
        printk(KERN_INFO "DEREFERENCING A NULL POINTER");	
}
EXPORT_SYMBOL(sys_my_deref); 





#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>

asmlinkage int sys_my_libfunc()
{
	
	printf("Hello World !");
	printk(KERN_INFO "Printf used");
	return 0;
}
EXPORT_SYMBOL(sys_my_libfunc); 

#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>

asmlinkage int sys_my_divbyzero(void)
{
	int a=10;
	printk(KERN_ALERT "Division by Zero :%d", a/0);
	
	return 0;
}
EXPORT_SYMBOL(sys_my_divbyzero); 

#include <linux/linkage.h>
#include <linux/export.h>
#include <linux/time.h>
#include <asm/uaccess.h>
#include <linux/printk.h>
#include <linux/slab.h>
int fact(int n){
   
       return(n*fact(n-1));
 }



asmlinkage int sys_my_own(void)
{
       int num,f;
       num=5;
  f=fact(num);
  printk(KERN_INFO "This program is getting crashed");
  return 0;

           

	
}
EXPORT_SYMBOL(sys_my_own); 
















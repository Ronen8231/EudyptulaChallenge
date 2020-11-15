#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Ronen Hanukayev <ronenh8231@gmail.com>"
#define DRIVER_DESCRIPTION "My first linux kernel module :)"
#define DRIVER_LICENSE "GPL"

static int __init task1_init(void)
{
    printk(KERN_DEBUG "Hello World!\n");
    return 0;
}

static void __exit task1_exit(void)
{
    printk(KERN_DEBUG "Goodbye world.\n");
}

module_init(task1_init);
module_exit(task1_exit);

MODULE_LICENSE(DRIVER_LICENSE);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESCRIPTION);
//MODULE_SUPPORTED_DEVICE("testdevice");

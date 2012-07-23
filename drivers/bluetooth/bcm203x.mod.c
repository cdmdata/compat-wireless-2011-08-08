#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0x878c90d0, "usb_register_driver" },
	{ 0x2ad27d86, "usb_submit_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x8949858b, "schedule_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9d669763, "memcpy" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xebff25ef, "request_firmware" },
	{ 0x7a8c45fc, "usb_alloc_urb" },
	{ 0x4b599289, "bt_printk" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0e25551, "usb_free_urb" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x8304034c, "usb_kill_urb" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27219146, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F1B583377BDAE9AB965E047");

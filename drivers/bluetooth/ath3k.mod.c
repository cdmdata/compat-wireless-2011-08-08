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
	{ 0x3e3ef7b4, "usb_match_id" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0xebff25ef, "request_firmware" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1361778, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x4b599289, "bt_printk" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x1b9baa3e, "usb_control_msg" },
	{ 0x27219146, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "D7B3757A1B584E3DE758EB7");

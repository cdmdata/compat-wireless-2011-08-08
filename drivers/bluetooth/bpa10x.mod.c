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
	{ 0xd65f41fe, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xee6446bd, "usb_kill_anchored_urbs" },
	{ 0xfa93741f, "usb_unanchor_urb" },
	{ 0x4b599289, "bt_printk" },
	{ 0x2ad27d86, "usb_submit_urb" },
	{ 0x22fbdd22, "usb_anchor_urb" },
	{ 0xc0e25551, "usb_free_urb" },
	{ 0x59d1dae4, "skb_push" },
	{ 0x7a8c45fc, "usb_alloc_urb" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xeacf3f38, "hci_register_dev" },
	{ 0xe657f96d, "hci_alloc_dev" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x4fa2bcc5, "hci_free_dev" },
	{ 0xcc58593d, "hci_unregister_dev" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27219146, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4E025DDACF5A47084959544");

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
	{ 0x9214ed8a, "param_get_bool" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0x878c90d0, "usb_register_driver" },
	{ 0x6153b558, "usb_set_interface" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xeacf3f38, "hci_register_dev" },
	{ 0xfab4e210, "usb_driver_claim_interface" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xc630de68, "usb_ifnum_to_if" },
	{ 0xe657f96d, "hci_alloc_dev" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x3e3ef7b4, "usb_match_id" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fa2bcc5, "hci_free_dev" },
	{ 0x1aad7f98, "usb_driver_release_interface" },
	{ 0xcc58593d, "hci_unregister_dev" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xee6446bd, "usb_kill_anchored_urbs" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x87f6fc13, "compat_usb_get_from_anchor" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xd4ca726a, "compat_usb_scuttle_anchored_urbs" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x6a76386b, "hci_recv_fragment" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xc0e25551, "usb_free_urb" },
	{ 0xfa93741f, "usb_unanchor_urb" },
	{ 0x4b599289, "bt_printk" },
	{ 0x2ad27d86, "usb_submit_urb" },
	{ 0x22fbdd22, "usb_anchor_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7a8c45fc, "usb_alloc_urb" },
	{ 0x8949858b, "schedule_work" },
	{ 0x27219146, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,compat";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "12FB82AB782E30CDD160A6C");

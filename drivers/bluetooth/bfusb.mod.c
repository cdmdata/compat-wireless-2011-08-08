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
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0x9053df44, "skb_unlink" },
	{ 0x2ad27d86, "usb_submit_urb" },
	{ 0x7a8c45fc, "usb_alloc_urb" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xeacf3f38, "hci_register_dev" },
	{ 0xe657f96d, "hci_alloc_dev" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0xd1361778, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x1b9baa3e, "usb_control_msg" },
	{ 0xebff25ef, "request_firmware" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fa2bcc5, "hci_free_dev" },
	{ 0x4b599289, "bt_printk" },
	{ 0xcc58593d, "hci_unregister_dev" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xc0e25551, "usb_free_urb" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x8304034c, "usb_kill_urb" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x27219146, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "93C707635FFDC9028625A46");

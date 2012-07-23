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
	{ 0xc1f6d818, "no_llseek" },
	{ 0x5f3b4552, "misc_register" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0xd65f41fe, "hci_recv_frame" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x63963c96, "nonseekable_open" },
	{ 0xeacf3f38, "hci_register_dev" },
	{ 0xe657f96d, "hci_alloc_dev" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fa2bcc5, "hci_free_dev" },
	{ 0x4b599289, "bt_printk" },
	{ 0xcc58593d, "hci_unregister_dev" },
	{ 0x909ae033, "misc_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "7CF06B4F970A55146C8639D");

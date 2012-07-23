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
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0x4b599289, "bt_printk" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0xbd572bbe, "sdio_writesb" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xd65f41fe, "hci_recv_frame" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x43c3e165, "sdio_readsb" },
	{ 0x1ad89577, "sdio_readb" },
	{ 0x41498e6f, "sdio_claim_irq" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0x9566b5f5, "sdio_release_host" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0x2d5c981d, "sdio_release_irq" },
	{ 0x81a0983d, "sdio_writeb" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0x8949858b, "schedule_work" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xeacf3f38, "hci_register_dev" },
	{ 0xe657f96d, "hci_alloc_dev" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fa2bcc5, "hci_free_dev" },
	{ 0xcc58593d, "hci_unregister_dev" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "CAD66F44D1BAF1B52AA8ECC");

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
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x7c2146f2, "btmrvl_enable_ps" },
	{ 0xea6267fe, "btmrvl_register_hdev" },
	{ 0xc8c05cb1, "btmrvl_add_card" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xebff25ef, "request_firmware" },
	{ 0x664c78, "sdio_set_block_size" },
	{ 0x41498e6f, "sdio_claim_irq" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xd65f41fe, "hci_recv_frame" },
	{ 0x594c8bac, "btmrvl_process_event" },
	{ 0x4297f896, "btmrvl_check_evtpkt" },
	{ 0x43c3e165, "sdio_readsb" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xbd572bbe, "sdio_writesb" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe430a9a9, "btmrvl_interrupt" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x3939a99a, "btmrvl_remove_card" },
	{ 0xd960903d, "btmrvl_send_module_cfg_cmd" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0x2d5c981d, "sdio_release_irq" },
	{ 0x9566b5f5, "sdio_release_host" },
	{ 0x4b599289, "bt_printk" },
	{ 0x81a0983d, "sdio_writeb" },
	{ 0x1ad89577, "sdio_readb" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");

MODULE_INFO(srcversion, "5664130CB48520D3884381F");

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
	{ 0x81a0983d, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x2fcdd66c, "ieee80211_queue_work" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0xb32ac723, "wl1251_free_hw" },
	{ 0xeff2b414, "sdio_writeb_readb" },
	{ 0x41498e6f, "sdio_claim_irq" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0xde75b689, "set_irq_type" },
	{ 0xea147363, "printk" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x6dc7dde3, "__pm_runtime_put" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x2d5c981d, "sdio_release_irq" },
	{ 0x89618f77, "wl1251_init_ieee80211" },
	{ 0x7ed26023, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4d2ffb17, "__pm_runtime_get" },
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0x64bcba37, "sdio_memcpy_fromio" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0xd478569c, "wl1251_alloc_hw" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x664c78, "sdio_set_block_size" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9566b5f5, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");

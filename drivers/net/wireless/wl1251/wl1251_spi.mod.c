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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x2fcdd66c, "ieee80211_queue_work" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xb32ac723, "wl1251_free_hw" },
	{ 0xf46237f7, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xde75b689, "set_irq_type" },
	{ 0xea147363, "printk" },
	{ 0x6bc894e8, "driver_unregister" },
	{ 0x271dcaa7, "spi_bus_type" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xd40eeaa7, "spi_sync" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x89618f77, "wl1251_init_ieee80211" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7bb8c90a, "ieee80211_free_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x52d76ac3, "spi_register_driver" },
	{ 0xd478569c, "wl1251_alloc_hw" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251,crc7";


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
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0x8e2e8898, "wl1271_free_hw" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xbd6bbb95, "wl1271_init_ieee80211" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf46237f7, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x81b4484c, "wl1271_irq" },
	{ 0x6bc894e8, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x271dcaa7, "spi_bus_type" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd40eeaa7, "spi_sync" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xafb58aef, "wl1271_unregister_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0x52d76ac3, "spi_register_driver" },
	{ 0x30bc57e1, "wl1271_alloc_hw" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x42ba24ed, "wl1271_register_hw" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wl12xx,crc7";


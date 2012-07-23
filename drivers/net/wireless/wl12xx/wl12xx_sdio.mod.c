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
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0x8e2e8898, "wl1271_free_hw" },
	{ 0x1b9981cc, "set_irq_wake" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xbd6bbb95, "wl1271_init_ieee80211" },
	{ 0xbd572bbe, "sdio_writesb" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0x8adfa98c, "sdio_get_host_pm_caps" },
	{ 0xea147363, "printk" },
	{ 0x81b4484c, "wl1271_irq" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x43c3e165, "sdio_readsb" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
	{ 0x7f181630, "sdio_f0_writeb" },
	{ 0x2169f8ec, "sdio_set_host_pm_flags" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x6f0a2224, "sdio_f0_readb" },
	{ 0x346a84e9, "mmc_power_save_host" },
	{ 0x6d40e3c3, "mmc_power_restore_host" },
	{ 0x7ed26023, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xafb58aef, "wl1271_unregister_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0x64bcba37, "sdio_memcpy_fromio" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0x30bc57e1, "wl1271_alloc_hw" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x664c78, "sdio_set_block_size" },
	{ 0x42ba24ed, "wl1271_register_hw" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9566b5f5, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wl12xx";

MODULE_ALIAS("sdio:c*v0097d4076*");

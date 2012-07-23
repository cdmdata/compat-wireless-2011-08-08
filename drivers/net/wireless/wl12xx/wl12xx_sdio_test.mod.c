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
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xbd572bbe, "sdio_writesb" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x999e8297, "vfree" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x2cb6663f, "kthread_stop" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0x6dc7dde3, "__pm_runtime_put" },
	{ 0x43c3e165, "sdio_readsb" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
	{ 0x7f181630, "sdio_f0_writeb" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x1fc00139, "wl1271_set_partition" },
	{ 0xb1b1977a, "wl1271_load_firmware" },
	{ 0x6f0a2224, "sdio_f0_readb" },
	{ 0x4336eda0, "dev_driver_string" },
	{ 0xcb0e0092, "wake_up_process" },
	{ 0x7ed26023, "sdio_memcpy_toio" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x18b0b772, "kthread_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xebff25ef, "request_firmware" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4d2ffb17, "__pm_runtime_get" },
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0x64bcba37, "sdio_memcpy_fromio" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0x9566b5f5, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wl12xx";


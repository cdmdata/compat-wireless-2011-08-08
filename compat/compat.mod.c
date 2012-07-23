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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xdca0e950, "genl_register_family" },
	{ 0x80dcc161, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x49439411, "genl_unregister_family" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xd5152710, "sg_next" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xc2dd4457, "usb_get_urb" },
	{ 0x1666b26a, "usb_unlink_urb" },
	{ 0x41344088, "param_get_charp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x11089ac7, "_ctype" },
	{ 0xea147363, "printk" },
	{ 0x7c14ddfe, "tty_ldisc_deref" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43a2d7a3, "tty_ldisc_ref" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x42bb7437, "init_net" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc27487dd, "__bug" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x85cf1359, "genl_register_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc0e25551, "usb_free_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


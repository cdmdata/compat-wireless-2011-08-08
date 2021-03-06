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
	{ 0xb0ab9f8c, "flush_work" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xa1ab444, "rfkill_set_sw_state" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xe6f37209, "register_pernet_device" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1fd7b0ce, "platform_device_register_simple" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe3694e06, "dev_change_net_namespace" },
	{ 0x79439505, "kobject_uevent" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x8949858b, "schedule_work" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xa0611dc3, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0xc3bbd42e, "cancel_delayed_work_sync" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x9c3c6af0, "rfkill_register" },
	{ 0x3dcbe324, "debugfs_rename" },
	{ 0x83275582, "get_net_ns_by_pid" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xa02a3bb9, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xf42dcb32, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6abe7cd7, "__pskb_pull_tail" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x41344088, "param_get_charp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xe7a0a06f, "dev_alloc_skb" },
	{ 0xfabf42a1, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x656f2d12, "rfkill_alloc" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x8ba942f9, "ethtool_op_get_link" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x767e278c, "unregister_pernet_device" },
	{ 0x7454d4cd, "class_unregister" },
	{ 0xe6cf0dad, "rfkill_set_hw_state" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xc0580937, "rb_erase" },
	{ 0x328a05f1, "strncpy" },
	{ 0x210e76e4, "nla_put" },
	{ 0x99854a06, "wireless_send_event" },
	{ 0xcf82ea3, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xe816707a, "destroy_workqueue" },
	{ 0xf91f3e12, "dev_close" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9c375f64, "dev_get_by_index" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x2281487c, "netlink_unicast" },
	{ 0xf71321ff, "platform_device_unregister" },
	{ 0xd2267400, "init_uts_ns" },
	{ 0xf146037e, "rfkill_pause_polling" },
	{ 0x79c585bd, "sysfs_remove_link" },
	{ 0x53fcd9c0, "device_add" },
	{ 0xe261d585, "__create_workqueue_key" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x42bb7437, "init_net" },
	{ 0xa03a43a2, "__class_register" },
	{ 0xef25cf41, "__dev_get_by_index" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9b6eb137, "ksize" },
	{ 0x61651be, "strcat" },
	{ 0x6933505e, "boot_tvec_bases" },
	{ 0x9746f2e9, "rfkill_resume_polling" },
	{ 0x55bb92df, "sysfs_create_link" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x78e8ed49, "net_ns_type_operations" },
	{ 0xc486f29a, "netlink_broadcast" },
	{ 0xc595501f, "put_device" },
	{ 0xa58b6804, "nla_parse" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xc27487dd, "__bug" },
	{ 0x4336eda0, "dev_driver_string" },
	{ 0x28041357, "pskb_expand_head" },
	{ 0xb4b0adca, "device_rename" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xbe942ec, "genlmsg_multicast_allns" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x4d13de5e, "compat_genl_register_family_with_ops" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x53d8b30c, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x9775cdc, "kref_get" },
	{ 0x97777f6c, "device_initialize" },
	{ 0x20385c58, "genl_register_mc_group" },
	{ 0xaf4c5894, "compat_genl_unregister_family" },
	{ 0x80380a90, "rfkill_blocked" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3504720f, "consume_skb" },
	{ 0x9f8a9667, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe7084ce7, "skb_put" },
	{ 0x76b3112b, "rfkill_unregister" },
	{ 0x302a2222, "skb_copy_bits" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb859f38b, "krealloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";


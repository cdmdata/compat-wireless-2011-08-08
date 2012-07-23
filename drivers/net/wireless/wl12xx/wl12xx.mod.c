#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xb0ab9f8c, "flush_work" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0x8b82bb5d, "device_remove_file" },
	{ 0xec8ce27f, "device_remove_bin_file" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x89938c52, "generic_file_llseek" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf5ea99e9, "ieee80211_sta_ps_transition" },
	{ 0xd8f795ca, "del_timer" },
	{ 0xe8f26598, "ieee80211_disable_dyn_ps" },
	{ 0x2fcdd66c, "ieee80211_queue_work" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0x620bc037, "ieee80211_cqm_rssi_notify" },
	{ 0x52760ca9, "getnstimeofday" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x77329972, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xe5b3135f, "ieee80211_enable_dyn_ps" },
	{ 0xa0611dc3, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4954223c, "ieee80211_unregister_hw" },
	{ 0xb1d5fd6a, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xb77a7c47, "prepare_to_wait_exclusive" },
	{ 0xc3bbd42e, "cancel_delayed_work_sync" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe4f71f11, "ieee80211_scan_completed" },
	{ 0x379aa092, "ieee80211_sched_scan_results" },
	{ 0x999e8297, "vfree" },
	{ 0xa1a79b6d, "debugfs_create_file" },
	{ 0x7fe1a403, "cfg80211_find_ie" },
	{ 0xa02a3bb9, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xf42dcb32, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x745ed24d, "ieee80211_stop_queues" },
	{ 0xddb8c3ac, "ieee80211_stop_queue" },
	{ 0x9b34ae48, "ieee80211_tx_status" },
	{ 0x3b2ec09d, "ieee80211_get_operstate" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x41344088, "param_get_charp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x2759216b, "default_llseek" },
	{ 0xe7a0a06f, "dev_alloc_skb" },
	{ 0x48a0f939, "mutex_lock_interruptible" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x71c6cd82, "ieee80211_report_low_ack" },
	{ 0x51233aa2, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4fbb1fb, "ieee80211_rx" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xe816707a, "destroy_workqueue" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xf71321ff, "platform_device_unregister" },
	{ 0xe261d585, "__create_workqueue_key" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x7f4d682c, "ieee80211_queue_delayed_work" },
	{ 0x8f292be0, "device_create_file" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xcaeb285b, "platform_device_register" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x1000e51, "schedule" },
	{ 0xe3f89967, "flush_delayed_work" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xe6b4548e, "ieee80211_find_sta" },
	{ 0xc27487dd, "__bug" },
	{ 0x5b04228c, "device_create_bin_file" },
	{ 0xd02dd191, "ieee80211_wake_queue" },
	{ 0x13e6f1e0, "ieee80211_stop_rx_ba_session" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xdc4d476, "ieee80211_get_hdrlen_from_skb" },
	{ 0x743cf110, "ieee80211_restart_hw" },
	{ 0x77d3e89c, "ieee80211_register_hw" },
	{ 0x6a898107, "ieee80211_pspoll_get" },
	{ 0xc33d91db, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1e5ca96a, "ieee80211_alloc_hw" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x55401b0e, "ieee80211_ap_probereq_get" },
	{ 0x374ed073, "scnprintf" },
	{ 0xebff25ef, "request_firmware" },
	{ 0xc5e1dce, "ieee80211_probereq_get" },
	{ 0x7bb8c90a, "ieee80211_free_hw" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x3504720f, "consume_skb" },
	{ 0xe7084ce7, "skb_put" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0x291dd7fe, "ieee80211_sched_scan_stopped" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0x550eb176, "ieee80211_connection_loss" },
	{ 0x81799cee, "vscnprintf" },
	{ 0x313341a3, "_set_bit_le" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,compat";


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
	{ 0x36a15265, "skb_queue_head" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x89938c52, "generic_file_llseek" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x2fcdd66c, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x620bc037, "ieee80211_cqm_rssi_notify" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x77329972, "ieee80211_beacon_get_tim" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4954223c, "ieee80211_unregister_hw" },
	{ 0xb1d5fd6a, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe4f71f11, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0xa1a79b6d, "debugfs_create_file" },
	{ 0x7d11c268, "jiffies" },
	{ 0x745ed24d, "ieee80211_stop_queues" },
	{ 0x9b34ae48, "ieee80211_tx_status" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x51233aa2, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0xcf82ea3, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4fbb1fb, "ieee80211_rx" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x7f4d682c, "ieee80211_queue_delayed_work" },
	{ 0xdfc857eb, "dev_kfree_skb_any" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x722b0ab5, "skb_copy_expand" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xdc4d476, "ieee80211_get_hdrlen_from_skb" },
	{ 0x77d3e89c, "ieee80211_register_hw" },
	{ 0x6a898107, "ieee80211_pspoll_get" },
	{ 0xc33d91db, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x602274ef, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0x1e5ca96a, "ieee80211_alloc_hw" },
	{ 0x374ed073, "scnprintf" },
	{ 0xebff25ef, "request_firmware" },
	{ 0xc5e1dce, "ieee80211_probereq_get" },
	{ 0x7bb8c90a, "ieee80211_free_hw" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x3504720f, "consume_skb" },
	{ 0xe7084ce7, "skb_put" },
	{ 0x61a6ea47, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


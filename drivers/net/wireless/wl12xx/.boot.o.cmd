cmd_/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.o := arm-eabi-gcc -Wp,-MD,/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/.boot.o.d -I/home/rszuminski/Development/compat-wireless-2011-08-08/include/ -include /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.h -DCOMPAT_BASE_TREE="\"linux-next.git\"" -DCOMPAT_BASE_TREE_VERSION="\"next-20110808\"" -DCOMPAT_PROJECT="\"Compat-wireless\"" -DCOMPAT_VERSION="\"compat-wireless-2011-07-27-1-g9276969\"" -I/home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-mx5/include -Iarch/arm/plat-mxc/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack  -DMODULE -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(boot)"  -D"KBUILD_MODNAME=KBUILD_STR(wl12xx)"  -c -o /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/.tmp_boot.o /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.c

deps_/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.o := \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.c \
    $(wildcard include/config/reg.h) \
    $(wildcard include/config/reg/val.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.h \
  include/linux/version.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat_autoconf.h \
    $(wildcard include/config/compat/kernel/2/6/24.h) \
    $(wildcard include/config/compat/kernel/2/6/27.h) \
    $(wildcard include/config/fw/loader.h) \
    $(wildcard include/config/compat/kernel/2/6/33.h) \
    $(wildcard include/config/mac80211.h) \
    $(wildcard include/config/mac80211/rc/default.h) \
    $(wildcard include/config/mac80211/rc/default/minstrel.h) \
    $(wildcard include/config/compat/mac80211/rc/default.h) \
    $(wildcard include/config/mac80211/rc/pid.h) \
    $(wildcard include/config/mac80211/rc/minstrel.h) \
    $(wildcard include/config/mac80211/rc/minstrel/ht.h) \
    $(wildcard include/config/leds/triggers.h) \
    $(wildcard include/config/mac80211/leds.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/cfg80211.h) \
    $(wildcard include/config/cfg80211/default/ps.h) \
    $(wildcard include/config/lib80211.h) \
    $(wildcard include/config/lib80211/crypt/wep.h) \
    $(wildcard include/config/lib80211/crypt/ccmp.h) \
    $(wildcard include/config/lib80211/crypt/tkip.h) \
    $(wildcard include/config/bt.h) \
    $(wildcard include/config/compat/bt/l2cap.h) \
    $(wildcard include/config/compat/bt/sco.h) \
    $(wildcard include/config/bt/rfcomm.h) \
    $(wildcard include/config/bt/rfcomm/tty.h) \
    $(wildcard include/config/bt/bnep.h) \
    $(wildcard include/config/bt/bnep/mc/filter.h) \
    $(wildcard include/config/bt/bnep/proto/filter.h) \
    $(wildcard include/config/isdn/capi.h) \
    $(wildcard include/config/bt/cmtp.h) \
    $(wildcard include/config/compat/bt/hidp.h) \
    $(wildcard include/config/compat/kernel/2/6/28.h) \
    $(wildcard include/config/bt/hciuart.h) \
    $(wildcard include/config/bt/hciuart/h4.h) \
    $(wildcard include/config/bt/hciuart/bcsp.h) \
    $(wildcard include/config/bt/hciuart/ath3k.h) \
    $(wildcard include/config/bt/hciuart/ll.h) \
    $(wildcard include/config/bt/hcivhci.h) \
    $(wildcard include/config/bt/mrvl.h) \
    $(wildcard include/config/pcmcia.h) \
    $(wildcard include/config/bt/hcidtl1.h) \
    $(wildcard include/config/bt/hcibt3c.h) \
    $(wildcard include/config/bt/hcibluecard.h) \
    $(wildcard include/config/bt/hcibtuart.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/cfg80211/wext.h) \
    $(wildcard include/config/staging.h) \
    $(wildcard include/config/compat/staging.h) \
    $(wildcard include/config/mac80211/hwsim.h) \
    $(wildcard include/config/ath5k.h) \
    $(wildcard include/config/ath9k.h) \
    $(wildcard include/config/ath9k/hw.h) \
    $(wildcard include/config/ath9k/common.h) \
    $(wildcard include/config/ath9k/rate/control.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/ath5k/pci.h) \
    $(wildcard include/config/ath9k/pci.h) \
    $(wildcard include/config/iwlagn.h) \
    $(wildcard include/config/iwl/p2p.h) \
    $(wildcard include/config/iwlwifi/legacy.h) \
    $(wildcard include/config/compat/iwl4965.h) \
    $(wildcard include/config/iwl3945.h) \
    $(wildcard include/config/b43.h) \
    $(wildcard include/config/b43/hwrng.h) \
    $(wildcard include/config/b43/pci/autoselect.h) \
    $(wildcard include/config/b43/pcmcia.h) \
    $(wildcard include/config/b43/leds.h) \
    $(wildcard include/config/b43/phy/lp.h) \
    $(wildcard include/config/b43/phy/n.h) \
    $(wildcard include/config/b43legacy.h) \
    $(wildcard include/config/b43legacy/hwrng.h) \
    $(wildcard include/config/b43legacy/pci/autoselect.h) \
    $(wildcard include/config/b43legacy/leds.h) \
    $(wildcard include/config/b43legacy/dma.h) \
    $(wildcard include/config/b43legacy/pio.h) \
    $(wildcard include/config/libipw.h) \
    $(wildcard include/config/ipw2100.h) \
    $(wildcard include/config/ipw2100/monitor.h) \
    $(wildcard include/config/ipw2200.h) \
    $(wildcard include/config/ipw2200/monitor.h) \
    $(wildcard include/config/ipw2200/radiotap.h) \
    $(wildcard include/config/ipw2200/promiscuous.h) \
    $(wildcard include/config/ipw2200/qos.h) \
    $(wildcard include/config/ssb.h) \
    $(wildcard include/config/ssb/sprom.h) \
    $(wildcard include/config/ssb/blockio.h) \
    $(wildcard include/config/ssb/pcihost.h) \
    $(wildcard include/config/ssb/b43/pci/bridge.h) \
    $(wildcard include/config/ssb/pcmciahost.h) \
    $(wildcard include/config/ssb/driver/pcicore.h) \
    $(wildcard include/config/b43/ssb.h) \
    $(wildcard include/config/bcma.h) \
    $(wildcard include/config/bcma/blockio.h) \
    $(wildcard include/config/bcma/host/pci.h) \
    $(wildcard include/config/b43/bcma.h) \
    $(wildcard include/config/b43/bcma/pio.h) \
    $(wildcard include/config/p54/pci.h) \
    $(wildcard include/config/b44.h) \
    $(wildcard include/config/b44/pci.h) \
    $(wildcard include/config/rtl8180.h) \
    $(wildcard include/config/adm8211.h) \
    $(wildcard include/config/rt2x00/lib/pci.h) \
    $(wildcard include/config/rt2400pci.h) \
    $(wildcard include/config/rt2500pci.h) \
    $(wildcard include/config/crc/ccitt.h) \
    $(wildcard include/config/rt2800pci.h) \
    $(wildcard include/config/rt2800pci/rt33xx.h) \
    $(wildcard include/config/rt2800pci/rt35xx.h) \
    $(wildcard include/config/crc/itu/t.h) \
    $(wildcard include/config/rt61pci.h) \
    $(wildcard include/config/mwl8k.h) \
    $(wildcard include/config/atl1.h) \
    $(wildcard include/config/atl2.h) \
    $(wildcard include/config/atl1e.h) \
    $(wildcard include/config/atl1c.h) \
    $(wildcard include/config/hermes.h) \
    $(wildcard include/config/hermes/cache/fw/on/init.h) \
    $(wildcard include/config/ppc/pmac.h) \
    $(wildcard include/config/apple/airport.h) \
    $(wildcard include/config/plx/hermes.h) \
    $(wildcard include/config/tmd/hermes.h) \
    $(wildcard include/config/nortel/hermes.h) \
    $(wildcard include/config/pci/hermes.h) \
    $(wildcard include/config/pcmcia/hermes.h) \
    $(wildcard include/config/pcmcia/spectrum.h) \
    $(wildcard include/config/rtl8192ce.h) \
    $(wildcard include/config/rtl8192se.h) \
    $(wildcard include/config/rtl8192de.h) \
    $(wildcard include/config/brcmsmac.h) \
    $(wildcard include/config/libertas.h) \
    $(wildcard include/config/libertas/cs.h) \
    $(wildcard include/config/eeprom/93cx6.h) \
    $(wildcard include/config/usb.h) \
    $(wildcard include/config/compat/zd1211rw.h) \
    $(wildcard include/config/compat/kernel/2/6/29.h) \
    $(wildcard include/config/usb/compat/usbnet.h) \
    $(wildcard include/config/usb/net/compat/rndis/host.h) \
    $(wildcard include/config/usb/net/compat/rndis/wlan.h) \
    $(wildcard include/config/usb/net/compat/cdcether.h) \
    $(wildcard include/config/usb/net/cdcether.h) \
    $(wildcard include/config/usb/net/cdcether/module.h) \
    $(wildcard include/config/p54/usb.h) \
    $(wildcard include/config/rtl8187.h) \
    $(wildcard include/config/rtl8187/leds.h) \
    $(wildcard include/config/at76c50x/usb.h) \
    $(wildcard include/config/carl9170.h) \
    $(wildcard include/config/carl9170/leds.h) \
    $(wildcard include/config/carl9170/wpc.h) \
    $(wildcard include/config/compat/usb/urb/thread/fix.h) \
    $(wildcard include/config/ath9k/htc.h) \
    $(wildcard include/config/rt2500usb.h) \
    $(wildcard include/config/rt2800usb.h) \
    $(wildcard include/config/rt2800usb/rt33xx.h) \
    $(wildcard include/config/rt2800usb/rt35xx.h) \
    $(wildcard include/config/rt2800usb/unknown.h) \
    $(wildcard include/config/rt2x00/lib/usb.h) \
    $(wildcard include/config/rt73usb.h) \
    $(wildcard include/config/libertas/thinfirm/usb.h) \
    $(wildcard include/config/libertas/usb.h) \
    $(wildcard include/config/orinoco/usb.h) \
    $(wildcard include/config/bt/hcibtusb.h) \
    $(wildcard include/config/bt/hcibcm203x.h) \
    $(wildcard include/config/bt/hcibpa10x.h) \
    $(wildcard include/config/bt/hcibfusb.h) \
    $(wildcard include/config/bt/ath3k.h) \
    $(wildcard include/config/rtl8192cu.h) \
    $(wildcard include/config/spi/master.h) \
    $(wildcard include/config/crc7.h) \
    $(wildcard include/config/wl1251/spi.h) \
    $(wildcard include/config/wl12xx/spi.h) \
    $(wildcard include/config/p54/spi.h) \
    $(wildcard include/config/libertas/spi.h) \
    $(wildcard include/config/compat/kernel/2/6/25.h) \
    $(wildcard include/config/mmc.h) \
    $(wildcard include/config/ssb/sdiohost.h) \
    $(wildcard include/config/b43/sdio.h) \
    $(wildcard include/config/wl12xx/platform/data.h) \
    $(wildcard include/config/compat/wl1251/sdio.h) \
    $(wildcard include/config/compat/wl12xx/sdio.h) \
    $(wildcard include/config/compat/wl12xx/sdio/test.h) \
    $(wildcard include/config/compat/kernel/2/6/32.h) \
    $(wildcard include/config/mwifiex/sdio.h) \
    $(wildcard include/config/libertas/sdio.h) \
    $(wildcard include/config/iwm.h) \
    $(wildcard include/config/bt/hcibtsdio.h) \
    $(wildcard include/config/bt/mrvl/sdio.h) \
    $(wildcard include/config/ath6kl/enable/target/debug/prints.h) \
    $(wildcard include/config/ath6kl/virtual/scatter/gather.h) \
    $(wildcard include/config/ath6k/legacy.h) \
    $(wildcard include/config/brcmfmac.h) \
    $(wildcard include/config/rtlwifi.h) \
    $(wildcard include/config/rtl8192c/common.h) \
    $(wildcard include/config/rt2x00.h) \
    $(wildcard include/config/rt2x00/lib.h) \
    $(wildcard include/config/rt2800/lib.h) \
    $(wildcard include/config/rt2x00/lib/firmware.h) \
    $(wildcard include/config/rt2x00/lib/crypto.h) \
    $(wildcard include/config/rt2x00/lib/leds.h) \
    $(wildcard include/config/leds/class.h) \
    $(wildcard include/config/p54/common.h) \
    $(wildcard include/config/p54/leds.h) \
    $(wildcard include/config/ath/common.h) \
    $(wildcard include/config/brcmutil.h) \
    $(wildcard include/config/wl1251.h) \
    $(wildcard include/config/wl12xx.h) \
    $(wildcard include/config/wl12xx/ht.h) \
    $(wildcard include/config/mwifiex.h) \
    $(wildcard include/config/libertas/thinfirm.h) \
    $(wildcard include/config/libertas/mesh.h) \
    $(wildcard include/config/rfkill/backport.h) \
    $(wildcard include/config/rfkill/backport/leds.h) \
    $(wildcard include/config/rfkill/backport/input.h) \
    $(wildcard include/config/compat/kernel/2/6/31.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/netdevices/multiqueue.h) \
    $(wildcard include/config/mac80211/qos.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.22.h \
    $(wildcard include/config/ax25.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.23.h \
    $(wildcard include/config/pm/sleep.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.24.h \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/debug/sg.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.25.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.26.h \
    $(wildcard include/config/net/ns.h) \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/avr32.h) \
    $(wildcard include/config/blackfin.h) \
    $(wildcard include/config/cris.h) \
    $(wildcard include/config/frv.h) \
    $(wildcard include/config/h8300.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/m32r.h) \
    $(wildcard include/config/m68k.h) \
    $(wildcard include/config/coldfire.h) \
    $(wildcard include/config/mips.h) \
    $(wildcard include/config/mn10300.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/s390.h) \
    $(wildcard include/config/superh.h) \
    $(wildcard include/config/sparc.h) \
    $(wildcard include/config/uml.h) \
    $(wildcard include/config/v850.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/xtensa.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.27.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/fs.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.28.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.29.h \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/fcoe.h) \
  include/linux/netdevice.h \
    $(wildcard include/config/dcb.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/tr.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/net/ipgre.h) \
    $(wildcard include/config/ipv6/sit.h) \
    $(wildcard include/config/ipv6/tunnel.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/rps.h) \
    $(wildcard include/config/net/dsa.h) \
    $(wildcard include/config/net/dsa/tag/dsa.h) \
    $(wildcard include/config/net/dsa/tag/trailer.h) \
    $(wildcard include/config/netpoll/trap.h) \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/if.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/posix_types.h \
  include/linux/socket.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/socket.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/sockios.h \
  include/linux/sockios.h \
  include/linux/uio.h \
  include/linux/hdlc/ioctl.h \
  include/linux/if_ether.h \
    $(wildcard include/config/sysctl.h) \
  include/linux/skbuff.h \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/ipv6/ndisc/nodetype.h) \
    $(wildcard include/config/net/dma.h) \
    $(wildcard include/config/network/secmark.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/rszuminski/Development/nitrogen/prebuilt/linux-x86/toolchain/arm-eabi-4.4.0/bin/../lib/gcc/arm-eabi/4.4.0/include/stdarg.h \
  include/linux/linkage.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/linkage.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/bitops.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/irqflags.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/hwcap.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/dynamic_debug.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/bug.h \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/div64.h \
  include/linux/kmemcheck.h \
    $(wildcard include/config/kmemcheck.h) \
  include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/want/page/debug/flags.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mm/owner.h) \
    $(wildcard include/config/mmu/notifier.h) \
  include/linux/auxvec.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/auxvec.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  include/linux/prefetch.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/processor.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/thread_info.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  include/linux/stringify.h \
  include/linux/bottom_half.h \
  include/linux/spinlock_types.h \
  include/linux/spinlock_types_up.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/rwlock_types.h \
  include/linux/spinlock_up.h \
  include/linux/rwlock.h \
  include/linux/spinlock_api_up.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  include/asm-generic/atomic-long.h \
  include/linux/prio_tree.h \
  include/linux/rbtree.h \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/linux/completion.h \
  include/linux/wait.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/current.h \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/string.h \
  include/linux/page-debug-flags.h \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/page/debug/something/else.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v3.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/glue.h \
    $(wildcard include/config/cpu/arm610.h) \
    $(wildcard include/config/cpu/arm710.h) \
    $(wildcard include/config/cpu/abrt/lv4t.h) \
    $(wildcard include/config/cpu/abrt/ev4.h) \
    $(wildcard include/config/cpu/abrt/ev4t.h) \
    $(wildcard include/config/cpu/abrt/ev5tj.h) \
    $(wildcard include/config/cpu/abrt/ev5t.h) \
    $(wildcard include/config/cpu/abrt/ev6.h) \
    $(wildcard include/config/cpu/abrt/ev7.h) \
    $(wildcard include/config/cpu/pabrt/legacy.h) \
    $(wildcard include/config/cpu/pabrt/v6.h) \
    $(wildcard include/config/cpu/pabrt/v7.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/memory.h \
    $(wildcard include/config/runtime/phys/offset.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/discontigmem.h) \
  include/linux/const.h \
  arch/arm/plat-mxc/include/mach/memory.h \
    $(wildcard include/config/arch/mx1.h) \
    $(wildcard include/config/mach/mx21.h) \
    $(wildcard include/config/arch/mx25.h) \
    $(wildcard include/config/mach/mx27.h) \
    $(wildcard include/config/arch/mx3.h) \
    $(wildcard include/config/arch/mxc91231.h) \
    $(wildcard include/config/arch/mx51.h) \
    $(wildcard include/config/arch/mx53.h) \
    $(wildcard include/config/arch/mx50.h) \
    $(wildcard include/config/mx3/video.h) \
    $(wildcard include/config/mx1/video.h) \
    $(wildcard include/config/arch/mx5.h) \
    $(wildcard include/config/dma/zone/size.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
  include/asm-generic/getorder.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
  include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/linux/seqlock.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/math64.h \
  include/linux/math64.h \
  include/linux/net.h \
  include/linux/random.h \
  include/linux/ioctl.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/linux/irqnr.h \
  include/linux/fcntl.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/fcntl.h \
  include/asm-generic/fcntl.h \
  include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/tiny/rcu.h) \
  include/linux/rcutree.h \
    $(wildcard include/config/no/hz.h) \
  include/linux/sysctl.h \
  include/linux/ratelimit.h \
  include/linux/param.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/param.h \
    $(wildcard include/config/hz.h) \
  include/linux/textsearch.h \
  include/linux/module.h \
    $(wildcard include/config/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/sysfs.h) \
  include/linux/stat.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/stat.h \
  include/linux/kmod.h \
  include/linux/gfp.h \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/debug/vm.h) \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/arch/populates/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/cgroup/mem/res/ctlr.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  include/linux/init.h \
    $(wildcard include/config/hotplug.h) \
  include/linux/nodemask.h \
  include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  include/generated/bounds.h \
  include/linux/memory_hotplug.h \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/memory/hotremove.h) \
  include/linux/notifier.h \
  include/linux/errno.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
  include/linux/srcu.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
  include/linux/smp.h \
    $(wildcard include/config/use/generic/smp/helpers.h) \
  include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  include/linux/pfn.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/percpu.h \
  include/asm-generic/percpu.h \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/topology.h \
  include/asm-generic/topology.h \
  include/linux/mmdebug.h \
    $(wildcard include/config/debug/virtual.h) \
  include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
  include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  include/linux/jiffies.h \
  include/linux/timex.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/timex.h \
  arch/arm/plat-mxc/include/mach/timex.h \
    $(wildcard include/config/arch/mx2.h) \
    $(wildcard include/config/arch/mx37.h) \
  include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  include/linux/elf.h \
  include/linux/elf-em.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/elf.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/user.h \
  include/linux/kobject.h \
  include/linux/sysfs.h \
  include/linux/kref.h \
  include/linux/moduleparam.h \
    $(wildcard include/config/ppc64.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/tracepoint.h \
  include/linux/tracepoint.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/module.h \
    $(wildcard include/config/arm/unwind.h) \
  include/trace/events/module.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/trace/define_trace.h \
  include/trace/define_trace.h \
  include/linux/err.h \
  include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slob.h) \
    $(wildcard include/config/debug/slab.h) \
  include/linux/slub_def.h \
    $(wildcard include/config/slub/stats.h) \
    $(wildcard include/config/slub/debug.h) \
  include/linux/kmemtrace.h \
    $(wildcard include/config/kmemtrace.h) \
  include/trace/events/kmem.h \
  include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  include/net/checksum.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/uaccess.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/checksum.h \
  include/linux/in6.h \
  include/linux/dmaengine.h \
    $(wildcard include/config/async/tx/disable/channel/switch.h) \
    $(wildcard include/config/dma/engine.h) \
    $(wildcard include/config/async/tx/dma.h) \
  include/linux/device.h \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/devtmpfs.h) \
  include/linux/ioport.h \
  include/linux/klist.h \
  include/linux/pm.h \
    $(wildcard include/config/pm/runtime.h) \
    $(wildcard include/config/pm/ops.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/device.h \
    $(wildcard include/config/dmabounce.h) \
  include/linux/pm_wakeup.h \
    $(wildcard include/config/pm.h) \
  include/linux/dma-mapping.h \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/have/dma/attrs.h) \
    $(wildcard include/config/need/dma/map/state.h) \
  include/linux/dma-attrs.h \
  include/linux/bug.h \
  include/linux/scatterlist.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/scatterlist.h \
  include/asm-generic/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
  include/linux/mm.h \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
  include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  include/linux/range.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  include/asm-generic/4level-fixup.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/proc-fns.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/v7.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/cpu-single.h \
  arch/arm/plat-mxc/include/mach/vmalloc.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/pgtable-hwdef.h \
  include/asm-generic/pgtable.h \
  include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
  include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/io.h \
  arch/arm/plat-mxc/include/mach/io.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/dma-mapping.h \
  include/asm-generic/dma-coherent.h \
    $(wildcard include/config/have/generic/dma/coherent.h) \
  include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
  include/linux/if_packet.h \
  include/linux/if_link.h \
  include/linux/netlink.h \
  include/linux/capability.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/pm_qos_params.h \
  include/linux/pm_qos_params.h \
  include/linux/miscdevice.h \
  include/linux/major.h \
  include/linux/delay.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/delay.h \
  include/linux/rculist.h \
  include/linux/ethtool.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/net/net_namespace.h \
  include/net/net_namespace.h \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/ip/dccp.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/wext/core.h) \
  include/net/netns/core.h \
  include/net/netns/mib.h \
    $(wildcard include/config/xfrm/statistics.h) \
  include/net/snmp.h \
  include/linux/snmp.h \
  include/net/netns/unix.h \
  include/net/netns/packet.h \
  include/net/netns/ipv4.h \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
  include/net/inet_frag.h \
  include/net/netns/ipv6.h \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/ipv6/mroute/multiple/tables.h) \
  include/net/dst_ops.h \
  include/net/netns/dccp.h \
  include/net/netns/x_tables.h \
    $(wildcard include/config/bridge/nf/ebtables.h) \
  include/linux/netfilter.h \
    $(wildcard include/config/netfilter/debug.h) \
    $(wildcard include/config/nf/nat/needed.h) \
  include/linux/in.h \
  include/net/netns/xfrm.h \
  include/linux/xfrm.h \
  include/linux/seq_file_net.h \
  include/linux/seq_file.h \
  include/net/dsa.h \
  include/linux/interrupt.h \
    $(wildcard include/config/generic/irq/probe.h) \
  include/linux/irqreturn.h \
  include/linux/hardirq.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
  include/linux/smp_lock.h \
    $(wildcard include/config/lock/kernel.h) \
  include/linux/sched.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/detect/softlockup.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/debug/stack/usage.h) \
    $(wildcard include/config/cgroup/sched.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/cputime.h \
  include/asm-generic/cputime.h \
  include/linux/sem.h \
  include/linux/ipc.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/ipcbuf.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/sembuf.h \
  include/linux/signal.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/signal.h \
  include/asm-generic/signal-defs.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/sigcontext.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/siginfo.h \
  include/asm-generic/siginfo.h \
  include/linux/path.h \
  include/linux/pid.h \
  include/linux/proportions.h \
  include/linux/percpu_counter.h \
  include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
  include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  include/linux/resource.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/resource.h \
  include/asm-generic/resource.h \
  include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  include/linux/latencytop.h \
  include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
  include/linux/key.h \
  include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  include/linux/aio.h \
  include/linux/aio_abi.h \
  include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/hardirq.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/irq.h \
  arch/arm/plat-mxc/include/mach/irqs.h \
    $(wildcard include/config/mxc/tzic.h) \
    $(wildcard include/config/mach/mx31ads/wm1133/ev1.h) \
    $(wildcard include/config/mach/mx35/3ds.h) \
    $(wildcard include/config/mx3/ipu/irqs.h) \
  include/linux/irq_cpustat.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.32.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.30.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.31.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.33.h \
    $(wildcard include/config/pccard.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.34.h \
    $(wildcard include/config/preempt/rt.h) \
    $(wildcard include/config/preempt/desktop.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.35.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.36.h \
  include/linux/usb.h \
    $(wildcard include/config/usb/devicefs.h) \
    $(wildcard include/config/usb/mon.h) \
    $(wildcard include/config/usb/device/class.h) \
    $(wildcard include/config/usb/suspend.h) \
  include/linux/mod_devicetable.h \
  include/linux/usb/ch9.h \
    $(wildcard include/config/size.h) \
    $(wildcard include/config/att/one.h) \
    $(wildcard include/config/att/selfpower.h) \
    $(wildcard include/config/att/wakeup.h) \
    $(wildcard include/config/att/battery.h) \
  include/linux/fs.h \
    $(wildcard include/config/dnotify.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/inotify.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  include/linux/limits.h \
  include/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/radix-tree.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/semaphore.h \
  include/linux/semaphore.h \
  include/linux/fiemap.h \
  include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  include/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/dqblk_qtree.h \
  include/linux/nfs_fs_i.h \
  include/linux/nfs.h \
  include/linux/sunrpc/msg_prot.h \
  include/linux/inet.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/pcmcia/cistpl.h \
  include/pcmcia/cs_types.h \
  include/pcmcia/cs.h \
  include/pcmcia/cistpl.h \
    $(wildcard include/config/cb.h) \
  include/pcmcia/ds.h \
    $(wildcard include/config/pcmcia/ioctl.h) \
  include/pcmcia/device_id.h \
  include/pcmcia/ss.h \
    $(wildcard include/config/cardbus.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.37.h \
  include/linux/leds.h \
    $(wildcard include/config/leds/trigger/ide/disk.h) \
  include/net/genetlink.h \
  include/linux/genetlink.h \
  include/net/netlink.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.38.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.39.h \
  include/linux/tty.h \
  include/linux/termios.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/termios.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/termbits.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/ioctls.h \
  include/linux/tty_driver.h \
    $(wildcard include/config/console/poll.h) \
  include/linux/cdev.h \
  include/linux/tty_ldisc.h \
  include/linux/irq.h \
    $(wildcard include/config/irq/per/cpu.h) \
    $(wildcard include/config/irq/release/method.h) \
    $(wildcard include/config/intr/remap.h) \
    $(wildcard include/config/generic/pending/irq.h) \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/numa/irq/desc.h) \
    $(wildcard include/config/generic/hardirqs/no//do/irq.h) \
    $(wildcard include/config/cpumasks/offstack.h) \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/irq_regs.h \
  include/asm-generic/irq_regs.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/hw_irq.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-3.0.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-3.1.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/wl12xx.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/acx.h \
    $(wildcard include/config/opt.h) \
    $(wildcard include/config/ps/wmm.h) \
    $(wildcard include/config/ps.h) \
    $(wildcard include/config/hangover.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/wl12xx.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/net/mac80211.h \
    $(wildcard include/config/nl80211/testmode.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/wireless.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/ieee80211.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/net/cfg80211.h \
  include/linux/debugfs.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/nl80211.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/net/regulatory.h \
  include/net/iw_handler.h \
    $(wildcard include/config/wext/priv.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/compat-2.6.h \
  /home/rszuminski/Development/nitrogen_kernel/linux/arch/arm/include/asm/unaligned.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/unaligned/le_byteshift.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/unaligned/be_byteshift.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/include/linux/unaligned/generic.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/conf.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/ini.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/cmd.h \
    $(wildcard include/config/fwlogger.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/reg.h \
    $(wildcard include/config/option/any/dst/my/bss.h) \
    $(wildcard include/config/option/my/dst/any/bss.h) \
    $(wildcard include/config/option/any/dst/any/bss.h) \
    $(wildcard include/config/option/my/dst/my/bss.h) \
    $(wildcard include/config/option/for/scan.h) \
    $(wildcard include/config/option/for/measurement.h) \
    $(wildcard include/config/option/for/join.h) \
    $(wildcard include/config/option/for/ibss/join.h) \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/io.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/event.h \
  /home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/rx.h \

/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.o: $(deps_/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.o)

$(deps_/home/rszuminski/Development/compat-wireless-2011-08-08/drivers/net/wireless/wl12xx/boot.o):

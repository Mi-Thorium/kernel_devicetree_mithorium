dtb-$(CONFIG_MACH_XIAOMI_LAND) += land.dtb

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb

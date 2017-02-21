Log is available:
SYSLOG: Feb 21 10:19:53 localhost bootlog[0] <Notice>: BOOT_TIME 1487672393 339233
[10:19:54.0263-GMT]{4>7} CHECKPOINT NOTICE: Image4 device: AP nonce clearable
entering ramrod_clear_ap_nonce
[10:19:54.0277-GMT]{4>7} CHECKPOINT NOTICE: AP nonce consumed
No IOFlashController instance found
[10:19:54.0279-GMT]{4>7} CHECKPOINT NOTICE: Pre-existing NVRAM variable: auto-boot=false
[10:19:54.0280-GMT]{4>7} CHECKPOINT NOTICE: Pre-existing NVRAM variable: restore-outcome=initial_monitor_no_return
[10:19:54.0281-GMT]{4>7} CHECKPOINT ANOMALY: [check_collection]restore-step-monitor(does_not_exist)
[10:19:54.0282-GMT]{4>7} CHECKPOINT PROGRESS: START (unknown) -> (initial_engine_no_return)
[10:19:54.0282-GMT]{4>7} CHECKPOINT NOTICE: NVRAM access available on initial check
restore-anomalies = {0x00000000:[check_collection]restore-step-monitor(does_not_exist)}
restore-outcome = initial_engine_no_return
executing /usr/sbin/nvram restore-outcome=initial_engine_no_return
[10:19:54.0306-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0400] umask
restore-step-ids = {0x11030400:1}
restore-step-names = {0x11030400:umask}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0309-GMT]{4>7} CHECKPOINT END: MAIN:[0x0400] umask
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0311-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0402] setvbuf
restore-step-ids = {0x11030402:2}
restore-step-names = {0x11030402:setvbuf}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0314-GMT]{4>7} CHECKPOINT END: MAIN:[0x0402] setvbuf
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0316-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0403] kernel_logger_thread
restore-step-ids = {0x11030403:3}
restore-step-names = {0x11030403:kernel_logger_thread}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0319-GMT]{4>7} CHECKPOINT END: MAIN:[0x0403] kernel_logger_thread
unable to open /dev/klog: No such file or directory
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = -1
[10:19:54.0322-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0406] set_progress_0
restore-step-ids = {0x11030406:4}
restore-step-names = {0x11030406:set_progress_0}
restore-step-uptime = 1
restore-step-user-progress = -1
inverting UI colordisplay-scale = 2
display-rotation = 0
found applelogo at /usr/share/progressui/applelogo@2x.tga
found display: primary
display: 640 x 1136
powering on display
ramrod_display_set_granular_progress: 0.000000
[10:19:54.0366-GMT]{4>7} CHECKPOINT END: MAIN:[0x0406] set_progress_0
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0369-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0407] start_gasgauge_thread
restore-step-ids = {0x11030407:5}
restore-step-names = {0x11030407:start_gasgauge_thread}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0373-GMT]{4>7} CHECKPOINT END: MAIN:[0x0407] start_gasgauge_thread
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0376-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0408] listen_for_log_client
restore-step-ids = {0x11030408:6}
restore-step-names = {0x11030408:listen_for_log_client}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0379-GMT]{4>7} CHECKPOINT END: MAIN:[0x0408] listen_for_log_client
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0382-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x040D] create_listen_socket
restore-step-ids = {0x1103040D:7}
restore-step-names = {0x1103040D:create_listen_socket}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0385-GMT]{4>7} CHECKPOINT END: MAIN:[0x040D] create_listen_socket
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0387-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0404] update_root_mount
restore-step-ids = {0x11030404:8}
restore-step-names = {0x11030404:update_root_mount}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0392-GMT]{4>7} CHECKPOINT END: MAIN:[0x0404] update_root_mount
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0395-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x0405] disable_watchdog
restore-step-ids = {0x11030405:9}
restore-step-names = {0x11030405:disable_watchdog}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0400-GMT]{4>7} CHECKPOINT END: MAIN:[0x0405] disable_watchdog
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 1
restore-step-user-progress = 0
[10:19:54.0403-GMT]{4>7} CHECKPOINT BEGIN: MAIN:[0x040E] enable_usb
restore-step-ids = {0x1103040E:10}
restore-step-names = {0x1103040E:enable_usb}
restore-step-uptime = 1
restore-step-user-progress = 0
waiting for matching IOKit service: <CFBasicHash 0x103615f30 [0x100f66cd8]>{type = mutable dict, count = 1,
entries =>
	0 : <CFString 0x10118f640 [0x100f66cd8]>{contents = "IOProviderClass"} = <CFString 0x103615f70 [0x100f66cd8]>{contents = "AppleUSBDeviceMux"}
}

[10:19:57.0421-GMT]{4>7} CHECKPOINT END: MAIN:[0x040E] enable_usb
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 4
restore-step-user-progress = 0
waiting for host to trigger start of restore [timeout of 120 seconds]
recv(8, 4) failed: connection closed
unable to read message size: -1
could not receive message
recv(10, 4) failed: connection closed
recv(11, 4) failed: connection closed
recv(8, 4) failed: connection closed
recv(12, 4) failed: connection closed
recv(9, 4) failed: connection closed
unable to read message size: -1
unable to read message size: -1
recv(14, 4) failed: connection closed
unable to read message size: -1
unable to read message size: -1
recv(15, 4) failed: connection closed
unable to read message size: -1
could not receive message
recv(16, 4) failed: connection closed
could not receive message
unable to read message size: -1
could not receive message
recv(17, 4) failed: connection closed
could not receive message
unable to read message size: -1
could not receive message
unable to read message size: -1
could not receive message
unable to read message size: -1
could not receive message
could not receive message
could not receive message
[10:19:57.0786-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0600] client_protocol_version
restore-step-ids = {0x11030600:11}
restore-step-names = {0x11030600:client_protocol_version}
restore-step-uptime = 4
restore-step-user-progress = 0
client protocol version 14
recv(18, 4) failed: connection closed
[10:19:57.0796-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0600] client_protocol_version
unable to read message size: -1
recv(9, 4) failed: connection closed
restore-step-ids = {}
could not receive message
unable to read message size: -1
restore-step-names = {}
could not receive message
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0813-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0601] copy_restore_options
restore-step-ids = {0x11030601:12}
restore-step-names = {0x11030601:copy_restore_options}
restore-step-uptime = 4
restore-step-user-progress = 0
*** UUID 03DAC5DB-DF51-2EB0-3F4A-C1B998FE7BCB ***
Restore options:
	CreateFilesystemPartitions     => <CFBoolean 0x100f67240 [0x100f66cd8]>{value = false}
	BBUpdaterState                 => <CFBasicHash 0x10360f1b0 [0x100f66cd8]>{type = mutable dict, count = 7,
entries =>
	0 : CertID = <CFNumber 0xb000000d3da57423 [0x100f66cd8]>{value = +3554301762, type = kCFNumberSInt64Type}
	1 : ChipID = <CFNumber 0xb000000006f20e13 [0x100f66cd8]>{value = +7282913, type = kCFNumberSInt64Type}
	2 : <CFString 0x10360f890 [0x100f66cd8]>{contents = "SKeyStatus"} = <CFNumber 0xb000000000000002 [0x100f66cd8]>{value = +0, type = kCFNumberSInt32Type}
	3 : Nonce = <CFData 0x10360f710 [0x100f66cd8]>{length = 20, capacity = 20, bytes = 0x9cfdd412b8cbef2ac7d3fd001794b461bfd331bf}
	4 : VendorID = <CFNumber 0xb000000000000033 [0x100f66cd8]>{value = +3, type = kCFNumberSInt64Type}
	10 : SKeyHash = <CFData 0x10360f860 [0x100f66cd8]>{length = 20, capacity = 20, bytes = 0xecc404532bf31b88238d973b2ac34d0154d2f20e}
	11 : <CFString 0x10360f2f0 [0x100f66cd8]>{contents = "ChipSerialNo"} = <CFData 0x10360ec30 [0x100f66cd8]>{length = 4, capacity = 4, bytes = 0x311fa8a4}
}

	MinimumSystemPartition         => <CFNumber 0xb00000000000cb93 [0x100f66cd8]>{value = +3257, type = kCFNumberSInt64Type}
	UUID                           => <CFString 0x10360fe20 [0x100f66cd8]>{contents = "03DAC5DB-DF51-2EB0-3F4A-C1B998FE7BCB"}
	SystemPartitionSize            => <CFNumber 0xb00000000000cb93 [0x100f66cd8]>{value = +3257, type = kCFNumberSInt64Type}
	SystemPartitionPadding         => <CFBasicHash 0x104004070 [0x100f66cd8]>{type = mutable dict, count = 9,
entries =>
	0 : 512 = <CFNumber 0xb000000000005003 [0x100f66cd8]>{value = +1280, type = kCFNumberSInt64Type}
	2 : 128 = <CFNumber 0xb000000000005003 [0x100f66cd8]>{value = +1280, type = kCFNumberSInt64Type}
	3 : 16 = <CFNumber 0xb000000000000a03 [0x100f66cd8]>{value = +160, type = kCFNumberSInt64Type}
	4 : 1024 = <CFNumber 0xb000000000005003 [0x100f66cd8]>{value = +1280, type = kCFNumberSInt64Type}
	5 : 32 = <CFNumber 0xb000000000001403 [0x100f66cd8]>{value = +320, type = kCFNumberSInt64Type}
	6 : 768 = <CFNumber 0xb000000000005003 [0x100f66cd8]>{value = +1280, type = kCFNumberSInt64Type}
	7 : 8 = <CFNumber 0xb000000000000503 [0x100f66cd8]>{value = +80, type = kCFNumberSInt64Type}
	8 : 64 = <CFNumber 0xb000000000002803 [0x100f66cd8]>{value = +640, type = kCFNumberSInt64Type}
	10 : 256 = <CFNumber 0xb000000000005003 [0x100f66cd8]>{value = +1280, type = kCFNumberSInt64Type}
}

	PersonalizedDuringPreflight    => <CFBoolean 0x100f67230 [0x100f66cd8]>{value = true}
[10:19:57.0830-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0601] copy_restore_options
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0836-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0655] is_host_compatible
restore-step-ids = {0x11030655:13}
restore-step-names = {0x11030655:is_host_compatible}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0841-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0655] is_host_compatible
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0846-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0604] set_weight_from_options
restore-step-ids = {0x11030604:14}
restore-step-names = {0x11030604:set_weight_from_options}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0852-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0604] set_weight_from_options
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0857-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0608] device_has_hoover
restore-step-ids = {0x11030608:15}
restore-step-names = {0x11030608:device_has_hoover}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0864-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0608] device_has_hoover
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 4
restore-step-user-progress = 0
[10:19:57.0870-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0609] load_sep_os
restore-step-ids = {0x11030609:16}
restore-step-names = {0x11030609:load_sep_os}
restore-step-uptime = 4
restore-step-user-progress = 0
entering load_sep_os
device has sep - getting firmware
entering copy_restore_sep
got sep firmware - making call to load it
entering ramrod_load_sep_os
entering ramrod_execute_command_with_input_data: /usr/libexec/seputil (0x106490000 - 4760713)
executing /usr/libexec/seputil --restore+art -
waiting for child to exit
child exited
exit status: 0
[10:20:00.0531-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0609] load_sep_os
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0533-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x060B] update_ticket
restore-step-ids = {0x1103060B:17}
restore-step-names = {0x1103060B:update_ticket}
restore-step-uptime = 7
restore-step-user-progress = 0
entering ramrod_ticket_update
looking up boot manifest hash
crypto-hash-method found. Using SHA1
device tree ticket_hash: C7997DE91606C5C3D0CC6390A79FE7082A9360EA
computed ticket_hash   : C7997DE91606C5C3D0CC6390A79FE7082A9360EA
received valid ticket (5099 bytes)
[10:20:00.0541-GMT]{4>7} CHECKPOINT END: RESTORED:[0x060B] update_ticket
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0543-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x060C] partition_nand
restore-step-ids = {0x1103060C:18}
restore-step-names = {0x1103060C:partition_nand}
restore-step-uptime = 7
restore-step-user-progress = 0
entering partition_nand_device
[10:20:00.0545-GMT]{4>7} CHECKPOINT END: RESTORED:[0x060C] partition_nand
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0547-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x060D] wait_for_storage
restore-step-ids = {0x1103060D:19}
restore-step-names = {0x1103060D:wait_for_storage}
restore-step-uptime = 7
restore-step-user-progress = 0
entering wait_for_storage_device
ramrod_display_set_granular_progress: 0.000000
Searching for NAND service
Found NAND service: ASPStorage
NAND initialized. Waiting for devnode.
[10:20:00.0552-GMT]{4>7} CHECKPOINT END: RESTORED:[0x060D] wait_for_storage
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0554-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x060E] update_s3e_firmware
restore-step-ids = {0x1103060E:20}
restore-step-names = {0x1103060E:update_s3e_firmware}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0557-GMT]{4>7} CHECKPOINT END: RESTORED:[0x060E] update_s3e_firmware
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0558-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x060F] clear_remap_variable
restore-step-ids = {0x1103060F:21}
restore-step-names = {0x1103060F:clear_remap_variable}
restore-step-uptime = 7
restore-step-user-progress = 0
entering clear_remap_variable
executing /usr/sbin/nvram -d enable-remap-mode
enable-remap-mode
[10:20:00.0580-GMT]{4>7} CHECKPOINT END: RESTORED:[0x060F] clear_remap_variable
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0583-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0610] asp_nand_set_writable
restore-step-ids = {0x11030610:22}
restore-step-names = {0x11030610:asp_nand_set_writable}
restore-step-uptime = 7
restore-step-user-progress = 0
Service name : ASPStorage
Set ASP writable successfully
[10:20:00.0591-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0610] asp_nand_set_writable
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0593-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0611] reprobe_storage
restore-step-ids = {0x11030611:23}
restore-step-names = {0x11030611:reprobe_storage}
restore-step-uptime = 7
restore-step-user-progress = 0
entering ramrod_reprobe_device_path
entering ramrod_probe_media
device partitioning scheme is GPT
APFS Container /dev/disk0s1
device is APFS formatted
find_filesystem_partitions: storage=/dev/disk0 container=/dev/disk0s1 system=/dev/disk0s1s1 data=/dev/disk0s1s2 baseband data= log=
[10:20:00.0615-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0611] reprobe_storage
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0618-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0612] reprobe_firmware
restore-step-ids = {0x11030612:24}
restore-step-names = {0x11030612:reprobe_firmware}
restore-step-uptime = 7
restore-step-user-progress = 0
entering ramrod_reprobe_device_path
entering ramrod_probe_media
device partitioning scheme is GPT
APFS Container /dev/disk0s1
device is APFS formatted
find_filesystem_partitions: storage=/dev/disk0 container=/dev/disk0s1 system=/dev/disk0s1s1 data=/dev/disk0s1s2 baseband data= log=
[10:20:00.0631-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0612] reprobe_firmware
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0633-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0613] find_filesystem_partitions
restore-step-ids = {0x11030613:25}
restore-step-names = {0x11030613:find_filesystem_partitions}
restore-step-uptime = 7
restore-step-user-progress = 0
entering ramrod_probe_media
device partitioning scheme is GPT
APFS Container /dev/disk0s1
device is APFS formatted
find_filesystem_partitions: storage=/dev/disk0 container=/dev/disk0s1 system=/dev/disk0s1s1 data=/dev/disk0s1s2 baseband data= log=
[10:20:00.0639-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0613] find_filesystem_partitions
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 7
restore-step-user-progress = 0
[10:20:00.0642-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0614] mount_system_partition
restore-step-ids = {0x11030614:26}
restore-step-names = {0x11030614:mount_system_partition}
restore-step-uptime = 7
restore-step-user-progress = 0
ramrod_display_set_granular_progress: 0.000000
entering mount_partition
executing /System/Library/Filesystems/apfs.fs/fsck_apfs -fqy /dev/disk0s1s1
nx_mount:777: Container cleanly-unmounted flag set.
nx_mount:895: checkpoint search: largest xid 3146, best xid 3146 @ 51
nx_check:538: skipping check of fs[1] oid 1030 fs root tree because it's encrypted
error: option -f (unimplemented)
Checking /dev/rdisk0s1
Checking with nx_check.
executing /System/Library/Filesystems/apfs.fs/mount_apfs -o rdonly /dev/disk0s1s1 /mnt1
/dev/disk0s1s1 mounted on /mnt1
System mounted read-only
[10:20:11.0891-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0614] mount_system_partition
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0898-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0654] read_previous_os_build_version
restore-step-ids = {0x11030654:27}
restore-step-names = {0x11030654:read_previous_os_build_version}
restore-step-uptime = 18
restore-step-user-progress = 0
ramrod_read_previous_os_build_version: previous OS version: (null)
[10:20:11.0913-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0654] read_previous_os_build_version
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0919-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0615] copy_hardware_info
restore-step-ids = {0x11030615:28}
restore-step-names = {0x11030615:copy_hardware_info}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0926-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0615] copy_hardware_info
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0933-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0616] fdr_create
restore-step-ids = {0x11030616:29}
restore-step-names = {0x11030616:fdr_create}
restore-step-uptime = 18
restore-step-user-progress = 0
restored_fdr_initialize returned false
RestoredFDRCreate() returned 0
FDR is not supported on this device
[10:20:11.0965-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0616] fdr_create
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0973-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0617] fdr_save_data
restore-step-ids = {0x11030617:30}
restore-step-names = {0x11030617:fdr_save_data}
restore-step-uptime = 18
restore-step-user-progress = 0
RestoredFDRSaveData: restoredFDR is NULL, not able to preserve FDR data.
RestoredFDRSaveData success
[10:20:11.0984-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0617] fdr_save_data
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:11.0992-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0618] store_baseband_migration
restore-step-ids = {0x11030618:31}
restore-step-names = {0x11030618:store_baseband_migration}
restore-step-uptime = 18
restore-step-user-progress = 0
[10:20:12.0001-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0618] store_baseband_migration
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 19
restore-step-user-progress = 0
[10:20:12.0009-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0619] check_for_restore_log
restore-step-ids = {0x11030619:32}
restore-step-names = {0x11030619:check_for_restore_log}
restore-step-uptime = 19
restore-step-user-progress = 0
entering check_for_restore_log
restore log does not exist
[10:20:12.0019-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0619] check_for_restore_log
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 19
restore-step-user-progress = 0
[10:20:12.0025-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x061A] check_for_ota_logs
restore-step-ids = {0x1103061A:33}
restore-step-names = {0x1103061A:check_for_ota_logs}
restore-step-uptime = 19
restore-step-user-progress = 0
entering mount_partition
executing /System/Library/Filesystems/apfs.fs/fsck_apfs -fqy /dev/disk0s1s2
nx_mount:777: Container cleanly-unmounted flag set.
nx_mount:895: checkpoint search: largest xid 3146, best xid 3146 @ 51
nx_check:538: skipping check of fs[1] oid 1030 fs root tree because it's encrypted
error: option -f (unimplemented)
Checking /dev/rdisk0s1
Checking with nx_check.
executing /System/Library/Filesystems/apfs.fs/mount_apfs /dev/disk0s1s2 /mnt2
/dev/disk0s1s2 mounted on /mnt2
Data mounted read-write
entering dump_panic_logs
executing /System/Library/CoreServices/DumpPanic -r/mnt2/mobile/Library/Logs/CrashReporter
entering check_for_ota_logs_with_mount_point
Diagnostic log submission enabled
Searching /mnt2/mobile/Library/Logs/CrashReporter/
check_for_ota_logs_with_mount_point complete
Successfully checked for OTA logs
[10:20:23.0651-GMT]{4>7} CHECKPOINT END: RESTORED:[0x061A] check_for_ota_logs
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 30
restore-step-user-progress = 0
[10:20:23.0655-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x061B] submit_update_stats
restore-step-ids = {0x1103061B:34}
restore-step-names = {0x1103061B:submit_update_stats}
restore-step-uptime = 30
restore-step-user-progress = 0
entering mount_partition
executing /sbin/mount -u -o -w /dev/disk0s1s1 /mnt1
mount_apfs: unknown option '-w'
mount_apfs: [-o options] [-u UID] [-g GID] <-C device | -s snapshot volume | device>  <directory>
Failed to change permissions on /dev/disk0s1s1 mounted at /mnt1 to readwrite. Error: 64.
entering unmount_partition
System unmounted
executing /System/Library/Filesystems/apfs.fs/fsck_apfs -fqy /dev/disk0s1s1
nx_mount:777: Container cleanly-unmounted flag set.
nx_mount:895: checkpoint search: largest xid 3146, best xid 3146 @ 51
nx_check:538: skipping check of fs[1] oid 1030 fs root tree because it's encrypted
error: option -f (unimplemented)
Checking /dev/rdisk0s1
Checking with nx_check.
executing /System/Library/Filesystems/apfs.fs/mount_apfs /dev/disk0s1s1 /mnt1
/dev/disk0s1s1 mounted on /mnt1
System mounted read-write
entering mount_partition
Data already mounted read-write (mount ignored)
__AMSupportHttpCopyProxySettings_block_invoke: Proxy available
__AMSupportHttpCopyProxySettings_block_invoke: AMSupportHttpCopyProxySettings: RPNotificationProxyAvailable
__AMSupportHttpCopyProxySettings_block_invoke: AMSupportHttpCopyProxySettings: RPNotificationAborted
AMSupportHttpCopyProxySettings: proxyInfo = <CFBasicHash 0x103616380 [0x100f66cd8]>{type = mutable dict, count = 2,
entries =>
	0 : <CFString 0x100f409b0 [0x100f66cd8]>{contents = "SOCKSProxy"} = <CFString 0x100184c50 [0x100f66cd8]>{contents = "127.0.0.1"}
	1 : <CFString 0x100f409d0 [0x100f66cd8]>{contents = "SOCKSPort"} = <CFNumber 0xb000000000004392 [0x100f66cd8]>{value = +1081, type = kCFNumberSInt32Type}
}

calling UMEventShimSubmitEvents
: start

: ignoring call to recordPostUpdateEvent when no install is in progress

UMEventShimSubmitEvents done
[10:20:34.0997-GMT]{4>7} CHECKPOINT END: RESTORED:[0x061B] submit_update_stats
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 41
restore-step-user-progress = 0
[10:20:35.0000-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x061D] unmount_unconditionally
restore-step-ids = {0x1103061D:35}
restore-step-names = {0x1103061D:unmount_unconditionally}
restore-step-uptime = 42
restore-step-user-progress = 0
entering unmount_filesystems
ramrod_display_set_granular_progress: 1.000000
entering unmount_partition
System unmounted
ramrod_display_set_granular_progress: 1.000000
entering unmount_partition
Data unmounted
create_baseband_update_options: Got imeisv: 23
baseband updater options = <CFBasicHash 0x10401bfa0 [0x100f66cd8]>{type = mutable dict, count = 4,
entries =>
	0 : <CFString 0x10031bb80 [0x100f66cd8]>{contents = "IMEISwVersion"} = <CFNumber 0xb000000000000172 [0x100f66cd8]>{value = +23, type = kCFNumberSInt32Type}
	1 : <CFString 0x10031bb40 [0x100f66cd8]>{contents = "restoredInternal"} = <CFBoolean 0x100f67240 [0x100f66cd8]>{value = false}
	2 : <CFString 0x10031bca0 [0x100f66cd8]>{contents = "autoSetupEnv"} = <CFBoolean 0x100f67240 [0x100f66cd8]>{value = false}
	6 : <CFString 0x10031bcc0 [0x100f66cd8]>{contents = "disablePing"} = <CFBoolean 0x100f67230 [0x100f66cd8]>{value = true}
}

_baseband_update_requires_filesystems_once: querying baseband to determine if it requires system filesystem
bbupdater: cmdCopyRequirePartitionMount: supports flashless 1

bbupdater: cmdCopyRequirePartitionMount: supports REFS 0

bbupdater: cmdCopyRequirePartitionMount: need data partition for coredumps

_baseband_update_requires_filesystems_once: query returned <CFBasicHash 0x10401c080 [0x100f66cd8]>{type = mutable dict, count = 3,
entries =>
	0 : <CFString 0x10031b520 [0x100f66cd8]>{contents = "requireUserPartitionMount"} = <CFBoolean 0x100f67230 [0x100f66cd8]>{value = true}
	1 : <CFString 0x10031b540 [0x100f66cd8]>{contents = "requestedBasebandFSPartitionMountSize"} = <CFNumber 0xb000000000000003 [0x100f66cd8]>{value = +0, type = kCFNumberSInt64Type}
	2 : <CFString 0x10031b4e0 [0x100f66cd8]>{contents = "requireSystemPartitionMount"} = <CFBoolean 0x100f67230 [0x100f66cd8]>{value = true}
}

[10:20:35.0068-GMT]{4>7} CHECKPOINT END: RESTORED:[0x061D] unmount_unconditionally
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0072-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x064E] clean_nand
restore-step-ids = {0x1103064E:36}
restore-step-names = {0x1103064E:clean_nand}
restore-step-uptime = 42
restore-step-user-progress = 1
entering clean_NAND
[10:20:35.0076-GMT]{4>7} CHECKPOINT END: RESTORED:[0x064E] clean_nand
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0080-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0653] create_readwrite_ramdisk
restore-step-ids = {0x11030653:37}
restore-step-names = {0x11030653:create_readwrite_ramdisk}
restore-step-uptime = 42
restore-step-user-progress = 1
executing /usr/sbin/hdik -nomount ram://5120
/dev/disk4          	                               	
executing /sbin/newfs_hfs -J -v readwrite_ramdisk /dev/disk4
Initialized /dev/rdisk4 as a 3 MB case-insensitive HFS Plus volume with a 512k journal
executing /sbin/fsck_hfs -fdy /dev/disk4
journal_replay(/dev/disk4) returned 0
** /dev/rdisk4
	Using cacheBlockSize=32K cacheTotalBlock=4000 cacheSize=128000K.
   Executing fsck_hfs (version hfs-366.30.3).
** Checking Journaled HFS Plus volume.
   The volume name is readwrite_ramdisk
** Checking extents overflow file.
** Checking catalog file.
** Checking multi-linked files.
** Checking catalog hierarchy.
** Checking extended attributes file.
** Checking volume bitmap.
** Checking volume information.
** The volume readwrite_ramdisk appears to be OK.
	CheckHFS returned 0, fsmodified = 0
executing /sbin/mount_hfs /dev/disk4 /mnt5
mount_hfs: Could not create property for re-key environment check: No such file or directory
[10:20:35.0245-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0653] create_readwrite_ramdisk
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0247-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x061F] format_effaceable_storage
restore-step-ids = {0x1103061F:38}
restore-step-names = {0x1103061F:format_effaceable_storage}
restore-step-uptime = 42
restore-step-user-progress = 1
entering format_effaceable_storage
effaceable storage is formatted, nothing to do
[10:20:35.0251-GMT]{4>7} CHECKPOINT END: RESTORED:[0x061F] format_effaceable_storage
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0254-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0643] get_apfs_options
restore-step-ids = {0x11030643:39}
restore-step-names = {0x11030643:get_apfs_options}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0256-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0643] get_apfs_options
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0259-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0620] format_storage_for_lwvm
restore-step-ids = {0x11030620:40}
restore-step-names = {0x11030620:format_storage_for_lwvm}
restore-step-uptime = 42
restore-step-user-progress = 1
entering format_storage_for_LwVM
[10:20:35.0262-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0620] format_storage_for_lwvm
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0265-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0622] reload_filesystem_partitions
restore-step-ids = {0x11030622:41}
restore-step-names = {0x11030622:reload_filesystem_partitions}
restore-step-uptime = 42
restore-step-user-progress = 1
entering ramrod_probe_media
device partitioning scheme is GPT
APFS Container /dev/disk0s1
device is APFS formatted
find_filesystem_partitions: storage=/dev/disk0 container=/dev/disk0s1 system=/dev/disk0s1s1 data=/dev/disk0s1s2 baseband data= log=
[10:20:35.0271-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0622] reload_filesystem_partitions
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0273-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0645] check_not_apfs_mount
restore-step-ids = {0x11030645:42}
restore-step-names = {0x11030645:check_not_apfs_mount}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0276-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS:[0x0900] baseband_migration_data
restore-step-ids = {0x11030645:42;0x11030900:43}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030900:baseband_migration_data}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0279-GMT]{4>7} CHECKPOINT END: NOT_APFS:[0x0900] baseband_migration_data
restore-step-ids = {0x11030645:42}
restore-step-names = {0x11030645:check_not_apfs_mount}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0282-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS:[0x0901] check_update
restore-step-ids = {0x11030645:42;0x11030901:44}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0284-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS_UPDATE:[0x0A00] roll_media_keys
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A00:45}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A00:roll_media_keys}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0287-GMT]{4>7} CHECKPOINT END: NOT_APFS_UPDATE:[0x0A00] roll_media_keys
restore-step-ids = {0x11030645:42;0x11030901:44}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0289-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS_UPDATE:[0x0A02] options_system_image
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image}
restore-step-uptime = 42
restore-step-user-progress = 1
[10:20:35.0292-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS_OPTIONS:[0x0B00] mount_filesystem
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46;0x11030B00:47}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image;0x11030B00:mount_filesystem}
restore-step-uptime = 42
restore-step-user-progress = 1
entering mount_filesystems
ramrod_display_set_granular_progress: 1.000000
entering mount_partition
executing /System/Library/Filesystems/apfs.fs/fsck_apfs -fqy /dev/disk0s1s1
nx_mount:777: Container cleanly-unmounted flag set.
nx_mount:895: checkpoint search: largest xid 3147, best xid 3147 @ 53
nx_check:538: skipping check of fs[1] oid 1030 fs root tree because it's encrypted
error: option -f (unimplemented)
Checking /dev/rdisk0s1
Checking with nx_check.
executing /System/Library/Filesystems/apfs.fs/mount_apfs /dev/disk0s1s1 /mnt1
/dev/disk0s1s1 mounted on /mnt1
System mounted read-write
ramrod_display_set_granular_progress: 1.000000
entering mount_partition
executing /System/Library/Filesystems/apfs.fs/fsck_apfs -fqy /dev/disk0s1s2
nx_mount:777: Container cleanly-unmounted flag set.
nx_mount:895: checkpoint search: largest xid 3147, best xid 3147 @ 53
nx_check:538: skipping check of fs[1] oid 1030 fs root tree because it's encrypted
error: option -f (unimplemented)
Checking /dev/rdisk0s1
Checking with nx_check.
executing /System/Library/Filesystems/apfs.fs/mount_apfs /dev/disk0s1s2 /mnt2
/dev/disk0s1s2 mounted on /mnt2
Data mounted read-write
[10:20:57.0460-GMT]{4>7} CHECKPOINT END: NOT_APFS_OPTIONS:[0x0B00] mount_filesystem
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0464-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS_OPTIONS:[0x0B01] resize_system_partition
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46;0x11030B01:48}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image;0x11030B01:resize_system_partition}
restore-step-uptime = 64
restore-step-user-progress = 1
entering resize_system_partition_to_options
Can't resize system partition since this is not an LwVM managed disk. Skipping resize operation.
entering ramrod_probe_media
device partitioning scheme is GPT
APFS Container /dev/disk0s1
device is APFS formatted
find_filesystem_partitions: storage=/dev/disk0 container=/dev/disk0s1 system=/dev/disk0s1s1 data=/dev/disk0s1s2 baseband data= log=
[10:20:57.0475-GMT]{4>7} CHECKPOINT END: NOT_APFS_OPTIONS:[0x0B01] resize_system_partition
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0479-GMT]{4>7} CHECKPOINT BEGIN: NOT_APFS_OPTIONS:[0x0B02] unmount_filesystem
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46;0x11030B02:49}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image;0x11030B02:unmount_filesystem}
restore-step-uptime = 64
restore-step-user-progress = 1
entering unmount_filesystems
ramrod_display_set_granular_progress: 1.000000
entering unmount_partition
System unmounted
ramrod_display_set_granular_progress: 1.000000
entering unmount_partition
Data unmounted
[10:20:57.0493-GMT]{4>7} CHECKPOINT END: NOT_APFS_OPTIONS:[0x0B02] unmount_filesystem
restore-step-ids = {0x11030645:42;0x11030901:44;0x11030A02:46}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update;0x11030A02:options_system_image}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0497-GMT]{4>7} CHECKPOINT END: NOT_APFS_UPDATE:[0x0A02] options_system_image
restore-step-ids = {0x11030645:42;0x11030901:44}
restore-step-names = {0x11030645:check_not_apfs_mount;0x11030901:check_update}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0501-GMT]{4>7} CHECKPOINT END: NOT_APFS:[0x0901] check_update
restore-step-ids = {0x11030645:42}
restore-step-names = {0x11030645:check_not_apfs_mount}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0505-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0645] check_not_apfs_mount
restore-step-ids = {}
restore-step-names = {}
restore-step-uptime = 64
restore-step-user-progress = 1
[10:20:57.0508-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0624] restore_images
restore-step-ids = {0x11030624:50}
restore-step-names = {0x11030624:restore_images}
restore-step-uptime = 64
restore-step-user-progress = 1
entering restore_images
OS digest = 21b99c4ded88a980cc265d6375bb4613988efa57
Successfully marked device node /dev/rdisk0s1s1 as static data
executing /usr/sbin/asr -source asr://localhost:12345 -target /dev/disk0s1s1 -erase -noprompt --chunkchecksum --puppetstrings --expectedhash 21b99c4ded88a980cc265d6375bb4613988efa57
ASR STATUS: start	391	multicast-client
ASR: Waiting for connection attempt from server
ASR STATUS: setup
ASR: Validating target...done
ASR STATUS: metadata
ASR: Validating source...
ASR: done
ASR: Repartitioning target device...
ASR: Could not repartition target device
ASR STATUS: fail
[10:20:59.0825-GMT]{4>7} CHECKPOINT FAILURE:(FAILURE:14) RESTORED:[0x0624] restore_images [0]D(failed to restore image)
restore-step-results = {0x11070624:{0:14}}
restore-step-codes = {0x11070624:{0:14}}
restore-step-domains = {0x11070624:{0:"AMRestoreErrorDomain"}}
restore-step-error = {0x11070624:"[0]D(failed to restore image)"}
restore-step-uptime = 66
restore-step-user-progress = 1
[10:20:59.0829-GMT]{4>7} CHECKPOINT NOTICE: (NVRAM set) restore-step-user-progress=1 [sync=true] (first failure)
[10:20:59.0830-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0647] cleanup_check_result
restore-step-ids = {0x11030624:50;0x11030647:51}
restore-step-names = {0x11030624:restore_images;0x11030647:cleanup_check_result}
restore-step-uptime = 66
restore-step-user-progress = 1
[10:20:59.0832-GMT]{4>7} CHECKPOINT END: RESTORED:[0x0647] cleanup_check_result
restore-step-ids = {0x11030624:50}
restore-step-names = {0x11030624:restore_images}
restore-step-uptime = 66
restore-step-user-progress = 1
[10:20:59.0835-GMT]{4>7} CHECKPOINT BEGIN: RESTORED:[0x0648] cleanup_send_final_status
restore-step-ids = {0x11030624:50;0x11030648:52}
restore-step-names = {0x11030624:restore_images;0x11030648:cleanup_send_final_status}
restore-step-uptime = 66
restore-step-user-progress = 1

[Error] ERROR: Unable to restore device
Done: restoring failed.
Failed with errorcode=-11

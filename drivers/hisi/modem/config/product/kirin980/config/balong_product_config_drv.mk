# MD5: f815b76007c133db6163b71281a95f25
CFG_ENABLE_BUILD_VARS := YES
CFG_FEATURE_UPGRADE_TL := YES
CFG_PRODUCT_NAME                      :="kirin980"
CFG_PRODUCT_CFG_CHIP_SOLUTION_NAME    :="Balong"
CFG_CCPU_OS                           := RTOSCK_SMP
CFG_HCC_VERSION                       := 4.9
CFG_PLATFORM := kirin980
CFG_PLATFORM_HISI_BALONG :=kirin980
CFG_CONFIG_VERSION_STUB             :=NO
CFG_HW_VERSION_STUB                 :=0x37F5FC09
CFG_CONFIG_PLAT_PORTING				:=NO
CFG_BSP_CONFIG_EDA := NO
CFG_BSP_CONFIG_EMU := NO
CFG_BSP_CONFIG_HI3650 := YES
CFG_BSP_CONFIG_PHONE_TYPE := YES
CFG_BSP_CONFIG_HI3660 := YES
CFG_BSP_CONFIG_BOARD_ASIC := YES
CFG_BSP_CONFIG_BOARD_SFT := NO
CFG_BSP_HAS_SEC_FEATURE     := NO
CFG_CONFIG_SMART_SYSTEM_MODEM := NO
CFG_CONFIG_FASTBOOT_DEBUG := NO
CFG_CONFIG_OF := YES
CFG_FEATURE_BALONG_MODEM_ATE := YES
CFG_CONFIG_RFILE_STUB := NO
CFG_CONFIG_RINGBUFFER_STUB := NO
CFG_CONFIG_CONSOLE_STUB := NO
CFG_CCPU_CORE_NUM := 2
CFG_CCPU_LLRAM_BASE_ADDR := 0xE0800000
CFG_CCPU_LLRAM_BASE_SIZE := 0x40000
CFG_CCPU_SRAM_SIZE  := 0x3000
CFG_DFC_LLRAM_BASE_ADDR        := (CCPU_LLRAM_BASE_ADDR + CCPU_SRAM_SIZE)
CFG_DFC_LLRAM_SIZE             := 0x35800
CFG_MAILBOX_LLRAM_BASE_ADDR    := DFC_LLRAM_BASE_ADDR
CFG_MAILBOX_LLRAM_SIZE         := 0x8000
CFG_CPU_VIEW_LLRAM_ADDR        := ((MAILBOX_LLRAM_BASE_ADDR) + (MAILBOX_LLRAM_SIZE))
CFG_CPU_VIEW_LLRAM_SIZE        := 0x8000
CFG_LL2_LLRAM_BASE_ADDR        := ((CPU_VIEW_LLRAM_ADDR) + (CPU_VIEW_LLRAM_SIZE))
CFG_LL2_LLRAM_SIZE             := 0x25800
CFG_CONFIG_CCPU_HAS_LLRAM := YES
CFG_CCPU_LLRAM_ADDR := (DFC_LLRAM_BASE_ADDR + DFC_LLRAM_SIZE)
CFG_CCPU_LLRAM_SIZE := (CCPU_LLRAM_BASE_SIZE - CCPU_SRAM_SIZE - DFC_LLRAM_SIZE)
CFG_HI_SRAM_MEM_ADDR            := CCPU_LLRAM_BASE_ADDR
CFG_HI_SRAM_SIZE                := CCPU_SRAM_SIZE
CFG_DRV_SRAM_ADDR               := (HI_SRAM_MEM_ADDR)
CFG_DRV_SRAM_SIZE               := 0x2000
CFG_CPHY_SRAM_ADDR              := ((DRV_SRAM_ADDR) + (DRV_SRAM_SIZE))
CFG_CPHY_SRAM_SIZE              := 0x800
CFG_CPHY_LPC_SRAM_ADDR          := ( CPHY_SRAM_ADDR )
CFG_CPHY_LPC_SRAM_SIZE          := 0x40
CFG_CPHY_1X_DATA_MBX_SRAM_ADDR  := ( (CPHY_LPC_SRAM_ADDR) + (CPHY_LPC_SRAM_SIZE) )
CFG_CPHY_1X_DATA_MBX_SRAM_SIZE  := 0x40
CFG_CPHY_HRPD_DATA_MBX_SRAM_ADDR:= ( (CPHY_1X_DATA_MBX_SRAM_ADDR) + (CPHY_1X_DATA_MBX_SRAM_SIZE) )
CFG_CPHY_HRPD_DATA_MBX_SRAM_SIZE:= 0x40
CFG_GPHY_SRAM_ADDR              := ((CPHY_SRAM_ADDR) + (CPHY_SRAM_SIZE))
CFG_GPHY_SRAM_SIZE              := 0x40
CFG_CONFIG_CCPU_HAS_TCM := YES
CFG_CCPU_ITCM_ADDR := 0x0
CFG_CCPU_ITCM_SIZE := 0x8000
CFG_CCPU_ITCM_SIZE_CFG := (0x6u<<0x2)
CFG_CCPU_DTCM_ADDR := (CCPU_ITCM_ADDR + CCPU_ITCM_SIZE)
CFG_CCPU_DTCM_SIZE := 0x4000
CFG_CCPU_DTCM_SIZE_CFG := (0x5u<<0x2)
CFG_CONFIG_NVIM := YES
CFG_FEATURE_NV_FLASH_ON := NO
CFG_FEATURE_NV_EMMC_ON  := YES
CFG_FEATURE_NV_LFILE_ON := NO
CFG_FEATURE_NV_RFILE_ON := NO
CFG_FEATURE_NV_NO_MODEMNVM_SYS := YES
CFG_FEATURE_NV_SEC_ON := YES
CFG_EFUSE_HUK_BIT_START := 1679
CFG_FEATURE_TLPHY_MAILBOX :=YES
CFG_CONFIG_MAILBOX_TYPE := YES
CFG_CONFIG_HIFI_MAILBOX:=NO
CFG_FEATURE_CPHY_MAILBOX     := NO
CFG_ENABLE_BUILD_OM := YES
CFG_FEATURE_OM_PHONE := NO
CFG_ENABLE_BUILD_SYSVIEW := NO
CFG_ENABLE_BUILD_CPUVIEW := NO
CFG_ENABLE_BUILD_MEMVIEW := NO
CFG_ENABLE_BUILD_AMON_SOC := NO
CFG_ENABLE_BUILD_AMON_MDM := YES
CFG_ENABLE_BUILD_UTRACE := NO
CFG_ENABLE_BUILD_SOCP := YES
CFG_CONFIG_DIAG_SYSTEM := YES
CFG_CONFIG_FILEBROSWER := NO
CFG_FEATURE_SOCP_ADDR_64BITS := YES
CFG_DIAG_BBP_WRPTR_OFFSET := NO
CFG_SOCP_DECODE_ENABLE := YES
CFG_CONFIG_DEFLATE := YES
CFG_CONFIG_APPLOG := NO
CFG_CONFIG_DIAG_FRAME := YES
CFG_ENABLE_DIAG_FIX_ADDR := NO
CFG_FEATURE_SOCP_DECODE_INT_TIMEOUT     := FEATURE_OFF
CFG_FEATURE_SOCP_ON_DEMAND			:= FEATURE_OFF
CFG_FEATURE_SOCP_MEM_RESERVED			:= FEATURE_ON
CFG_FEATURE_HDS_PRINTLOG := FEATURE_ON
CFG_FEATURE_HDS_TRANSLOG := FEATURE_ON
CFG_FEATURE_SRE_PRINT_SLICE := FEATURE_ON
CFG_FEATURE_SRE_PRINT_RTC := FEATURE_OFF
CFG_FEATURE_NOC_PARSE_ES := NO
CFG_CONFIG_NOC := YES
CFG_CONFIG_NOC_AP := NO
CFG_FEATURE_SCI_PROTOL_T1               := FEATURE_OFF
CFG_FEATURE_SCI_ESIM                    := FEATURE_OFF
CFG_CONFIG_SC := NO
CFG_CONFIG_DSP := NO
CFG_CONFIG_CBBE   := YES
CFG_CONFIG_PDLOCK := NO
CFG_CONFIG_CORESIGHT := YES
CFG_CONFIG_WATCHPOINT := NO
CFG_CONFIG_MODEM_MINI_DUMP := YES
CFG_CONFIG_DSPDVS := YES
CFG_FEATURE_DSP_DFS := FEATURE_ON
CFG_FEATURE_GUBBP_HANDSHAKE                     := FEATURE_ON
CFG_FEATURE_GUDRX_NEWVERSION                    := FEATURE_ON
CFG_FEATURE_BOSTON_ONLY_FEATURE                 := FEATURE_OFF
CFG_FEATURE_DSP_PM_SEPARATE_MODE     := FEATURE_ON
CFG_FEATURE_CSDR_COMBINE     := FEATURE_ON
CFG_FEATURE_GUC_TRANSPLANT     := FEATURE_OFF
CFG_CONFIG_DFS_DDR := NO
CFG_CONFIG_DFS_NOC := NO
CFG_ATLANTA_ATE := YES
CFG_SUPPORT_PARA_CFG := YES
CFG_FEATURE_TCM_RETENTION     := FEATURE_ON
CFG_FEATURE_MULTI_CHANNEL			:= FEATURE_OFF
CFG_CONFIG_VER_3_TLBBP_DS_BOSTON_AND_LATER := NO
CFG_BALONG_MODEM_CERT := YES
CFG_BALONG_MODEM_CERT_FULL_VERSION_STR	:= "Balong_modem_network_security_certificate 0.0.0.0"
CFG_CONFIG_LOAD_SEC_IMAGE := YES
CFG_CONFIG_COMPRESS_CCORE_IMAGE := YES
CFG_CONFIG_COMPRESS_DTB_IMAGE := YES
CFG_CONFIG_IS_DTB_VERIFY := YES
CFG_CONFIG_MODEM_DTB_LOAD_IN_KERNEL := YES
CFG_CONFIG_PHY_LOAD := YES
CFG_FEATURE_DELAY_MODEM_INIT                    := FEATURE_ON
CFG_CONFIG_MODEM_PINTRL := YES
CFG_CONFIG_GPIO_PL061 := YES
CFG_CONFIG_RFFE_MIPI := YES
CFG_CONFIG_RFFE_ANTEN := YES
CFG_CONFIG_RFFE_POWER := YES
CFG_CONFIG_ABB := YES
CFG_CONFIG_HIFI := NO
CFG_CONFIG_BBP := YES
CFG_CONFIG_HW_SPINLOCK := YES
CFG_MODEM_MEM_REPAIR := YES
CFG_CONFIG_MIPI := YES
CFG_CONFIG_LEDS_CCORE := NO
CFG_CONFIG_ADC := YES
CFG_CONFIG_EFUSE := YES
CFG_CONFIG_TSENSOR := NO
CFG_CONFIG_ONOFF := YES
CFG_RFIC_HI6363_TCVR := YES
CFG_CONFIG_RTC_ON_SOC := YES
ifeq ($(CFG_MODEM_SANITIZER),FEATURE_ON)
CFG_STACK_CANARY_COMPILE := NO
else
CFG_STACK_CANARY_COMPILE := YES
endif
CFG_CONFIG_COLD_PATCH := YES
CFG_CONFIG_SYSBUS := NO
CFG_CONFIG_CCPU_FIQ_SMP := YES
CFG_OS_K3V3_USE_LPM3_API           :=NO
CFG_BSP_ICC_MCHANNEL_USE_LPM3TCM := YES
CFG_CONFIG_BALONG_L2CACHE := YES
CFG_CONFIG_FASTBOOT_UART_NUM := 0
CFG_CONFIG_MODULE_VIC := NO
CFG_CONFIG_AT_UART := NO
CFG_CONFIG_ICC := YES
CFG_CONFIG_ARM_ENABLE_DTS := NO
CFG_DTS_NAME := v711
dts:=true
CFG_DTS_STATIC_MEM_SIZE := 0X5000
CFG_CONFIG_CPUFREQ := YES
CFG_CONFIG_BUSFREQ := YES
CFG_CONFIG_IDLEFREQ := YES
CFG_CONFIG_CCORE_REGULATOR := YES
CFG_CONFIG_CCORE_WDT := YES
CFG_CONFIG_ACORE_WDT := NO
CFG_CONFIG_PM_OM := YES
CFG_CONFIG_BALONG_CCLK := YES
CFG_CONFIG_CCORE_CPU_IDLE := YES
CFG_CONFIG_CCORE_PM := YES
CFG_CONFIG_CCORE_NOTIFIER := YES
CFG_CONFIG_MODULE_IPC := YES
CFG_CONFIG_IPCM_USE_FPGA_VIC := NO
CFG_CONFIG_MODULE_TIMER := YES
CFG_FEATURE_CPU_PRIVATE_SLICE := YES
CFG_CONFIG_MODULE_SYNC := YES
CFG_CONFIG_CCORE_CPU := YES
CFG_CONFIG_IPC_MSG := YES
CFG_CONFIG_IPC_MSG_AO_DISC := YES
CFG_CONFIG_DFC := NO
CFG_CONFIG_HAS_CCORE_WAKELOCK := YES
CFG_CONFIG_CCORE_BALONG_PM := YES
CFG_CONFIG_BALONG_EDMA := YES
CFG_CONFIG_PWC_MNTN_CCORE := NO
CFG_CONFIG_HWADP := YES
CFG_CONFIG_SYSCTRL := YES
CFG_CONFIG_S_MEMORY := NO
CFG_CONFIG_S_MEMORY_TEST := NO
CFG_CONFIG_BALONG_HPM_TEMP := NO
CFG_CONFIG_MEM := YES
CFG_CONFIG_TCXO_BALONG := NO
CFG_CONFIG_BALONG_MODEM_RESET := YES
CFG_CONFIG_BALONG_DPM := NO
CFG_CONFIG_USE_TIMER_STAMP:=NO
CFG_CONFIG_MODULE_BUSSTRESS := NO
CFG_CONFIG_RSR_ACC := YES
CFG_CONFIG_CCPU_HOTPLUG := YES
CFG_CONFIG_MPERF  := NO
CFG_CONFIG_CCPU_MODULE_TICKLESS := YES
CFG_CONFIG_PMIC_FPGA := NO
CFG_CONFIG_PMU_NEW := YES
CFG_CONFIG_PMU_RAMP_EN := YES
CFG_CONFIG_PHONE_DCXO_AP := YES
CFG_CONFIG_IPF     := YES
CFG_CONFIG_PSAM    := YES
CFG_CONFIG_CIPHER  := NO
CFG_CONFIG_NEW_PLATFORM := YES
CFG_CONFIG_CIPHER_NEW  := YES
CFG_CONFIG_IPF_VESION  := 2
CFG_CONFIG_IPF_ADQ_LEN := 5
CFG_CONFIG_IPF_PROPERTY_MBB := NO
CFG_CONFIG_USB_DWC3_VBUS_DISCONNECT:=NO
CFG_USB3_SYNOPSYS_PHY:=NO
CFG_CONFIG_USB_FORCE_HIGHSPEED:=NO
CFG_ENABLE_TEST_CODE := NO
CFG_CONFIG_DYNAMIC_LOAD := NO
CFG_MCORE_TEXT_START_ADDR               := 0x20000000
CFG_FASTBOOT_ENTRY                      := 0x4fe00000
CFG_FASTBOOT_DDR_ENTRY                  := 0x5FD00000
CFG_PRODUCT_CFG_KERNEL_ENTRY 		:= 0x59008000
CFG_PRODUCT_KERNEL_PARAMS_PHYS		:= 0x59000100
CFG_ONCHIP_FASTBOOT_ADDR                := 0x5F900000
CFG_RTX_KERNEL_ENTRY                    := 0x10000000
CFG_DDR_MEM_ADDR                :=  0x20000000
CFG_DDR_SECMEM_SIZE             := 0xDE00000
CFG_DDR_MCORE_SIZE        := 0x8B00000
CFG_DDR_TLPHY_IMAGE_SIZE  := 0x800000
CFG_DDR_GU_SIZE           := 0x40000
CFG_DDR_MCORE_DTS_SIZE    := 0x80000
CFG_DDR_CBBE_IMAGE_SIZE   := 0x000000
CFG_DDR_LPHY_SDR_SIZE     := 0xC40000
CFG_DDR_LCS_SIZE          := 0x280000
CFG_DDR_SEC_SHARED_SIZE   := 0x80000
CFG_DDR_MCORE_ADDR        := $(CFG_DDR_MEM_ADDR)
CFG_DDR_TLPHY_IMAGE_ADDR  := $(CFG_DDR_MCORE_ADDR)+$(CFG_DDR_MCORE_SIZE)
CFG_DDR_GU_ADDR           := $(CFG_DDR_TLPHY_IMAGE_ADDR)+$(CFG_DDR_TLPHY_IMAGE_SIZE)
CFG_DDR_MCORE_DTS_ADDR    := ( (DDR_GU_ADDR           ) + (DDR_GU_SIZE           ) )
CFG_DDR_CBBE_IMAGE_ADDR   := ( (DDR_MCORE_DTS_ADDR       ) + (DDR_MCORE_DTS_SIZE       ) )
CFG_DDR_LPHY_SDR_ADDR     := ( (DDR_CBBE_IMAGE_ADDR      ) + (DDR_CBBE_IMAGE_SIZE      ) )
CFG_DDR_LCS_ADDR          := ( (DDR_LPHY_SDR_ADDR        ) + (DDR_LPHY_SDR_SIZE        ) )
CFG_DDR_SEC_SHARED_ADDR   := ( (DDR_LCS_ADDR             ) + (DDR_LCS_SIZE             ) )
ifeq ($(CFG_MODEM_SANITIZER),FEATURE_ON)
CFG_MDM_SANTIZIER_MEM_FSC_MEM_POOL := 0xA4000000
CFG_MDM_SANTIZIER_MEM_FSC_MEM_POOL_SIZE := 0x4000000
CFG_MDM_SANTIZIER_MEM_ADDR := 0xA2000000
CFG_MDM_SANTIZIER_MEM_SIZE := 0x2000000
CFG_DDR_MCORE_UNCACHE_ADDR := MDM_SANTIZIER_MEM_FSC_MEM_POOL
CFG_DDR_MCORE_UNCACHE_SIZE := MDM_SANTIZIER_MEM_FSC_MEM_POOL_SIZE
CFG_MODEM_SANITIZER_ADDR_OFFSET := 0x9e000000
else
CFG_DDR_MCORE_UNCACHE_SIZE              := 0x2700000
CFG_DDR_MCORE_UNCACHE_ADDR              := (( DDR_MCORE_ADDR ) + (DDR_MCORE_SIZE) - (DDR_MCORE_UNCACHE_SIZE))
endif
CFG_DDR_UPA_ADDR                := DDR_GU_ADDR
CFG_DDR_UPA_SIZE                := 0x00024000
CFG_DDR_CQI_ADDR                := ((DDR_UPA_ADDR) + (DDR_UPA_SIZE))
CFG_DDR_CQI_SIZE                := 0x00003400
CFG_DDR_ZSP_UP_ADDR             := ((DDR_CQI_ADDR) + (DDR_CQI_SIZE))
CFG_DDR_ZSP_UP_SIZE             := 0x00008000
CFG_DDR_ZSP_UP_1_ADDR           := ((DDR_ZSP_UP_ADDR) + (DDR_ZSP_UP_SIZE))
CFG_DDR_ZSP_UP_1_SIZE           := 0x00008000
CFG_SHM_SEC_SIZE          		:=(DDR_SEC_SHARED_SIZE)
CFG_SHM_SIZE_PROTECT_BARRIER    :=(0x1000)
CFG_SHM_SIZE_PARAM_CFG          :=(0x4000)
CFG_SHM_SIZE_SEC_ICC            :=(0x20000)
CFG_SHM_SIZE_SEC_RESERVED       :=(0xb000)
CFG_SHM_SIZE_SEC_MDMA9_PM_BOOT  :=(0x2000)
CFG_SHM_SIZE_SEC_CERT			:=(0x1000)
CFG_SHM_SIZE_SEC_DUMP			:=(0x14800)
CFG_MODEM_SHARED_DDR_BASE  := (0x10000000)
CFG_DDR_SHA_NV_SIZE       := 0x980000
CFG_DDR_SHA_MEM_SIZE      := 0x180000
CFG_DDR_SHARED_MEM_SIZE   := $(CFG_DDR_SHA_NV_SIZE)+$(CFG_DDR_SHA_MEM_SIZE)
CFG_DDR_MNTN_SIZE         := 0x100000
CFG_DDR_SHARED_MEM_ADDR   :=  ( (MODEM_SHARED_DDR_BASE                             ) )
CFG_DDR_MNTN_ADDR         :=  ( (DDR_SHARED_MEM_ADDR      ) + (DDR_SHARED_MEM_SIZE      ) )
CFG_MODEM_SOCP_DDR_BASE  := (0xA0000000)
CFG_DDR_SOCP_SIZE         := 0x2000000
CFG_DDR_HIFI_SIZE         := 0x0
CFG_DDR_SOCP_ADDR         :=  ( MODEM_SOCP_DDR_BASE)
CFG_DDR_HIFI_ADDR         :=  ( (DDR_SOCP_ADDR            ) + (DDR_SOCP_SIZE            ) )
CFG_DDR_HIFI_MBX_ADDR               := ((DDR_SHARED_MEM_ADDR) + (DDR_SHA_NV_SIZE))
CFG_DDR_HIFI_MBX_SIZE               := (0X9800)
CFG_NV_MBN_MAX_SIZE                 := 0x20000
CFG_NV_DDR_SIZE                     := (DDR_SHA_NV_SIZE)
CFG_NV_COMM_BIN_FILE_MAX_SIZE       := 0x96FC00
CFG_SHM_SIZE_HIFI_MBX               :=(DDR_HIFI_MBX_SIZE)
CFG_SHM_SIZE_HIFI                   :=(10*1024)
CFG_SHM_SIZE_TLPHY                  :=(0)
CFG_SHM_SIZE_TEMPERATURE            :=(3*1024)
CFG_SHM_SIZE_DDM_LOAD               :=(1*1024)
CFG_SHM_SIZE_MEM_APPA9_PM_BOOT      :=(0)
CFG_SHM_SIZE_MEM_MDMA9_PM_BOOT      :=(0x2000)
CFG_SHM_SIZE_TENCILICA_MULT_BAND    :=(0)
CFG_SHM_SIZE_ICC                    :=(0x8B000)
CFG_SHM_SIZE_IPF                    :=(0x10000)
CFG_SHM_SIZE_PSAM                   :=(0x1000)
CFG_SHM_SIZE_WAN                    :=(0)
CFG_SHM_SIZE_M3_MNTN                :=(0)
CFG_SHM_SIZE_TIMESTAMP              :=(1*1024)
CFG_SHM_SIZE_IOS                    :=(6*1024)
CFG_SHM_SIZE_RESTORE_AXI            :=(CCPU_LLRAM_BASE_SIZE)
CFG_SHM_SIZE_PMU                    :=(0)
CFG_SHM_SIZE_PTABLE                 :=(0)
CFG_SHM_SIZE_CCORE_RESET            :=(0x400)
CFG_SHM_SIZE_PM_OM                  :=(256*1024)
CFG_SHM_SIZE_M3PM                   :=(0x1000)
CFG_SHM_SIZE_SLICE_MEM              :=(0x1000)
CFG_SHM_SIZE_OSA_LOG                :=(0)
CFG_SHM_SIZE_WAS_LOG                :=(0)
CFG_SHM_SIZE_SRAM_BAK               :=(0)
CFG_SHM_SIZE_SRAM_TO_DDR            :=(0)
CFG_SHM_SIZE_M3RSRACC_BD            :=(0)
CFG_SHM_SIZE_SIM_MEMORY             :=(256*1024)
CFG_SHM_SIZE_NV                     :=(NV_DDR_SIZE)
CFG_FEATURE_NV_PARTRION_MULTIPLEX               := FEATURE_OFF
CFG_RAT_GU:=0
CFG_RAT_GUL:=1
CFG_RAT_MODE :=RAT_GUL

#ifndef __M3_INTERRUPTS_H__
#define __M3_INTERRUPTS_H__ 
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
enum {
 IRQ_INTR_BIG_PMUIRQ ,
 IRQ_PSAM_GIC_INT ,
 IRQ_PSAM_CCPU_INT ,
 IRQ_INTR_MIDDLE_PMUIRQ ,
 IRQ_INTR_DSS_MCU_DP ,
 IRQ_MDM_TLDSP_WDT ,
 IRQ_INTR_LITTLE_PMUIRQ ,
 IRQ_PMUI2C0 ,
 IRQ_APWDOG ,
 IRQ_WATCHDOG1 ,
 IRQ_RTC0 ,
 IRQ_RTC1 ,
 IRQ_TIME00 ,
 IRQ_TIME01 ,
 IRQ_TIME10 ,
 IRQ_TIME11 ,
 IRQ_TIME20 ,
 IRQ_TIME21 ,
 IRQ_TIME30 ,
 IRQ_TIME31 ,
 IRQ_TIME40 ,
 IRQ_TIME41 ,
 IRQ_TIME50 ,
 IRQ_TIME51 ,
 IRQ_TIME60 ,
 IRQ_TIME61 ,
 IRQ_TIME70 ,
 IRQ_TIME71 ,
 IRQ_TIME80 ,
 IRQ_TIME81 ,
 IRQ_INTR_HISEE_ALARM0 ,
 IRQ_INTR_HISEE_ALARM1 ,
 IRQ_HISEE_AS2AP_IRQ ,
 IRQ_HISEE_DS2AP_IRQ ,
 IRQ_HISEE_SENC2AP_IRQ0 ,
 IRQ_HISEE_SENC2AP_IRQ1 ,
 IRQ_HISEE_IPC_LPM3_MBX_INT0 ,
 IRQ_HISEE_IPC_LPM3_MBX_INT1 ,
 IRQ_UART0 ,
 IRQ_GPIO0_SE_INTR2 ,
 IRQ_GPIO1_SE_INTR2 ,
 IRQ_GPIO28_INTR2 ,
 IRQ_UART5 ,
 IRQ_UART6 ,
 IRQ_UCE0_IPC_INT0 ,
 IRQ_UCE0_IPC_INT1 ,
 IRQ_UCE0_IPC_MBX_INT0 ,
 IRQ_UCE0_IPC_MBX_INT1 ,
 IRQ_UCE1_IPC_INT0 ,
 IRQ_UCE1_IPC_INT1 ,
 IRQ_UCE1_IPC_MBX_INT0 ,
 IRQ_UCE1_IPC_MBX_INT1 ,
 IRQ_UCE2_IPC_INT0 ,
 IRQ_UCE2_IPC_INT1 ,
 IRQ_UCE2_IPC_MBX_INT0 ,
 IRQ_UCE2_IPC_MBX_INT1 ,
 IRQ_UCE3_IPC_INT0 ,
 IRQ_UCE3_IPC_INT1 ,
 IRQ_UCE3_IPC_MBX_INT0 ,
 IRQ_UCE3_IPC_MBX_INT1 ,
 IRQ_INTR_UCE0123_WDT ,
 IRQ_DDRC_INBAND_ECC_ERR_INT_COMB ,
 IRQ_DDRC_ERR_INT_COMB ,
 IRQ_DDRPHY_INT_COMB ,
 IRQ_UCE_RTACTIVE0 ,
 IRQ_UCE_RTACTIVE1 ,
 IRQ_UCE_RTACTIVE2 ,
 IRQ_UCE_RTACTIVE3 ,
 IRQ_QOSBUF_INT_COMB ,
 IRQ_DDRC_FATAL_INT_COMB ,
 IRQ_GPIO22_INTR2 ,
 IRQ_GPIO23_INTR2 ,
 IRQ_GPIO24_INTR2 ,
 IRQ_GPIO25_INTR2 ,
 IRQ_GPIO26_INTR2 ,
 IRQ_GPIO27_INTR2 ,
 IRQ_MDM_CCPU_WDT ,
 IRQ_IOMCU_WDT ,
 IRQ_IOMCU_WAKEUP ,
 IRQ_MDM_IPCM_GIC_COMBO ,
 IRQ_MDM_IPCM_CCPU_COMB ,
 IRQ_INTR0_AP_MDM_IPCM_S_LPM3 ,
 IRQ_MDM_DFC_INT2 ,
 IRQ_MDM_IPCM_HIFI_COMB ,
 IRQ_MDM_IPCM_CDSP_COMB ,
 IRQ_INTR1_AP_MDM_IPCM_S_LPM3 ,
 IRQ_INTR_HISEE_LOCK ,
 IRQ_INTR_HISEE_RST ,
 IRQ_INTR_CPU_LITTLE_PWR ,
 IRQ_INTR_HISEE_TSENSOR0 ,
 IRQ_INTR_HISEE_TSENSOR1 ,
 IRQ_INTR_HISEE_WDT ,
 IRQ_INTR_AO_TSEN ,
 IRQ_INTR0_MDM_IPCM_LPM3 ,
 IRQ_INTR1_MDM_IPCM_LPM3 ,
 IRQ_PERF_STAT ,
 IRQ_ISP_TO_LPM3_IPC_MBX_INT0 ,
 IRQ_ISP_TO_LPM3_IPC_MBX_INT1 ,
 IRQ_ISP_TO_LPM3_IPC_INT ,
 IRQ_ISP_R8_WDT ,
 IRQ_NOC_COMB ,
 IRQ_INTR_DMSS ,
 IRQ_INTR_DMSS_NORMAL ,
 IRQ_INTR_AO_WD ,
 IRQ_PMCTRL ,
 IRQ_UFS ,
 IRQ_INTR_SPMI2 ,
 IRQ_UFS_SC_TIMEOUT_INT ,
 IRQ_SECENG_P ,
 IRQ_SECENG_S ,
 IRQ_SDIO_EMMC ,
 IRQ_PCIE_LINKDOWN ,
 IRQ_PCIE_PM ,
 IRQ_PCIE_RADM_INTA ,
 IRQ_LPMCU_PCTRL_TIMEOUT_INT ,
 IRQ_PERI_DMAC_INT2 ,
 IRQ_PERI_DMAC_NS_INT2 ,
 IRQ_PIMON ,
 IRQ_TSENSOR_ARTEMIS ,
 IRQ_TSENSOR_A53 ,
 IRQ_TSENSOR_G3D ,
 IRQ_TSENSOR_MDM ,
 IRQ_ASP_ARM_SECURE ,
 IRQ_ASP_ARM ,
 IRQ_INTR_CPU_BIG_PWR ,
 IRQ_INTR_CPU_MIDDLE_PWR ,
 IRQ_IOMCU_TCP_TASK_DONE_IRQ_2_LPM3 ,
 IRQ_IOMCU_TCP_ERR_IRQ_2_LPM3 ,
 IRQ_IOMCU_TCP_SOFT_IRQ2_LPM3 ,
 IRQ_DSS_MCU_PDP ,
 IRQ_DSS_MCU_SDP ,
 IRQ_DSS_MCU_OFFLINE ,
 IRQ_GPIO29_INTR2 ,
 IRQ_INTR0_MDM_IPC_NS_LPM3 ,
 IRQ_GPIO18_INTR2 ,
 IRQ_GPIO19_INTR2 ,
 IRQ_INTR1_MDM_IPC_NS_LPM3 ,
 IRQ_PMUI2C1 ,
 IRQ_MDM_IPC_TLDSP_COMB ,
 IRQ_LBUS_ERR_INT ,
 IRQ_USB30 ,
 IRQ_USB31 ,
 IRQ_USB3_OTG ,
 IRQ_USB3_PME_GENERATION ,
 IRQ_INTR_DVFS_CPU_BIG ,
 IRQ_INTR_DVFS_CPU_LITTLE ,
 IRQ_PMC_DVFS_G3D ,
 IRQ_INTR_ASP_POWERUP ,
 IRQ_INTR_ASP_POWERDN ,
 IRQ_VBAT_DROP_PROTECT_DB ,
 IRQ_GPIO31_INTR2 ,
 IRQ_GPIO32_INTR2 ,
 IRQ_GPIO33_INTR2 ,
 IRQ_WATCHDOG ,
 IRQ_CCI_OVERDLOW_COMB ,
 IRQ_IPC_S_INT3 ,
 IRQ_IPC_S_INT4 ,
 IRQ_GPIO30_INTR2 ,
 IRQ_IPC_S_MBX13 ,
 IRQ_IPC_S_MBX14 ,
 IRQ_IPC_S_MBX15 ,
 IRQ_IPC_S_MBX16 ,
 IRQ_IPC_S_MBX17 ,
 IRQ_IPC_S_MBX18 ,
 IRQ_INTR_CPU_APS_DPM_COMB ,
 IRQ_IPC_S_MBX23 ,
 IRQ_IPC_S_MBX24 ,
 IRQ_IPC_NS_INT3 ,
 IRQ_IPC_NS_INT4 ,
 IRQ_AO_IPC_S_MBX4 ,
 IRQ_AO_IPC_S_MBX5 ,
 IRQ_IPC_NS_MBX13 ,
 IRQ_IPC_NS_MBX14 ,
 IRQ_IPC_NS_MBX15 ,
 IRQ_IPC_NS_MBX16 ,
 IRQ_IPC_NS_MBX17 ,
 IRQ_IPC_NS_MBX18 ,
 IRQ_AO_IPC_S_INT1 ,
 IRQ_IPC_R8_INT_COMB ,
 IRQ_IPC_NS_MBX27 ,
 IRQ_IPC_NS_MBX28 ,
 IRQ_COMB_GIC_IPC ,
 IRQ_COMB_IOM3_IPC ,
 IRQ_IPC_IVP_INT_COMB ,
 IRQ_INTR_HISEE_IPC_MBX_MDM0 ,
 IRQ_ASPIPC ,
 IRQ_AO_IPC_S_ASP_INT_COMB ,
 IRQ_INTR_HISEE_IPC_MBX_MDM1 ,
 IRQ_ASP_WDT ,
 IRQ_ASP_COMB_INT ,
 IRQ_SCI0 ,
 IRQ_SCI1 ,
 IRQ_SOCP0 ,
 IRQ_SOCP1 ,
 IRQ_LTE_DRX_ARM_TIEMRS_INT ,
 IRQ_LTE_DRX_ARM_WAKEUP_INT ,
 IRQ_TDS_DRX_ARM_WAKEUP_INT ,
 IRQ_TDS_DRX_ARM_TIEMRS_INT ,
 IRQ_G1_BBP_TO_CPU_ON ,
 IRQ_G2_BBP_TO_CPU_ON ,
 IRQ_G3_BBP_TO_CPU_ON ,
 IRQ_LTE2_DRX_ARM_WAKEUP_INT ,
 IRQ_W_ARM_INT02_2 ,
 IRQ_W_ARM_INT03_2 ,
 IRQ_W_ARM_INT02 ,
 IRQ_W_ARM_INT03 ,
 IRQ_CBBP_INT01_2 ,
 IRQ_LTE2_DRX_ARM_TIMERS_INT ,
 IRQ_IPF_INTR0 ,
 IRQ_IPF_INTR1 ,
 IRQ_MDM_EDMAC01_INTR2_COMB ,
 IRQ_GIC_IRQ_FIQ_OUT0 ,
 IRQ_GIC_IRQ_FIQ_OUT1 ,
 IRQ_GIC_IRQ_FIQ_OUT2 ,
 IRQ_GIC_IRQ_FIQ_OUT3 ,
 IRQ_GIC_IRQ_FIQ_OUT4 ,
 IRQ_GIC_IRQ_FIQ_OUT5 ,
 IRQ_GIC_IRQ_FIQ_OUT6 ,
 IRQ_GIC_IRQ_FIQ_OUT7 ,
 IRQ_INTR_ICS_LPM3 ,
 IRQ_BIST_REPAIR_ERR ,
 IRQ_IVP32_WDT ,
 IRQ_MMBUF_ASC1 ,
 IRQ_MMBUF_ASC0 ,
 IRQ_INTR_ICS2_LPMCU ,
 IRQ_INTR_LPM3_MDC ,
 IRQ_ISP_DFS_OK_IRQ ,
 IRQ_EXMBIST ,
 IRQ_ATGC ,
 IRQ_DSS_DFS_OK ,
 IRQ_RESERVED230 ,
 IRQ_RESERVED231 ,
 IRQ_RESERVED232 ,
 IRQ_PLL_UNLOCK ,
 IRQ_INTR_NOCBUS_NONIDLE_PEND ,
 IRQ_INT_FREQUENCY_VOTE ,
 IRQ_LPMCU_TIMER1 ,
 IRQ_LPMCU_TIMER2 ,
 IRQ_CTI2 ,
 IRQ_CTI3 ,
 IRQ_MAX
};
#define FAULT_SVC_ID 11
#define FAULT_PENDSV_ID 14
#define FAULT_SYSTICK_ID 15
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif

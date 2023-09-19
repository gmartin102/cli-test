// -----------------------------------------------------------------------------
// ArcticPro(TM) 2 eFPGA Configuration Controller Version XX Register Map
// -----------------------------------------------------------------------------
// copyright (c) 2017, QuickLogic Corporation
// -----------------------------------------------------------------------------
#define FCBAPB_SPIM_CKB_0      (*((volatile unsigned long *)0x1A200000))
#define FCBAPB_SPIM_CKB_1      (*((volatile unsigned long *)0x1A200004))
#define FCBAPB_DEVICE_ID       (*((volatile unsigned long *)0x1A200008))
#define FCBAPB_CHIP_STA_0      (*((volatile unsigned long *)0x1A20000c))
#define FCBAPB_CFG_MIS_0       (*((volatile unsigned long *)0x1A200010))
#define FCBAPB_CFG_MIS_1       (*((volatile unsigned long *)0x1A200014))
#define FCBAPB_CFG_MIS_2       (*((volatile unsigned long *)0x1A200018))
#define FCBAPB_CFG_MIS_3       (*((volatile unsigned long *)0x1A20001c))
#define FCBAPB_BL_PW_CFG_0     (*((volatile unsigned long *)0x1A200020))
#define FCBAPB_BL_PW_CFG_1     (*((volatile unsigned long *)0x1A200024))
#define FCBAPB_WL_PW_CFG       (*((volatile unsigned long *)0x1A200028))
#define FCBAPB_WRD_CNT_B0      (*((volatile unsigned long *)0x1A200034))
#define FCBAPB_WRD_CNT_B1      (*((volatile unsigned long *)0x1A200038))
#define FCBAPB_WRD_CNT_B2      (*((volatile unsigned long *)0x1A20003c))
#define FCBAPB_BL_CNT_L        (*((volatile unsigned long *)0x1A200040))
#define FCBAPB_BL_CNT_H        (*((volatile unsigned long *)0x1A200044))
#define FCBAPB_WL_CNT_L        (*((volatile unsigned long *)0x1A200048))
#define FCBAPB_WL_CNT_H        (*((volatile unsigned long *)0x1A20004c))
#define FCBAPB_COL_CNT         (*((volatile unsigned long *)0x1A200050))
#define FCBAPB_CFG_WRP_CCNT    (*((volatile unsigned long *)0x1A200060))
#define FCBAPB_SCRATCH_BYTE    (*((volatile unsigned long *)0x1A200064))
#define FCBAPB_CSUM_W0_B0      (*((volatile unsigned long *)0x1A200068))
#define FCBAPB_CSUM_W0_B1      (*((volatile unsigned long *)0x1A20006c))
#define FCBAPB_CSUM_W1_B0      (*((volatile unsigned long *)0x1A200070))
#define FCBAPB_CSUM_W1_B1      (*((volatile unsigned long *)0x1A200074))
#define FCBAPB_FB_CFG_CMD      (*((volatile unsigned long *)0x1A200078))
#define FCBAPB_FB_CFG_KICKOFF  (*((volatile unsigned long *)0x1A20007c))
#define FCBAPB_RW_DATA_PORT    (*((volatile unsigned long *)0x1A200080))
#define FCBAPB_FB_CFG_DONE     (*((volatile unsigned long *)0x1A200084))
#define FCBAPB_CFG_DATA_FIFO   (*((volatile unsigned long *)0x1A20009c))
#define FCBAPB_CLP_VLP_WU_EN   (*((volatile unsigned long *)0x1A2000a0))
#define FCBAPB_CLP_VLP_EN      (*((volatile unsigned long *)0x1A2000a4))
#define FCBAPB_CLP_PD_WU_EN    (*((volatile unsigned long *)0x1A2000a8))
#define FCBAPB_CLP_PD_EN       (*((volatile unsigned long *)0x1A2000ac))
#define FCBAPB_MACRO_PWR_STA   (*((volatile unsigned long *)0x1A2000b0))
#define FCBAPB_PMU_CHIP_PM_CMD (*((volatile unsigned long *)0x1A2000bc))
#define FCBAPB_QUAD_PD_EN_B0   (*((volatile unsigned long *)0x1A2000c0))
#define FCBAPB_QUAD_PD_EN_B1   (*((volatile unsigned long *)0x1A2000c4))
#define FCBAPB_PMU_PW_STA_0    (*((volatile unsigned long *)0x1A2000d8))
#define FCBAPB_PMU_PW_STA_1    (*((volatile unsigned long *)0x1A2000dc))
#define FCBAPB_PMU_PW_STA_2    (*((volatile unsigned long *)0x1A2000e0))
#define FCBAPB_PMU_PW_STA_3    (*((volatile unsigned long *)0x1A2000e4))
#define FCBAPB_VLP_PIN_VALUE   (*((volatile unsigned long *)0x1A2000f8))
#define FCBAPB_ISO_EN_0        (*((volatile unsigned long *)0x1A200100))
#define FCBAPB_ISO_EN_1        (*((volatile unsigned long *)0x1A200104))
#define FCBAPB_PI_PWRDIS_0     (*((volatile unsigned long *)0x1A200108))
#define FCBAPB_PI_PWRDIS_1     (*((volatile unsigned long *)0x1A20010c))
#define FCBAPB_VLP_CLKDIS_0    (*((volatile unsigned long *)0x1A200118))
#define FCBAPB_VLP_CLKDIS_1    (*((volatile unsigned long *)0x1A20011c))
#define FCBAPB_VLP_SRDIS_0     (*((volatile unsigned long *)0x1A200120))
#define FCBAPB_VLP_SRDIS_1     (*((volatile unsigned long *)0x1A200124))
#define FCBAPB_VLP_PWRDIS_0    (*((volatile unsigned long *)0x1A200128))
#define FCBSPI_VLP_PWRDIS_1    (*((volatile unsigned long *)0x1A20012c))
#define FCBSPI_VLP_CTL_IFX     (*((volatile unsigned long *)0x1A200130))
#define FCBSPI_PROG_0          (*((volatile unsigned long *)0x1A200134))
#define FCBSPI_PROG_1          (*((volatile unsigned long *)0x1A200138))
#define FCBSPI_IP_SD           (*((volatile unsigned long *)0x1A20013c))
#define FCBSPI_ISO_EN_SD_0     (*((volatile unsigned long *)0x1A200140))
#define FCBSPI_ISO_EN_SD_1     (*((volatile unsigned long *)0x1A200144))
#define FCBSPI_PI_PWRDIS_SD_0  (*((volatile unsigned long *)0x1A200148))
#define FCBSPI_PI_PWRDIS_SD_1  (*((volatile unsigned long *)0x1A20014c))
#define FCBSPI_VLP_CLKDIS_SD_0 (*((volatile unsigned long *)0x1A200158))
#define FCBSPI_VLP_CLKDIS_SD_1 (*((volatile unsigned long *)0x1A20015c))
#define FCBSPI_VLP_SRDIS_SD_0  (*((volatile unsigned long *)0x1A200160))
#define FCBSPI_VLP_SRDIS_SD_1  (*((volatile unsigned long *)0x1A200164))
#define FCBSPI_VLP_PWRDIS_SD_0 (*((volatile unsigned long *)0x1A200168))
#define FCBSPI_VLP_PWRDIS_SD_1 (*((volatile unsigned long *)0x1A20016c))
#define FCBSPI_VLP_IFX_SD      (*((volatile unsigned long *)0x1A200170))
#define FCBSPI_PROG_SD_0       (*((volatile unsigned long *)0x1A200174))
#define FCBSPI_PROG_SD_1       (*((volatile unsigned long *)0x1A200178))
#define FCBSPI_PMU_MUX_SEL     (*((volatile unsigned long *)0x1A200180))
#define FCBSPI_PMU_MUX_UP_SD   (*((volatile unsigned long *)0x1A200184))
#define FCBSPI_PMU_MUX_SEL_SD  (*((volatile unsigned long *)0x1A200188))
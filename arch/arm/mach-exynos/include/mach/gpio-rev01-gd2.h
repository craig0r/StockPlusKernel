#ifndef __MACH_GPIO_MIDAS_H
#define __MACH_GPIO_MIDAS_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

extern int s3c_gpio_slp_cfgpin(unsigned int pin, unsigned int config);
extern int s3c_gpio_slp_setpull_updown(unsigned int pin, unsigned int config);


/* Camera */
#define GPIO_CAM_SPI_SCLK	EXYNOS4_GPB(4)
#define GPIO_CAM_SPI_SSN	EXYNOS4_GPB(5)
#define GPIO_CAM_SPI_MISO	EXYNOS4_GPB(6)
#define GPIO_CAM_SPI_MOSI	EXYNOS4_GPB(7)

#define GPIO_CAM_SW_EN		EXYNOS4_GPX1(0)
/* #define GPIO_TORCH_EN		EXYNOS4212_GPJ1(1) */
/* #define GPIO_TORCH_SET		EXYNOS4212_GPJ1(2) */
#define GPIO_CAM_MCLK		EXYNOS4212_GPJ1(3)
#define GPIO_VTCAM_MCLK		EXYNOS4212_GPM2(2)

/* #define GPIO_ISP_STANDBY	EXYNOS4212_GPM0(6) */
#define GPIO_CAM_IO_EN		EXYNOS4212_GPM2(6)
#define GPIO_ISP_CORE_EN	EXYNOS4212_GPM2(5)
#define GPIO_CAM_AF_EN		EXYNOS4212_GPM1(1)
#define GPIO_CAM_VT_nRST	EXYNOS4212_GPM1(6)
#define GPIO_ISP_RESET		EXYNOS4_GPF1(3)

#define GPIO_CAM_SENSOR_CORE_EN	EXYNOS4212_GPM4(1)
#define GPIO_VT_CAM_SCL_18V	EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_18V	EXYNOS4212_GPM4(3)
#define GPIO_VT_CAM_ID		EXYNOS4_GPF1(2)
#define GPIO_CAM_POWER_ON	EXYNOS4_GPL2(6)
#define GPIO_ISP_INT        EXYNOS4_GPX3(5)
#define GPIO_RESERVED_1_INT	EXYNOS4212_GPM0(6)
#define GPIO_CAM_SCL        EXYNOS4_GPL1(0)
#define GPIO_CAM_SDA        EXYNOS4_GPL1(1)
#define GPIO_CAM_OFF_INT	EXYNOS4_GPY1(2)
#define GPIO_CAM_PCU_MRB    EXYNOS4_GPY1(3)

#define GPIO_ASV_READ		EXYNOS4212_GPM1(6)
#define GPIO_AVS_A0		 	EXYNOS4_GPY3(0)
#define GPIO_AVS_A1		 	EXYNOS4_GPY3(1)
#define GPIO_AVS_A2		 	EXYNOS4_GPY3(2)
#define GPIO_AVS_PRCHG		EXYNOS4_GPY3(3)
#define GPIO_AVS_SIGDEV	EXYNOS4_GPY3(4)
#define GPIO_AVS_FSET		EXYNOS4_GPY3(5)
#define GPIO_AVS_SDOUT		EXYNOS4_GPY3(6)
#define GPIO_AVS_CS		 	EXYNOS4_GPY3(7)
#define GPIO_AVS_SCK		EXYNOS4_GPY4(0)

/* Sensors */
#define GPIO_RGB_SDA_1_8V	EXYNOS4_GPD1(2)
#define GPIO_RGB_SCL_1_8V	EXYNOS4_GPD1(3)
#define GPIO_PS_ALS_INT		EXYNOS4_GPX2(0)
#define GPIO_PS_ALS_EN		EXYNOS4212_GPM0(3)

#define GPIO_GSENSE_SDA_18V	EXYNOS4_GPD1(0)
#define GPIO_GSENSE_SCL_18V	EXYNOS4_GPD1(1)
#define GPIO_ACC_INT		EXYNOS4_GPX0(0)
#define GPIO_GYRO_INT		EXYNOS4_GPX0(2)
#define GPIO_GYRO_DE		EXYNOS4212_GPM0(2)

#define GPIO_MSENSOR_SDA_18V	EXYNOS4_GPD1(0)
#define GPIO_MSENSOR_SCL_18V	EXYNOS4_GPD1(1)
#define GPIO_MSENSE_RST_N	EXYNOS4212_GPM0(1)
#define GPIO_MSENSOR_INT	EXYNOS4_GPX2(1)
/* Sensors */


/* PMIC */
#define GPIO_eMMC_EN		EXYNOS4_GPK0(2)
#define GPIO_TF_EN		EXYNOS4_GPY2(0)

#define GPIO_IF_PMIC_SDA	EXYNOS4212_GPM2(0)
#define GPIO_IF_PMIC_SCL	EXYNOS4212_GPM2(1)

#define GPIO_BOOT_MODE		EXYNOS4_GPX0(3)

#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)
#define GPIO_IF_PMIC_IRQ	EXYNOS4_GPX1(5)

#define GPIO_PMIC_DVS1		EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2		EXYNOS4212_GPM3(1)
#define GPIO_PMIC_DVS3		EXYNOS4212_GPM3(2)

#define GPIO_BUCK2_SEL		EXYNOS4_GPL0(0)
#define GPIO_BUCK3_SEL		EXYNOS4_GPL0(1)
#define GPIO_BUCK4_SEL		EXYNOS4_GPL0(2)


/* BT */
#define GPIO_BT_EN		EXYNOS4_GPL0(6)
#define GPIO_BT_WAKE		EXYNOS4_GPX3(1)
#define GPIO_BT_WAKE_REV01		EXYNOS4212_GPJ1(4)
#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE	IRQ_EINT(22)

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2


/* GPS */
#if defined (CONFIG_GPS_BCMxxxxx)
#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2
#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2
#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2
#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2
#define GPIO_GPS_PWR_EN		EXYNOS4_GPL2(4)
#if defined(CONFIG_GPS_BCM47521)
#define GPIO_GPS_HOST_WAKE	EXYNOS4_GPX3(2)
#define GPIO_GPS_HOST_WAKE_AF		0xF
#endif
#endif


/* WIFI */
#define GPIO_WLAN_EN		EXYNOS4212_GPJ0(0)
#define GPIO_WLAN_EN_AF		1
#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF
#define GPIO_WLAN_SDIO_CLK	EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2
#define GPIO_WLAN_SDIO_CMD	EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2
#define GPIO_WLAN_SDIO_D0	EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF	2
#define GPIO_WLAN_SDIO_D1	EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF	2
#define GPIO_WLAN_SDIO_D2	EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF	2
#define GPIO_WLAN_SDIO_D3	EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#ifdef CONFIG_SAMSUNG_MHL
/* Definitions for Sii 9244B0 */
#define GPIO_MHL_SDA_1_8V	EXYNOS4_GPF0(4)
#define GPIO_MHL_SCL_1_8V	EXYNOS4_GPF0(6)
#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define GPIO_MHL_WAKE_UP	EXYNOS4212_GPJ1(4)
#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP)
#endif
#define GPIO_HDMI_EN		EXYNOS4_GPL0(4)
#define GPIO_HDMI_CT_CP_HPD		EXYNOS4_GPL2(2)
#define GPIO_HDMI_HPD		EXYNOS4_GPX3(7)

/* D4 */
#define D4_COLD		EXYNOS4212_GPM0(5)

/* TSP */
#define GPIO_TSP_SDA_18V	EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V	EXYNOS4_GPA1(3)
#define GPIO_TSP_INT		EXYNOS4212_GPM2(3)
#define GPIO_TSP_LDO_28V_EN		EXYNOS4212_GPM4(0)


/* Keys */
#define GPIO_nPOWER		EXYNOS4_GPX2(7)
#define GPIO_S1_KEY			EXYNOS4_GPX1(7)
#define GPIO_S2_KEY			EXYNOS4_GPX2(4)
#define GPIO_JOG_KEY		EXYNOS4_GPX1(4)
#define GPIO_JOG_L			EXYNOS4_GPX3(3)
#define GPIO_JOG_R			EXYNOS4_GPX2(2)
#define GPIO_RECORD		EXYNOS4_GPX3(0)
#define GPIO_STR_UP		EXYNOS4_GPL2(7)
#define GPIO_CAMERA_IFUNC		EXYNOS4212_GPM4(1)
#define GPIO_CAMERA_FOCUS_L	EXYNOS4212_GPM4(0)
#define GPIO_CAMERA_FOCUS_R	EXYNOS4212_GPM4(2)

/* battery */
#define GPIO_FUEL_ALERT		EXYNOS4_GPX2(3)
#if defined(CONFIG_TARGET_LOCALE_USA)
#define GPIO_BATT_PRESENT_N_INT	EXYNOS4_GPX1(3) /* rev0.2 ~ */
#endif
#if defined(CONFIG_BATTERY_WPC_CHARGER)
#define GPIO_WPC_INT		EXYNOS4_GPX3(0) /* rev0.2 ~ */
#define GPIO_V_BUS_INT		EXYNOS4_GPX1(4) /* rev0.2 ~ */
#endif

/* Others */
#define GPIO_OTG_EN		EXYNOS4_GPF0(7)

#define GPIO_OLED_ID		EXYNOS4_GPF1(0)
#define GPIO_FUEL_SCL		EXYNOS4_GPA0(7)
#define GPIO_FUEL_SDA		EXYNOS4_GPA0(6)
#define GPIO_FUEL_SCL_02		EXYNOS4_GPC1(4)
#define GPIO_FUEL_SDA_02		EXYNOS4_GPC1(3)

#define GPIO_MIC_BIAS_EN	EXYNOS4212_GPJ0(6)
#define GPIO_SUB_MIC_BIAS_EN	EXYNOS4_GPF2(0)
#define GPIO_EXTMIC_EN	EXYNOS4_GPL2(3)

#if defined(CONFIG_MACH_T0_CHN_OPEN_DUOS)
#define GPIO_AUDIO_PCM_SEL EXYNOS4_GPF2(2)
#endif

#if defined(CONFIG_MACH_T0_CHN_CMCC)
#define GPIO_AUDIO_PCM_SEL EXYNOS4212_GPM0(3)
#endif

#if defined(CONFIG_SWITCH_DUAL_MODEM)
#if defined(CONFIG_MACH_T0_CHN_CMCC)
#define GPIO_UART_SEL		EXYNOS4212_GPM3(6)
#define GPIO_USB_SEL		EXYNOS4212_GPM4(0)
#define GPIO_CP_USB_ON		EXYNOS4212_GPM0(2)
#endif
#endif

#define GPIO_MLCD_RST		EXYNOS4_GPF3(5)
#define GPIO_S_LED_I2C_SCL	EXYNOS4_GPY2(5)
#define GPIO_S_LED_I2C_SDA	EXYNOS4_GPY2(4)
#define GPIO_VGH_DET		EXYNOS4212_GPJ0(7)

#define GPIO_WM8994_LDO		EXYNOS4212_GPJ0(4)
#define GPIO_ERR_FG		EXYNOS4212_GPJ0(7)

#define GPIO_LCD_22V_EN_00	EXYNOS4_GPC0(1)

#define GPIO_G_DET_N		EXYNOS4_GPX3(0)
#define GPIO_G_DET_N_REV03	EXYNOS4_GPX2(0)
#define GPIO_VPS_SOUND_EN	EXYNOS4_GPL0(3)

#define GPIO_EVF_RESET		EXYNOS4212_GPM4(3)
#define GPIO_LCD_nCS		EXYNOS4212_GPM4(5)
#define GPIO_LCD_SCLK		EXYNOS4212_GPM4(4)
#define GPIO_LCD_SDI		EXYNOS4212_GPM4(7)

#ifdef CONFIG_JACK_FET
#define GPIO_EAR_BIAS_DISCHARGE	EXYNOS4_GPC1(0)
#endif
#if 0
/** Previous revision **/
/* rev0.0 */
#if defined(CONFIG_LTE_VIA_SWITCH)
#define GPIO_LTE_VIA_UART_SEL	EXYNOS4212_GPJ0(6)
#else
#define GPIO_TSP_LDO_EN		EXYNOS4212_GPJ0(6)
#endif
/* GPIO_MHL_SEL			EXYNOS4212_GPJ0(5)	*/
#endif

/* Modem Interface GPIOs - M0 HSIC */
#define GPIO_ACTIVE_STATE	EXYNOS4_GPF1(1)
#define GPIO_PDA_ACTIVE		EXYNOS4_GPF1(6)
#define GPIO_AP_DUMP_INT	EXYNOS4212_GPJ0(1)
#define GPIO_PHONE_ON		EXYNOS4_GPL2(5)
#define GPIO_SUSPEND_REQUEST	EXYNOS4212_GPM2(4)
#define GPIO_CP_REQ_RESET	EXYNOS4212_GPM3(3)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX1(1)
#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_PHONE_ACTIVE	EXYNOS4_GPX1(6)
#define GPIO_CP_RST		EXYNOS4_GPX3(2)


/* Modem Interface GPIOs - MDM */
#define GPIO_MDM2AP_HSIC_READY		EXYNOS4212_GPJ0(3)
#define GPIO_AP2MDM_STATUS		EXYNOS4212_GPJ0(5)
#define GPIO_MDM2AP_HSIC_PWR_ACTIVE	EXYNOS4212_GPJ1(0)	/* AP2MDM_IPC2 */
#define GPIO_WCN_PRIORITY		EXYNOS4212_GPJ1(1)
#define GPIO_MDM_LTE_FRAME_SYNC		EXYNOS4212_GPJ1(2)
#define GPIO_AP2MDM_ERR_FATAL		EXYNOS4212_GPJ0(1)
#define GPIO_AP2MDM_PON_RESET_N		EXYNOS4_GPL2(5)
#define GPIO_AP2MDM_WAKEUP		EXYNOS4212_GPM2(4)
#define GPIO_AP2MDM_SOFT_RESET		EXYNOS4212_GPM3(3)
#define GPIO_MDM2AP_STATUS		EXYNOS4_GPX0(5)
#define GPIO_MDM2AP_HSIC_RESUME_REQ	EXYNOS4_GPX0(6)	/* AP2MDM_IPC3 */
#define GPIO_AP2MDM_VDDMIN		EXYNOS4_GPX1(0)
#define GPIO_MDM2AP_VDDMIN		EXYNOS4_GPX1(1)
#define GPIO_MDM2AP_ERR_FATAL		EXYNOS4_GPX1(2)
#define GPIO_MDM_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define GPIO_AP2MDM_HSIC_PORT_ACTIVE	EXYNOS4_GPX3(2)	/* AP2MDM_IPC1 */
#define GPIO_AP2MDM_PMIC_RESET_N	EXYNOS4_GPY2(3)
#define GPIO_SIM_DETECT			EXYNOS4_GPX0(1)

#if defined(CONFIG_MACH_T0_CHN_CMCC)
/* Modem Interface GPIOs - T0 SPI */
#define GPIO_TD_PDA_ACTIVE	EXYNOS4_GPF3(4)
#define GPIO_TD_PHONE_ON	EXYNOS4212_GPM0(1)
#define GPIO_TD_PHONE_ACTIVE	EXYNOS4_GPX1(3)
#define GPIO_AP_TD_INT1	EXYNOS4_GPF0(6)
#define GPIO_AP_TD_INT2	EXYNOS4_GPF0(4)
#define GPIO_TD_DUMP_INT	EXYNOS4_GPX0(5)
#define GPIO_IPC_MRDY	EXYNOS4_GPF2(4)
#define GPIO_IPC_SRDY	EXYNOS4_GPX0(6)
#define GPIO_IPC_SUB_MRDY	EXYNOS4_GPF2(2)
#define GPIO_IPC_SUB_SRDY	EXYNOS4_GPX3(0)

#define IRQ_PHONE_ACTIVE	gpio_to_irq(GPIO_TD_PHONE_ACTIVE)
#define IRQ_IPC_SRDY		gpio_to_irq(GPIO_IPC_SRDY)
#define IRQ_IPC_SUB_SRDY	gpio_to_irq(GPIO_IPC_SUB_SRDY)
#define IRQ_TD_DUMP_INT		gpio_to_irq(GPIO_TD_DUMP_INT)

#endif

#ifdef CONFIG_SEC_DUAL_MODEM_MODE
#if defined(CONFIG_MACH_T0_CHN_CMCC)
#define GPIO_SIM_IO_SEL EXYNOS4_GPL2(0)
#define GPIO_CP_CTRL1   EXYNOS4_GPL2(3)
#define GPIO_CP_CTRL2   EXYNOS4_GPL2(4)
#endif
#endif


#if !defined(CONFIG_MACH_T0_CHN_CMCC)
/* FM (Eur) */
#define GPIO_FM_INT		EXYNOS4_GPX1(3)
#define GPIO_FM_RST		EXYNOS4_GPX1(4)
#define GPIO_FM_RST_REV03	EXYNOS4_GPY0(1)
#define GPIO_FM_SCL		EXYNOS4_GPY0(2)
#define GPIO_FM_SDA		EXYNOS4_GPY0(3)
#endif

#if defined(CONFIG_TDMB) || defined(CONFIG_TDMB_MODULE)
#define GPIO_TDMB_RST_N	EXYNOS4_GPC0(0)
#define GPIO_TDMB_EN		EXYNOS4_GPC0(2)
#define GPIO_TDMB_INT		EXYNOS4_GPC0(4)
#define GPIO_TDMB_IRQ		gpio_to_irq(GPIO_TDMB_INT)
#define GPIO_TDMB_SPI_CLK	EXYNOS4_GPC1(1)
#define GPIO_TDMB_SPI_CS	EXYNOS4_GPC1(2)
#define GPIO_TDMB_SPI_MISO	EXYNOS4_GPC1(3)
#define GPIO_TDMB_SPI_MOSI	EXYNOS4_GPC1(4)
#if defined(CONFIG_TDMB_ANT_DET)
#define GPIO_TDMB_ANT_DET			EXYNOS4_GPF2(0)
#define GPIO_TDMB_IRQ_ANT_DET		gpio_to_irq(GPIO_TDMB_ANT_DET)
#define GPIO_TDMB_ANT_DET_REV08		EXYNOS4_GPX1(3)
#define GPIO_TDMB_IRQ_ANT_DET_REV08	gpio_to_irq(GPIO_TDMB_ANT_DET_REV08)
#endif

#elif defined(CONFIG_ISDBT)
#define GPIO_ISDBT_RST_N	EXYNOS4_GPC0(0)
#define GPIO_ISDBT_EN		EXYNOS4_GPC0(2)
#define GPIO_ISDBT_INT		EXYNOS4_GPC0(4)
#define GPIO_ISDBT_IRQ		gpio_to_irq(GPIO_ISDBT_INT)
#define GPIO_ISDBT_INT_AF	0xf
#define GPIO_ISDBT_SPI_CLK	EXYNOS4_GPC1(1)
#define GPIO_ISDBT_SPI_CS	EXYNOS4_GPC1(2)
#define GPIO_ISDBT_SPI_MISO	EXYNOS4_GPC1(3)
#define GPIO_ISDBT_SPI_MOSI	EXYNOS4_GPC1(4)

#if defined(CONFIG_ISDBT_ANT_DET)
#define GPIO_ISDBT_ANT_DET		EXYNOS4_GPL2(4)
#define GPIO_ISDBT_IRQ_ANT_DET		gpio_to_irq(GPIO_ISDBT_ANT_DET)
#define GPIO_ISDBT_ANT_DET_REV08	EXYNOS4_GPX1(3)
#define GPIO_ISDBT_IRQ_ANT_DET_REV08	gpio_to_irq(GPIO_ISDBT_ANT_DET_REV08)
#endif

#endif

/*BARCODE_EMUL*/
#if defined(CONFIG_BARCODE_EMUL_ICE4)
#define GPIO_BARCODE_SDA_1_8V	EXYNOS4_GPF0(0)
#define GPIO_BARCODE_SCL_1_8V	EXYNOS4_GPF0(1)

#if defined(CONFIG_MACH_T0_CHN_CU_DUOS)
#define GPIO_FPGA_CDONE		EXYNOS4_GPF3(4)
#define GPIO_FPGA_CRESET_B	EXYNOS4_GPF3(5)
#else
#define GPIO_FPGA_CRESET_B	EXYNOS4_GPF0(2)
#define GPIO_FPGA_CDONE		EXYNOS4_GPF0(3)
#endif

#define GPIO_FPGA_RST_N		EXYNOS4_GPF0(5)
#define GPIO_FPGA_SPI_CLK	EXYNOS4212_GPM4(4)
#define GPIO_FPGA_SPI_SI	EXYNOS4212_GPM4(6)
#define GPIO_FPGA_SPI_EN	EXYNOS4212_GPM4(5)
#endif

#if defined(CONFIG_FELICA)
#define  FELICA_GPIO_I2C_SDA   EXYNOS4_GPY2(4)
#define  FELICA_GPIO_I2C_SCL   EXYNOS4_GPY2(5)
#define  FELICA_UART3RX        EXYNOS4_GPA1(4)
#define  FELICA_GPIO_RFS       EXYNOS4_GPL2(6)
#define  FELICA_GPIO_PON       EXYNOS4_GPL2(7)
#define  FELICA_GPIO_INT       EXYNOS4_GPX1(7)
#endif

#if defined(CONFIG_CDMA_MODEM_CBP82)
#define GPIO_VIA_PMIC_PWRON	EXYNOS4212_GPM0(1)
#define GPIO_VIA_PS_HOLD_OFF	EXYNOS4212_GPM0(3)
#define GPIO_VIA_CP_RESET	EXYNOS4_GPF2(4)

#define GPIO_VIA_ACTIVE		EXYNOS4_GPX0(6)
#define IRQ_VIA_ACTIVE		IRQ_EINT(6)	/* IRQ of GPX0[6] */

#define GPIO_VIA_DPRAM_INT	EXYNOS4_GPX3(2)
#define IRQ_VIA_DPRAM_INT	IRQ_EINT(26)	/* IRQ of GPX3[2] */

#define GPIO_UART_AP_VIA_RXD	EXYNOS4_GPA1(4)
#define GPIO_UART_AP_VIA_TXD	EXYNOS4_GPA1(5)

#define GPIO_UART_SFN		S3C_GPIO_SFN(2)
#endif

#if defined(CONFIG_UMTS_MODEM_SS222)
#define GPIO_LTE_PMIC_PWRON	EXYNOS4_GPL2(5)
#define GPIO_LTE_CP_RESET	EXYNOS4_GPL2(4)
#define GPIO_LTE_PS_HOLD_OFF	EXYNOS4_GPY2(3)

#define GPIO_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define IRQ_LTE_ACTIVE		IRQ_EINT(14)	/* IRQ of GPX1[6] */

#define GPIO_LTE_INDICATE	EXYNOS4_GPY0(1)

#define GPIO_LTE2AP_WAKEUP	EXYNOS4_GPX0(5)
#define IRQ_LTE2AP_WAKEUP	IRQ_EINT(5)	/* IRQ of GPX0[5] */
#define GPIO_AP2LTE_STATUS	EXYNOS4_GPX1(2)

#define GPIO_AP2LTE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_LTE2AP_STATUS	EXYNOS4_GPX1(1)
#define IRQ_LTE2AP_STATUS	IRQ_EINT(9)

#define GPIO_LTE_IPC1		EXYNOS4212_GPJ0(1)
#define GPIO_LTE_IPC2		EXYNOS4212_GPM2(4)
#define GPIO_LTE_IPC3		EXYNOS4212_GPM3(3)

#define GPIO_LTE_SPI_CLK	EXYNOS4212_GPM4(4)
#define GPIO_LTE_SPI_CSN	EXYNOS4212_GPM4(5)
#define GPIO_LTE_SPI_MISO	EXYNOS4212_GPM4(6)
#define GPIO_LTE_SPI_MOSI	EXYNOS4212_GPM4(7)
#define GPIO_SPI_SFN		S3C_GPIO_SFN(2)
#endif

#endif /* __MACH_GPIO_MIDAS_H */
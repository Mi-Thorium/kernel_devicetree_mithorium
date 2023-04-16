#ifndef _DTS_MITHORIUM_CONFIG_H
#define _DTS_MITHORIUM_CONFIG_H

#define CONFIG_INPUT_QTI_HAPTICS

#define MI8937_V2
#ifdef MI8937_V2
#define CONFIG_REGULATOR_TPS65132_MI8937
#define CONFIG_TOUCHSCREEN_ATMEL308U_MI8937
#define CONFIG_TOUCHSCREEN_FTS_MI8937
#define CONFIG_TOUCHSCREEN_GT9XX_MI8937
#endif

#endif

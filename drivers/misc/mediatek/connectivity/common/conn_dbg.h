/*
 * Minimal conn_dbg.h stub for building wlan_drv_gen4m built-in.
 * The original header is not part of the released vendor drop; only
 * conn_dbg_add_log() and CONN_DBG_LOG_TYPE_HW_ERR are referenced.
 */
#ifndef _CONN_DBG_H_
#define _CONN_DBG_H_

enum CONN_DBG_LOG_TYPE {
	CONN_DBG_LOG_TYPE_HW_ERR = 0,
	CONN_DBG_LOG_TYPE_COMMON = 1,
};

static inline int conn_dbg_add_log(int type, const char *fmt, ...)
{
	return 0;
}

#endif

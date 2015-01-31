/*
 * journal
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __JOURNAL_DEVICE_H__
#define __JOURNAL_DEVICE_H__

#include <journal/journal.h>

/* gps */
JOURNAL_FUNCTION_NO_PARAM(DEVICE, gps_on, JOURNAL_PRINT("GPS_ON"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, gps_off, JOURNAL_PRINT("GPS_OFF"));

JOURNAL_FUNCTION(DEVICE, gps_start, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("GPS_START %s", name));

JOURNAL_FUNCTION(DEVICE, gps_stop, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("GPS_STOP %s", name));

/* wifi */
JOURNAL_FUNCTION_NO_PARAM(DEVICE, wifi_on, JOURNAL_PRINT("WIFI_ON"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, wifi_off, JOURNAL_PRINT("WIFI_OFF"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, wifi_network_connected, JOURNAL_PRINT("WIFI_NETWORK_CONNECTED"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, wifi_network_disconnected, JOURNAL_PRINT("WIFI_NETWORK_DISCONNECTED"));

/* BT */
JOURNAL_FUNCTION_NO_PARAM(DEVICE, bt_on, JOURNAL_PRINT("BT_ON"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, bt_off, JOURNAL_PRINT("BT_OFF"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, bt_connected, JOURNAL_PRINT("BT_CONNECTED"));

JOURNAL_FUNCTION_NO_PARAM(DEVICE, bt_disconnected, JOURNAL_PRINT("BT_DISCONNECTED"));


#endif              /* __JOURNAL_DEVICE_H__ */


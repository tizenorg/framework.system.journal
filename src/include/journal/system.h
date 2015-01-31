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

#ifndef __JOURNAL_SYSTEM_H__
#define __JOURNAL_SYSTEM_H__

#include <journal/journal.h>

JOURNAL_FUNCTION(SYSTEM, system_power_supply_status, JOURNAL_PROTO(int type, int status), JOURNAL_ARGS(type, status), JOURNAL_PRINT("POWER_SUPPLY_STATUS %d %d", type, status));

JOURNAL_FUNCTION(SYSTEM, system_battery_level, JOURNAL_PROTO(int percentage), JOURNAL_ARGS(percentage), JOURNAL_PRINT("BATTERY_LEVEL %d", percentage));

JOURNAL_FUNCTION(SYSTEM, system_force_closed, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("FORCE_CLOSED %s", name));

JOURNAL_FUNCTION(SYSTEM, system_anr, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("ANR %s", name));

JOURNAL_FUNCTION(SYSTEM, system_device_reboot, JOURNAL_PROTO(int num), JOURNAL_ARGS(num), JOURNAL_PRINT("DEVICE_REBOOT %d", num));

JOURNAL_FUNCTION_NO_PARAM(SYSTEM, system_booting_done, JOURNAL_PRINT("BOOTING_DONE"));

JOURNAL_FUNCTION_NO_PARAM(SYSTEM, system_shutdown, JOURNAL_PRINT("SHUTDOWN"));
#endif              /* __JOURNAL_SYSTEM_H__ */


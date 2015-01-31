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

#ifndef __JOURNAL_PIM_H__
#define __JOURNAL_PIM_H__

#include <journal/journal.h>

JOURNAL_FUNCTION_NO_PARAM(PIM, pim_alarm_created, JOURNAL_PRINT("ALARM_CREATED"));

JOURNAL_FUNCTION_NO_PARAM(PIM, pim_alarm_deleted, JOURNAL_PRINT("ALARM_DELETED"));

#endif              /* __JOURNAL_PIM_H__ */


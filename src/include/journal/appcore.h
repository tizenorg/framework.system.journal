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

#ifndef __JOURNAL_APPCORE_H__
#define __JOURNAL_APPCORE_H__

#include <journal/journal.h>

JOURNAL_FUNCTION(APPCORE, appcore_app_fully_loaded, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("APP_FULLY_LOADED %s", name));

JOURNAL_FUNCTION(APPCORE, appcore_app_closed, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("APP_CLOSED %s", name));

JOURNAL_FUNCTION(APPCORE, appcore_app_updated, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("APP_UPDATED %s", name));

#endif              /* __JOURNAL_APPCORE_H__ */


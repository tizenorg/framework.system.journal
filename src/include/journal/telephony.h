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

#ifndef __JOURNAL_TELEPHONY_H__
#define __JOURNAL_TELEPHONY_H__

#include <journal/journal.h>

JOURNAL_FUNCTION(TELEPHONY, telephony_contact_found, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("CONTACT_FOUND %s", name));

JOURNAL_FUNCTION(TELEPHONY, telephony_contact_not_found, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("CONTACT_NOT_FOUND %s", name));

JOURNAL_FUNCTION(TELEPHONY, telephony_call_record_number, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("CALL_RECORD_NUMBER %s", num));

JOURNAL_FUNCTION_NO_PARAM(TELEPHONY, telephony_no_call_logs, JOURNAL_PRINT("NO_CALL_LOGS"));

JOURNAL_FUNCTION(TELEPHONY, telephony_incoming_call, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("INCOMING_CALL %s", num));

JOURNAL_FUNCTION(TELEPHONY, telephony_answer_call, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("ANSWER_CALL %s", num));

JOURNAL_FUNCTION(TELEPHONY, telephony_hold_call, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("HOLD_CALL %s", num));

JOURNAL_FUNCTION(TELEPHONY, telephony_disconnect_call, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("DISCONNECT_CALL %s", num));

JOURNAL_FUNCTION(TELEPHONY, telephony_mo_call, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("MO_CALL %s", num));

#endif              /* __JOURNAL_TELEPHONY_H__ */


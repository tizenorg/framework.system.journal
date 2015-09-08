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

#ifndef __JOURNAL_MESSAGE_H__
#define __JOURNAL_MESSAGE_H__

#include <journal/journal.h>

JOURNAL_FUNCTION(MESSAGE, message_incoming_msg, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("INCOMING_MSG %s", num));

JOURNAL_FUNCTION_NO_PARAM(MESSAGE, message_sms_msg_opened, JOURNAL_PRINT("SMS_MSG_OPENED"));

JOURNAL_FUNCTION(MESSAGE, message_sms_msg_sent, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("SMS_MSG_SENT %s", num));

JOURNAL_FUNCTION_NO_PARAM(MESSAGE, message_mms_msg_rcvd, JOURNAL_PRINT("MMS_MSG_RCVD"));

JOURNAL_FUNCTION_NO_PARAM(MESSAGE, message_mms_msg_rcvd_failed, JOURNAL_PRINT("MMS_MSG_RCVD_FAILED"));

JOURNAL_FUNCTION(MESSAGE, message_mms_msg_opened, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("MMS_MSG_OPENED %s", name));

JOURNAL_FUNCTION(MESSAGE, message_msg_deleted, JOURNAL_PROTO(char *num), JOURNAL_ARGS(num), JOURNAL_PRINT("MSG_DELETED %s", num));

JOURNAL_FUNCTION_NO_PARAM(MESSAGE, message_no_messages, JOURNAL_PRINT("NO_MESSAGES"));

#endif              /* __JOURNAL_MESSAGE_H__ */


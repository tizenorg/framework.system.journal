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

#ifndef __JOURNAL_H__
#define __JOURNAL_H__

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef API
#define API __attribute__ ((visibility("default")))
#endif

#define STRINGFY(x) #x
#define JOURNAL_MODULE(x) STRINGFY(x)
#define PARAMS(args...) args

#define JOURNAL_PROTO(args...) args
#define JOURNAL_ARGS(args...) args
#define JOURNAL_PRINT(args...) args

#define JOURNAL_FUNCTION(module, func, proto, args, fmt) \
		DECLARE_FUNC_PARAM(PARAMS(module), func, PARAMS(proto), PARAMS(args), PARAMS(fmt))

#define JOURNAL_FUNCTION_NO_PARAM(module, func, fmt) \
		DECLARE_FUNC_NO_PARAM(PARAMS(module), func, PARAMS(fmt))

#define DECLARE_FUNC_PARAM(module, func, proto, args, fmt) \
		static inline int journal_##func(proto)	\
	{							\
		return journal_log(JOURNAL_MODULE(module), fmt);\
	}

#define DECLARE_FUNC_NO_PARAM(module, func, fmt) \
		static inline int journal_##func(void)	\
	{							\
		return journal_log(JOURNAL_MODULE(module), fmt);\
	}

int journal_log(const char *module, const char *fmt, ...);

#ifdef __cplusplus
}
#endif
#endif              /* __JOURNAL_H__ */


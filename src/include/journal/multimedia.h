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

#ifndef __JOURNAL_MULTIMEDIA_H__
#define __JOURNAL_MULTIMEDIA_H__

#include <journal/journal.h>

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_audio_recorded, JOURNAL_PRINT("AUDIO_RECORDED"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_audio_playing, JOURNAL_PRINT("AUDIO_PLAYING"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_audio_deleted, JOURNAL_PRINT("AUDIO_DELETED"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_musicplayer_opened, JOURNAL_PRINT("MUSICPLAYER_OPENED"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_musicplayer_closed, JOURNAL_PRINT("MUSICPLAYER_CLOSED"));

JOURNAL_FUNCTION(MULTIMEDIA, mutimedia_music_playing, JOURNAL_PROTO(char *name), JOURNAL_ARGS(name), JOURNAL_PRINT("MUSIC_PLAYING %s", name));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_pause_music, JOURNAL_PRINT("PAUSE_MUSIC"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_resume_music, JOURNAL_PRINT("RESUME_MUSIC"));

JOURNAL_FUNCTION_NO_PARAM(MULTIMEDIA, mutimedia_set_wallpaper, JOURNAL_PRINT("WALLPAPER_SET"));

#endif              /* __JOURNAL_MULTIMEDIA_H__ */


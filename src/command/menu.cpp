// Copyright (c) 2010, Amar Takhar
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of the Aegisub Group nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// Aegisub Project http://www.aegisub.org/
//
// $Id$

/// @file menu.cpp
/// @brief menu/ commands, related to activating/deactivating/populating menu items
/// @ingroup command
///

#include "config.h"

#ifndef AGI_PRE
#endif

#include "command.h"

#include "aegisub/context.h"

namespace cmd {


class audio: public Command {
public:
	CMD_NAME("main/audio")
	STR_MENU("Audio")
	STR_DISP("Audio")
	STR_HELP("Audio manipulation.")

	void operator()(agi::Context *c) {
	}
};

class automation: public Command {
public:
	CMD_NAME("main/automation")
	STR_MENU("Automation")
	STR_DISP("Automation")
	STR_HELP("Automation manipulation and scripts.")

	void operator()(agi::Context *c) {
	}
};




class edit: public Command {
public:
	CMD_NAME("main/edit")
	STR_MENU("&Edit")
	STR_DISP("Edit")
	STR_HELP("Editing operations.")

	void operator()(agi::Context *c) {
	}
};


class main_edit_sort_lines: public Command {
public:
	CMD_NAME("main/edit/sort lines")
	STR_MENU("Sort Lines")
	STR_DISP("Sort Lines")
	STR_HELP("Sort lines by column.")

	void operator()(agi::Context *c) {
	}
};


class file: public Command {
public:
	CMD_NAME("main/file")
	STR_MENU("&File")
	STR_DISP("File")
	STR_HELP("Operations on subtitles.")

	void operator()(agi::Context *c) {
	}
};


class help: public Command {
public:
	CMD_NAME("main/help")
	STR_MENU("Help")
	STR_DISP("Help")
	STR_HELP("Help options.")

	void operator()(agi::Context *c) {
	}
};


class main_subtitle: public Command {
public:
	CMD_NAME("subtitle")
	STR_MENU("&Subtitle")
	STR_DISP("Subtitle")
	STR_HELP("Subtitle manipulation.")

	void operator()(agi::Context *c) {
	}
};

class main_subtitle_insert_lines: public Command {
public:
	CMD_NAME("main/subtitle/insert lines")
	STR_MENU("&Insert Lines")
	STR_DISP("Insert Lines")
	STR_HELP("Insert lines into currently active subtitle file.")

	void operator()(agi::Context *c) {
	}
};


class main_subtitle_sort_lines: public Command {
public:
	CMD_NAME("main/subtitle/sort lines")
	STR_MENU("Sort Lines")
	STR_DISP("Sort Lines")
	STR_HELP("Sort lines by column.")

	void operator()(agi::Context *c) {
	}
};


class main_subtitle_join_lines: public Command {
public:
	CMD_NAME("main/subtitle/join lines")
	STR_MENU("Join Lines")
	STR_DISP("Join Lines")
	STR_HELP("Merge 2 or more lines together.")

	void operator()(agi::Context *c) {
	}
};


class timing: public Command {
public:
	CMD_NAME("timing")
	STR_MENU("&Timing")
	STR_DISP("Timing")
	STR_HELP("Time manipulation.")

	void operator()(agi::Context *c) {
	}
};


class main_timing_make_times_continous: public Command {
public:
	CMD_NAME("main/timing/make times continous")
	STR_MENU("Make Times Continous")
	STR_DISP("Make Times Continous")
	STR_HELP("Make time continous.")

	void operator()(agi::Context *c) {
	}
};


class video: public Command {
public:
	CMD_NAME("video")
	STR_MENU("&Video")
	STR_DISP("Video")
	STR_HELP("Video operations.")

	void operator()(agi::Context *c) {
	}
};


class main_video_override_ar:
public Command { public:
	CMD_NAME("main/video/override ar")
	STR_MENU("Override AR")
	STR_DISP("Override AR")
	STR_HELP("Override Aspect Ratio")

	void operator()(agi::Context *c) {
	}
};


class main_video_set_zoom: public Command {
public:
	CMD_NAME("main/video/set zoom")
	STR_MENU("Set Zoom")
	STR_DISP("Set Zoom")
	STR_HELP("Set zoom level.")

	void operator()(agi::Context *c) {
	}
};


class view: public Command {
public:
	CMD_NAME("view")
	STR_MENU("View")
	STR_DISP("View")
	STR_HELP("View options.")

	void operator()(agi::Context *c) {
	}
};


} // namespace cmd

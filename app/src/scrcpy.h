#ifndef SCRCPY_H
#define SCRCPY_H

#include <SDL2/SDL_stdinc.h>
#include <recorder.h>

struct scrcpy_options {
    const char *serial;
    const char *crop;
    const char *record_filename;
    enum recorder_format record_format;
    Uint16 port;
    Uint16 max_size;
    Uint32 bit_rate;
    SDL_bool show_touches;
    SDL_bool fullscreen;
    SDL_bool always_on_top;
};

SDL_bool scrcpy(const struct scrcpy_options *options);

#endif

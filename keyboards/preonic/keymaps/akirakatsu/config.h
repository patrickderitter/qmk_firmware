#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)
#endif

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

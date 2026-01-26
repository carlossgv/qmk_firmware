#pragma once

#define MASTER_LEFT

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT

// --- RGB underglow settings ---
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_SLEEP
#define RGBLIGHT_TIMEOUT 300000  // 5 minutes (ms). Example in docs uses ms too.

#define RGBLIGHT_LIMIT_VAL 120   // cap brightness (optional)

// Optional but recommended:
// If your Lily58 has 12 underglow LEDs total (6+6):
#define RGBLED_SPLIT { 6, 6 }


// (Optional) fine control step sizes
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

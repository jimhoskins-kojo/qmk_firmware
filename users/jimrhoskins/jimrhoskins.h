#include <inttypes.h>
#include <stdbool.h>

typedef struct {
    uint8_t   size;
    uint16_t *keycodes;
} qk_tap_dance_n_role_t;

void qk_tap_dance_n_finished(qk_tap_dance_state_t *state, void *user_data);

#define ACTION_TAP_DANCE_N(size_n, ...) \
    { .fn = {NULL, qk_tap_dance_n_finished, NULL}, .user_data = (void *)&((qk_tap_dance_n_role_t){.size = size_n, .keycodes = (uint16_t[]){__VA_ARGS__}}) }

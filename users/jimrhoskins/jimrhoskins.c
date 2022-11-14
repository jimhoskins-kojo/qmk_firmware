#include QMK_KEYBOARD_H
#include "jimrhoskins.h"

void qk_tap_dance_n_finished(qk_tap_dance_state_t *state, void *user_data) {
    qk_tap_dance_n_role_t *data = (qk_tap_dance_n_role_t *)user_data;

    uint8_t count = state->count;
    if (count > data->size) count = data->size;

    tap_code16(data->keycodes[count - 1]);
};

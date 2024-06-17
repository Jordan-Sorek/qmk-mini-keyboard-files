// Enumeration of combo events
enum combo_events {
    COMBO_BASE_2_1_BASE_2_3,
    COMBO_BASE_1_1_BASE_1_3_BASE_1_4,
    COMBO_BASE_2_2_BASE_2_3,
    COMBO_BASE_2_1_BASE_2_2,
    COMBO_BASE_2_2_BASE_2_4,
    COMBO_BASE_2_1_BASE_2_4,
    COMBO_BASE_1_1_BASE_1_4,
    COMBO_BASE_2_3_BASE_2_4,
    COMBO_BASE_1_1_BASE_1_2,
    COMBO_BASE_1_2_BASE_1_3_BASE_1_4,
    COMBO_BASE_1_3_BASE_1_4,
    COMBO_BASE_2_2_BASE_2_3_BASE_2_4,
    COMBO_BASE_2_1_BASE_2_3_BASE_2_4,
    COMBO_BASE_1_2_BASE_1_4,
    COMBO_BASE_2_1_BASE_2_2_BASE_2_3,
    COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_1_4,
    COMBO_BASE_1_1_BASE_1_2_BASE_1_3,
    COMBO_BASE_1_2_BASE_1_3,
    COMBO_BASE_2_1_BASE_2_2_BASE_2_3_BASE_2_4,
    COMBO_BASE_2_1_BASE_1_2,
    COMBO_BASE_1_2_BASE_2_3,
    COMBO_BASE_1_1_BASE_2_1,
    COMBO_BASE_1_1_BASE_1_2_BASE_2_4,
    COMBO_BASE_1_1_BASE_2_2_BASE_2_3,
    COMBO_BASE_1_1_BASE_2_3,
    COMBO_BASE_1_1_BASE_2_2,
    COMBO_BASE_1_1_BASE_2_4,
    COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_2_4,
    COMBO_BASE_2_1_BASE_1_2_BASE_1_3_BASE_1_4,
    COMBO_BASE_1_4_BASE_2_1,
    COMBO_BASE_1_4_BASE_2_2,
    COMBO_BASE_1_4_BASE_2_3,
    COMBO_BASE_1_2_BASE_2_2,
    COMBO_BASE_1_3_BASE_2_3,
    COMBO_NAV_1_2_NAV_2_2,
    COMBO_BASE_1_2_BASE_2_1_BASE_2_3,
    COMBO_NAV_1_2_NAV_2_1_NAV_2_3,
    COMBO_BASE_1_1_BASE_1_3_BASE_2_2,
    COMBO_MOU_1_1_MOU_1_3_MOU_2_2,
    COMBO_NUM_1_1_NUM_1_2,
    COMBO_NUM_1_2_NUM_1_3,
    COMBO_NUM_2_1_NUM_2_2,
    COMBO_NUM_2_2_NUM_2_3,
    COMBO_LENGTH
};

// Combo length
uint16_t COMBO_LEN = COMBO_LENGTH;

// Combo definitions stored in flash memory
const uint16_t PROGMEM combo_base_2_1_base_2_3[] = {BASE_2_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_3_base_1_4[] = {BASE_1_1, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_3[] = {BASE_2_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2[] = {BASE_2_1, BASE_2_2, COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_4[] = {BASE_2_2, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_4[] = {BASE_2_1, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_4[] = {BASE_1_1, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_3_base_2_4[] = {BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2[] = {BASE_1_1, BASE_1_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_3_base_1_4[] = {BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_3_base_1_4[] = {BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_2_base_2_3_base_2_4[] = {BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_3_base_2_4[] = {BASE_2_1, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_4[] = {BASE_1_2, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2_base_2_3[] = {BASE_2_1, BASE_2_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3_base_1_4[] = {BASE_1_1, BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3[] = {BASE_1_1, BASE_1_2, BASE_1_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_1_3[] = {BASE_1_2, BASE_1_3, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_2_2_base_2_3_base_2_4[] = {BASE_2_1, BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_1_2[] = {BASE_2_1, BASE_1_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_3[] = {BASE_1_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_1[] = {BASE_1_1, BASE_2_1, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_2_4[] = {BASE_1_1, BASE_1_2, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_2_base_2_3[] = {BASE_1_1, BASE_2_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_3[] = {BASE_1_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_2[] = {BASE_1_1, BASE_2_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_2_4[] = {BASE_1_1, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_2_base_1_3_base_2_4[] = {BASE_1_1, BASE_1_2, BASE_1_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM combo_base_2_1_base_1_2_base_1_3_base_1_4[] = {BASE_2_1, BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_1[] = {BASE_1_4, BASE_2_1, COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_2[] = {BASE_1_4, BASE_2_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_4_base_2_3[] = {BASE_1_4, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_2[] = {BASE_1_2, BASE_2_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_3_base_2_3[] = {BASE_1_3, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_nav_1_2_nav_2_2[] = {NAV_1_2, NAV_2_2, COMBO_END};
const uint16_t PROGMEM combo_base_1_2_base_2_1_base_2_3[] = {BASE_1_2, BASE_2_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM combo_nav_1_2_nav_2_1_nav_2_3[] = {NAV_1_2, NAV_2_1, NAV_2_3, COMBO_END};
const uint16_t PROGMEM combo_base_1_1_base_1_3_base_2_2[] = {BASE_1_1, BASE_1_3, BASE_2_2, COMBO_END};
const uint16_t PROGMEM combo_mou_1_1_mou_1_3_mou_2_2[] = {MOU_1_1, MOU_1_3, MOU_2_2, COMBO_END};
const uint16_t PROGMEM combo_num_1_1_num_1_2[] = {NUM_1_1, NUM_1_2, COMBO_END};
const uint16_t PROGMEM combo_num_1_2_num_1_3[] = {NUM_1_2, NUM_1_3, COMBO_END};
const uint16_t PROGMEM combo_num_2_1_num_2_2[] = {NUM_2_1, NUM_2_2, COMBO_END};
const uint16_t PROGMEM combo_num_2_2_num_2_3[] = {NUM_2_2, NUM_2_3, COMBO_END};

// Combo definitions array
combo_t key_combos[] = {
    COMBO(combo_base_2_1_base_2_3, COMBO_BASE_2_1_BASE_2_3),
    COMBO(combo_base_1_1_base_1_3_base_1_4, COMBO_BASE_1_1_BASE_1_3_BASE_1_4),
    COMBO(combo_base_2_2_base_2_3, COMBO_BASE_2_2_BASE_2_3),
    COMBO(combo_base_2_1_base_2_2, COMBO_BASE_2_1_BASE_2_2),
    COMBO(combo_base_2_2_base_2_4, COMBO_BASE_2_2_BASE_2_4),
    COMBO(combo_base_2_1_base_2_4, COMBO_BASE_2_1_BASE_2_4),
    COMBO(combo_base_1_1_base_1_4, COMBO_BASE_1_1_BASE_1_4),
    COMBO(combo_base_2_3_base_2_4, COMBO_BASE_2_3_BASE_2_4),
    COMBO(combo_base_1_1_base_1_2, COMBO_BASE_1_1_BASE_1_2),
    COMBO(combo_base_1_2_base_1_3_base_1_4, COMBO_BASE_1_2_BASE_1_3_BASE_1_4),
    COMBO(combo_base_1_3_base_1_4, COMBO_BASE_1_3_BASE_1_4),
    COMBO(combo_base_2_2_base_2_3_base_2_4, COMBO_BASE_2_2_BASE_2_3_BASE_2_4),
    COMBO(combo_base_2_1_base_2_3_base_2_4, COMBO_BASE_2_1_BASE_2_3_BASE_2_4),
    COMBO(combo_base_1_2_base_1_4, COMBO_BASE_1_2_BASE_1_4),
    COMBO(combo_base_2_1_base_2_2_base_2_3, COMBO_BASE_2_1_BASE_2_2_BASE_2_3),
    COMBO(combo_base_1_1_base_1_2_base_1_3_base_1_4, COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_1_4),
    COMBO(combo_base_1_1_base_1_2_base_1_3, COMBO_BASE_1_1_BASE_1_2_BASE_1_3),
    COMBO(combo_base_1_2_base_1_3, COMBO_BASE_1_2_BASE_1_3),
    COMBO(combo_base_2_1_base_2_2_base_2_3_base_2_4, COMBO_BASE_2_1_BASE_2_2_BASE_2_3_BASE_2_4),
    COMBO(combo_base_2_1_base_1_2, COMBO_BASE_2_1_BASE_1_2),
    COMBO(combo_base_1_2_base_2_3, COMBO_BASE_1_2_BASE_2_3),
    COMBO(combo_base_1_1_base_2_1, COMBO_BASE_1_1_BASE_2_1),
    COMBO(combo_base_1_1_base_1_2_base_2_4, COMBO_BASE_1_1_BASE_1_2_BASE_2_4),
    COMBO(combo_base_1_1_base_2_2_base_2_3, COMBO_BASE_1_1_BASE_2_2_BASE_2_3),
    COMBO(combo_base_1_1_base_2_3, COMBO_BASE_1_1_BASE_2_3),
    COMBO(combo_base_1_1_base_2_2, COMBO_BASE_1_1_BASE_2_2),
    COMBO(combo_base_1_1_base_2_4, COMBO_BASE_1_1_BASE_2_4),
    COMBO(combo_base_1_1_base_1_2_base_1_3_base_2_4, COMBO_BASE_1_1_BASE_1_2_BASE_1_3_BASE_2_4),
    COMBO(combo_base_2_1_base_1_2_base_1_3_base_1_4, COMBO_BASE_2_1_BASE_1_2_BASE_1_3_BASE_1_4),
    COMBO(combo_base_1_4_base_2_1, COMBO_BASE_1_4_BASE_2_1),
    COMBO(combo_base_1_4_base_2_2, COMBO_BASE_1_4_BASE_2_2),
    COMBO(combo_base_1_4_base_2_3, COMBO_BASE_1_4_BASE_2_3),
    COMBO(combo_base_1_2_base_2_2, COMBO_BASE_1_2_BASE_2_2),
    COMBO(combo_base_1_3_base_2_3, COMBO_BASE_1_3_BASE_2_3),
    COMBO(combo_nav_1_2_nav_2_2, COMBO_NAV_1_2_NAV_2_2),
    COMBO(combo_base_1_2_base_2_1_base_2_3, COMBO_BASE_1_2_BASE_2_1_BASE_2_3),
    COMBO(combo_nav_1_2_nav_2_1_nav_2_3, COMBO_NAV_1_2_NAV_2_1_NAV_2_3),
    COMBO(combo_base_1_1_base_1_3_base_2_2, COMBO_BASE_1_1_BASE_1_3_BASE_2_2),
    COMBO(combo_mou_1_1_mou_1_3_mou_2_2, COMBO_MOU_1_1_MOU_1_3_MOU_2_2),
    COMBO(combo_num_1_1_num_1_2, COMBO_NUM_1_1_NUM_1_2),
    COMBO(combo_num_1_2_num_1_3, COMBO_NUM_1_2_NUM_1_3),
    COMBO(combo_num_2_1_num_2_2, COMBO_NUM_2_1_NUM_2_2),
    COMBO(combo_num_2_2_num_2_3, COMBO_NUM_2_2_NUM_2_3),
};

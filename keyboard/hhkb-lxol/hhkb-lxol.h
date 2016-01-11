#ifndef HHKB-LXOL_H
#define HHKB-LXOL_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
/* #define KEYMAP( \ */
/*         k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e,  \ */
/*         k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d,  \ */
/*         k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,  \ */
/*         k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,  \ */
/*         k40, k41, k42, k43, k44 \ */
/* ) \ */
/* { \ */
/*         {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e},  \ */
/*         {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d},  \ */
/*         {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c},  \ */
/*         {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c},  \ */
/*         {k40, k41, k42, k43, k44} \ */

/* } */

#define KEYMAP( \
    K31, K30, K00, K10, K11, K20, K21, K40, K41, K60, K61, K70, K71, K50, K51, \
    K32, K01, K02, K13, K12, K23, K22, K42, K43, K62, K63, K73, K72, K52, \
    K33, K04, K03, K14, K15, K24, K25, K45, K44, K65, K64, K74, K53, \
    K34, K05, K06, K07, K16, K17, K26, K46, K66, K76, K75, K55, K54, \
         K35, K36,           K37,                K57, K56 \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07}, \
    { K10, K11, K12, K13, K14, K15, K16, K17}, \
    { K20, K21, K22, K23, K24, K25, K26, KC_NO}, \
    { K30, K31, K32, K33, K34, K35, K36, K37}, \
    { K40, K41, K42, K43, K44, K45, K46, KC_NO}, \
    { K50, K51, K52, K53, K54, K55, K56, K57}, \
    { K60, K61, K62, K63, K64, K65, K66, KC_NO}, \
    { K70, K71, K72, K73, K74, K75, K76, KC_NO} \
}
void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif

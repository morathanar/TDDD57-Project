#ifndef HUD_H
#define HUD_H

/*---------------------------------------------------------------------------*/

#define STR_BALLS "Balls"
#define STR_COINS "Coins"

#define STR_VIEW0 "View: Chase"
#define STR_VIEW1 "View: Lazy"
#define STR_VIEW2 "View: Manual"

/*---------------------------------------------------------------------------*/

void hud_init(void);
void hud_free(void);
void hud_draw(void);
void hud_step(float);

void hud_ball_pulse(float);
void hud_time_pulse(float);
void hud_coin_pulse(float);
void hud_view_pulse(int);

/*---------------------------------------------------------------------------*/

#endif

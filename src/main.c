// 2014 Thomas Hunsaker @thunsaker
// main.c
// CloudPebble-Branching-Test

#include <pebble.h>

static Window *window;

static TextLayer *text_layer;

int main(void) {
	window = window_create();
	window_stack_push(window, true);
	
	Layer *window_layer = window_get_root_layer(window);
	GRect bounds = layer_get_frame(window_layer);

	text_layer = text_layer_create(GRect(0,60,bounds.size.w,bounds.size.h));
	text_layer_set_font(text_layer_percentage, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
	text_layer_set_text_alignment(text_layer_percentage, GTextAlignmentCenter);
	layer_add_child(window_layer, text_layer_get_layer(text_layer_percentage));
	text_layer_set_text(text_layer_percentage, 'Branches!');
	
	app_event_loop();
	
	text_layer_destroy(text_layer_percentage);
	window_destroy(window);
}
// 2014 Thomas Hunsaker @thunsaker
// main.c
// CloudPebble-Branching-Test

#include <pebble.h>

static Window *window;

static TextLayer *text_layer;

int main(void) {
	window = window_create();
	window_stack_push(window, true);
}
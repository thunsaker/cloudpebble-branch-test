// 2014 Thomas Hunsaker @thunsaker
// blah.c
// CloudPebble-Branching-Test
// Testing a push again...

#include <pebble.h>

static Window *window;

static TextLayer *text_layer;

int main(void) {
	window = window_create();
	window_stack_push(window, true);
}
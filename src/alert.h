/*********************************************************************/
/* Simple alert mechanism for Pebble apps                            */
/* Author: Chris Lewis                                               */
/* Modified: 20/02/14                                                */
/* Freely available to use with link to https://github.com/C-D-Lewis */
/*********************************************************************/

#include <pebble.h>

#ifndef ALERT_H
#define ALERT_H

//Library constants
#define MAX_ALERT_STRLEN_LENGTH 64	//For safety - largest string allowed in buffers

//Library buffers
char alert_lib_title_buffer[32];
char alert_lib_body_buffer[64];

//State
bool alert_lib_is_visible;

//Library objects
AppTimer *alert_lib_timer;
TextLayer *alert_lib_title_layer, *alert_lib_body_layer;
Layer *alert_lib_background_layer;

//Function prototypes - see alert.c for details
int alert_strlen(const char *string);
void alert_show(Window *window, const char *title, const char *body, const int duration);
void alert_update(const char *new_title, const char *new_body, const int new_duration);
void alert_cancel();

#endif
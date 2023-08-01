/* --------------------------------------------------------------------------------
 #
 #	4DPlugin-Input.h
 #	source generated by 4D Plugin Wizard
 #	Project : Input
 #	author : miyako
 #	2023/08/01
 #  
 # --------------------------------------------------------------------------------*/

#ifndef PLUGIN_INPUT_H
#define PLUGIN_INPUT_H

#include "4DPluginAPI.h"

#import <Carbon/Carbon.h>

#pragma mark -

static void INPUT_SET_JAPANESE(PA_PluginParameters params);

typedef enum {
  
    api_mode_carbon     = 1,
    api_mode_kana       = 2
    
} api_mode_t;

#endif /* PLUGIN_INPUT_H */

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
/*
*	Author:	Camilo Talero
*
*
*	Version: 0.0.1
*
*	Header for the context creation implementation. Exposes functions and defines needed 
*   included files.
*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
*	Includes and macros
*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#pragma once

#define GLEW_DYNAMIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <vector>

#include "rendering-commons.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
*	Global Values
*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

extern Camera cam;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//========================================================================================
/*
*	Opengl Context Creation:
*/
//========================================================================================

//GLFW callback functions (Set GLFW functions to handle events)
void error_callback(int error, const char* description);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
void cursor_pos_callback(GLFWwindow* window, double xpos, double ypos);

//Initialize the callback functions for window with the above functions
void callBackInit(GLFWwindow* window);

//Check for OpenGL errors
int openGLerror();

double calculateFPS(double prevTime, double currentTime);

//Create a GLFW window
GLFWwindow* createWindow();

//Initialize GLEW, GLFW, Opengl context and create a window.
GLFWwindow* create_context();

//########################################################################################
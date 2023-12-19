#ifndef  __JBXL_CPP_OPENGL_TOOL_H_
#define  __JBXL_CPP_OPENGL_TOOL_H_

/**
@brief    Tool Header for OpenGL/Glut
@file     GlTool.h
@author   Fumi.Iseki (C)
*/


//#define ENABLE_OPENGL 1




#ifdef  ENABLE_OPENGL


#include  <GL/gl.h>
#include  <GL/glut.h>




//
namespace jbxl {



typedef struct _JBXL_GLUT_MOUSESTATE
{
    long int lX;
    long int lY;
    long int lZ;
    unsigned char rgbButtons[4];
} JBXL_GLUT_MOUSESTATE;



//extern  JBXL_GLUT_MOUSESTATE  GlutMouseState;
//extern  long int  GlutMouseXPos;
//extern  long int  GlutMouseYPos;
//extern  long int  GlutMouseZPos;



void  JbxlGlutInit(int argc=0, char** argv=NULL);

void  _jbxlGlutMouseProc(int button, int state, int x, int y);

void  JbxlGlutInitMouse(void);




}       // namespace





#endif  // ENABLE_OPENGL

#endif  // __JBXL_CPP_OPENGL_TOOL_H_








/**
@brief    Tools for OpenGL/Glut
@file     GlTool.cpp
@author   Fumi.Iseki (C)
*/


#include  "tools++.h"
#include  "GlutTool.h"


using namespace jbxl;




#ifdef  ENABLE_OPENGL



static  JBXL_GLUT_MOUSESTATE  GlutMouseState;

static  long int  GlutMouseXPos;
static  long int  GlutMouseYPos;
static  long int  GlutMouseZPos;





void  jbxl::JbxlGlutInit(int argc, char** argv)
{
    memset(&GlutMouseState, 0, sizeof(JBXL_GLUT_MOUSESTATE));

    GlutMouseXPos = 0;
    GlutMouseYPos = 0;
    GlutMouseZPos = 0;

    glutInit(&argc, argv);
}



void  jbxl::_jbxlGlutMouseProc(int button, int state, int x, int y)
{
    switch (button) {
      case GLUT_LEFT_BUTTON:
        DEBUG_ERR("LEFT");
        break;
      case GLUT_MIDDLE_BUTTON:
        DEBUG_ERR("MIDDLE");
        break;
      case GLUT_RIGHT_BUTTON:
        DEBUG_ERR("LEFT");
        break;
    }
}



void  jbxl::JbxlGlutInitMouse(void)
{
    glutMouseFunc(jbxl::_jbxlGlutMouseProc);
}





#endif      // ifdef ENABLE_OPENNI

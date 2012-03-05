set (GUI_LIB_SOURCES 
  GraphicalWidget.cpp 
	GraphicalSceneStack.hpp
  GraphicalScene.cpp)
add_library(gui SHARED ${GUI_LIB_SOURCES})

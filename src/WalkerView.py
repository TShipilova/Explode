#! /usr/bin/env python
# -*- coding: utf-8 -*-

class WalkerView:
    """
    Class WalkerView is interface for graphical representation of 
    Walker object. The moving on board and playing animation is
    divided into two separated, but synchronized parts.
    Object play some animation until said to play another.
    It assume that Walker object provide the graphicsSource method,
    returning path to folder, containing required SVG animation
    """
    
    

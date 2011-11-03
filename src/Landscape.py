#! /usr/bin/env python
# -*- coding: utf-8 -*-

class Landscape(object):
    """Use the source, Luke!"""
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def canPass(self,mover):
        """Mover should be pretty solid interface"""
        pass
    def passed(self,mover):
        pass
    def exploded(self):
        pass

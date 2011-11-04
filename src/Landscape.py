#! /usr/bin/env python
# -*- coding: utf-8 -*-
import abc
class Landscape(object):
    """Use the source, Luke!"""
    def __init__(self):
        pass
    def canPass(self,mover):
        """Mover should be pretty solid interface"""
        pass
    def passed(self,mover):
        pass
    def exploded(self):
        pass
    def binaryRepresentation(self):
        pass
    def description(self):
        return "This is some landscape"
    def hasStaticInitialization(self):
        pass
    @staticmethod
    def instance():
        pass


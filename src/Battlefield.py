#! /usr/bin/env python
# -*- coding: utf-8 -*-
import abc
#! Singleton, for obvilous reasons.
#! Instance, of course, should be private,
#! __instance, e.g, but I lazy.
#! Just use this knowledge wisely.
#! ~illusionoflife
class BattleField(object):
    __instance=None
    def __init__(self, source):
        pass #Do something
    @staticmethod
    def instance(source):
        if  __instance == None:
            __instance = BattleField(source)
        return __instance
    def width(self):
        pass
    def height(self):
        pass
    def exploded(self, x,y):
        pass
    def passed(self,x,y,mover):
        pass
    def canPass(self,x,y,mover)

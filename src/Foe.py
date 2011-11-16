#! /usr/bin/env python
# -*- coding: utf-8 -*-

class Foe(Walker):
    """The interface, that any monster will implement.
    The interface itself manage creation and destruction 
    of monsters. In fact, I could add monster to list
    in constructor, but it is not explicit.
    """
    FoesList=set()
    def __init__(self, pos, animator=None):
        self.pos=pos
        self.animator=animator
    def makeStep(self):
        raise NotImplementedError
    @staticmethod
    def registerFoe(foe):
        Foe.FoesList.add(foe)
    def destroyFoe(foe):
        Foe.FoesList.discard(foe)

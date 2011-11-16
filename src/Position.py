#!/usr/bin/python
# -*- coding: utf-8 -*-

# Maybe you have betters ideas, how call this class?
# Nevertheless, you got it.
# Any suggestions are welcome!
# I do not write acessors for shortness.
# Also, I don't always agree with python-tidy, but it's
# not for me to judge.
# Please, more crititc to style.
# Look Qt documentation. We must beat it!


class InnerError(Exception):

    """Exception, that is thrown if inner login conflict happens"""

    pass


class Position(object):

    """ Class Position is integer-arithmetic alterntative to QPointF.
    It describes the position of unit on board and make all work about 
    corner rounding and counting the interception of unit. 
    The one cell of board is dividend into SEGMENTATION portions
    and I can round to even integer, if difference is less, than ROUND_SEGMENT
    """

    SEGMENTATION = 1 << 16
    ROUND_SEGMENT = 1 << 11
    INTERCEPT_SEGMENT = 1 << 15

    @staticmethod
    def __check_round_limits(offset):
        """Static method to check if this offset can be neglected and rounded"""

        return offset < Position.ROUND_SEGMENT or Position.SEGMENTATION \
            - offset < Position.ROUND_SEGMENT

    def __init__(self, x, y):
        """ Create a Position instance with provided (x,y) coordinated.
        There is no reason to change offset directly, bypassing step methods.
        """

        self.x = x
        self.y = y
        self.x_offset = 0
        self.y_offset = 0

    # def __roundable(self):
    #    if self.x_offset == 0:
    #       return Position.__check_round_limits(self.y_offset)
    #    if self.y_offset == 0:
    #        return Position.__check_round_limits(self.x_offset)
    #    raise InnerError

    def xMakeStep(self, step):
        """Look yMakeStep"""
        self.x_offset += step
        if self.x_offset < 0:
            self.x_offset = 0
        if self.x_offset >= Position.SEGMENTATION:
            self.x_offset = 0
            self.x += 1

    def yMakeStep(self, step):
        """Make step in veritcal direction. 
        Step should not be very big, not more then half of SEGMENTATION.
        Roundation will be more accurate, if step is divided by SEGMENTATION.
        The way we count distance helps to make corner slow-down effect"""

        self.y_offset += step
        if self.y_offset < 0:
            self.y_offset = 0
        if self.y_offset >= Position.SEGMENTATION:
            self.y_offset = 0
            self.y += 1
    def isClose(self, other):
        dx=(self.x-other.x)*Position.SEGMENTATION+(self.x_offset-other.x_offset)
        dy=(self.y-other.y)*Position.SEGMENTATION+(self.y_offset-other.y_offset)
        return dx**2+dy**2<Position.INTERCEPT_SEGMENT**2
        



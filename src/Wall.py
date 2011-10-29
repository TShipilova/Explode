class Wall(Grass):
    def __init__(self):
        self.passable=1;
        
    def exploded(self):
        self=Grass()

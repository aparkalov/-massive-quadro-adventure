#ifndef STATE_H
#define STATE_H

class Cell;

class State
{
public:
    State();
    State(int water, int stone, int dirt, int lava);
    virtual ~State();

    virtual void ChangeWater(Cell*, int);
    virtual void ChangeStone(Cell*, int);
    virtual void ChangeDirt(Cell*, int);
    virtual void ChangeLava(Cell*, int);

    int getWater() const;
    int getStone() const;
    int getDirt()  const;
    int getLava()  const;

protected:
    void ChangeState(Cell*, State*);

    int water;
    int stone;
    int dirt;
    int lava;
};

#endif // STATE_H

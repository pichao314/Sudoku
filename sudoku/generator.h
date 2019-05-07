#ifndef GENERATOR_H
#define GENERATOR_H


class generator
{
public:
    generator();

    char** getHardModeMatrix();
    char** getEasyModeMatrix();
    char** getOriginMatrix();

private:
    char** sudokuMatrix;
    char** matrixGenerator(int blanks);
};

#endif // GENERATOR_H

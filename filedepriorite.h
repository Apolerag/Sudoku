#ifndef FILDEPRIORITE_H
#define FILDEPRIORITE_H

class fileDePriorite
{
public:
    fileDePriorite();
    fileDePriorite(const int n);
    ~fileDePriorite();

    void addCase(const Case &c);
    Case& getFirstCase();

    size_t getSize() const;

private:
    QVector<Case> _file;
    size_t _size;

};

#endif // FILDEPRIORITE_H

#ifndef NEIGHBORHOODSORTER_H
#define NEIGHBORHOODSORTER_H

#include "mda32.h"
#include "p_mountainsort3.h"

class NeighborhoodSorterPrivate;
class NeighborhoodSorter {
public:
    friend class NeighborhoodSorterPrivate;
    NeighborhoodSorter();
    virtual ~NeighborhoodSorter();

    void setOptions(P_mountainsort3_opts opts);
    void addTimeChunk(const Mda32 &X,bigint padding_left,bigint padding_right);
    void sort();
    QVector<double> times() const;
    QVector<int> labels() const;

private:
    NeighborhoodSorterPrivate *d;
};

#endif // NEIGHBORHOODSORTER_H


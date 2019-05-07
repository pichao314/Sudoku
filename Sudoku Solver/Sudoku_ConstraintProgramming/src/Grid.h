#ifndef GRID_H
#define GRID_H

#include <vector>
#include <string>
#include <map>
#include <set>

class Grid
{
  public:
    Grid(std::string grid);
    Grid(const Grid& grid); // copy constructor
    ~Grid();
    bool isValid(const bool isSolutionCheck=false);

    bool add(const unsigned short index, const unsigned short newDigit);
    bool cancelPreviousChange();
    bool resetBoard();

    std::vector<std::set<unsigned short>> getDomainForEachIndex() const;
    bool solve();
    bool alternateSolve();
    bool isBroken();

    void print();
  private:
    void revert(const Grid& backUpGrid);

    void stringToVector(const std::string& grid);
    void createLine(const unsigned short index, std::vector<unsigned short*>& line);
    void createColumn(const unsigned short index, std::vector<unsigned short*>& column);
    void createSquare(const unsigned short index, std::vector<unsigned short*>& cube);
    void domainForEach();
    void mapIndexToSquare();
    void setupDomains();
    void setupEntities();
    void setupIndexLinkage();

    // tools
    void indicesForLine(const unsigned short lineId, std::set<unsigned short>& lineIndices);
    void indicesForColumn(const unsigned short columnId, std::set<unsigned short>& columnIndices);
    void indicesOfLineLessThoseFromSquare(const unsigned short squareId, const unsigned short lineId,
                                                std::set<unsigned short>& indices);
    void indicesOfColumnLessThoseFromSquare(const unsigned short squareId, const unsigned short columnId,
                                                std::set<unsigned short>& indices);
    unsigned short getLineId(const unsigned short squareId, const unsigned short lineNumber);
    unsigned short getColumnId(const unsigned short squareId, const unsigned short columnId);
    unsigned short whichLineAmIIn(const unsigned short index);
    unsigned short whichColumnAmIIn(const unsigned short index);
    unsigned short whichSquareAmIIn(const unsigned short index);
    void indicesIndexCanSee(const short index, std::set<unsigned short>& indicesThatCanBeSeen);

    void updateAffectedDomains(const unsigned short index, const unsigned short digits);
    void removeExclusivesFromLinesDomains(const unsigned short squareId, const unsigned short lineId,
                        const unsigned short digitToRemove);
    void removeExclusivesFromColumnDomains(const unsigned short squareId, const unsigned short columnId,
                        const unsigned short digitToRemove);
    std::set<unsigned short> indicesInCommon(const std::set<unsigned short>& indices1,
            const std::set<unsigned short>& indices2);
    std::vector<short> positionsOnGrid(const std::set<unsigned short> &entityIndices,
                                             const std::vector<short> &pairPresentIndices);

    // Unique Candidate
    bool checkForSquareExclusives();
    bool checkForLineExclusives();
    bool checkForColumnExclusives();
    bool exclusiveFinder(std::set<unsigned short>& indicesOfEntity);

    // interaction
    void entityInteractions();
    void checkColumnSquareInteraction(const unsigned short squareId);
    void checkLineSquareInteraction(const unsigned short squareId);

    // tools for naked subset
    void getPairsForEachIndex(std::vector<std::set<unsigned short>>& domainsForEachIndex,
    std::vector<std::vector<std::pair<short,short>>>& pairsForEachIndex);
    bool checkItsWorthInvestigating(const std::vector<std::set<unsigned short>>& domainsForEachIndex);
    void convertPairPresentIndices(const std::set<unsigned short>& entityIndices, std::vector<short>& pairPresentIndices);

    // Naked Subset
    bool checkLinesForNakedSubsets();
    bool checkColumnsForNakedSubsets();
    bool checkSquaresForNakedSubsets();
    bool nakedSubsetFinder(std::set<unsigned short>& entityIndices);
    void nakedSubset(std::set<unsigned short>& entityIndices);
    bool nakedSubset();

    // tools for Naked Subset
    short occurencesInOf(const std::vector<std::set<unsigned short>>& domainsForEachIndex, 
    const unsigned short digit);
    void deleteAllExcept(const unsigned short index, const unsigned short digit1, 
    const unsigned short digit2);

    // Hidden Subset
    bool checkLinesForHiddenSubsets();
    bool checkColumnsForHiddenSubsets();
    bool checkSquaresForHiddenSubsets();
    bool hiddenSubsetFinder(std::set<unsigned short>& entityIndices);
    bool hiddenSubset();

    // Tools for XWing
    std::vector<short> occurencesOfADigitInAnEntity(const short digit, const std::set<unsigned short>& entityIndices);
    //
    bool xWing(); 
    bool skyscraper();

    // temp
    int domainTotal(std::vector<std::set<unsigned short>> domainOptions);

    public:
      std::vector<std::vector<unsigned short *>> _entities;
      std::vector<unsigned short> _grid;
      std::vector<unsigned short> _initialGrid;
      unsigned short _latestIndexChanged;
      std::map<unsigned short, unsigned short> _indexToSquare;
      std::vector<std::set<unsigned short>> _domainForEachIndex;
      std::vector<std::set<unsigned short>> _indexLinkage;
      std::set<unsigned short> _goldenOriginals;
      std::vector<std::set<unsigned short>> _advancedDomains;
};


#endif // GRID_H
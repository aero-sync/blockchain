#include <cstdint>
#include <vector>
#include "Block.hpp"

using namespace std;

class Blockchain {
    public:
        Blockchain();

        void AddBlock(Block bNew);

    private:
        uint32_t _nDifficulty;
        vector<Block> _vChain;

        Block _GetLastBlock() const;
};

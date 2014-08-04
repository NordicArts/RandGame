#ifndef NORDICARTS_OS_BLOCKTHREAD_H
#define NORDICARTS_OS_BLOCKTHREAD_H

#include "../OS.hpp"
#include "../OSLoad.hpp"
#include "../Critical/Critical.hpp"

namespace NordicArts {
    class BlockThread final {
        // Variables
        public:
        protected:
        private:
            NA_CRITICAL m_Critical;

        // Methods
        public:
            explicit BlockThread(NA_CRITICAL &oCritical);
            ~BlockThread();

        protected:
        private:

    };
};

#endif
#ifndef NORDICARTS_OS_EXCEPTIONHANDLER_H
#define NORDICARTS_OS_EXCEPTIONHANDLER_H

#include "../OSLoad.hpp"

namespace NordicArts {
    class ExceptionHandler final {
        // Variables
        public:
            ExceptionHandler    *m_pSingleton;

        protected:
        private:
            std::string          m_cMessage;

        // Methods
        public:
            explicit ExceptionHandler(const std::string &cMessage, bool bSaveToFile = true);
            explicit ExceptionHandler(const std::ostringstream &cMessage, bool bSaveToFile = true);

            const std::string &getMessage() const;

        protected:
        private:
            ExceptionHandler &operator=(const ExceptionHandler &cConst);

    };
};

#endif
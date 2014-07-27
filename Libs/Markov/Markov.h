#ifndef MARKOV_HEADER
#define MARKOV_HEADER

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <boost/locale.hpp>

#include "../../includes.h"

namespace NordicArts {
    class Markov {
        // Variables
        public:
        protected:
        private:
            std::map<std::string, double> m_mFirstLetterChance;
            std::map<std::string, double> m_mLastLetterChance;

            std::map<std::string, std::map<std::string, double> > m_mLetterToLetterChance;
            
            std::vector<std::string> m_vNames;

            char m_cAlphabet[28]    = "abcdefghijklmnopqrstuvqwxyz";
            float m_fVariance       = 0.0f;

        // Methods
        public:
            Markov(); 
            virtual ~Markov();

            std::string generateWord();
            
            void setVariance(float fVariance);

        protected:
        private:     
            void fillNameList();
            void generateFirstLetterMap();
            void generateLastLetterMap();
            void generateLetterToLetterMap();

            std::string getString(char c);

            std::map<std::string, double> getAlphabetMap();
    };
};

#endif

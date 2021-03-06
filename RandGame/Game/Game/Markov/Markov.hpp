#ifndef NordicArts_Game_Markov_H
#define NordicArts_Game_Markov_H

#include <boost/locale.hpp>

#include "../Includes.hpp"

#include <NordicOS/OS.hpp>
#include <NordicOS/Logger/Logger.hpp>
#include <NordicOS/Time/Time.hpp>

namespace NordicArts {
    namespace GameNS {
        class Markov {
        // Variables
        public:
        protected:
        private:
            std::map<std::string, double>                           m_mFirstLetterChance;
            std::map<std::string, double>                           m_mLastLetterChance;

            std::map<std::string, std::map<std::string, double> >   m_mLetterToLetterChance;

            std::vector<std::string>                                m_vNames;

            char                                                    m_cAlphabet[28]     = "abcdefghijklmnopqrstuvqwxyz";
            float                                                   m_fVariance         = 0.0f;

            NordicOS::Logger                                       *m_pLogger           = nullptr;
            bool                                                    m_bDebug;

        // Methods
        public:
            Markov();
            Markov(NordicOS::Logger *pLogger);
            virtual ~Markov();

            std::string generateWord();
            
            void setVariance(float fVariance);

        protected:
        private:
            void init();

            void fillNameList();
            void generateFirstLetterMap();
            void generateLastLetterMap();
            void generateLetterToLetterMap();

            std::map<std::string, double> getAlphabetMap();
            
            std::locale m_pLocale;
        };
    };
};

#endif

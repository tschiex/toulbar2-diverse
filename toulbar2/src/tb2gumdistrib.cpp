// extreme_value_distribution

#include "tb2wcsp.hpp"
#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

vector<TProb> WCSP::Gumbel_noise_vec(vector<TProb> costsProb)
{
   vector<TProb> perturb_costsProb;
   double perturb=0;
   TProb perturb_prob=0;
   const double a = -0.577215; // -c --> Euler constant so as to standard the law.
   const double b = 1.0;
   std::default_random_engine generator(ToulBar2::seed);
   std::extreme_value_distribution<double> distribution(a,b); // Set the distribution between a and b.
   if(ToulBar2::uai>1){
      for(unsigned int i=0; i<costsProb.size(); ++i){
         perturb = distribution(generator);
         if(costsProb[i] < pow(10,37)){
            perturb_prob = costsProb[i] + perturb;
            perturb_costsProb.push_back(perturb_prob);
         }
         else{
            perturb_costsProb.push_back(costsProb[i]);
         }
      }
   }else{
      for(unsigned int i=0; i<costsProb.size(); ++i){
         perturb = distribution(generator);
         if(costsProb[i] != 0){
            perturb_prob = Log(costsProb[i]) + perturb;
            perturb_costsProb.push_back(Exp(perturb_prob));
         }
         else{
            perturb_costsProb.push_back(costsProb[i]);
         }
      }
   }
   return perturb_costsProb;
}

TProb WCSP::Gumbel_noise(TProb prob)
{
   TProb m_prob =prob;
   return m_prob;
}

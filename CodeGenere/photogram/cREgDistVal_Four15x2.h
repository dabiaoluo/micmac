// File Automatically generated by eLiSe
#include "StdAfx.h"


class cREgDistVal_Four15x2: public cElCompiledFonc
{
   public :

      cREgDistVal_Four15x2();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetFour15x2_State_0_0(double);
      void SetFour15x2_State_1_0(double);
      void SetFour15x2_State_2_0(double);
      void SetRegDistKnownVal_x(double);
      void SetRegDistKnownVal_y(double);
      void SetRegDistValP1_x(double);
      void SetRegDistValP1_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocFour15x2_State_0_0;
      double mLocFour15x2_State_1_0;
      double mLocFour15x2_State_2_0;
      double mLocRegDistKnownVal_x;
      double mLocRegDistKnownVal_y;
      double mLocRegDistValP1_x;
      double mLocRegDistValP1_y;
};

// File Automatically generated by eLiSe
#include "StdAfx.h"


class cREgDistDx_Polyn3: public cElCompiledFonc
{
   public :

      cREgDistDx_Polyn3();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetPolyn3_State_0_0(double);
      void SetPolyn3_State_1_0(double);
      void SetPolyn3_State_2_0(double);
      void SetRegDistu1_x(double);
      void SetRegDistu1_y(double);
      void SetRegDistu2_x(double);
      void SetRegDistu2_y(double);
      void SetRegDistu3_x(double);
      void SetRegDistu3_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocPolyn3_State_0_0;
      double mLocPolyn3_State_1_0;
      double mLocPolyn3_State_2_0;
      double mLocRegDistu1_x;
      double mLocRegDistu1_y;
      double mLocRegDistu2_x;
      double mLocRegDistu2_y;
      double mLocRegDistu3_x;
      double mLocRegDistu3_y;
};

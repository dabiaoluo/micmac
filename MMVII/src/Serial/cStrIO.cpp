#include "include/MMVII_all.h"

namespace MMVII
{

/**
    This file contains the implemenation of conversion between strings and 
   atomic object
*/

static char BufStrIO[1000];

   // ================  bool ==============================================

template <>  std::string cStrIO<bool>::ToStr(const bool & anI)
{
   return  anI ? "true" : "false";
}
template <>  bool cStrIO<bool>::FromStr(const std::string & aStr)
{
    if ((aStr=="1") || UCaseEqual(aStr,"true")) return true;
    if ((aStr=="0") || UCaseEqual(aStr,"false")) return false;

    MMVII_INTERNAL_ASSERT_user(eTyUEr::eBadBool,"Bad value for boolean :["+aStr+"]");

    return false;
}

template <>  const std::string cStrIO<bool>::msNameType = "bool";

   // ================  int ==============================================

template <>  std::string cStrIO<int>::ToStr(const int & anI)
{
   sprintf(BufStrIO,"%d",anI);
   return BufStrIO;
}
template <>  int cStrIO<int>::FromStr(const std::string & aStr)
{
    // can be convenient that empty string correspond to zero
    if (aStr.empty())
       return 0;
    int anI;
    sscanf(aStr.c_str(),"%d",&anI);
    return anI;
}
template <>  const std::string cStrIO<int>::msNameType = "int";

std::string ToStr(int aVal,int aSzMin)
{
   std::string aRes = ToStr(std::abs(aVal));
   while (int(aRes.size())<aSzMin)
       aRes = "0" + aRes;
   if (aVal<0)
       aRes = "-" + aRes;
   return aRes;
}


   // ================  double ==============================================

template <>  std::string cStrIO<double>::ToStr(const double & anI)
{
   sprintf(BufStrIO,"%lf",anI);
   return BufStrIO;
}
template <>  double cStrIO<double>::FromStr(const std::string & aStr)
{
    double anI;
    sscanf(aStr.c_str(),"%lf",&anI);
    return anI;
}
template <>  const std::string cStrIO<double>::msNameType = "double";

   // ================  std::string ==============================================

template <>  std::string cStrIO<std::string>::ToStr(const std::string & aStr)
{
   return aStr;
}
template <>  std::string cStrIO<std::string>::FromStr(const std::string & aStr)
{
    return aStr;
}

template <>  const std::string cStrIO<std::string>::msNameType = "string";

};

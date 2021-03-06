/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqCibleEllipse5.h"


cEqCibleEllipse5::cEqCibleEllipse5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("ElIma",0,8));
   Close(false);
}



void cEqCibleEllipse5::ComputeVal()
{
   double tmp0_ = mLocDiam0/mLocDiam0;
   double tmp1_ = mCompCoord[5];
   double tmp2_ = mCompCoord[0];
   double tmp3_ = mCompCoord[1];
   double tmp4_ = mCompCoord[2];
   double tmp5_ = mCompCoord[3];
   double tmp6_ = mLocDiam0/mLocDiam1;
   double tmp7_ = mCompCoord[4];
   double tmp8_ = mLocXPix-tmp1_;
   double tmp9_ = mLocYPix-tmp1_;
   double tmp10_ = mLocXPix+tmp1_;
   double tmp11_ = mLocYPix+tmp1_;
   double tmp12_ = mLocDiam0/mLocDiam2;
   double tmp13_ = mLocDiam0/mLocDiam3;
   double tmp14_ = mLocDiam0/mLocDiam4;
   double tmp15_ = tmp4_*(tmp0_);
   double tmp16_ = tmp5_*(tmp0_);
   double tmp17_ = tmp7_*(tmp0_);
   double tmp18_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp19_ = tmp4_*(tmp6_);
   double tmp20_ = tmp5_*(tmp6_);
   double tmp21_ = tmp7_*(tmp6_);
   double tmp22_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp23_ = (tmp22_)*-1;
   double tmp24_ = (tmp18_)+tmp23_;
   double tmp25_ = tmp4_*(tmp12_);
   double tmp26_ = tmp5_*(tmp12_);
   double tmp27_ = tmp7_*(tmp12_);
   double tmp28_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp29_ = tmp24_+(tmp28_);
   double tmp30_ = tmp4_*(tmp13_);
   double tmp31_ = tmp5_*(tmp13_);
   double tmp32_ = tmp7_*(tmp13_);
   double tmp33_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp34_ = (tmp33_)*-1;
   double tmp35_ = tmp29_+tmp34_;
   double tmp36_ = tmp4_*(tmp14_);
   double tmp37_ = tmp5_*(tmp14_);
   double tmp38_ = tmp7_*(tmp14_);
   double tmp39_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp40_ = tmp35_+(tmp39_);
   double tmp41_ = 2*tmp1_;
   double tmp42_ = ElSquare(tmp41_);
   double tmp43_ = (tmp40_)/tmp42_;

  mVal[0] = (mCompCoord[7]*(tmp43_)+mCompCoord[6]*(1-tmp43_))-mLocGray;

}


void cEqCibleEllipse5::ComputeValDeriv()
{
   double tmp0_ = mLocDiam0/mLocDiam0;
   double tmp1_ = mCompCoord[5];
   double tmp2_ = mCompCoord[0];
   double tmp3_ = mCompCoord[1];
   double tmp4_ = mCompCoord[2];
   double tmp5_ = mCompCoord[3];
   double tmp6_ = mLocDiam0/mLocDiam1;
   double tmp7_ = mCompCoord[4];
   double tmp8_ = mLocXPix-tmp1_;
   double tmp9_ = mLocYPix-tmp1_;
   double tmp10_ = mLocXPix+tmp1_;
   double tmp11_ = mLocYPix+tmp1_;
   double tmp12_ = mLocDiam0/mLocDiam2;
   double tmp13_ = mLocDiam0/mLocDiam3;
   double tmp14_ = mLocDiam0/mLocDiam4;
   double tmp15_ = tmp4_*(tmp0_);
   double tmp16_ = tmp5_*(tmp0_);
   double tmp17_ = tmp7_*(tmp0_);
   double tmp18_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp19_ = tmp4_*(tmp6_);
   double tmp20_ = tmp5_*(tmp6_);
   double tmp21_ = tmp7_*(tmp6_);
   double tmp22_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp23_ = (tmp22_)*-1;
   double tmp24_ = (tmp18_)+tmp23_;
   double tmp25_ = tmp4_*(tmp12_);
   double tmp26_ = tmp5_*(tmp12_);
   double tmp27_ = tmp7_*(tmp12_);
   double tmp28_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp29_ = tmp24_+(tmp28_);
   double tmp30_ = tmp4_*(tmp13_);
   double tmp31_ = tmp5_*(tmp13_);
   double tmp32_ = tmp7_*(tmp13_);
   double tmp33_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp34_ = (tmp33_)*-1;
   double tmp35_ = tmp29_+tmp34_;
   double tmp36_ = tmp4_*(tmp14_);
   double tmp37_ = tmp5_*(tmp14_);
   double tmp38_ = tmp7_*(tmp14_);
   double tmp39_ = SurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp40_ = tmp35_+(tmp39_);
   double tmp41_ = 2*tmp1_;
   double tmp42_ = ElSquare(tmp41_);
   double tmp43_ = (tmp40_)/tmp42_;
   double tmp44_ = mCompCoord[7];
   double tmp45_ = DerCElXSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp46_ = DerCElXSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp47_ = (tmp46_)*-1;
   double tmp48_ = (tmp45_)+tmp47_;
   double tmp49_ = DerCElXSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp50_ = tmp48_+(tmp49_);
   double tmp51_ = DerCElXSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp52_ = (tmp51_)*-1;
   double tmp53_ = tmp50_+tmp52_;
   double tmp54_ = DerCElXSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp55_ = tmp53_+(tmp54_);
   double tmp56_ = (tmp55_)*tmp42_;
   double tmp57_ = ElSquare(tmp42_);
   double tmp58_ = (tmp56_)/tmp57_;
   double tmp59_ = mCompCoord[6];
   double tmp60_ = DerCElYSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp61_ = DerCElYSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp62_ = (tmp61_)*-1;
   double tmp63_ = (tmp60_)+tmp62_;
   double tmp64_ = DerCElYSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp65_ = tmp63_+(tmp64_);
   double tmp66_ = DerCElYSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp67_ = (tmp66_)*-1;
   double tmp68_ = tmp65_+tmp67_;
   double tmp69_ = DerCElYSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp70_ = tmp68_+(tmp69_);
   double tmp71_ = (tmp70_)*tmp42_;
   double tmp72_ = (tmp71_)/tmp57_;
   double tmp73_ = DerASurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp74_ = (tmp0_)*(tmp73_);
   double tmp75_ = DerASurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp76_ = (tmp6_)*(tmp75_);
   double tmp77_ = tmp76_*-1;
   double tmp78_ = tmp74_+tmp77_;
   double tmp79_ = DerASurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp80_ = (tmp12_)*(tmp79_);
   double tmp81_ = tmp78_+tmp80_;
   double tmp82_ = DerASurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp83_ = (tmp13_)*(tmp82_);
   double tmp84_ = tmp83_*-1;
   double tmp85_ = tmp81_+tmp84_;
   double tmp86_ = DerASurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp87_ = (tmp14_)*(tmp86_);
   double tmp88_ = tmp85_+tmp87_;
   double tmp89_ = (tmp88_)*tmp42_;
   double tmp90_ = (tmp89_)/tmp57_;
   double tmp91_ = DerBSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp92_ = (tmp0_)*(tmp91_);
   double tmp93_ = DerBSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp94_ = (tmp6_)*(tmp93_);
   double tmp95_ = tmp94_*-1;
   double tmp96_ = tmp92_+tmp95_;
   double tmp97_ = DerBSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp98_ = (tmp12_)*(tmp97_);
   double tmp99_ = tmp96_+tmp98_;
   double tmp100_ = DerBSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp101_ = (tmp13_)*(tmp100_);
   double tmp102_ = tmp101_*-1;
   double tmp103_ = tmp99_+tmp102_;
   double tmp104_ = DerBSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp105_ = (tmp14_)*(tmp104_);
   double tmp106_ = tmp103_+tmp105_;
   double tmp107_ = (tmp106_)*tmp42_;
   double tmp108_ = (tmp107_)/tmp57_;
   double tmp109_ = DerCSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp110_ = (tmp0_)*(tmp109_);
   double tmp111_ = DerCSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp112_ = (tmp6_)*(tmp111_);
   double tmp113_ = tmp112_*-1;
   double tmp114_ = tmp110_+tmp113_;
   double tmp115_ = DerCSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp116_ = (tmp12_)*(tmp115_);
   double tmp117_ = tmp114_+tmp116_;
   double tmp118_ = DerCSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp119_ = (tmp13_)*(tmp118_);
   double tmp120_ = tmp119_*-1;
   double tmp121_ = tmp117_+tmp120_;
   double tmp122_ = DerCSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp123_ = (tmp14_)*(tmp122_);
   double tmp124_ = tmp121_+tmp123_;
   double tmp125_ = (tmp124_)*tmp42_;
   double tmp126_ = (tmp125_)/tmp57_;
   double tmp127_ = -(1);
   double tmp128_ = DerP0XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp129_ = tmp127_*(tmp128_);
   double tmp130_ = DerP0YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp131_ = tmp127_*(tmp130_);
   double tmp132_ = tmp129_+tmp131_;
   double tmp133_ = DerP1XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp134_ = tmp132_+(tmp133_);
   double tmp135_ = DerP1YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp15_,tmp16_,tmp17_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp136_ = tmp134_+(tmp135_);
   double tmp137_ = DerP0XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp138_ = tmp127_*(tmp137_);
   double tmp139_ = DerP0YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp140_ = tmp127_*(tmp139_);
   double tmp141_ = tmp138_+tmp140_;
   double tmp142_ = DerP1XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp143_ = tmp141_+(tmp142_);
   double tmp144_ = DerP1YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp19_,tmp20_,tmp21_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp145_ = tmp143_+(tmp144_);
   double tmp146_ = (tmp145_)*-1;
   double tmp147_ = tmp136_+tmp146_;
   double tmp148_ = DerP0XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp149_ = tmp127_*(tmp148_);
   double tmp150_ = DerP0YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp151_ = tmp127_*(tmp150_);
   double tmp152_ = tmp149_+tmp151_;
   double tmp153_ = DerP1XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp154_ = tmp152_+(tmp153_);
   double tmp155_ = DerP1YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp25_,tmp26_,tmp27_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp156_ = tmp154_+(tmp155_);
   double tmp157_ = tmp147_+tmp156_;
   double tmp158_ = DerP0XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp159_ = tmp127_*(tmp158_);
   double tmp160_ = DerP0YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp161_ = tmp127_*(tmp160_);
   double tmp162_ = tmp159_+tmp161_;
   double tmp163_ = DerP1XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp164_ = tmp162_+(tmp163_);
   double tmp165_ = DerP1YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp30_,tmp31_,tmp32_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp166_ = tmp164_+(tmp165_);
   double tmp167_ = (tmp166_)*-1;
   double tmp168_ = tmp157_+tmp167_;
   double tmp169_ = DerP0XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp170_ = tmp127_*(tmp169_);
   double tmp171_ = DerP0YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp172_ = tmp127_*(tmp171_);
   double tmp173_ = tmp170_+tmp172_;
   double tmp174_ = DerP1XSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp175_ = tmp173_+(tmp174_);
   double tmp176_ = DerP1YSurfIER(Pt2dr(tmp2_,tmp3_) ,tmp36_,tmp37_,tmp38_,Pt2dr(tmp8_,tmp9_) ,Pt2dr(tmp10_,tmp11_) );
   double tmp177_ = tmp175_+(tmp176_);
   double tmp178_ = tmp168_+tmp177_;
   double tmp179_ = (tmp178_)*tmp42_;
   double tmp180_ = 4.000000*tmp41_;
   double tmp181_ = (tmp40_)*tmp180_;
   double tmp182_ = tmp179_-tmp181_;
   double tmp183_ = (tmp182_)/tmp57_;
   double tmp184_ = 1-tmp43_;

  mVal[0] = (tmp44_*(tmp43_)+tmp59_*(tmp184_))-mLocGray;

  mCompDer[0][0] = (tmp58_)*tmp44_+-(tmp58_)*tmp59_;
  mCompDer[0][1] = (tmp72_)*tmp44_+-(tmp72_)*tmp59_;
  mCompDer[0][2] = (tmp90_)*tmp44_+-(tmp90_)*tmp59_;
  mCompDer[0][3] = (tmp108_)*tmp44_+-(tmp108_)*tmp59_;
  mCompDer[0][4] = (tmp126_)*tmp44_+-(tmp126_)*tmp59_;
  mCompDer[0][5] = (tmp183_)*tmp44_+-(tmp183_)*tmp59_;
  mCompDer[0][6] = tmp184_;
  mCompDer[0][7] = tmp43_;
}


void cEqCibleEllipse5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqCibleEllipse5 Has no Der Sec");
}

void cEqCibleEllipse5::SetDiam0(double aVal){ mLocDiam0 = aVal;}
void cEqCibleEllipse5::SetDiam1(double aVal){ mLocDiam1 = aVal;}
void cEqCibleEllipse5::SetDiam2(double aVal){ mLocDiam2 = aVal;}
void cEqCibleEllipse5::SetDiam3(double aVal){ mLocDiam3 = aVal;}
void cEqCibleEllipse5::SetDiam4(double aVal){ mLocDiam4 = aVal;}
void cEqCibleEllipse5::SetGray(double aVal){ mLocGray = aVal;}
void cEqCibleEllipse5::SetXPix(double aVal){ mLocXPix = aVal;}
void cEqCibleEllipse5::SetYPix(double aVal){ mLocYPix = aVal;}



double * cEqCibleEllipse5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Diam0") return & mLocDiam0;
   if (aName == "Diam1") return & mLocDiam1;
   if (aName == "Diam2") return & mLocDiam2;
   if (aName == "Diam3") return & mLocDiam3;
   if (aName == "Diam4") return & mLocDiam4;
   if (aName == "Gray") return & mLocGray;
   if (aName == "XPix") return & mLocXPix;
   if (aName == "YPix") return & mLocYPix;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqCibleEllipse5::mTheAuto("cEqCibleEllipse5",cEqCibleEllipse5::Alloc);


cElCompiledFonc *  cEqCibleEllipse5::Alloc()
{  return new cEqCibleEllipse5();
}



/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/

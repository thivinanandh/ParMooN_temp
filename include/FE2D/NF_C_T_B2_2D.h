/*
    TNodalFunctional2D(NodalFunctional2D id,
                       int n_allfunctionals, int n_edgefunctionals,
                       int n_pointsall, int n_pointsedge,
                       double *xi, double *eta, double *t,
                       DoubleFunctVect *evalall,
                       DoubleFunctVect *evaledge);
*/

static double NF_C_T_B2_2D_Xi[] = { 0, 0.5, 1,
                                  0, 0.5,
                                  0, 
                                  0.33333333333333333333 };
static double NF_C_T_B2_2D_Eta[] = { 0, 0, 0,
                                   0.5, 0.5,
                                   1,
                                   0.33333333333333333333 };
static double NF_C_T_B2_2D_T[] = { -1, 0, 1 };

void NF_C_T_B2_2D_EvalAll(TCollection *Coll, TBaseCell *Cell, double *PointValues,
                          double *Functionals)
{
  Functionals[0] = PointValues[0];
  Functionals[1] = PointValues[1];
  Functionals[2] = PointValues[2];
  Functionals[3] = PointValues[3];
  Functionals[4] = PointValues[4];
  Functionals[5] = PointValues[5];
  Functionals[6] = 1.35*PointValues[6]
                  +0.15*(PointValues[0]+PointValues[2]+PointValues[5])
                  +0.40*(PointValues[1]+PointValues[3]+PointValues[4]);
}

void NF_C_T_B2_2D_EvalEdge(TCollection *Coll, TBaseCell *Cell, int Joint, double *PointValues,
                           double *Functionals)
{
  Functionals[0] = PointValues[0];
  Functionals[1] = PointValues[1];
  Functionals[2] = PointValues[2];
}

TNodalFunctional2D *NF_C_T_B2_2D_Obj = new TNodalFunctional2D
        (NF_C_T_B2_2D, 7, 3, 7, 3, NF_C_T_B2_2D_Xi, NF_C_T_B2_2D_Eta,
         NF_C_T_B2_2D_T, NF_C_T_B2_2D_EvalAll, NF_C_T_B2_2D_EvalEdge);
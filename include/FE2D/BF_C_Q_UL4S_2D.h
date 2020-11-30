// ***********************************************************************
// Q4 element with bubbles, conforming, 2D
// ***********************************************************************

// base function values
static void C_Q_UL4S_2D_Funct(double xi, double eta, double *values)
{
  double t2, t3, t4, t5, t7, t9, t11, t12, t13, t14, t15, t17, t18, t19, t21;
  double t22, t23, t24, t25, t27, t29, t32, t33, t34, t36, t39, t40, t41, t42;
  double t43, t44, t45, t46, t47, t48, t49, t50, t52, t53, t54, t55, t57, t58;
  double t59, t60, t61, t62, t63, t66, t67, t68, t69, t72, t73, t74, t75, t78;
  double t79, t80, t81, t85, t87, t90, t91, t92, t93, t94, t95, t96, t98, t99;
  double t100, t101, t103, t104, t105, t106, t108, t109, t112, t114, t115;
  double t116, t117, t120, t121, t122, t123, t125, t129, t136, t137, t138;
  double t139, t140, t141, t142, t143, t150, t151, t154, t159, t160, t162;
  double t164, t165, t166, t171, t174, t175, t176, t177, t179, t181, t182;
  double t183, t185, t187, t188, t189, t190, t191, t192, t193, t194, t195;
  double t196, t197, t198, t199, t200, t201, t203, t205, t218;

   t2 = xi*xi;
   t3 = t2/9.0;
   t4 = t2*xi;
   t5 = t4/6.0;
   t7 = xi*eta;
   t9 = t2*eta;
   t11 = t4*eta;
   t12 = 2.0/3.0*t11;
   t13 = eta*eta;
   t14 = t13/9.0;
   t15 = xi*t13;
   t17 = t2*t13;
   t18 = t17/4.0;
   t19 = t4*t13;
   t21 = t13*eta;
   t22 = t21/6.0;
   t23 = xi*t21;
   t24 = 2.0/3.0*t23;
   t25 = t2*t21;
   t27 = t4*t21;
   t29 = 1.0-t2;
   t32 = -1.0/2.0+3.0/2.0*t2;
   t33 = (1.0-eta)*t29*t32;
   t34 = 2.0/9.0*t33;
   t36 = 1.0-t13;
   t39 = -1.0/2.0+3.0/2.0*t13;
   t40 = (1.0-xi)*t36*t39;
   t41 = 2.0/9.0*t40;
   t42 = t29*t36;
   t43 = t42*t2;
   t44 = 2.0/3.0*t43;
   t45 = t42*t13;
   t46 = 2.0/3.0*t45;
   t47 = -2.0/9.0+5.0/18.0*xi+t3-t5+5.0/18.0*eta+7.0/12.0*t7-7.0/36.0*t9-t12+t14-7.0/36.0*t15+t18-t19/6.0-t22-t24-t25/6.0+t27-t34-t41+t44+t46;
   t48 = 2.0/3.0*xi;
   t49 = 4.0/9.0*t2;
   t50 = 2.0/3.0*t4;
   t52 = 2.0*t7;
   t53 = 8.0/9.0*t9;
   t54 = 2.0*t11;
   t55 = 4.0/9.0*t21;
   t57 = 4.0/9.0*t25;
   t58 = 8.0/3.0*t27;
   t59 = 8.0/9.0*t33;
   t60 = 8.0/3.0*t43;
   t61 = 8.0/9.0*t45;
   t62 = 4.0/9.0-t48-t49+t50-8.0/9.0*eta-t52+t53+t54+t55+8.0/3.0*t23-t57-t58+t59-t60-t61;
   t63 = 2.0/3.0*t2;
   t66 = t13/2.0;
   t67 = t17/2.0;
   t68 = 2.0*t23;
   t69 = 2.0*t27;
   t72 = -2.0/3.0+xi+t63-t4+7.0/6.0*eta+t52-7.0/6.0*t9-t54+t66-t15-t67+t19-t21-t68+t25+t69-4.0/3.0*t33+4.0*t43;
   t73 = 4.0/9.0*eta;
   t74 = 2.0/3.0*t7;
   t75 = 4.0/9.0*t9;
   t78 = 4.0/9.0-t48-t49+t50-t73-t74+t75+t12+4.0/3.0*t15-4.0/3.0*t19+t59-t60;
   t79 = xi/18.0;
   t80 = eta/18.0;
   t81 = t7/12.0;
   t85 = t21/18.0;
   t87 = t27/3.0;
   t90 = (1.0+xi)*t36*t39;
   t91 = 2.0/9.0*t90;
   t92 = 2.0/9.0*t45;
   t93 = -2.0/9.0+t79+t3-t5+t80+t81+t9/36.0+t14-5.0/36.0*t15+t18+t19/2.0+t85-7.0/18.0*t25-t87-t34-t91+t44+t92;
   t94 = 4.0/9.0*t4;
   t95 = 2.0/9.0*eta;
   t96 = 2.0/9.0*t7;
   t98 = 4.0/9.0*t13;
   t99 = 4.0/9.0*t19;
   t100 = 2.0/9.0*t21;
   t101 = 2.0/9.0*t23;
   t103 = 8.0/9.0*t27;
   t104 = 8.0/9.0*t90;
   t105 = 8.0/9.0*t43;
   t106 = 4.0/9.0+t94+t95+t96-t53-8.0/9.0*t11-t98-t99-t100-t101+8.0/9.0*t25+t103+t104-t105-t61;
   t108 = t2/2.0;
   t109 = t4/3.0;
   t112 = 2.0/3.0*t13;
   t114 = t19/3.0;
   t115 = t21/3.0;
   t116 = t25/3.0;
   t117 = 2.0/3.0*t27;
   t120 = -2.0/3.0-xi/2.0+t108+t109-eta/3.0-t74+t9/3.0+t12+t112+t15/2.0-t67-t114+t115+t24-t116-t117-4.0/3.0*t90+4.0/3.0*t45;
   t121 = 4.0/9.0*xi;
   t122 = 4.0/9.0*t15;
   t123 = 4.0/9.0+t121+t95+t74+t75-t98-t122-t100-t24-t57+t104-t61;
   t125 = t4/18.0;
   t129 = 2.0/9.0*t11;
   t136 = (1.0+eta)*t29*t32;
   t137 = 2.0/9.0*t136;
   t138 = 2.0/9.0*t43;
   t139 = -2.0/9.0-xi/6.0+t3+t125-eta/6.0-11.0/36.0*t7+t9/12.0+t129+t14+t15/12.0+t18+5.0/18.0*t19+t85+t101+5.0/18.0*t25+t27/9.0-t137-t91+t138+t92;
   t140 = 2.0/9.0*xi;
   t141 = 2.0/9.0*t4;
   t142 = 8.0/9.0*t136;
   t143 = 4.0/9.0+t140-t49-t141+t73+t74-t75-t12+t122-t99+t142-t105;
   t150 = -2.0/3.0-xi/3.0+t63+t109-eta/2.0-t74+t9/2.0+t12+t66+t15/3.0-t67-t114+t115+t24-t116-t117-4.0/3.0*t136+4.0/3.0*t43;
   t151 = 8.0/9.0*t15;
   t154 = 4.0/9.0+t140-t49-t141+t96-t129-t151+8.0/9.0*t19+t55-8.0/9.0*t23-t57+t103+t142-t105-t61;
   t159 = -2.0/9.0+t79+t3+t125+t80+t81-5.0/36.0*t9+t14+t15/36.0+t18-7.0/18.0*t19-t22+t25/2.0-t87-t137-t41+t138+t46;
   t160 = 2.0/3.0*eta;
   t162 = 2.0/3.0*t21;
   t164 = 8.0/9.0*t40;
   t165 = 8.0/3.0*t45;
   t166 = 4.0/9.0-t121-t160-t74+4.0/3.0*t9-t98+t122+t162+t24-4.0/3.0*t25+t164-t165;
   t171 = -2.0/3.0+7.0/6.0*xi+t108-t4+eta+t52-t9-t54+t112-7.0/6.0*t15-t67+t19-t21-t68+t25+t69-4.0/3.0*t40+4.0*t45;
   t174 = 4.0/9.0-8.0/9.0*xi+t94-t160-t52+8.0/3.0*t11-t98+t151-t99+t162+t68-t58+t164-t105-t165;
   t175 = 16.0/9.0*xi;
   t176 = 16.0/9.0*t4;
   t177 = 16.0/9.0*eta;
   t179 = 16.0/9.0*t9;
   t181 = 16.0/9.0*t15;
   t182 = 16.0/9.0*t19;
   t183 = 16.0/9.0*t21;
   t185 = 16.0/9.0*t25;
   t187 = 32.0/9.0*t43;
   t188 = 32.0/9.0*t45;
   t189 = t175-t176+t177+64.0/9.0*t7-t179-64.0/9.0*t11-t181+t182-t183-64.0/9.0*t23+t185+64.0/9.0*t27+t187+t188;
   t190 = 8.0/3.0*xi;
   t191 = 8.0/3.0*t4;
   t192 = 8.0/3.0*eta;
   t193 = 16.0/3.0*t7;
   t194 = 8.0/3.0*t9;
   t195 = 16.0/3.0*t11;
   t196 = 8.0/3.0*t15;
   t197 = 8.0/3.0*t19;
   t198 = 8.0/3.0*t21;
   t199 = 16.0/3.0*t23;
   t200 = 8.0/3.0*t25;
   t201 = 16.0/3.0*t27;
   t203 = -t190+t191-t192-t193+t194+t195+t196-t197+t198+t199-t200-t201-16.0/3.0*t45;
   t205 = -t190+t191-t192-t193+t194+t195+t196-t197+t198+t199-t200-t201-16.0/3.0*t43;
   t218 = 1.0+2.0*xi-t2-2.0*t4+2.0*eta+4.0*t7-2.0*t9-4.0*t11-t13-2.0*t15+t17+2.0*t19-2.0*t21-4.0*t23+2.0*t25+4.0*t27;

  values[0] = t47;
  values[1] = t62;
  values[2] = t72;
  values[3] = t78;
  values[4] = t93;
  values[5] = t106;
  values[6] = t120;
  values[7] = t123;
  values[8] = t139;
  values[9] = t143;
  values[10] = t150;
  values[11] = t154;
  values[12] = t159;
  values[13] = t166;
  values[14] = t171;
  values[15] = t174;
  values[16] = t189;
  values[17] = t203;
  values[18] = t205;
  values[19] = t218;
  values[20] = t175-t176-t181+t182+t187;
  values[21] = t177-t179-t183+t185+t188;
}

// values of the derivatives in xi direction
static void C_Q_UL4S_2D_DeriveXi(double xi, double eta, double *values)
{
  double t1, t2, t3, t5, t7, t8, t9, t11, t12, t13, t15, t16, t17, t19, t21;
  double t24, t25, t26, t27, t29, t30, t31, t34, t35, t37, t38, t40, t41, t43;
  double t44, t45, t46, t47, t48, t49, t50, t52, t53, t54, t55, t56, t57, t58;
  double t59, t60, t61, t63, t64, t65, t66, t71, t72, t73, t76, t77, t82, t83;
  double t84, t85, t87, t88, t90, t91, t92, t93, t94, t97, t98, t99, t101;
  double t102, t104, t107, t112, t114, t115, t117, t118, t119, t120, t121;
  double t122, t123, t124, t125, t131, t132, t135, t139, t142, t147, t149;
  double t150, t152, t154, t155, t157, t159, t160, t161, t162, t163, t164;
  double t165, t166, t167, t168, t169, t170, t171, t173, t176, t188;

  t1 = 2.0/9.0*xi;
  t2 = xi*xi;
  t3 = t2/2.0;
  t5 = xi*eta;
  t7 = t2*eta;
  t8 = 2.0*t7;
  t9 = eta*eta;
  t11 = xi*t9;
  t12 = t11/2.0;
  t13 = t2*t9;
  t15 = t9*eta;
  t16 = 2.0/3.0*t15;
  t17 = xi*t15;
  t19 = t2*t15;
  t21 = 1.0-eta;
  t24 = -1.0/2.0+3.0/2.0*t2;
  t25 = t21*xi*t24;
  t26 = 4.0/9.0*t25;
  t27 = 1.0-t2;
  t29 = t21*t27*xi;
  t30 = 2.0/3.0*t29;
  t31 = 1.0-t9;
  t34 = t31*(-1.0/2.0+3.0/2.0*t9);
  t35 = 2.0/9.0*t34;
  t37 = t2*xi*t31;
  t38 = 4.0/3.0*t37;
  t40 = t27*t31*xi;
  t41 = 4.0/3.0*t40;
  t43 = xi*t31*t9;
  t44 = 4.0/3.0*t43;
  t45 = 5.0/18.0+t1-t3+7.0/12.0*eta-7.0/18.0*t5-t8-7.0/36.0*t9+t12-t13/2.0-t16-t17/3.0+3.0*t19+t26-t30+t35-t38+t41-t44;
  t46 = 8.0/9.0*xi;
  t47 = 2.0*t2;
  t48 = 2.0*eta;
  t49 = 16.0/9.0*t5;
  t50 = 6.0*t7;
  t52 = 8.0/9.0*t17;
  t53 = 8.0*t19;
  t54 = 16.0/9.0*t25;
  t55 = 8.0/3.0*t29;
  t56 = 16.0/3.0*t37;
  t57 = 16.0/3.0*t40;
  t58 = 16.0/9.0*t43;
  t59 = -2.0/3.0-t46+t47-t48+t49+t50+8.0/3.0*t15-t52-t53-t54+t55+t56-t57+t58;
  t60 = 4.0/3.0*xi;
  t61 = 3.0*t2;
  t63 = 3.0*t13;
  t64 = 2.0*t15;
  t65 = 2.0*t17;
  t66 = 6.0*t19;
  t71 = 1.0+t60-t61+t48-7.0/3.0*t5-t50-t9-t11+t63-t64+t65+t66+8.0/3.0*t25-4.0*t29-8.0*t37+8.0*t40;
  t72 = 2.0/3.0*eta;
  t73 = 8.0/9.0*t5;
  t76 = -2.0/3.0-t46+t47-t72+t73+t8+4.0/3.0*t9-4.0*t13-t54+t55+t56-t57;
  t77 = eta/12.0;
  t82 = 4.0/9.0*t43;
  t83 = 1.0/18.0+t1-t3+t77+t5/18.0-5.0/36.0*t9+t12+3.0/2.0*t13-7.0/9.0*t17-t19+t26-t30-t35-t38+t41-t82;
  t84 = 4.0/3.0*t2;
  t85 = 2.0/9.0*eta;
  t87 = 4.0/3.0*t13;
  t88 = 2.0/9.0*t15;
  t90 = 8.0/3.0*t19;
  t91 = 8.0/9.0*t34;
  t92 = 16.0/9.0*t37;
  t93 = 16.0/9.0*t40;
  t94 = t84+t85-t49-8.0/3.0*t7-t87-t88+16.0/9.0*t17+t90+t91+t92-t93+t58;
  t97 = 2.0/3.0*t17;
  t98 = 2.0*t19;
  t99 = 4.0/3.0*t34;
  t101 = -1.0/2.0+xi+t2-t72+2.0/3.0*t5+t8+t9/2.0-t11-t13+t16-t97-t98-t99-8.0/3.0*t43;
  t102 = 4.0/9.0*t9;
  t104 = t2/6.0;
  t107 = 2.0/3.0*t7;
  t112 = 1.0+eta;
  t114 = t112*xi*t24;
  t115 = 4.0/9.0*t114;
  t117 = t112*t27*xi;
  t118 = 2.0/3.0*t117;
  t119 = 4.0/9.0*t37;
  t120 = 4.0/9.0*t40;
  t121 = -1.0/6.0+t1+t104-11.0/36.0*eta+t5/6.0+t107+t9/12.0+t12+5.0/6.0*t13+t88+5.0/9.0*t17+t19/3.0+t115-t118-t35-t119+t120-t82;
  t122 = 2.0/3.0*t2;
  t123 = 16.0/9.0*t114;
  t124 = 8.0/3.0*t117;
  t125 = 2.0/9.0-t46-t122+t72-t73-t8+t102-t87-t123+t124+t92-t93;
  t131 = -1.0/3.0+t60+t2-t72+t5+t8+t9/3.0-t11-t13+t16-t97-t98+8.0/3.0*t114-4.0*t117-8.0/3.0*t37+8.0/3.0*t40;
  t132 = 8.0/9.0*t9;
  t135 = 2.0/9.0-t46-t122+t85-t107-t132+8.0/3.0*t13-8.0/9.0*t15-t52+t90-t123+t124+t92-t93+t58;
  t139 = 1.0/18.0+t1+t104+t77-5.0/18.0*t5+t9/36.0+t12-7.0/6.0*t13+t17-t19+t115-t118+t35-t119+t120-t44;
  t142 = 16.0/3.0*t43;
  t147 = 7.0/6.0+xi-t61+t48-2.0*t5-t50-7.0/6.0*t9-t11+t63-t64+t65+t66+t99-8.0*t43;
  t149 = -8.0/9.0+t84-t48+8.0*t7+t132-t87+t64-t53-t91+t92-t93+t142;
  t150 = 16.0/3.0*t2;
  t152 = 32.0/9.0*t5;
  t154 = 16.0/9.0*t9;
  t155 = 16.0/3.0*t13;
  t157 = 32.0/9.0*t17;
  t159 = 64.0/9.0*t37;
  t160 = 64.0/9.0*t40;
  t161 = 64.0/9.0*t43;
  t162 = 16.0/9.0-t150+64.0/9.0*eta-t152-64.0/3.0*t7-t154+t155-64.0/9.0*t15+t157+64.0/3.0*t19-t159+t160-t161;
  t163 = 8.0*t2;
  t164 = 16.0/3.0*eta;
  t165 = 16.0/3.0*t5;
  t166 = 16.0*t7;
  t167 = 8.0/3.0*t9;
  t168 = 8.0*t13;
  t169 = 16.0/3.0*t15;
  t170 = 16.0/3.0*t17;
  t171 = 16.0*t19;
  t173 = -8.0/3.0+t163-t164+t165+t166+t167-t168+t169-t170-t171+32.0/3.0*t43;
  t176 = -8.0/3.0+t163-t164+t165+t166+t167-t168+t169-t170-t171+32.0/3.0*t37-32.0/3.0*t40;
  t188 = 2.0-2.0*xi-6.0*t2+4.0*eta-4.0*t5-12.0*t7-2.0*t9+2.0*t11+6.0*t13-4.0*t15+4.0*t17+12.0*t19;

  values[0] = t45;
  values[1] = t59;
  values[2] = t71;
  values[3] = t76;
  values[4] = t83;
  values[5] = t94;
  values[6] = t101;
  values[7] = 4.0/9.0+t72+t73-t102-t16-t52+t91+t58;
  values[8] = t121;
  values[9] = t125;
  values[10] = t131;
  values[11] = t135;
  values[12] = t139;
  values[13] = -4.0/9.0-t72+8.0/3.0*t5+t102+t16-8.0/3.0*t17-t91+t142;
  values[14] = t147;
  values[15] = t149;
  values[16] = t162;
  values[17] = t173;
  values[18] = t176;
  values[19] = t188;
  values[20] = 16.0/9.0-t150-t154+t155-t159+t160;
  values[21] = -t152+t157-t161;
}

// values of the derivatives in eta direction
static void C_Q_UL4S_2D_DeriveEta(double xi, double eta, double *values)
{
  double t2, t4, t5, t6, t7, t9, t10, t11, t13, t14, t15, t16, t17, t19, t21;
  double t24, t25, t26, t29, t30, t31, t32, t34, t35, t37, t38, t40, t41, t43;
  double t44, t45, t46, t47, t48, t49, t51, t52, t53, t54, t55, t56, t57, t60;
  double t61, t62, t63, t64, t65, t67, t68, t69, t73, t76, t78, t80, t81, t83;
  double t84, t85, t86, t87, t88, t90, t91, t92, t93, t95, t96, t97, t98, t99;
  double t101, t102, t103, t108, t109, t110, t113, t118, t119, t124, t125;
  double t128, t133, t135, t137, t138, t139, t140, t141, t147, t149, t151;
  double t153, t154, t155, t157, t159, t160, t161, t162, t163, t164, t165;
  double t166, t167, t168, t169, t170, t171, t174, t176, t188;

  t2 = xi*xi;
  t4 = t2*xi;
  t5 = 2.0/3.0*t4;
  t6 = 2.0/9.0*eta;
  t7 = xi*eta;
  t9 = t2*eta;
  t10 = t9/2.0;
  t11 = t4*eta;
  t13 = eta*eta;
  t14 = t13/2.0;
  t15 = xi*t13;
  t16 = 2.0*t15;
  t17 = t2*t13;
  t19 = t4*t13;
  t21 = 1.0-t2;
  t24 = t21*(-1.0/2.0+3.0/2.0*t2);
  t25 = 2.0/9.0*t24;
  t26 = 1.0-xi;
  t29 = -1.0/2.0+3.0/2.0*t13;
  t30 = t26*eta*t29;
  t31 = 4.0/9.0*t30;
  t32 = 1.0-t13;
  t34 = t26*t32*eta;
  t35 = 2.0/3.0*t34;
  t37 = t21*eta*t2;
  t38 = 4.0/3.0*t37;
  t40 = t21*t13*eta;
  t41 = 4.0/3.0*t40;
  t43 = t21*t32*eta;
  t44 = 4.0/3.0*t43;
  t45 = 5.0/18.0+7.0/12.0*xi-7.0/36.0*t2-t5+t6-7.0/18.0*t7+t10-t11/3.0-t14-t16-t17/2.0+3.0*t19+t25+t31-t35-t38-t41+t44;
  t46 = 2.0*xi;
  t47 = 8.0/9.0*t2;
  t48 = 2.0*t4;
  t49 = 4.0/3.0*t13;
  t51 = 4.0/3.0*t17;
  t52 = 8.0*t19;
  t53 = 8.0/9.0*t24;
  t54 = 16.0/3.0*t37;
  t55 = 16.0/9.0*t40;
  t56 = 16.0/9.0*t43;
  t57 = -8.0/9.0-t46+t47+t48+t49+8.0*t15-t51-t52-t53+t54+t55-t56;
  t60 = 2.0*t11;
  t61 = 3.0*t13;
  t62 = 6.0*t15;
  t63 = 3.0*t17;
  t64 = 6.0*t19;
  t65 = 4.0/3.0*t24;
  t67 = 7.0/6.0+t46-7.0/6.0*t2-t48+eta-2.0*t7-t9+t60-t61-t62+t63+t64+t65-8.0*t37;
  t68 = 2.0/3.0*xi;
  t69 = 4.0/9.0*t2;
  t73 = xi/12.0;
  t76 = t13/6.0;
  t78 = 1.0+xi;
  t80 = t78*eta*t29;
  t81 = 4.0/9.0*t80;
  t83 = t78*t32*eta;
  t84 = 2.0/3.0*t83;
  t85 = 4.0/9.0*t40;
  t86 = 4.0/9.0*t43;
  t87 = 1.0/18.0+t73+t2/36.0+t6-5.0/18.0*t7+t10+t11+t76-7.0/6.0*t17-t19+t25+t81-t84-t38-t85+t86;
  t88 = 2.0/9.0*xi;
  t90 = 8.0/9.0*eta;
  t91 = 8.0/9.0*t11;
  t92 = 2.0/3.0*t13;
  t93 = 2.0/3.0*t15;
  t95 = 8.0/3.0*t19;
  t96 = 16.0/9.0*t80;
  t97 = 8.0/3.0*t83;
  t98 = 16.0/9.0*t37;
  t99 = 2.0/9.0+t88-t47-8.0/9.0*t4-t90-t91-t92-t93+8.0/3.0*t17+t95-t96+t97+t98+t55-t56;
  t101 = 4.0/3.0*eta;
  t102 = 2.0/3.0*t11;
  t103 = 2.0*t19;
  t108 = -1.0/3.0-t68+t2/3.0+t5+t101+t7-t9-t102+t13+t16-t17-t103+8.0/3.0*t80-4.0*t83-8.0/3.0*t40+8.0/3.0*t43;
  t109 = 8.0/9.0*t7;
  t110 = 2.0/9.0+t68+t69-t90-t109-t92-t16-t51-t96+t97+t55-t56;
  t113 = 2.0/9.0*t4;
  t118 = 4.0/9.0*t37;
  t119 = -1.0/6.0-11.0/36.0*xi+t2/12.0+t113+t6+t7/6.0+t10+5.0/9.0*t11+t76+t93+5.0/6.0*t17+t19/3.0-t25+t81-t84-t118-t85+t86;
  t124 = -1.0/2.0-t68+t2/2.0+t5+eta+2.0/3.0*t7-t9-t102+t13+t16-t17-t103-t65-8.0/3.0*t37;
  t125 = 16.0/9.0*t7;
  t128 = t88-t113-t125+16.0/9.0*t11+t49-8.0/3.0*t15-t51+t95+t53+t98+t55-t56;
  t133 = 1.0/18.0+t73-5.0/36.0*t2+t6+t7/18.0+t10-7.0/9.0*t11-t14+3.0/2.0*t17-t19-t25+t31-t35-t118-t41+t44;
  t135 = 2.0*t13;
  t137 = 16.0/9.0*t30;
  t138 = 8.0/3.0*t34;
  t139 = 16.0/3.0*t40;
  t140 = 16.0/3.0*t43;
  t141 = -2.0/3.0-t68+4.0/3.0*t2-t90+t109+t135+t16-4.0*t17-t137+t138+t139-t140;
  t147 = 1.0+t46-t2-t48+t101-7.0/3.0*t7-t9+t60-t61-t62+t63+t64+8.0/3.0*t30-4.0*t34-8.0*t40+8.0*t43;
  t149 = -2.0/3.0-t46+8.0/3.0*t4-t90+t125-t91+t135+t62-t52-t137+t138+t98+t139-t140;
  t151 = 16.0/9.0*t2;
  t153 = 32.0/9.0*t7;
  t154 = 32.0/9.0*t11;
  t155 = 16.0/3.0*t13;
  t157 = 16.0/3.0*t17;
  t159 = 64.0/9.0*t37;
  t160 = 64.0/9.0*t40;
  t161 = 64.0/9.0*t43;
  t162 = 16.0/9.0+64.0/9.0*xi-t151-64.0/9.0*t4-t153+t154-t155-64.0/3.0*t15+t157+64.0/3.0*t19-t159-t160+t161;
  t163 = 16.0/3.0*xi;
  t164 = 8.0/3.0*t2;
  t165 = 16.0/3.0*t4;
  t166 = 16.0/3.0*t7;
  t167 = 16.0/3.0*t11;
  t168 = 8.0*t13;
  t169 = 16.0*t15;
  t170 = 8.0*t17;
  t171 = 16.0*t19;
  t174 = -8.0/3.0-t163+t164+t165+t166-t167+t168+t169-t170-t171+32.0/3.0*t40-32.0/3.0*t43;
  t176 = -8.0/3.0-t163+t164+t165+t166-t167+t168+t169-t170-t171+32.0/3.0*t37;
  t188 = 2.0+4.0*xi-2.0*t2-4.0*t4-2.0*eta-4.0*t7+2.0*t9+4.0*t11-6.0*t13-12.0*t15+6.0*t17+12.0*t19;

  values[0] = t45;
  values[1] = t57;
  values[2] = t67;
  values[3] = -4.0/9.0-t68+t69+t5+8.0/3.0*t7-8.0/3.0*t11-t53+t54;
  values[4] = t87;
  values[5] = t99;
  values[6] = t108;
  values[7] = t110;
  values[8] = t119;
  values[9] = 4.0/9.0+t68-t69-t5+t109-t91+t53+t98;
  values[10] = t124;
  values[11] = t128;
  values[12] = t133;
  values[13] = t141;
  values[14] = t147;
  values[15] = t149;
  values[16] = t162;
  values[17] = t174;
  values[18] = t176;
  values[19] = t188;
  values[20] = -t153+t154-t159;
  values[21] = 16.0/9.0-t151-t155+t157-t160+t161;
}

// values of the derivatives in xi-xi  direction
static void C_Q_UL4S_2D_DeriveXiXi(double xi, double eta, double *values)
{
  double t2, t3, t4, t5, t6, t7, t9, t11, t12, t14, t15, t16, t17, t18, t19;
  double t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33;
  double t34, t35, t36, t37, t38, t39, t40, t41, t42, t44, t45, t46, t52, t53;
  double t59, t60, t61, t62, t64, t66, t67, t68, t70, t72, t73, t74, t78, t80;
  double t84, t85, t86, t87, t88, t89, t90, t91, t92, t93, t94, t95, t96, t97;
  double t104, t106, t109, t112, t119, t120, t122, t123, t125, t126, t127;
  double t129, t130, t131, t132, t133, t134;

  t2 = xi*eta;
  t3 = 4.0*t2;
  t4 = eta*eta;
  t5 = t4/2.0;
  t6 = xi*t4;
  t7 = t4*eta;
  t9 = xi*t7;
  t11 = 1.0-eta;
  t12 = xi*xi;
  t14 = -1.0/2.0+3.0/2.0*t12;
  t15 = t11*t14;
  t16 = 4.0/9.0*t15;
  t17 = t11*t12;
  t18 = 8.0/3.0*t17;
  t19 = 1.0-t12;
  t20 = t11*t19;
  t21 = 2.0/3.0*t20;
  t22 = 1.0-t4;
  t23 = t12*t22;
  t24 = 20.0/3.0*t23;
  t25 = t19*t22;
  t26 = 4.0/3.0*t25;
  t27 = t22*t4;
  t28 = 4.0/3.0*t27;
  t29 = 2.0/9.0-xi-7.0/18.0*eta-t3+t5-t6-t7/3.0+6.0*t9+t16+t18-t21-t24+t26-t28;
  t30 = 4.0*xi;
  t31 = 16.0/9.0*eta;
  t32 = 12.0*t2;
  t33 = 8.0/9.0*t7;
  t34 = 16.0*t9;
  t35 = 16.0/9.0*t15;
  t36 = 32.0/3.0*t17;
  t37 = 8.0/3.0*t20;
  t38 = 80.0/3.0*t23;
  t39 = 16.0/3.0*t25;
  t40 = 16.0/9.0*t27;
  t41 = -8.0/9.0+t30+t31+t32-t33-t34-t35-t36+t37+t38-t39+t40;
  t42 = 6.0*xi;
  t44 = 6.0*t6;
  t45 = 2.0*t7;
  t46 = 12.0*t9;
  t52 = 4.0/3.0-t42-7.0/3.0*eta-t32-t4+t44+t45+t46+8.0/3.0*t15+16.0*t17-4.0*t20-40.0*t23+8.0*t25;
  t53 = 8.0/9.0*eta;
  t59 = 2.0*t9;
  t60 = 4.0/9.0*t27;
  t61 = 2.0/9.0-xi+eta/18.0+t5+3.0*t6-7.0/9.0*t7-t59+t16+t18-t21-t24+t26-t60;
  t62 = 8.0/3.0*xi;
  t64 = 8.0/3.0*t6;
  t66 = 16.0/3.0*t9;
  t67 = 80.0/9.0*t23;
  t68 = 16.0/9.0*t25;
  t70 = 2.0*xi;
  t72 = 2.0*t6;
  t73 = 2.0/3.0*t7;
  t74 = 4.0*t9;
  t78 = xi/3.0;
  t80 = 4.0/3.0*t2;
  t84 = 1.0+eta;
  t85 = t84*t14;
  t86 = 4.0/9.0*t85;
  t87 = t84*t12;
  t88 = 8.0/3.0*t87;
  t89 = t84*t19;
  t90 = 2.0/3.0*t89;
  t91 = 20.0/9.0*t23;
  t92 = 4.0/9.0*t25;
  t93 = 2.0/9.0+t78+eta/6.0+t80+t5+5.0/3.0*t6+5.0/9.0*t7+2.0/3.0*t9+t86+t88-t90-t91+t92-t60;
  t94 = 4.0/3.0*xi;
  t95 = 16.0/9.0*t85;
  t96 = 32.0/3.0*t87;
  t97 = 8.0/3.0*t89;
  t104 = 4.0/3.0+t70+eta+t3-t4-t72-t73-t74+8.0/3.0*t85+16.0*t87-4.0*t89-40.0/3.0*t23+8.0/3.0*t25;
  t106 = -8.0/9.0-t94-t80+16.0/3.0*t6-t33+t66-t95-t96+t97+t67-t68+t40;
  t109 = 2.0/9.0+t78-5.0/18.0*eta+t5-7.0/3.0*t6+t7-t59+t86+t88-t90-t91+t92-t28;
  t112 = 16.0/3.0*t27;
  t119 = 32.0/3.0*xi;
  t120 = 32.0/9.0*eta;
  t122 = 32.0/3.0*t6;
  t123 = 32.0/9.0*t7;
  t125 = 320.0/9.0*t23;
  t126 = 64.0/9.0*t25;
  t127 = 64.0/9.0*t27;
  t129 = 16.0*xi;
  t130 = 16.0/3.0*eta;
  t131 = 32.0*t2;
  t132 = 16.0*t6;
  t133 = 16.0/3.0*t7;
  t134 = 32.0*t9;

  values[0] = t29;
  values[1] = t41;
  values[2] = t52;
  values[3] = -8.0/9.0+t30+t53+t3-8.0*t6-t35-t36+t37+t38-t39;
  values[4] = t61;
  values[5] = t62-t31-16.0/3.0*t2-t64+16.0/9.0*t7+t66+t67-t68+t40;
  values[6] = 1.0+t70+2.0/3.0*eta+t3-t4-t72-t73-t74-8.0/3.0*t27;
  values[7] = t53-t33+t40;
  values[8] = t93;
  values[9] = -8.0/9.0-t94-t53-t3-t64-t95-t96+t97+t67-t68;
  values[10] = t104;
  values[11] = t106;
  values[12] = t109;
  values[13] = 8.0/3.0*eta-8.0/3.0*t7+t112;
  values[14] = 1.0-t42-2.0*eta-t32-t4+t44+t45+t46-8.0*t27;
  values[15] = t62+16.0*t2-t64-t34+t67-t68+t112;
  values[16] = -t119-t120-128.0/3.0*t2+t122+t123+128.0/3.0*t9-t125+t126-t127;
  values[17] = t129+t130+t131-t132-t133-t134+32.0/3.0*t27;
  values[18] = t129+t130+t131-t132-t133-t134+160.0/3.0*t23-32.0/3.0*t25;
  values[19] = -2.0-12.0*xi-4.0*eta-24.0*t2+2.0*t4+12.0*t6+4.0*t7+24.0*t9;
  values[20] = -t119+t122-t125+t126;
  values[21] = -t120+t123-t127;
}

// values of the derivatives in xi-eta direction
static void C_Q_UL4S_2D_DeriveXiEta(double xi, double eta, double *values)
{
  double t2, t3, t5, t6, t7, t8, t9, t10, t14, t15, t16, t17, t18, t21, t22;
  double t23, t24, t25, t27, t28, t30, t31, t33, t34, t36, t37, t38, t39, t40;
  double t42, t43, t44, t45, t46, t47, t48, t49, t50, t53, t54, t55, t56, t57;
  double t58, t59, t62, t63, t71, t72, t73, t74, t76, t77, t79, t80, t81, t82;
  double t83, t84, t86, t87, t88, t89, t90, t93, t94, t97, t101, t102, t103;
  double t108, t109, t112, t117, t120, t121, t127, t129, t130, t132, t133;
  double t135, t137, t138, t139, t140, t141, t142, t143, t144, t145, t146;
  double t147, t148;

  t2 = xi*xi;
  t3 = 2.0*t2;
  t5 = xi*eta;
  t6 = t2*eta;
  t7 = eta*eta;
  t8 = 2.0*t7;
  t9 = xi*t7;
  t10 = t2*t7;
  t14 = xi*(-1.0/2.0+3.0/2.0*t2);
  t15 = 4.0/9.0*t14;
  t16 = 1.0-t2;
  t17 = t16*xi;
  t18 = 2.0/3.0*t17;
  t21 = eta*(-1.0/2.0+3.0/2.0*t7);
  t22 = 4.0/9.0*t21;
  t23 = 1.0-t7;
  t24 = t23*eta;
  t25 = 2.0/3.0*t24;
  t27 = t2*xi*eta;
  t28 = 8.0/3.0*t27;
  t30 = t16*eta*xi;
  t31 = 8.0/3.0*t30;
  t33 = xi*t7*eta;
  t34 = 8.0/3.0*t33;
  t36 = xi*t23*eta;
  t37 = 8.0/3.0*t36;
  t38 = 7.0/12.0-7.0/18.0*xi-t3-7.0/18.0*eta+t5-t6-t8-t9+9.0*t10-t15+t18-t22+t25+t28-t31+t34-t37;
  t39 = 16.0/9.0*xi;
  t40 = 6.0*t2;
  t42 = 8.0/3.0*t9;
  t43 = 24.0*t10;
  t44 = 16.0/9.0*t14;
  t45 = 8.0/3.0*t17;
  t46 = 32.0/3.0*t27;
  t47 = 32.0/3.0*t30;
  t48 = 32.0/9.0*t33;
  t49 = 32.0/9.0*t36;
  t50 = -2.0+t39+t40+8.0*t7-t42-t43+t44-t45-t46+t47-t48+t49;
  t53 = 2.0*t5;
  t54 = 6.0*t6;
  t55 = 6.0*t7;
  t56 = 6.0*t9;
  t57 = 18.0*t10;
  t58 = 8.0/3.0*t14;
  t59 = 4.0*t17;
  t62 = 2.0-7.0/3.0*xi-t40-2.0*eta-t53+t54-t55+t56+t57-t58+t59+16.0*t27-16.0*t30;
  t63 = 8.0/9.0*xi;
  t71 = 3.0*t10;
  t72 = 8.0/9.0*t33;
  t73 = 8.0/9.0*t36;
  t74 = 1.0/12.0+xi/18.0-5.0/18.0*eta+t5+3.0*t6-7.0/3.0*t9-t71-t15+t18+t22-t25+t28-t31+t72-t73;
  t76 = 8.0/3.0*t6;
  t77 = 2.0/3.0*t7;
  t79 = 8.0*t10;
  t80 = 16.0/9.0*t21;
  t81 = 8.0/3.0*t24;
  t82 = 32.0/9.0*t27;
  t83 = 32.0/9.0*t30;
  t84 = 2.0/9.0-t39-8.0/3.0*t2-t76-t77+16.0/3.0*t9+t79-t80+t81-t82+t83-t48+t49;
  t86 = 2.0*t6;
  t87 = 2.0*t9;
  t88 = 6.0*t10;
  t89 = 8.0/3.0*t21;
  t90 = 4.0*t24;
  t93 = -2.0/3.0+2.0/3.0*xi+t3+eta-t53-t86+t8-t87-t88+t89-t90+16.0/3.0*t33-16.0/3.0*t36;
  t94 = 8.0/9.0*eta;
  t97 = 2.0/3.0*t2;
  t101 = 8.0/9.0*t27;
  t102 = 8.0/9.0*t30;
  t103 = -11.0/36.0+xi/6.0+t97+eta/6.0+t5+5.0/3.0*t6+t77+5.0/3.0*t9+t10+t15-t18+t22-t25+t101-t102+t72-t73;
  t108 = -2.0/3.0+xi+t3+2.0/3.0*eta-t53-t86+t8-t87-t88+t58-t59+16.0/3.0*t27-16.0/3.0*t30;
  t109 = 16.0/9.0*eta;
  t112 = 2.0/9.0-t97-t109+16.0/3.0*t6-8.0/3.0*t7-t42+t79-t44+t45-t82+t83-t48+t49;
  t117 = 1.0/12.0-5.0/18.0*xi+eta/18.0+t5-7.0/3.0*t6+3.0*t9-t71+t15-t18-t22+t25+t101-t102+t34-t37;
  t120 = 32.0/3.0*t33;
  t121 = 32.0/3.0*t36;
  t127 = 2.0-2.0*xi-t40-7.0/3.0*eta-t53+t54-t55+t56+t57-t89+t90+16.0*t33-16.0*t36;
  t129 = -2.0+8.0*t2+t109-t76+t55-t43+t80-t81-t82+t83-t120+t121;
  t130 = 32.0/9.0*xi;
  t132 = 32.0/9.0*eta;
  t133 = 32.0/3.0*t6;
  t135 = 32.0/3.0*t9;
  t137 = 128.0/9.0*t27;
  t138 = 128.0/9.0*t30;
  t139 = 128.0/9.0*t33;
  t140 = 128.0/9.0*t36;
  t141 = 64.0/9.0-t130-64.0/3.0*t2-t132+t133-64.0/3.0*t7+t135+64.0*t10+t137-t138+t139-t140;
  t142 = 16.0/3.0*xi;
  t143 = 16.0*t2;
  t144 = 16.0/3.0*eta;
  t145 = 16.0*t6;
  t146 = 16.0*t7;
  t147 = 16.0*t9;
  t148 = 48.0*t10;

  values[0] = t38;
  values[1] = t50;
  values[2] = t62;
  values[3] = -2.0/3.0+t63+t3+8.0/3.0*eta-8.0*t6+t44-t45-t46+t47;
  values[4] = t74;
  values[5] = t84;
  values[6] = t93;
  values[7] = 2.0/3.0+t63-t94-t8-t42-t80+t81-t48+t49;
  values[8] = t103;
  values[9] = 2.0/3.0-t63-t3+t94-t76-t44+t45-t82+t83;
  values[10] = t108;
  values[11] = t112;
  values[12] = t117;
  values[13] = -2.0/3.0+8.0/3.0*xi+t94+t8-8.0*t9+t80-t81-t120+t121;
  values[14] = t127;
  values[15] = t129;
  values[16] = t141;
  values[17] = -16.0/3.0+t142+t143+t144-t145+t146-t147-t148-64.0/3.0*t33+64.0/3.0*t36;
  values[18] = -16.0/3.0+t142+t143+t144-t145+t146-t147-t148-64.0/3.0*t27+64.0/3.0*t30;
  values[19] = 4.0-4.0*xi-12.0*t2-4.0*eta+4.0*t5+12.0*t6-12.0*t7+12.0*t9+36.0*t10;
  values[20] = -t132+t133+t137-t138;
  values[21] = -t130+t135+t139-t140;
}

// values of the derivatives in eta-eta direction
static void C_Q_UL4S_2D_DeriveEtaEta(double xi, double eta, double *values)
{
  double t2, t3, t4, t6, t7, t8, t9, t11, t12, t14, t15, t16, t17, t18, t19, t20;
  double t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t32, t33, t34, t35;
  double t36, t39, t40, t41, t42, t43, t50, t52, t53, t54, t55, t56, t57, t58;
  double t59, t60, t61, t62, t63, t64, t65, t67, t68, t69, t70, t71, t72, t73;
  double t74, t75, t76, t82, t83, t89, t90, t95, t102, t103, t105, t106, t107;
  double t108, t109, t117, t118, t119, t120, t121, t123, t125, t126, t127;
  double t129, t130, t131, t132, t133, t134;

  t2 = xi*xi;
  t3 = t2/2.0;
  t4 = t2*xi;
  t6 = xi*eta;
  t7 = 4.0*t6;
  t8 = t2*eta;
  t9 = t4*eta;
  t11 = 1.0-xi;
  t12 = eta*eta;
  t14 = -1.0/2.0+3.0/2.0*t12;
  t15 = t11*t14;
  t16 = 4.0/9.0*t15;
  t17 = t11*t12;
  t18 = 8.0/3.0*t17;
  t19 = 1.0-t12;
  t20 = t11*t19;
  t21 = 2.0/3.0*t20;
  t22 = 1.0-t2;
  t23 = t22*t2;
  t24 = 4.0/3.0*t23;
  t25 = t12*t22;
  t26 = 20.0/3.0*t25;
  t27 = t19*t22;
  t28 = 4.0/3.0*t27;
  t29 = 2.0/9.0-7.0/18.0*xi+t3-t4/3.0-eta-t7-t8+6.0*t9+t16+t18-t21-t24-t26+t28;
  t30 = 8.0/3.0*eta;
  t32 = 8.0/3.0*t8;
  t33 = 16.0*t9;
  t34 = 16.0/3.0*t23;
  t35 = 80.0/9.0*t25;
  t36 = 16.0/9.0*t27;
  t39 = 2.0*t4;
  t40 = 6.0*eta;
  t41 = 12.0*t6;
  t42 = 6.0*t8;
  t43 = 12.0*t9;
  t50 = eta/3.0;
  t52 = 2.0*t9;
  t53 = 1.0+xi;
  t54 = t53*t14;
  t55 = 4.0/9.0*t54;
  t56 = t53*t12;
  t57 = 8.0/3.0*t56;
  t58 = t53*t19;
  t59 = 2.0/3.0*t58;
  t60 = 20.0/9.0*t25;
  t61 = 4.0/9.0*t27;
  t62 = 2.0/9.0-5.0/18.0*xi+t3+t4+t50-7.0/3.0*t8-t52+t55+t57-t59-t24-t60+t61;
  t63 = 8.0/9.0*t4;
  t64 = 4.0/3.0*eta;
  t65 = 4.0/3.0*t6;
  t67 = 16.0/3.0*t9;
  t68 = 16.0/9.0*t54;
  t69 = 32.0/3.0*t56;
  t70 = 8.0/3.0*t58;
  t71 = 16.0/9.0*t23;
  t72 = -8.0/9.0-t63-t64-t65+16.0/3.0*t8+t67-t68-t69+t70+t71+t35-t36;
  t73 = 2.0/3.0*t4;
  t74 = 2.0*eta;
  t75 = 2.0*t8;
  t76 = 4.0*t9;
  t82 = 4.0/3.0+xi-t2-t73+t74+t7-t75-t76+8.0/3.0*t54+16.0*t56-4.0*t58-40.0/3.0*t25+8.0/3.0*t27;
  t83 = 8.0/9.0*xi;
  t89 = 4.0/9.0*t23;
  t90 = 2.0/9.0+xi/6.0+t3+5.0/9.0*t4+t50+t65+5.0/3.0*t8+2.0/3.0*t9+t55+t57-t59-t89-t60+t61;
  t95 = 16.0/9.0*xi;
  t102 = 2.0/9.0+xi/18.0+t3-7.0/9.0*t4-eta+3.0*t8-t52+t16+t18-t21-t89-t26+t28;
  t103 = 4.0*eta;
  t105 = 16.0/9.0*t15;
  t106 = 32.0/3.0*t17;
  t107 = 8.0/3.0*t20;
  t108 = 80.0/3.0*t25;
  t109 = 16.0/3.0*t27;
  t117 = 4.0/3.0-7.0/3.0*xi-t2+t39-t40-t41+t42+t43+8.0/3.0*t15+16.0*t17-4.0*t20-40.0*t25+8.0*t27;
  t118 = -8.0/9.0+t95-t63+t103+t41-t33-t105-t106+t107+t71+t108-t109;
  t119 = 32.0/9.0*xi;
  t120 = 32.0/9.0*t4;
  t121 = 32.0/3.0*eta;
  t123 = 32.0/3.0*t8;
  t125 = 64.0/9.0*t23;
  t126 = 320.0/9.0*t25;
  t127 = 64.0/9.0*t27;
  t129 = 16.0/3.0*xi;
  t130 = 16.0/3.0*t4;
  t131 = 16.0*eta;
  t132 = 32.0*t6;
  t133 = 16.0*t8;
  t134 = 32.0*t9;

  values[0] = t29;
  values[1] = t30+16.0*t6-t32-t33+t34+t35-t36;
  values[2] = 1.0-2.0*xi-t2+t39-t40-t41+t42+t43-8.0*t23;
  values[3] = 8.0/3.0*xi-8.0/3.0*t4+t34;
  values[4] = t62;
  values[5] = t72;
  values[6] = t82;
  values[7] = -8.0/9.0-t83-t64-t7-t32-t68-t69+t70+t35-t36;
  values[8] = t90;
  values[9] = t83-t63+t71;
  values[10] = 1.0+2.0/3.0*xi-t2-t73+t74+t7-t75-t76-8.0/3.0*t23;
  values[11] = -t95+16.0/9.0*t4+t30-16.0/3.0*t6-t32+t67+t71+t35-t36;
  values[12] = t102;
  values[13] = -8.0/9.0+t83+t103+t7-8.0*t8-t105-t106+t107+t108-t109;
  values[14] = t117;
  values[15] = t118;
  values[16] = -t119+t120-t121-128.0/3.0*t6+t123+128.0/3.0*t9-t125-t126+t127;
  values[17] = t129-t130+t131+t132-t133-t134+160.0/3.0*t25-32.0/3.0*t27;
  values[18] = t129-t130+t131+t132-t133-t134+32.0/3.0*t23;
  values[19] = -2.0-4.0*xi+2.0*t2+4.0*t4-12.0*eta-24.0*t6+12.0*t8+24.0*t9;
  values[20] = -t119+t120-t125;
  values[21] = -t121+t123-t126+t127;
}

// ***********************************************************************

TBaseFunct2D *BF_C_Q_UL4S_2D_Obj = new TBaseFunct2D
        (22, BF_C_Q_UL4S_2D, BFUnitSquare, 
         C_Q_UL4S_2D_Funct, C_Q_UL4S_2D_DeriveXi,
         C_Q_UL4S_2D_DeriveEta, C_Q_UL4S_2D_DeriveXiXi,
         C_Q_UL4S_2D_DeriveXiEta, C_Q_UL4S_2D_DeriveEtaEta, 4, 4,
         0, NULL);
/*
    \file  stroke_mono_roman.c
    \brief Stroke data for monospace roman font.
*/
/*
 * Portions copyright 2004, OpenGLUT contributors.
 */

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
#include "font.h"

/* char: 0x20 */

static const SOG_StrokeStrip ch32st[] =
{
    { 0, 0 }
};

static const SOG_StrokeChar ch32 = {104.762f,0,ch32st};

/* char: 0x21 */

static const SOG_StrokeVertex ch33st0[] =
{
    {52.381f,100.0f},
    {52.381f,33.3333f}
};

static const SOG_StrokeVertex ch33st1[] =
{
    {52.381f,9.5238f},
    {47.6191f,4.7619f},
    {52.381f,0.0f},
    {57.1429f,4.7619f},
    {52.381f,9.5238f}
};

static const SOG_StrokeStrip ch33st[] =
{
    {2,ch33st0},
    {5,ch33st1}
};

static const SOG_StrokeChar ch33 = {104.762f,2,ch33st};

/* char: 0x22 */

static const SOG_StrokeVertex ch34st0[] =
{
    {33.3334f,100.0f},
    {33.3334f,66.6667f}
};

static const SOG_StrokeVertex ch34st1[] =
{
    {71.4286f,100.0f},
    {71.4286f,66.6667f}
};

static const SOG_StrokeStrip ch34st[] =
{
    {2,ch34st0},
    {2,ch34st1}
};

static const SOG_StrokeChar ch34 = {104.762f,2,ch34st};

/* char: 0x23 */

static const SOG_StrokeVertex ch35st0[] =
{
    {54.7619f,119.048f},
    {21.4286f,-33.3333f}
};

static const SOG_StrokeVertex ch35st1[] =
{
    {83.3334f,119.048f},
    {50.0f,-33.3333f}
};

static const SOG_StrokeVertex ch35st2[] =
{
    {21.4286f,57.1429f},
    {88.0952f,57.1429f}
};

static const SOG_StrokeVertex ch35st3[] =
{
    {16.6667f,28.5714f},
    {83.3334f,28.5714f}
};

static const SOG_StrokeStrip ch35st[] =
{
    {2,ch35st0},
    {2,ch35st1},
    {2,ch35st2},
    {2,ch35st3}
};

static const SOG_StrokeChar ch35 = {104.762f,4,ch35st};

/* char: 0x24 */

static const SOG_StrokeVertex ch36st0[] =
{
    {42.8571f,119.048f},
    {42.8571f,-19.0476f}
};

static const SOG_StrokeVertex ch36st1[] =
{
    {61.9047f,119.048f},
    {61.9047f,-19.0476f}
};

static const SOG_StrokeVertex ch36st2[] =
{
    {85.7143f,85.7143f},
    {76.1905f,95.2381f},
    {61.9047f,100.0f},
    {42.8571f,100.0f},
    {28.5714f,95.2381f},
    {19.0476f,85.7143f},
    {19.0476f,76.1905f},
    {23.8095f,66.6667f},
    {28.5714f,61.9048f},
    {38.0952f,57.1429f},
    {66.6666f,47.619f},
    {76.1905f,42.8571f},
    {80.9524f,38.0952f},
    {85.7143f,28.5714f},
    {85.7143f,14.2857f},
    {76.1905f,4.7619f},
    {61.9047f,0.0f},
    {42.8571f,0.0f},
    {28.5714f,4.7619f},
    {19.0476f,14.2857f}
};

static const SOG_StrokeStrip ch36st[] =
{
    {2,ch36st0},
    {2,ch36st1},
    {20,ch36st2}
};

static const SOG_StrokeChar ch36 = {104.762f,3,ch36st};

/* char: 0x25 */

static const SOG_StrokeVertex ch37st0[] =
{
    {95.2381f,100.0f},
    {9.5238f,0.0f}
};

static const SOG_StrokeVertex ch37st1[] =
{
    {33.3333f,100.0f},
    {42.8571f,90.4762f},
    {42.8571f,80.9524f},
    {38.0952f,71.4286f},
    {28.5714f,66.6667f},
    {19.0476f,66.6667f},
    {9.5238f,76.1905f},
    {9.5238f,85.7143f},
    {14.2857f,95.2381f},
    {23.8095f,100.0f},
    {33.3333f,100.0f},
    {42.8571f,95.2381f},
    {57.1428f,90.4762f},
    {71.4286f,90.4762f},
    {85.7143f,95.2381f},
    {95.2381f,100.0f}
};

static const SOG_StrokeVertex ch37st2[] =
{
    {76.1905f,33.3333f},
    {66.6667f,28.5714f},
    {61.9048f,19.0476f},
    {61.9048f,9.5238f},
    {71.4286f,0.0f},
    {80.9524f,0.0f},
    {90.4762f,4.7619f},
    {95.2381f,14.2857f},
    {95.2381f,23.8095f},
    {85.7143f,33.3333f},
    {76.1905f,33.3333f}
};

static const SOG_StrokeStrip ch37st[] =
{
    {2,ch37st0},
    {16,ch37st1},
    {11,ch37st2}
};

static const SOG_StrokeChar ch37 = {104.762f,3,ch37st};

/* char: 0x26 */

static const SOG_StrokeVertex ch38st0[] =
{
    {100.0f,57.1429f},
    {100.0f,61.9048f},
    {95.2381f,66.6667f},
    {90.4762f,66.6667f},
    {85.7143f,61.9048f},
    {80.9524f,52.381f},
    {71.4286f,28.5714f},
    {61.9048f,14.2857f},
    {52.3809f,4.7619f},
    {42.8571f,0.0f},
    {23.8095f,0.0f},
    {14.2857f,4.7619f},
    {9.5238f,9.5238f},
    {4.7619f,19.0476f},
    {4.7619f,28.5714f},
    {9.5238f,38.0952f},
    {14.2857f,42.8571f},
    {47.619f,61.9048f},
    {52.3809f,66.6667f},
    {57.1429f,76.1905f},
    {57.1429f,85.7143f},
    {52.3809f,95.2381f},
    {42.8571f,100.0f},
    {33.3333f,95.2381f},
    {28.5714f,85.7143f},
    {28.5714f,76.1905f},
    {33.3333f,61.9048f},
    {42.8571f,47.619f},
    {66.6667f,14.2857f},
    {76.1905f,4.7619f},
    {85.7143f,0.0f},
    {95.2381f,0.0f},
    {100.0f,4.7619f},
    {100.0f,9.5238f}
};

static const SOG_StrokeStrip ch38st[] =
{
    {34,ch38st0}
};

static const SOG_StrokeChar ch38 = {104.762f,1,ch38st};

/* char: 0x27 */

static const SOG_StrokeVertex ch39st0[] =
{
    {52.381f,100.0f},
    {52.381f,66.6667f}
};

static const SOG_StrokeStrip ch39st[] =
{
    {2,ch39st0}
};

static const SOG_StrokeChar ch39 = {104.762f,1,ch39st};

/* char: 0x28 */

static const SOG_StrokeVertex ch40st0[] =
{
    {69.0476f,119.048f},
    {59.5238f,109.524f},
    {50.0f,95.2381f},
    {40.4762f,76.1905f},
    {35.7143f,52.381f},
    {35.7143f,33.3333f},
    {40.4762f,9.5238f},
    {50.0f,-9.5238f},
    {59.5238f,-23.8095f},
    {69.0476f,-33.3333f}
};

static const SOG_StrokeStrip ch40st[] =
{
    {10,ch40st0}
};

static const SOG_StrokeChar ch40 = {104.762f,1,ch40st};

/* char: 0x29 */

static const SOG_StrokeVertex ch41st0[] =
{
    {35.7143f,119.048f},
    {45.2381f,109.524f},
    {54.7619f,95.2381f},
    {64.2857f,76.1905f},
    {69.0476f,52.381f},
    {69.0476f,33.3333f},
    {64.2857f,9.5238f},
    {54.7619f,-9.5238f},
    {45.2381f,-23.8095f},
    {35.7143f,-33.3333f}
};

static const SOG_StrokeStrip ch41st[] =
{
    {10,ch41st0}
};

static const SOG_StrokeChar ch41 = {104.762f,1,ch41st};

/* char: 0x2a */

static const SOG_StrokeVertex ch42st0[] =
{
    {52.381f,71.4286f},
    {52.381f,14.2857f}
};

static const SOG_StrokeVertex ch42st1[] =
{
    {28.5715f,57.1429f},
    {76.1905f,28.5714f}
};

static const SOG_StrokeVertex ch42st2[] =
{
    {76.1905f,57.1429f},
    {28.5715f,28.5714f}
};

static const SOG_StrokeStrip ch42st[] =
{
    {2,ch42st0},
    {2,ch42st1},
    {2,ch42st2}
};

static const SOG_StrokeChar ch42 = {104.762f,3,ch42st};

/* char: 0x2b */

static const SOG_StrokeVertex ch43st0[] =
{
    {52.3809f,85.7143f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch43st1[] =
{
    {9.5238f,42.8571f},
    {95.2381f,42.8571f}
};

static const SOG_StrokeStrip ch43st[] =
{
    {2,ch43st0},
    {2,ch43st1}
};

static const SOG_StrokeChar ch43 = {104.762f,2,ch43st};

/* char: 0x2c */

static const SOG_StrokeVertex ch44st0[] =
{
    {57.1429f,4.7619f},
    {52.381f,0.0f},
    {47.6191f,4.7619f},
    {52.381f,9.5238f},
    {57.1429f,4.7619f},
    {57.1429f,-4.7619f},
    {52.381f,-14.2857f},
    {47.6191f,-19.0476f}
};

static const SOG_StrokeStrip ch44st[] =
{
    {8,ch44st0}
};

static const SOG_StrokeChar ch44 = {104.762f,1,ch44st};

/* char: 0x2d */

static const SOG_StrokeVertex ch45st0[] =
{
    {9.5238f,42.8571f},
    {95.2381f,42.8571f}
};

static const SOG_StrokeStrip ch45st[] =
{
    {2,ch45st0}
};

static const SOG_StrokeChar ch45 = {104.762f,1,ch45st};

/* char: 0x2e */

static const SOG_StrokeVertex ch46st0[] =
{
    {52.381f,9.5238f},
    {47.6191f,4.7619f},
    {52.381f,0.0f},
    {57.1429f,4.7619f},
    {52.381f,9.5238f}
};

static const SOG_StrokeStrip ch46st[] =
{
    {5,ch46st0}
};

static const SOG_StrokeChar ch46 = {104.762f,1,ch46st};

/* char: 0x2f */

static const SOG_StrokeVertex ch47st0[] =
{
    {19.0476f,-14.2857f},
    {85.7143f,100.0f}
};

static const SOG_StrokeStrip ch47st[] =
{
    {2,ch47st0}
};

static const SOG_StrokeChar ch47 = {104.762f,1,ch47st};

/* char: 0x30 */

static const SOG_StrokeVertex ch48st0[] =
{
    {47.619f,100.0f},
    {33.3333f,95.2381f},
    {23.8095f,80.9524f},
    {19.0476f,57.1429f},
    {19.0476f,42.8571f},
    {23.8095f,19.0476f},
    {33.3333f,4.7619f},
    {47.619f,0.0f},
    {57.1428f,0.0f},
    {71.4286f,4.7619f},
    {80.9524f,19.0476f},
    {85.7143f,42.8571f},
    {85.7143f,57.1429f},
    {80.9524f,80.9524f},
    {71.4286f,95.2381f},
    {57.1428f,100.0f},
    {47.619f,100.0f}
};

static const SOG_StrokeStrip ch48st[] =
{
    {17,ch48st0}
};

static const SOG_StrokeChar ch48 = {104.762f,1,ch48st};

/* char: 0x31 */

static const SOG_StrokeVertex ch49st0[] =
{
    {40.4762f,80.9524f},
    {50.0f,85.7143f},
    {64.2857f,100.0f},
    {64.2857f,0.0f}
};

static const SOG_StrokeStrip ch49st[] =
{
    {4,ch49st0}
};

static const SOG_StrokeChar ch49 = {104.762f,1,ch49st};

/* char: 0x32 */

static const SOG_StrokeVertex ch50st0[] =
{
    {23.8095f,76.1905f},
    {23.8095f,80.9524f},
    {28.5714f,90.4762f},
    {33.3333f,95.2381f},
    {42.8571f,100.0f},
    {61.9047f,100.0f},
    {71.4286f,95.2381f},
    {76.1905f,90.4762f},
    {80.9524f,80.9524f},
    {80.9524f,71.4286f},
    {76.1905f,61.9048f},
    {66.6666f,47.619f},
    {19.0476f,0.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeStrip ch50st[] =
{
    {14,ch50st0}
};

static const SOG_StrokeChar ch50 = {104.762f,1,ch50st};

/* char: 0x33 */

static const SOG_StrokeVertex ch51st0[] =
{
    {28.5714f,100.0f},
    {80.9524f,100.0f},
    {52.3809f,61.9048f},
    {66.6666f,61.9048f},
    {76.1905f,57.1429f},
    {80.9524f,52.381f},
    {85.7143f,38.0952f},
    {85.7143f,28.5714f},
    {80.9524f,14.2857f},
    {71.4286f,4.7619f},
    {57.1428f,0.0f},
    {42.8571f,0.0f},
    {28.5714f,4.7619f},
    {23.8095f,9.5238f},
    {19.0476f,19.0476f}
};

static const SOG_StrokeStrip ch51st[] =
{
    {15,ch51st0}
};

static const SOG_StrokeChar ch51 = {104.762f,1,ch51st};

/* char: 0x34 */

static const SOG_StrokeVertex ch52st0[] =
{
    {64.2857f,100.0f},
    {16.6667f,33.3333f},
    {88.0952f,33.3333f}
};

static const SOG_StrokeVertex ch52st1[] =
{
    {64.2857f,100.0f},
    {64.2857f,0.0f}
};

static const SOG_StrokeStrip ch52st[] =
{
    {3,ch52st0},
    {2,ch52st1}
};

static const SOG_StrokeChar ch52 = {104.762f,2,ch52st};

/* char: 0x35 */

static const SOG_StrokeVertex ch53st0[] =
{
    {76.1905f,100.0f},
    {28.5714f,100.0f},
    {23.8095f,57.1429f},
    {28.5714f,61.9048f},
    {42.8571f,66.6667f},
    {57.1428f,66.6667f},
    {71.4286f,61.9048f},
    {80.9524f,52.381f},
    {85.7143f,38.0952f},
    {85.7143f,28.5714f},
    {80.9524f,14.2857f},
    {71.4286f,4.7619f},
    {57.1428f,0.0f},
    {42.8571f,0.0f},
    {28.5714f,4.7619f},
    {23.8095f,9.5238f},
    {19.0476f,19.0476f}
};

static const SOG_StrokeStrip ch53st[] =
{
    {17,ch53st0}
};

static const SOG_StrokeChar ch53 = {104.762f,1,ch53st};

/* char: 0x36 */

static const SOG_StrokeVertex ch54st0[] =
{
    {78.5714f,85.7143f},
    {73.8096f,95.2381f},
    {59.5238f,100.0f},
    {50.0f,100.0f},
    {35.7143f,95.2381f},
    {26.1905f,80.9524f},
    {21.4286f,57.1429f},
    {21.4286f,33.3333f},
    {26.1905f,14.2857f},
    {35.7143f,4.7619f},
    {50.0f,0.0f},
    {54.7619f,0.0f},
    {69.0476f,4.7619f},
    {78.5714f,14.2857f},
    {83.3334f,28.5714f},
    {83.3334f,33.3333f},
    {78.5714f,47.619f},
    {69.0476f,57.1429f},
    {54.7619f,61.9048f},
    {50.0f,61.9048f},
    {35.7143f,57.1429f},
    {26.1905f,47.619f},
    {21.4286f,33.3333f}
};

static const SOG_StrokeStrip ch54st[] =
{
    {23,ch54st0}
};

static const SOG_StrokeChar ch54 = {104.762f,1,ch54st};

/* char: 0x37 */

static const SOG_StrokeVertex ch55st0[] =
{
    {85.7143f,100.0f},
    {38.0952f,0.0f}
};

static const SOG_StrokeVertex ch55st1[] =
{
    {19.0476f,100.0f},
    {85.7143f,100.0f}
};

static const SOG_StrokeStrip ch55st[] =
{
    {2,ch55st0},
    {2,ch55st1}
};

static const SOG_StrokeChar ch55 = {104.762f,2,ch55st};

/* char: 0x38 */

static const SOG_StrokeVertex ch56st0[] =
{
    {42.8571f,100.0f},
    {28.5714f,95.2381f},
    {23.8095f,85.7143f},
    {23.8095f,76.1905f},
    {28.5714f,66.6667f},
    {38.0952f,61.9048f},
    {57.1428f,57.1429f},
    {71.4286f,52.381f},
    {80.9524f,42.8571f},
    {85.7143f,33.3333f},
    {85.7143f,19.0476f},
    {80.9524f,9.5238f},
    {76.1905f,4.7619f},
    {61.9047f,0.0f},
    {42.8571f,0.0f},
    {28.5714f,4.7619f},
    {23.8095f,9.5238f},
    {19.0476f,19.0476f},
    {19.0476f,33.3333f},
    {23.8095f,42.8571f},
    {33.3333f,52.381f},
    {47.619f,57.1429f},
    {66.6666f,61.9048f},
    {76.1905f,66.6667f},
    {80.9524f,76.1905f},
    {80.9524f,85.7143f},
    {76.1905f,95.2381f},
    {61.9047f,100.0f},
    {42.8571f,100.0f}
};

static const SOG_StrokeStrip ch56st[] =
{
    {29,ch56st0}
};

static const SOG_StrokeChar ch56 = {104.762f,1,ch56st};

/* char: 0x39 */

static const SOG_StrokeVertex ch57st0[] =
{
    {83.3334f,66.6667f},
    {78.5714f,52.381f},
    {69.0476f,42.8571f},
    {54.7619f,38.0952f},
    {50.0f,38.0952f},
    {35.7143f,42.8571f},
    {26.1905f,52.381f},
    {21.4286f,66.6667f},
    {21.4286f,71.4286f},
    {26.1905f,85.7143f},
    {35.7143f,95.2381f},
    {50.0f,100.0f},
    {54.7619f,100.0f},
    {69.0476f,95.2381f},
    {78.5714f,85.7143f},
    {83.3334f,66.6667f},
    {83.3334f,42.8571f},
    {78.5714f,19.0476f},
    {69.0476f,4.7619f},
    {54.7619f,0.0f},
    {45.2381f,0.0f},
    {30.9524f,4.7619f},
    {26.1905f,14.2857f}
};

static const SOG_StrokeStrip ch57st[] =
{
    {23,ch57st0}
};

static const SOG_StrokeChar ch57 = {104.762f,1,ch57st};

/* char: 0x3a */

static const SOG_StrokeVertex ch58st0[] =
{
    {52.381f,66.6667f},
    {47.6191f,61.9048f},
    {52.381f,57.1429f},
    {57.1429f,61.9048f},
    {52.381f,66.6667f}
};

static const SOG_StrokeVertex ch58st1[] =
{
    {52.381f,9.5238f},
    {47.6191f,4.7619f},
    {52.381f,0.0f},
    {57.1429f,4.7619f},
    {52.381f,9.5238f}
};

static const SOG_StrokeStrip ch58st[] =
{
    {5,ch58st0},
    {5,ch58st1}
};

static const SOG_StrokeChar ch58 = {104.762f,2,ch58st};

/* char: 0x3b */

static const SOG_StrokeVertex ch59st0[] =
{
    {52.381f,66.6667f},
    {47.6191f,61.9048f},
    {52.381f,57.1429f},
    {57.1429f,61.9048f},
    {52.381f,66.6667f}
};

static const SOG_StrokeVertex ch59st1[] =
{
    {57.1429f,4.7619f},
    {52.381f,0.0f},
    {47.6191f,4.7619f},
    {52.381f,9.5238f},
    {57.1429f,4.7619f},
    {57.1429f,-4.7619f},
    {52.381f,-14.2857f},
    {47.6191f,-19.0476f}
};

static const SOG_StrokeStrip ch59st[] =
{
    {5,ch59st0},
    {8,ch59st1}
};

static const SOG_StrokeChar ch59 = {104.762f,2,ch59st};

/* char: 0x3c */

static const SOG_StrokeVertex ch60st0[] =
{
    {90.4762f,85.7143f},
    {14.2857f,42.8571f},
    {90.4762f,0.0f}
};

static const SOG_StrokeStrip ch60st[] =
{
    {3,ch60st0}
};

static const SOG_StrokeChar ch60 = {104.762f,1,ch60st};

/* char: 0x3d */

static const SOG_StrokeVertex ch61st0[] =
{
    {9.5238f,57.1429f},
    {95.2381f,57.1429f}
};

static const SOG_StrokeVertex ch61st1[] =
{
    {9.5238f,28.5714f},
    {95.2381f,28.5714f}
};

static const SOG_StrokeStrip ch61st[] =
{
    {2,ch61st0},
    {2,ch61st1}
};

static const SOG_StrokeChar ch61 = {104.762f,2,ch61st};

/* char: 0x3e */

static const SOG_StrokeVertex ch62st0[] =
{
    {14.2857f,85.7143f},
    {90.4762f,42.8571f},
    {14.2857f,0.0f}
};

static const SOG_StrokeStrip ch62st[] =
{
    {3,ch62st0}
};

static const SOG_StrokeChar ch62 = {104.762f,1,ch62st};

/* char: 0x3f */

static const SOG_StrokeVertex ch63st0[] =
{
    {23.8095f,76.1905f},
    {23.8095f,80.9524f},
    {28.5714f,90.4762f},
    {33.3333f,95.2381f},
    {42.8571f,100.0f},
    {61.9047f,100.0f},
    {71.4285f,95.2381f},
    {76.1905f,90.4762f},
    {80.9524f,80.9524f},
    {80.9524f,71.4286f},
    {76.1905f,61.9048f},
    {71.4285f,57.1429f},
    {52.3809f,47.619f},
    {52.3809f,33.3333f}
};

static const SOG_StrokeVertex ch63st1[] =
{
    {52.3809f,9.5238f},
    {47.619f,4.7619f},
    {52.3809f,0.0f},
    {57.1428f,4.7619f},
    {52.3809f,9.5238f}
};

static const SOG_StrokeStrip ch63st[] =
{
    {14,ch63st0},
    {5,ch63st1}
};

static const SOG_StrokeChar ch63 = {104.762f,2,ch63st};

/* char: 0x40 */

static const SOG_StrokeVertex ch64st0[] =
{
    {64.2857f,52.381f},
    {54.7619f,57.1429f},
    {45.2381f,57.1429f},
    {40.4762f,47.619f},
    {40.4762f,42.8571f},
    {45.2381f,33.3333f},
    {54.7619f,33.3333f},
    {64.2857f,38.0952f}
};

static const SOG_StrokeVertex ch64st1[] =
{
    {64.2857f,57.1429f},
    {64.2857f,38.0952f},
    {69.0476f,33.3333f},
    {78.5714f,33.3333f},
    {83.3334f,42.8571f},
    {83.3334f,47.619f},
    {78.5714f,61.9048f},
    {69.0476f,71.4286f},
    {54.7619f,76.1905f},
    {50.0f,76.1905f},
    {35.7143f,71.4286f},
    {26.1905f,61.9048f},
    {21.4286f,47.619f},
    {21.4286f,42.8571f},
    {26.1905f,28.5714f},
    {35.7143f,19.0476f},
    {50.0f,14.2857f},
    {54.7619f,14.2857f},
    {69.0476f,19.0476f}
};

static const SOG_StrokeStrip ch64st[] =
{
    {8,ch64st0},
    {19,ch64st1}
};

static const SOG_StrokeChar ch64 = {104.762f,2,ch64st};

/* char: 0x41 */

static const SOG_StrokeVertex ch65st0[] =
{
    {52.3809f,100.0f},
    {14.2857f,0.0f}
};

static const SOG_StrokeVertex ch65st1[] =
{
    {52.3809f,100.0f},
    {90.4762f,0.0f}
};

static const SOG_StrokeVertex ch65st2[] =
{
    {28.5714f,33.3333f},
    {76.1905f,33.3333f}
};

static const SOG_StrokeStrip ch65st[] =
{
    {2,ch65st0},
    {2,ch65st1},
    {2,ch65st2}
};

static const SOG_StrokeChar ch65 = {104.762f,3,ch65st};

/* char: 0x42 */

static const SOG_StrokeVertex ch66st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch66st1[] =
{
    {19.0476f,100.0f},
    {61.9047f,100.0f},
    {76.1905f,95.2381f},
    {80.9524f,90.4762f},
    {85.7143f,80.9524f},
    {85.7143f,71.4286f},
    {80.9524f,61.9048f},
    {76.1905f,57.1429f},
    {61.9047f,52.381f}
};

static const SOG_StrokeVertex ch66st2[] =
{
    {19.0476f,52.381f},
    {61.9047f,52.381f},
    {76.1905f,47.619f},
    {80.9524f,42.8571f},
    {85.7143f,33.3333f},
    {85.7143f,19.0476f},
    {80.9524f,9.5238f},
    {76.1905f,4.7619f},
    {61.9047f,0.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeStrip ch66st[] =
{
    {2,ch66st0},
    {9,ch66st1},
    {10,ch66st2}
};

static const SOG_StrokeChar ch66 = {104.762f,3,ch66st};

/* char: 0x43 */

static const SOG_StrokeVertex ch67st0[] =
{
    {88.0952f,76.1905f},
    {83.3334f,85.7143f},
    {73.8096f,95.2381f},
    {64.2857f,100.0f},
    {45.2381f,100.0f},
    {35.7143f,95.2381f},
    {26.1905f,85.7143f},
    {21.4286f,76.1905f},
    {16.6667f,61.9048f},
    {16.6667f,38.0952f},
    {21.4286f,23.8095f},
    {26.1905f,14.2857f},
    {35.7143f,4.7619f},
    {45.2381f,0.0f},
    {64.2857f,0.0f},
    {73.8096f,4.7619f},
    {83.3334f,14.2857f},
    {88.0952f,23.8095f}
};

static const SOG_StrokeStrip ch67st[] =
{
    {18,ch67st0}
};

static const SOG_StrokeChar ch67 = {104.762f,1,ch67st};

/* char: 0x44 */

static const SOG_StrokeVertex ch68st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch68st1[] =
{
    {19.0476f,100.0f},
    {52.3809f,100.0f},
    {66.6666f,95.2381f},
    {76.1905f,85.7143f},
    {80.9524f,76.1905f},
    {85.7143f,61.9048f},
    {85.7143f,38.0952f},
    {80.9524f,23.8095f},
    {76.1905f,14.2857f},
    {66.6666f,4.7619f},
    {52.3809f,0.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeStrip ch68st[] =
{
    {2,ch68st0},
    {12,ch68st1}
};

static const SOG_StrokeChar ch68 = {104.762f,2,ch68st};

/* char: 0x45 */

static const SOG_StrokeVertex ch69st0[] =
{
    {21.4286f,100.0f},
    {21.4286f,0.0f}
};

static const SOG_StrokeVertex ch69st1[] =
{
    {21.4286f,100.0f},
    {83.3334f,100.0f}
};

static const SOG_StrokeVertex ch69st2[] =
{
    {21.4286f,52.381f},
    {59.5238f,52.381f}
};

static const SOG_StrokeVertex ch69st3[] =
{
    {21.4286f,0.0f},
    {83.3334f,0.0f}
};

static const SOG_StrokeStrip ch69st[] =
{
    {2,ch69st0},
    {2,ch69st1},
    {2,ch69st2},
    {2,ch69st3}
};

static const SOG_StrokeChar ch69 = {104.762f,4,ch69st};

/* char: 0x46 */

static const SOG_StrokeVertex ch70st0[] =
{
    {21.4286f,100.0f},
    {21.4286f,0.0f}
};

static const SOG_StrokeVertex ch70st1[] =
{
    {21.4286f,100.0f},
    {83.3334f,100.0f}
};

static const SOG_StrokeVertex ch70st2[] =
{
    {21.4286f,52.381f},
    {59.5238f,52.381f}
};

static const SOG_StrokeStrip ch70st[] =
{
    {2,ch70st0},
    {2,ch70st1},
    {2,ch70st2}
};

static const SOG_StrokeChar ch70 = {104.762f,3,ch70st};

/* char: 0x47 */

static const SOG_StrokeVertex ch71st0[] =
{
    {88.0952f,76.1905f},
    {83.3334f,85.7143f},
    {73.8096f,95.2381f},
    {64.2857f,100.0f},
    {45.2381f,100.0f},
    {35.7143f,95.2381f},
    {26.1905f,85.7143f},
    {21.4286f,76.1905f},
    {16.6667f,61.9048f},
    {16.6667f,38.0952f},
    {21.4286f,23.8095f},
    {26.1905f,14.2857f},
    {35.7143f,4.7619f},
    {45.2381f,0.0f},
    {64.2857f,0.0f},
    {73.8096f,4.7619f},
    {83.3334f,14.2857f},
    {88.0952f,23.8095f},
    {88.0952f,38.0952f}
};

static const SOG_StrokeVertex ch71st1[] =
{
    {64.2857f,38.0952f},
    {88.0952f,38.0952f}
};

static const SOG_StrokeStrip ch71st[] =
{
    {19,ch71st0},
    {2,ch71st1}
};

static const SOG_StrokeChar ch71 = {104.762f,2,ch71st};

/* char: 0x48 */

static const SOG_StrokeVertex ch72st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch72st1[] =
{
    {85.7143f,100.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeVertex ch72st2[] =
{
    {19.0476f,52.381f},
    {85.7143f,52.381f}
};

static const SOG_StrokeStrip ch72st[] =
{
    {2,ch72st0},
    {2,ch72st1},
    {2,ch72st2}
};

static const SOG_StrokeChar ch72 = {104.762f,3,ch72st};

/* char: 0x49 */

static const SOG_StrokeVertex ch73st0[] =
{
    {52.381f,100.0f},
    {52.381f,0.0f}
};

static const SOG_StrokeStrip ch73st[] =
{
    {2,ch73st0}
};

static const SOG_StrokeChar ch73 = {104.762f,1,ch73st};

/* char: 0x4a */

static const SOG_StrokeVertex ch74st0[] =
{
    {76.1905f,100.0f},
    {76.1905f,23.8095f},
    {71.4286f,9.5238f},
    {66.6667f,4.7619f},
    {57.1429f,0.0f},
    {47.6191f,0.0f},
    {38.0953f,4.7619f},
    {33.3334f,9.5238f},
    {28.5715f,23.8095f},
    {28.5715f,33.3333f}
};

static const SOG_StrokeStrip ch74st[] =
{
    {10,ch74st0}
};

static const SOG_StrokeChar ch74 = {104.762f,1,ch74st};

/* char: 0x4b */

static const SOG_StrokeVertex ch75st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch75st1[] =
{
    {85.7143f,100.0f},
    {19.0476f,33.3333f}
};

static const SOG_StrokeVertex ch75st2[] =
{
    {42.8571f,57.1429f},
    {85.7143f,0.0f}
};

static const SOG_StrokeStrip ch75st[] =
{
    {2,ch75st0},
    {2,ch75st1},
    {2,ch75st2}
};

static const SOG_StrokeChar ch75 = {104.762f,3,ch75st};

/* char: 0x4c */

static const SOG_StrokeVertex ch76st0[] =
{
    {23.8095f,100.0f},
    {23.8095f,0.0f}
};

static const SOG_StrokeVertex ch76st1[] =
{
    {23.8095f,0.0f},
    {80.9524f,0.0f}
};

static const SOG_StrokeStrip ch76st[] =
{
    {2,ch76st0},
    {2,ch76st1}
};

static const SOG_StrokeChar ch76 = {104.762f,2,ch76st};

/* char: 0x4d */

static const SOG_StrokeVertex ch77st0[] =
{
    {14.2857f,100.0f},
    {14.2857f,0.0f}
};

static const SOG_StrokeVertex ch77st1[] =
{
    {14.2857f,100.0f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch77st2[] =
{
    {90.4762f,100.0f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch77st3[] =
{
    {90.4762f,100.0f},
    {90.4762f,0.0f}
};

static const SOG_StrokeStrip ch77st[] =
{
    {2,ch77st0},
    {2,ch77st1},
    {2,ch77st2},
    {2,ch77st3}
};

static const SOG_StrokeChar ch77 = {104.762f,4,ch77st};

/* char: 0x4e */

static const SOG_StrokeVertex ch78st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch78st1[] =
{
    {19.0476f,100.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeVertex ch78st2[] =
{
    {85.7143f,100.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeStrip ch78st[] =
{
    {2,ch78st0},
    {2,ch78st1},
    {2,ch78st2}
};

static const SOG_StrokeChar ch78 = {104.762f,3,ch78st};

/* char: 0x4f */

static const SOG_StrokeVertex ch79st0[] =
{
    {42.8571f,100.0f},
    {33.3333f,95.2381f},
    {23.8095f,85.7143f},
    {19.0476f,76.1905f},
    {14.2857f,61.9048f},
    {14.2857f,38.0952f},
    {19.0476f,23.8095f},
    {23.8095f,14.2857f},
    {33.3333f,4.7619f},
    {42.8571f,0.0f},
    {61.9047f,0.0f},
    {71.4286f,4.7619f},
    {80.9524f,14.2857f},
    {85.7143f,23.8095f},
    {90.4762f,38.0952f},
    {90.4762f,61.9048f},
    {85.7143f,76.1905f},
    {80.9524f,85.7143f},
    {71.4286f,95.2381f},
    {61.9047f,100.0f},
    {42.8571f,100.0f}
};

static const SOG_StrokeStrip ch79st[] =
{
    {21,ch79st0}
};

static const SOG_StrokeChar ch79 = {104.762f,1,ch79st};

/* char: 0x50 */

static const SOG_StrokeVertex ch80st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch80st1[] =
{
    {19.0476f,100.0f},
    {61.9047f,100.0f},
    {76.1905f,95.2381f},
    {80.9524f,90.4762f},
    {85.7143f,80.9524f},
    {85.7143f,66.6667f},
    {80.9524f,57.1429f},
    {76.1905f,52.381f},
    {61.9047f,47.619f},
    {19.0476f,47.619f}
};

static const SOG_StrokeStrip ch80st[] =
{
    {2,ch80st0},
    {10,ch80st1}
};

static const SOG_StrokeChar ch80 = {104.762f,2,ch80st};

/* char: 0x51 */

static const SOG_StrokeVertex ch81st0[] =
{
    {42.8571f,100.0f},
    {33.3333f,95.2381f},
    {23.8095f,85.7143f},
    {19.0476f,76.1905f},
    {14.2857f,61.9048f},
    {14.2857f,38.0952f},
    {19.0476f,23.8095f},
    {23.8095f,14.2857f},
    {33.3333f,4.7619f},
    {42.8571f,0.0f},
    {61.9047f,0.0f},
    {71.4286f,4.7619f},
    {80.9524f,14.2857f},
    {85.7143f,23.8095f},
    {90.4762f,38.0952f},
    {90.4762f,61.9048f},
    {85.7143f,76.1905f},
    {80.9524f,85.7143f},
    {71.4286f,95.2381f},
    {61.9047f,100.0f},
    {42.8571f,100.0f}
};

static const SOG_StrokeVertex ch81st1[] =
{
    {57.1428f,19.0476f},
    {85.7143f,-9.5238f}
};

static const SOG_StrokeStrip ch81st[] =
{
    {21,ch81st0},
    {2,ch81st1}
};

static const SOG_StrokeChar ch81 = {104.762f,2,ch81st};

/* char: 0x52 */

static const SOG_StrokeVertex ch82st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch82st1[] =
{
    {19.0476f,100.0f},
    {61.9047f,100.0f},
    {76.1905f,95.2381f},
    {80.9524f,90.4762f},
    {85.7143f,80.9524f},
    {85.7143f,71.4286f},
    {80.9524f,61.9048f},
    {76.1905f,57.1429f},
    {61.9047f,52.381f},
    {19.0476f,52.381f}
};

static const SOG_StrokeVertex ch82st2[] =
{
    {52.3809f,52.381f},
    {85.7143f,0.0f}
};

static const SOG_StrokeStrip ch82st[] =
{
    {2,ch82st0},
    {10,ch82st1},
    {2,ch82st2}
};

static const SOG_StrokeChar ch82 = {104.762f,3,ch82st};

/* char: 0x53 */

static const SOG_StrokeVertex ch83st0[] =
{
    {85.7143f,85.7143f},
    {76.1905f,95.2381f},
    {61.9047f,100.0f},
    {42.8571f,100.0f},
    {28.5714f,95.2381f},
    {19.0476f,85.7143f},
    {19.0476f,76.1905f},
    {23.8095f,66.6667f},
    {28.5714f,61.9048f},
    {38.0952f,57.1429f},
    {66.6666f,47.619f},
    {76.1905f,42.8571f},
    {80.9524f,38.0952f},
    {85.7143f,28.5714f},
    {85.7143f,14.2857f},
    {76.1905f,4.7619f},
    {61.9047f,0.0f},
    {42.8571f,0.0f},
    {28.5714f,4.7619f},
    {19.0476f,14.2857f}
};

static const SOG_StrokeStrip ch83st[] =
{
    {20,ch83st0}
};

static const SOG_StrokeChar ch83 = {104.762f,1,ch83st};

/* char: 0x54 */

static const SOG_StrokeVertex ch84st0[] =
{
    {52.3809f,100.0f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch84st1[] =
{
    {19.0476f,100.0f},
    {85.7143f,100.0f}
};

static const SOG_StrokeStrip ch84st[] =
{
    {2,ch84st0},
    {2,ch84st1}
};

static const SOG_StrokeChar ch84 = {104.762f,2,ch84st};

/* char: 0x55 */

static const SOG_StrokeVertex ch85st0[] =
{
    {19.0476f,100.0f},
    {19.0476f,28.5714f},
    {23.8095f,14.2857f},
    {33.3333f,4.7619f},
    {47.619f,0.0f},
    {57.1428f,0.0f},
    {71.4286f,4.7619f},
    {80.9524f,14.2857f},
    {85.7143f,28.5714f},
    {85.7143f,100.0f}
};

static const SOG_StrokeStrip ch85st[] =
{
    {10,ch85st0}
};

static const SOG_StrokeChar ch85 = {104.762f,1,ch85st};

/* char: 0x56 */

static const SOG_StrokeVertex ch86st0[] =
{
    {14.2857f,100.0f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch86st1[] =
{
    {90.4762f,100.0f},
    {52.3809f,0.0f}
};

static const SOG_StrokeStrip ch86st[] =
{
    {2,ch86st0},
    {2,ch86st1}
};

static const SOG_StrokeChar ch86 = {104.762f,2,ch86st};

/* char: 0x57 */

static const SOG_StrokeVertex ch87st0[] =
{
    {4.7619f,100.0f},
    {28.5714f,0.0f}
};

static const SOG_StrokeVertex ch87st1[] =
{
    {52.3809f,100.0f},
    {28.5714f,0.0f}
};

static const SOG_StrokeVertex ch87st2[] =
{
    {52.3809f,100.0f},
    {76.1905f,0.0f}
};

static const SOG_StrokeVertex ch87st3[] =
{
    {100.0f,100.0f},
    {76.1905f,0.0f}
};

static const SOG_StrokeStrip ch87st[] =
{
    {2,ch87st0},
    {2,ch87st1},
    {2,ch87st2},
    {2,ch87st3}
};

static const SOG_StrokeChar ch87 = {104.762f,4,ch87st};

/* char: 0x58 */

static const SOG_StrokeVertex ch88st0[] =
{
    {19.0476f,100.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeVertex ch88st1[] =
{
    {85.7143f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeStrip ch88st[] =
{
    {2,ch88st0},
    {2,ch88st1}
};

static const SOG_StrokeChar ch88 = {104.762f,2,ch88st};

/* char: 0x59 */

static const SOG_StrokeVertex ch89st0[] =
{
    {14.2857f,100.0f},
    {52.3809f,52.381f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch89st1[] =
{
    {90.4762f,100.0f},
    {52.3809f,52.381f}
};

static const SOG_StrokeStrip ch89st[] =
{
    {3,ch89st0},
    {2,ch89st1}
};

static const SOG_StrokeChar ch89 = {104.762f,2,ch89st};

/* char: 0x5a */

static const SOG_StrokeVertex ch90st0[] =
{
    {85.7143f,100.0f},
    {19.0476f,0.0f}
};

static const SOG_StrokeVertex ch90st1[] =
{
    {19.0476f,100.0f},
    {85.7143f,100.0f}
};

static const SOG_StrokeVertex ch90st2[] =
{
    {19.0476f,0.0f},
    {85.7143f,0.0f}
};

static const SOG_StrokeStrip ch90st[] =
{
    {2,ch90st0},
    {2,ch90st1},
    {2,ch90st2}
};

static const SOG_StrokeChar ch90 = {104.762f,3,ch90st};

/* char: 0x5b */

static const SOG_StrokeVertex ch91st0[] =
{
    {35.7143f,119.048f},
    {35.7143f,-33.3333f}
};

static const SOG_StrokeVertex ch91st1[] =
{
    {40.4762f,119.048f},
    {40.4762f,-33.3333f}
};

static const SOG_StrokeVertex ch91st2[] =
{
    {35.7143f,119.048f},
    {69.0476f,119.048f}
};

static const SOG_StrokeVertex ch91st3[] =
{
    {35.7143f,-33.3333f},
    {69.0476f,-33.3333f}
};

static const SOG_StrokeStrip ch91st[] =
{
    {2,ch91st0},
    {2,ch91st1},
    {2,ch91st2},
    {2,ch91st3}
};

static const SOG_StrokeChar ch91 = {104.762f,4,ch91st};

/* char: 0x5c */

static const SOG_StrokeVertex ch92st0[] =
{
    {19.0476f,100.0f},
    {85.7143f,-14.2857f}
};

static const SOG_StrokeStrip ch92st[] =
{
    {2,ch92st0}
};

static const SOG_StrokeChar ch92 = {104.762f,1,ch92st};

/* char: 0x5d */

static const SOG_StrokeVertex ch93st0[] =
{
    {64.2857f,119.048f},
    {64.2857f,-33.3333f}
};

static const SOG_StrokeVertex ch93st1[] =
{
    {69.0476f,119.048f},
    {69.0476f,-33.3333f}
};

static const SOG_StrokeVertex ch93st2[] =
{
    {35.7143f,119.048f},
    {69.0476f,119.048f}
};

static const SOG_StrokeVertex ch93st3[] =
{
    {35.7143f,-33.3333f},
    {69.0476f,-33.3333f}
};

static const SOG_StrokeStrip ch93st[] =
{
    {2,ch93st0},
    {2,ch93st1},
    {2,ch93st2},
    {2,ch93st3}
};

static const SOG_StrokeChar ch93 = {104.762f,4,ch93st};

/* char: 0x5e */

static const SOG_StrokeVertex ch94st0[] =
{
    {52.3809f,109.524f},
    {14.2857f,42.8571f}
};

static const SOG_StrokeVertex ch94st1[] =
{
    {52.3809f,109.524f},
    {90.4762f,42.8571f}
};

static const SOG_StrokeStrip ch94st[] =
{
    {2,ch94st0},
    {2,ch94st1}
};

static const SOG_StrokeChar ch94 = {104.762f,2,ch94st};

/* char: 0x5f */

static const SOG_StrokeVertex ch95st0[] =
{
    {0,-33.3333f},
    {104.762f,-33.3333f},
    {104.762f,-28.5714f},
    {0,-28.5714f},
    {0,-33.3333f}
};

static const SOG_StrokeStrip ch95st[] =
{
    {5,ch95st0}
};

static const SOG_StrokeChar ch95 = {104.762f,1,ch95st};

/* char: 0x60 */

static const SOG_StrokeVertex ch96st0[] =
{
    {42.8572f,100.0f},
    {66.6667f,71.4286f}
};

static const SOG_StrokeVertex ch96st1[] =
{
    {42.8572f,100.0f},
    {38.0953f,95.2381f},
    {66.6667f,71.4286f}
};

static const SOG_StrokeStrip ch96st[] =
{
    {2,ch96st0},
    {3,ch96st1}
};

static const SOG_StrokeChar ch96 = {104.762f,2,ch96st};

/* char: 0x61 */

static const SOG_StrokeVertex ch97st0[] =
{
    {80.9524f,66.6667f},
    {80.9524f,0.0f}
};

static const SOG_StrokeVertex ch97st1[] =
{
    {80.9524f,52.381f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch97st[] =
{
    {2,ch97st0},
    {14,ch97st1}
};

static const SOG_StrokeChar ch97 = {104.762f,2,ch97st};

/* char: 0x62 */

static const SOG_StrokeVertex ch98st0[] =
{
    {23.8095f,100.0f},
    {23.8095f,0.0f}
};

static const SOG_StrokeVertex ch98st1[] =
{
    {23.8095f,52.381f},
    {33.3333f,61.9048f},
    {42.8571f,66.6667f},
    {57.1428f,66.6667f},
    {66.6666f,61.9048f},
    {76.1905f,52.381f},
    {80.9524f,38.0952f},
    {80.9524f,28.5714f},
    {76.1905f,14.2857f},
    {66.6666f,4.7619f},
    {57.1428f,0.0f},
    {42.8571f,0.0f},
    {33.3333f,4.7619f},
    {23.8095f,14.2857f}
};

static const SOG_StrokeStrip ch98st[] =
{
    {2,ch98st0},
    {14,ch98st1}
};

static const SOG_StrokeChar ch98 = {104.762f,2,ch98st};

/* char: 0x63 */

static const SOG_StrokeVertex ch99st0[] =
{
    {80.9524f,52.381f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch99st[] =
{
    {14,ch99st0}
};

static const SOG_StrokeChar ch99 = {104.762f,1,ch99st};

/* char: 0x64 */

static const SOG_StrokeVertex ch100st0[] =
{
    {80.9524f,100.0f},
    {80.9524f,0.0f}
};

static const SOG_StrokeVertex ch100st1[] =
{
    {80.9524f,52.381f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch100st[] =
{
    {2,ch100st0},
    {14,ch100st1}
};

static const SOG_StrokeChar ch100 = {104.762f,2,ch100st};

/* char: 0x65 */

static const SOG_StrokeVertex ch101st0[] =
{
    {23.8095f,38.0952f},
    {80.9524f,38.0952f},
    {80.9524f,47.619f},
    {76.1905f,57.1429f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch101st[] =
{
    {17,ch101st0}
};

static const SOG_StrokeChar ch101 = {104.762f,1,ch101st};

/* char: 0x66 */

static const SOG_StrokeVertex ch102st0[] =
{
    {71.4286f,100.0f},
    {61.9048f,100.0f},
    {52.381f,95.2381f},
    {47.6191f,80.9524f},
    {47.6191f,0.0f}
};

static const SOG_StrokeVertex ch102st1[] =
{
    {33.3334f,66.6667f},
    {66.6667f,66.6667f}
};

static const SOG_StrokeStrip ch102st[] =
{
    {5,ch102st0},
    {2,ch102st1}
};

static const SOG_StrokeChar ch102 = {104.762f,2,ch102st};

/* char: 0x67 */

static const SOG_StrokeVertex ch103st0[] =
{
    {80.9524f,66.6667f},
    {80.9524f,-9.5238f},
    {76.1905f,-23.8095f},
    {71.4285f,-28.5714f},
    {61.9047f,-33.3333f},
    {47.619f,-33.3333f},
    {38.0952f,-28.5714f}
};

static const SOG_StrokeVertex ch103st1[] =
{
    {80.9524f,52.381f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch103st[] =
{
    {7,ch103st0},
    {14,ch103st1}
};

static const SOG_StrokeChar ch103 = {104.762f,2,ch103st};

/* char: 0x68 */

static const SOG_StrokeVertex ch104st0[] =
{
    {26.1905f,100.0f},
    {26.1905f,0.0f}
};

static const SOG_StrokeVertex ch104st1[] =
{
    {26.1905f,47.619f},
    {40.4762f,61.9048f},
    {50.0f,66.6667f},
    {64.2857f,66.6667f},
    {73.8095f,61.9048f},
    {78.5715f,47.619f},
    {78.5715f,0.0f}
};

static const SOG_StrokeStrip ch104st[] =
{
    {2,ch104st0},
    {7,ch104st1}
};

static const SOG_StrokeChar ch104 = {104.762f,2,ch104st};

/* char: 0x69 */

static const SOG_StrokeVertex ch105st0[] =
{
    {47.6191f,100.0f},
    {52.381f,95.2381f},
    {57.1429f,100.0f},
    {52.381f,104.762f},
    {47.6191f,100.0f}
};

static const SOG_StrokeVertex ch105st1[] =
{
    {52.381f,66.6667f},
    {52.381f,0.0f}
};

static const SOG_StrokeStrip ch105st[] =
{
    {5,ch105st0},
    {2,ch105st1}
};

static const SOG_StrokeChar ch105 = {104.762f,2,ch105st};

/* char: 0x6a */

static const SOG_StrokeVertex ch106st0[] =
{
    {57.1429f,100.0f},
    {61.9048f,95.2381f},
    {66.6667f,100.0f},
    {61.9048f,104.762f},
    {57.1429f,100.0f}
};

static const SOG_StrokeVertex ch106st1[] =
{
    {61.9048f,66.6667f},
    {61.9048f,-14.2857f},
    {57.1429f,-28.5714f},
    {47.6191f,-33.3333f},
    {38.0953f,-33.3333f}
};

static const SOG_StrokeStrip ch106st[] =
{
    {5,ch106st0},
    {5,ch106st1}
};

static const SOG_StrokeChar ch106 = {104.762f,2,ch106st};

/* char: 0x6b */

static const SOG_StrokeVertex ch107st0[] =
{
    {26.1905f,100.0f},
    {26.1905f,0.0f}
};

static const SOG_StrokeVertex ch107st1[] =
{
    {73.8095f,66.6667f},
    {26.1905f,19.0476f}
};

static const SOG_StrokeVertex ch107st2[] =
{
    {45.2381f,38.0952f},
    {78.5715f,0.0f}
};

static const SOG_StrokeStrip ch107st[] =
{
    {2,ch107st0},
    {2,ch107st1},
    {2,ch107st2}
};

static const SOG_StrokeChar ch107 = {104.762f,3,ch107st};

/* char: 0x6c */

static const SOG_StrokeVertex ch108st0[] =
{
    {52.381f,100.0f},
    {52.381f,0.0f}
};

static const SOG_StrokeStrip ch108st[] =
{
    {2,ch108st0}
};

static const SOG_StrokeChar ch108 = {104.762f,1,ch108st};

/* char: 0x6d */

static const SOG_StrokeVertex ch109st0[] =
{
    {0,66.6667f},
    {0,0.0f}
};

static const SOG_StrokeVertex ch109st1[] =
{
    {0,47.619f},
    {14.2857f,61.9048f},
    {23.8095f,66.6667f},
    {38.0952f,66.6667f},
    {47.619f,61.9048f},
    {52.381f,47.619f},
    {52.381f,0.0f}
};

static const SOG_StrokeVertex ch109st2[] =
{
    {52.381f,47.619f},
    {66.6667f,61.9048f},
    {76.1905f,66.6667f},
    {90.4762f,66.6667f},
    {100.0f,61.9048f},
    {104.762f,47.619f},
    {104.762f,0.0f}
};

static const SOG_StrokeStrip ch109st[] =
{
    {2,ch109st0},
    {7,ch109st1},
    {7,ch109st2}
};

static const SOG_StrokeChar ch109 = {104.762f,3,ch109st};

/* char: 0x6e */

static const SOG_StrokeVertex ch110st0[] =
{
    {26.1905f,66.6667f},
    {26.1905f,0.0f}
};

static const SOG_StrokeVertex ch110st1[] =
{
    {26.1905f,47.619f},
    {40.4762f,61.9048f},
    {50.0f,66.6667f},
    {64.2857f,66.6667f},
    {73.8095f,61.9048f},
    {78.5715f,47.619f},
    {78.5715f,0.0f}
};

static const SOG_StrokeStrip ch110st[] =
{
    {2,ch110st0},
    {7,ch110st1}
};

static const SOG_StrokeChar ch110 = {104.762f,2,ch110st};

/* char: 0x6f */

static const SOG_StrokeVertex ch111st0[] =
{
    {45.2381f,66.6667f},
    {35.7143f,61.9048f},
    {26.1905f,52.381f},
    {21.4286f,38.0952f},
    {21.4286f,28.5714f},
    {26.1905f,14.2857f},
    {35.7143f,4.7619f},
    {45.2381f,0.0f},
    {59.5238f,0.0f},
    {69.0476f,4.7619f},
    {78.5714f,14.2857f},
    {83.3334f,28.5714f},
    {83.3334f,38.0952f},
    {78.5714f,52.381f},
    {69.0476f,61.9048f},
    {59.5238f,66.6667f},
    {45.2381f,66.6667f}
};

static const SOG_StrokeStrip ch111st[] =
{
    {17,ch111st0}
};

static const SOG_StrokeChar ch111 = {104.762f,1,ch111st};

/* char: 0x70 */

static const SOG_StrokeVertex ch112st0[] =
{
    {23.8095f,66.6667f},
    {23.8095f,-33.3333f}
};

static const SOG_StrokeVertex ch112st1[] =
{
    {23.8095f,52.381f},
    {33.3333f,61.9048f},
    {42.8571f,66.6667f},
    {57.1428f,66.6667f},
    {66.6666f,61.9048f},
    {76.1905f,52.381f},
    {80.9524f,38.0952f},
    {80.9524f,28.5714f},
    {76.1905f,14.2857f},
    {66.6666f,4.7619f},
    {57.1428f,0.0f},
    {42.8571f,0.0f},
    {33.3333f,4.7619f},
    {23.8095f,14.2857f}
};

static const SOG_StrokeStrip ch112st[] =
{
    {2,ch112st0},
    {14,ch112st1}
};

static const SOG_StrokeChar ch112 = {104.762f,2,ch112st};

/* char: 0x71 */

static const SOG_StrokeVertex ch113st0[] =
{
    {80.9524f,66.6667f},
    {80.9524f,-33.3333f}
};

static const SOG_StrokeVertex ch113st1[] =
{
    {80.9524f,52.381f},
    {71.4285f,61.9048f},
    {61.9047f,66.6667f},
    {47.619f,66.6667f},
    {38.0952f,61.9048f},
    {28.5714f,52.381f},
    {23.8095f,38.0952f},
    {23.8095f,28.5714f},
    {28.5714f,14.2857f},
    {38.0952f,4.7619f},
    {47.619f,0.0f},
    {61.9047f,0.0f},
    {71.4285f,4.7619f},
    {80.9524f,14.2857f}
};

static const SOG_StrokeStrip ch113st[] =
{
    {2,ch113st0},
    {14,ch113st1}
};

static const SOG_StrokeChar ch113 = {104.762f,2,ch113st};

/* char: 0x72 */

static const SOG_StrokeVertex ch114st0[] =
{
    {33.3334f,66.6667f},
    {33.3334f,0.0f}
};

static const SOG_StrokeVertex ch114st1[] =
{
    {33.3334f,38.0952f},
    {38.0953f,52.381f},
    {47.6191f,61.9048f},
    {57.1429f,66.6667f},
    {71.4286f,66.6667f}
};

static const SOG_StrokeStrip ch114st[] =
{
    {2,ch114st0},
    {5,ch114st1}
};

static const SOG_StrokeChar ch114 = {104.762f,2,ch114st};

/* char: 0x73 */

static const SOG_StrokeVertex ch115st0[] =
{
    {78.5715f,52.381f},
    {73.8095f,61.9048f},
    {59.5238f,66.6667f},
    {45.2381f,66.6667f},
    {30.9524f,61.9048f},
    {26.1905f,52.381f},
    {30.9524f,42.8571f},
    {40.4762f,38.0952f},
    {64.2857f,33.3333f},
    {73.8095f,28.5714f},
    {78.5715f,19.0476f},
    {78.5715f,14.2857f},
    {73.8095f,4.7619f},
    {59.5238f,0.0f},
    {45.2381f,0.0f},
    {30.9524f,4.7619f},
    {26.1905f,14.2857f}
};

static const SOG_StrokeStrip ch115st[] =
{
    {17,ch115st0}
};

static const SOG_StrokeChar ch115 = {104.762f,1,ch115st};

/* char: 0x74 */

static const SOG_StrokeVertex ch116st0[] =
{
    {47.6191f,100.0f},
    {47.6191f,19.0476f},
    {52.381f,4.7619f},
    {61.9048f,0.0f},
    {71.4286f,0.0f}
};

static const SOG_StrokeVertex ch116st1[] =
{
    {33.3334f,66.6667f},
    {66.6667f,66.6667f}
};

static const SOG_StrokeStrip ch116st[] =
{
    {5,ch116st0},
    {2,ch116st1}
};

static const SOG_StrokeChar ch116 = {104.762f,2,ch116st};

/* char: 0x75 */

static const SOG_StrokeVertex ch117st0[] =
{
    {26.1905f,66.6667f},
    {26.1905f,19.0476f},
    {30.9524f,4.7619f},
    {40.4762f,0.0f},
    {54.7619f,0.0f},
    {64.2857f,4.7619f},
    {78.5715f,19.0476f}
};

static const SOG_StrokeVertex ch117st1[] =
{
    {78.5715f,66.6667f},
    {78.5715f,0.0f}
};

static const SOG_StrokeStrip ch117st[] =
{
    {7,ch117st0},
    {2,ch117st1}
};

static const SOG_StrokeChar ch117 = {104.762f,2,ch117st};

/* char: 0x76 */

static const SOG_StrokeVertex ch118st0[] =
{
    {23.8095f,66.6667f},
    {52.3809f,0.0f}
};

static const SOG_StrokeVertex ch118st1[] =
{
    {80.9524f,66.6667f},
    {52.3809f,0.0f}
};

static const SOG_StrokeStrip ch118st[] =
{
    {2,ch118st0},
    {2,ch118st1}
};

static const SOG_StrokeChar ch118 = {104.762f,2,ch118st};

/* char: 0x77 */

static const SOG_StrokeVertex ch119st0[] =
{
    {14.2857f,66.6667f},
    {33.3333f,0.0f}
};

static const SOG_StrokeVertex ch119st1[] =
{
    {52.3809f,66.6667f},
    {33.3333f,0.0f}
};

static const SOG_StrokeVertex ch119st2[] =
{
    {52.3809f,66.6667f},
    {71.4286f,0.0f}
};

static const SOG_StrokeVertex ch119st3[] =
{
    {90.4762f,66.6667f},
    {71.4286f,0.0f}
};

static const SOG_StrokeStrip ch119st[] =
{
    {2,ch119st0},
    {2,ch119st1},
    {2,ch119st2},
    {2,ch119st3}
};

static const SOG_StrokeChar ch119 = {104.762f,4,ch119st};

/* char: 0x78 */

static const SOG_StrokeVertex ch120st0[] =
{
    {26.1905f,66.6667f},
    {78.5715f,0.0f}
};

static const SOG_StrokeVertex ch120st1[] =
{
    {78.5715f,66.6667f},
    {26.1905f,0.0f}
};

static const SOG_StrokeStrip ch120st[] =
{
    {2,ch120st0},
    {2,ch120st1}
};

static const SOG_StrokeChar ch120 = {104.762f,2,ch120st};

/* char: 0x79 */

static const SOG_StrokeVertex ch121st0[] =
{
    {26.1905f,66.6667f},
    {54.7619f,0.0f}
};

static const SOG_StrokeVertex ch121st1[] =
{
    {83.3334f,66.6667f},
    {54.7619f,0.0f},
    {45.2381f,-19.0476f},
    {35.7143f,-28.5714f},
    {26.1905f,-33.3333f},
    {21.4286f,-33.3333f}
};

static const SOG_StrokeStrip ch121st[] =
{
    {2,ch121st0},
    {6,ch121st1}
};

static const SOG_StrokeChar ch121 = {104.762f,2,ch121st};

/* char: 0x7a */

static const SOG_StrokeVertex ch122st0[] =
{
    {78.5715f,66.6667f},
    {26.1905f,0.0f}
};

static const SOG_StrokeVertex ch122st1[] =
{
    {26.1905f,66.6667f},
    {78.5715f,66.6667f}
};

static const SOG_StrokeVertex ch122st2[] =
{
    {26.1905f,0.0f},
    {78.5715f,0.0f}
};

static const SOG_StrokeStrip ch122st[] =
{
    {2,ch122st0},
    {2,ch122st1},
    {2,ch122st2}
};

static const SOG_StrokeChar ch122 = {104.762f,3,ch122st};

/* char: 0x7b */

static const SOG_StrokeVertex ch123st0[] =
{
    {64.2857f,119.048f},
    {54.7619f,114.286f},
    {50.0f,109.524f},
    {45.2381f,100.0f},
    {45.2381f,90.4762f},
    {50.0f,80.9524f},
    {54.7619f,76.1905f},
    {59.5238f,66.6667f},
    {59.5238f,57.1429f},
    {50.0f,47.619f}
};

static const SOG_StrokeVertex ch123st1[] =
{
    {54.7619f,114.286f},
    {50.0f,104.762f},
    {50.0f,95.2381f},
    {54.7619f,85.7143f},
    {59.5238f,80.9524f},
    {64.2857f,71.4286f},
    {64.2857f,61.9048f},
    {59.5238f,52.381f},
    {40.4762f,42.8571f},
    {59.5238f,33.3333f},
    {64.2857f,23.8095f},
    {64.2857f,14.2857f},
    {59.5238f,4.7619f},
    {54.7619f,0.0f},
    {50.0f,-9.5238f},
    {50.0f,-19.0476f},
    {54.7619f,-28.5714f}
};

static const SOG_StrokeVertex ch123st2[] =
{
    {50.0f,38.0952f},
    {59.5238f,28.5714f},
    {59.5238f,19.0476f},
    {54.7619f,9.5238f},
    {50.0f,4.7619f},
    {45.2381f,-4.7619f},
    {45.2381f,-14.2857f},
    {50.0f,-23.8095f},
    {54.7619f,-28.5714f},
    {64.2857f,-33.3333f}
};

static const SOG_StrokeStrip ch123st[] =
{
    {10,ch123st0},
    {17,ch123st1},
    {10,ch123st2}
};

static const SOG_StrokeChar ch123 = {104.762f,3,ch123st};

/* char: 0x7c */

static const SOG_StrokeVertex ch124st0[] =
{
    {52.381f,119.048f},
    {52.381f,-33.3333f}
};

static const SOG_StrokeStrip ch124st[] =
{
    {2,ch124st0}
};

static const SOG_StrokeChar ch124 = {104.762f,1,ch124st};

/* char: 0x7d */

static const SOG_StrokeVertex ch125st0[] =
{
    {40.4762f,119.048f},
    {50.0f,114.286f},
    {54.7619f,109.524f},
    {59.5238f,100.0f},
    {59.5238f,90.4762f},
    {54.7619f,80.9524f},
    {50.0f,76.1905f},
    {45.2381f,66.6667f},
    {45.2381f,57.1429f},
    {54.7619f,47.619f}
};

static const SOG_StrokeVertex ch125st1[] =
{
    {50.0f,114.286f},
    {54.7619f,104.762f},
    {54.7619f,95.2381f},
    {50.0f,85.7143f},
    {45.2381f,80.9524f},
    {40.4762f,71.4286f},
    {40.4762f,61.9048f},
    {45.2381f,52.381f},
    {64.2857f,42.8571f},
    {45.2381f,33.3333f},
    {40.4762f,23.8095f},
    {40.4762f,14.2857f},
    {45.2381f,4.7619f},
    {50.0f,0.0f},
    {54.7619f,-9.5238f},
    {54.7619f,-19.0476f},
    {50.0f,-28.5714f}
};

static const SOG_StrokeVertex ch125st2[] =
{
    {54.7619f,38.0952f},
    {45.2381f,28.5714f},
    {45.2381f,19.0476f},
    {50.0f,9.5238f},
    {54.7619f,4.7619f},
    {59.5238f,-4.7619f},
    {59.5238f,-14.2857f},
    {54.7619f,-23.8095f},
    {50.0f,-28.5714f},
    {40.4762f,-33.3333f}
};

static const SOG_StrokeStrip ch125st[] =
{
    {10,ch125st0},
    {17,ch125st1},
    {10,ch125st2}
};

static const SOG_StrokeChar ch125 = {104.762f,3,ch125st};

/* char: 0x7e */

static const SOG_StrokeVertex ch126st0[] =
{
    {9.5238f,28.5714f},
    {9.5238f,38.0952f},
    {14.2857f,52.381f},
    {23.8095f,57.1429f},
    {33.3333f,57.1429f},
    {42.8571f,52.381f},
    {61.9048f,38.0952f},
    {71.4286f,33.3333f},
    {80.9524f,33.3333f},
    {90.4762f,38.0952f},
    {95.2381f,47.619f}
};

static const SOG_StrokeVertex ch126st1[] =
{
    {9.5238f,38.0952f},
    {14.2857f,47.619f},
    {23.8095f,52.381f},
    {33.3333f,52.381f},
    {42.8571f,47.619f},
    {61.9048f,33.3333f},
    {71.4286f,28.5714f},
    {80.9524f,28.5714f},
    {90.4762f,33.3333f},
    {95.2381f,47.619f},
    {95.2381f,57.1429f}
};

static const SOG_StrokeStrip ch126st[] =
{
    {11,ch126st0},
    {11,ch126st1}
};

static const SOG_StrokeChar ch126 = {104.762f,2,ch126st};

/* char: 0x7f */

static const SOG_StrokeVertex ch127st0[] =
{
    {71.4286f,100.0f},
    {33.3333f,-33.3333f}
};

static const SOG_StrokeVertex ch127st1[] =
{
    {47.619f,66.6667f},
    {33.3333f,61.9048f},
    {23.8095f,52.381f},
    {19.0476f,38.0952f},
    {19.0476f,23.8095f},
    {23.8095f,14.2857f},
    {33.3333f,4.7619f},
    {47.619f,0.0f},
    {57.1428f,0.0f},
    {71.4286f,4.7619f},
    {80.9524f,14.2857f},
    {85.7143f,28.5714f},
    {85.7143f,42.8571f},
    {80.9524f,52.381f},
    {71.4286f,61.9048f},
    {57.1428f,66.6667f},
    {47.619f,66.6667f}
};

static const SOG_StrokeStrip ch127st[] =
{
    {2,ch127st0},
    {17,ch127st1}
};

static const SOG_StrokeChar ch127 = {104.762f,2,ch127st};

static const SOG_StrokeChar *chars[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    &ch32, &ch33, &ch34, &ch35, &ch36, &ch37, &ch38, &ch39,
    &ch40, &ch41, &ch42, &ch43, &ch44, &ch45, &ch46, &ch47,
    &ch48, &ch49, &ch50, &ch51, &ch52, &ch53, &ch54, &ch55,
    &ch56, &ch57, &ch58, &ch59, &ch60, &ch61, &ch62, &ch63,
    &ch64, &ch65, &ch66, &ch67, &ch68, &ch69, &ch70, &ch71,
    &ch72, &ch73, &ch74, &ch75, &ch76, &ch77, &ch78, &ch79,
    &ch80, &ch81, &ch82, &ch83, &ch84, &ch85, &ch86, &ch87,
    &ch88, &ch89, &ch90, &ch91, &ch92, &ch93, &ch94, &ch95,
    &ch96, &ch97, &ch98, &ch99, &ch100, &ch101, &ch102, &ch103,
    &ch104, &ch105, &ch106, &ch107, &ch108, &ch109, &ch110, &ch111,
    &ch112, &ch113, &ch114, &ch115, &ch116, &ch117, &ch118, &ch119,
    &ch120, &ch121, &ch122, &ch123, &ch124, &ch125, &ch126, &ch127
};

SOG_StrokeFont ogStrokeMonoRoman = {"MonoRoman",128,152.381f,chars};


void glStrokeCharacter( int character )
{
    const SOG_StrokeChar *schar;
    const SOG_StrokeStrip *strip;
    int i, j;
    SOG_StrokeFont *font = &ogStrokeMonoRoman;

    schar = font->Characters[ character ];
    if( schar ) {
        strip = schar->Strips;
        for( i = 0; i < schar->Number; i++, strip++ ) {
            glBegin( GL_LINE_STRIP );
            for( j = 0; j < strip->Number; j++ ) 
                glVertex2f( strip->Vertices[ j ].X, strip->Vertices[ j ].Y );
            glEnd( );
        }
        glTranslatef( schar->Right, 0.0, 0.0 );
    }
}

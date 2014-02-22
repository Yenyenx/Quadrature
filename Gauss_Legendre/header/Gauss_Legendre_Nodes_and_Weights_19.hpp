//
//        Gauss_Legendre_Nodes_and_Weights_19.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 19.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_19_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_19_hpp__

void Gauss_Legendre_Nodes_and_Weights_19(long double*& nodes, long double*& weights) {
	nodes	= new long double[19];
	weights	= new long double[19];

	nodes[0] 	= 0;
	weights[0] 	= 0.16105444984878369597916362532091673503990255857851690212832315273577104845549807215254076571692904693263228228631849922137431789;

	nodes[1] 	= -0.16035864564022537586809611574074354950487350047087537887464345160632060868039107365673957349948091293184834201834787964759111415;
	weights[1] 	= 0.158968843393954347649956439465047201678780158195126095751174915324740978583385059742610476726006478565672695740730870929468194;

	nodes[2] 	= 0.16035864564022537586809611574074354950487350047087537887464345160632060868039107365673957349948091293184834201834787964759111415;
	weights[2] 	= 0.158968843393954347649956439465047201678780158195126095751174915324740978583385059742610476726006478565672695740730870929468194;

	nodes[3] 	= -0.31656409996362983199011732884984491789228521913288724515572898679789288582057639799683889208648035107315350817302504308467404283;
	weights[3] 	= 0.15276604206585966677885540089766299846100826723642862352310155307481104365106321365480984703078706840228125764385142941828427;

	nodes[4] 	= 0.31656409996362983199011732884984491789228521913288724515572898679789288582057639799683889208648035107315350817302504308467404283;
	weights[4] 	= 0.15276604206585966677885540089766299846100826723642862352310155307481104365106321365480984703078706840228125764385142941828427;

	nodes[5] 	= -0.46457074137596094571726714810410236797628571462413659698430887757568412111342540668644954572073194487109180299597143083089301779;
	weights[5] 	= 0.1426067021736066117757461094419029724756683448244738609265716559064582484729032510149400718372501369086306014406580383315196;

	nodes[6] 	= 0.46457074137596094571726714810410236797628571462413659698430887757568412111342540668644954572073194487109180299597143083089301779;
	weights[6] 	= 0.1426067021736066117757461094419029724756683448244738609265716559064582484729032510149400718372501369086306014406580383315196;

	nodes[7] 	= -0.60054530466168102346963816494623927986832208273229256758658672566838490869687084042475579533145400143533820420904052218382284565;
	weights[7] 	= 0.128753962539336227675515784856877117055839577093463034547104384622303604056631679931433002334152073215891645750356298056377;

	nodes[8] 	= 0.60054530466168102346963816494623927986832208273229256758658672566838490869687084042475579533145400143533820420904052218382284565;
	weights[8] 	= 0.128753962539336227675515784856877117055839577093463034547104384622303604056631679931433002334152073215891645750356298056377;

	nodes[9] 	= -0.72096617733522937861709586082378162965714183290866677493859047138661455914798605284343338267132657458651463687636958937059354267;
	weights[9] 	= 0.11156664554733399471602390168176599748133185383989377552146114287645897610564647060100428495259230540562615544421053147458;

	nodes[10] 	= 0.72096617733522937861709586082378162965714183290866677493859047138661455914798605284343338267132657458651463687636958937059354267;
	weights[10] 	= 0.11156664554733399471602390168176599748133185383989377552146114287645897610564647060100428495259230540562615544421053147458;

	nodes[11] 	= -0.82271465653714282497892248671271390177453848620683004136986388860550034290368583202686622310926059964702256189845946851099367719;
	weights[11] 	= 0.09149002162244999946446209412383965266091165129659878466498934490206222104379726160574771504188895627431466349930429818089;

	nodes[12] 	= 0.82271465653714282497892248671271390177453848620683004136986388860550034290368583202686622310926059964702256189845946851099367719;
	weights[12] 	= 0.09149002162244999946446209412383965266091165129659878466498934490206222104379726160574771504188895627431466349930429818089;

	nodes[13] 	= -0.90315590361481790164266092853231248780939393405735581769503242476163580459010421895752022836929704563007807990182783003121774752;
	weights[13] 	= 0.0690445427376412265807082580060130449618480316876131311229004276960349749064390215176630954633349726374642876653899542525;

	nodes[14] 	= 0.90315590361481790164266092853231248780939393405735581769503242476163580459010421895752022836929704563007807990182783003121774752;
	weights[14] 	= 0.0690445427376412265807082580060130449618480316876131311229004276960349749064390215176630954633349726374642876653899542525;

	nodes[15] 	= -0.96020815213483003085277884068765152661509150327413810591781633443220074993748851322074356149154131772543681925231647421679788338;
	weights[15] 	= 0.0448142267656996003328381574019942119517542274678576020858545267676429913842794576446690357102559934203280323775860360343;

	nodes[16] 	= 0.96020815213483003085277884068765152661509150327413810591781633443220074993748851322074356149154131772543681925231647421679788338;
	weights[16] 	= 0.0448142267656996003328381574019942119517542274678576020858545267676429913842794576446690357102559934203280323775860360343;

	nodes[17] 	= -0.9924068438435844031890176702532604935893164014032107866796794390912319029585228838036749208734188013119794958338236088364145227;
	weights[17] 	= 0.01946178822972647703631204146443843575290660906928664079268047246160143756810554821085208804526749170347451929475329371142;

	nodes[18] 	= 0.9924068438435844031890176702532604935893164014032107866796794390912319029585228838036749208734188013119794958338236088364145227;
	weights[18] 	= 0.01946178822972647703631204146443843575290660906928664079268047246160143756810554821085208804526749170347451929475329371142;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_19_hpp__)*/
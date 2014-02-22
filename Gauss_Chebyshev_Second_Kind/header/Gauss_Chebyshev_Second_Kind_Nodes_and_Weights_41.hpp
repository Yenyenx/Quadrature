//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_41.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 41.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_41_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_41_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_41(long double*& nodes, long double*& weights) {
	nodes	= new long double[41];
	weights	= new long double[41];

	nodes[0] 	= 0.99720379718118014822502987087811926565585970536236880527491970773736929489914676310977515092446693698568101079248701806606039319;
	weights[0] 	= 0.0004177261223548088333327362994786915855431650631084868012479892049936195838378961636601147193329556296977505944851754171174166636;

	nodes[1] 	= 0.98883082622512854506974288293400861306525101357418770639949692716021353309872609924934318996817419308688871791291610516590831812;
	weights[1] 	= 0.0016615731781174671824652115555672095404456155318529047822374614877041233096857507291100849662161524926113512936523953355144482703;

	nodes[2] 	= 0.97492791218182360701813168299393121723278580061999743764807957508764593163440379370011245812073692516401481293875625289435821838;
	weights[2] 	= 0.003703755679457624335695660276033984494465988012675160371764872267964594670526772881008561519762976707832523284875408435138077637;

	nodes[3] 	= 0.95557280578614073281133405376746666643958910634689043067188665898809431541844944622673474039669985370628755349326152775411795347;
	weights[3] 	= 0.0064986546439003405467477270233629957823193897703416801075190643928982399517000877445350021238018548470471263135034972083820052;

	nodes[4] 	= 0.93087374864420425563779924195127530714200395770691002474018535916362021606613004550219451279536187415059287715245292738774117311;
	weights[4] 	= 0.009983836647011477869797528779896329807307027365491486669973666259749258047310951954366021490211907919898795501147871673256198222;

	nodes[5] 	= 0.90096886790241912623610231950744505116591916213185715005356242319943242042793996550136145471851241531831096436867510363979163288;
	weights[5] 	= 0.014081448481931430543974315571225714728778203556269351227927147212037414732224244266633784670422680018534055782816136303629029141;

	nodes[6] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	weights[6] 	= 0.018699956271367816895610972519520850501173627377232772743898479716117954799322672610881159674655458737988976705436204206232701456;

	nodes[7] 	= 0.82623877431599487194516257377267839779237040696454020610758603927416951010168550475040648788343983227502891721628175833235420042;
	weights[7] 	= 0.023736190183159012080580365767294677859112216261304681061117801425192114450258997118788649398221193087141648222541447525953790434;

	nodes[8] 	= 0.78183148246802980870844452667405775023233451870868752898063495804509173163393644170086800689099098223226157916053801447223925705;
	weights[8] 	= 0.02907764907384162310388962781471258073548584292082696360006075466019077486102014399650638282531516204869050920337693207472365296;

	nodes[9] 	= 0.73305187182982632852243148927067190697323353758234547535989964309067308338990212715215368778862689735754042565276208838477385709;
	weights[9] 	= 0.034605013578292917580169878291712689714493852996799025752042767307302264317472030358235878745272039336763350382244319639221475349;

	nodes[10] 	= 0.68017273777091939018735870103374024402706657064652126903521335657661290122101617842272014506230810359406707006794947219959560211;
	weights[10] 	= 0.04019481150717835000227401178637071229020065651213206522355115155716955487981866008528875995334979561519255643950049718570933048;

	nodes[11] 	= 0.62348980185873353052500488400423981063227473089640210536554943909685365245648728457594250732658537166705809220917454300913572926;
	weights[11] 	= 0.04572217601162964447855426226337082126920866658810412737553316420428104433627054644701825587330667290326539761836788475020715286;

	nodes[12] 	= 0.5633200580636220277492615380297605110458689775749089288303724042051660432459483415889911291500108348969369078624414822473346827;
	weights[12] 	= 0.05106363490231225550186352431078872414558229324762640991447611743927970474703169332473598930040064186481425859920336929897701539;

	nodes[13] 	= 0.5;
	weights[13] 	= 0.05609986881410345068683291755856255150352088213169831823169543914835386439796801783264347902396637621396693011630861261869810437;

	nodes[14] 	= 0.4338837391175581204757683328483587546099907277874598764445473035322032516531984215207840217744561020887441029300455358187257105;
	weights[14] 	= 0.06071837660353983703846957450685768727591630595266173974766677165243440446506644617689085402819915493342185103892868052130177668;

	nodes[15] 	= 0.3653410243663950145447379989297688024329762826777856010339474880633598806422388146734006826415888214198306257037415621567725889;
	weights[15] 	= 0.0648159884384597897126463612981870721973874821434396043056202526047225611499797384891586172084099270320571113205969451516746076;

	nodes[16] 	= 0.2947551744109042168307729819601909732057192299734761686128662185110330304133876152773923130584288215699477428708067806947626163;
	weights[16] 	= 0.06830117044157092703569616305472040622237511973858941086807485447157357924559060269898963657481998010490878050824131961654880062;

	nodes[17] 	= 0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[17] 	= 0.07109606940601364324674822980204941751022852149625593060382904659650722452676391756251607717885885824412338353686940838979272819;

	nodes[18] 	= 0.1490422661761744469293547152772175569096694389982224957595504011185284844321936038013265059043708919183312979919149129155019161;
	weights[18] 	= 0.07313825190735380039997867852251619246424889397707818619335645737676769588760493971441455373240568245934455552809242148941635755;

	nodes[19] 	= 0.0747300935864242542909397457347666533735487551673169439459763839252629103262544607509549668350725830432820471523933453074374325;
	weights[19] 	= 0.07438209896311645874911115377860471041915134444582260417434592965947819961345279427986452397928887932225815622725964140781338916;

	nodes[20] 	= 0.e-127;
	weights[20] 	= 0.074799825085471267582443890078083402004694509508931090975593918864471819197290690443524638698621834951955906821744816824930805824;

	nodes[21] 	= -0.0747300935864242542909397457347666533735487551673169439459763839252629103262544607509549668350725830432820471523933453074374325;
	weights[21] 	= 0.07438209896311645874911115377860471041915134444582260417434592965947819961345279427986452397928887932225815622725964140781338916;

	nodes[22] 	= -0.1490422661761744469293547152772175569096694389982224957595504011185284844321936038013265059043708919183312979919149129155019161;
	weights[22] 	= 0.07313825190735380039997867852251619246424889397707818619335645737676769588760493971441455373240568245934455552809242148941635755;

	nodes[23] 	= -0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[23] 	= 0.07109606940601364324674822980204941751022852149625593060382904659650722452676391756251607717885885824412338353686940838979272819;

	nodes[24] 	= -0.2947551744109042168307729819601909732057192299734761686128662185110330304133876152773923130584288215699477428708067806947626163;
	weights[24] 	= 0.06830117044157092703569616305472040622237511973858941086807485447157357924559060269898963657481998010490878050824131961654880062;

	nodes[25] 	= -0.3653410243663950145447379989297688024329762826777856010339474880633598806422388146734006826415888214198306257037415621567725889;
	weights[25] 	= 0.0648159884384597897126463612981870721973874821434396043056202526047225611499797384891586172084099270320571113205969451516746076;

	nodes[26] 	= -0.4338837391175581204757683328483587546099907277874598764445473035322032516531984215207840217744561020887441029300455358187257105;
	weights[26] 	= 0.06071837660353983703846957450685768727591630595266173974766677165243440446506644617689085402819915493342185103892868052130177668;

	nodes[27] 	= -0.5;
	weights[27] 	= 0.05609986881410345068683291755856255150352088213169831823169543914835386439796801783264347902396637621396693011630861261869810437;

	nodes[28] 	= -0.5633200580636220277492615380297605110458689775749089288303724042051660432459483415889911291500108348969369078624414822473346827;
	weights[28] 	= 0.05106363490231225550186352431078872414558229324762640991447611743927970474703169332473598930040064186481425859920336929897701539;

	nodes[29] 	= -0.6234898018587335305250048840042398106322747308964021053655494390968536524564872845759425073265853716670580922091745430091357293;
	weights[29] 	= 0.04572217601162964447855426226337082126920866658810412737553316420428104433627054644701825587330667290326539761836788475020715286;

	nodes[30] 	= -0.6801727377709193901873587010337402440270665706465212690352133565766129012210161784227201450623081035940670700679494721995956021;
	weights[30] 	= 0.04019481150717835000227401178637071229020065651213206522355115155716955487981866008528875995334979561519255643950049718570933048;

	nodes[31] 	= -0.7330518718298263285224314892706719069732335375823454753598996430906730833899021271521536877886268973575404256527620883847738571;
	weights[31] 	= 0.03460501357829291758016987829171268971449385299679902575204276730730226431747203035823587874527203933676335038224431963922147535;

	nodes[32] 	= -0.781831482468029808708444526674057750232334518708687528980634958045091731633936441700868006890990982232261579160538014472239257;
	weights[32] 	= 0.02907764907384162310388962781471258073548584292082696360006075466019077486102014399650638282531516204869050920337693207472365296;

	nodes[33] 	= -0.8262387743159948719451625737726783977923704069645402061075860392741695101016855047504064878834398322750289172162817583323542004;
	weights[33] 	= 0.02373619018315901208058036576729467785911221626130468106111780142519211445025899711878864939822119308714164822254144752595379043;

	nodes[34] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	weights[34] 	= 0.01869995627136781689561097251952085050117362737723277274389847971611795479932267261088115967465545873798897670543620420623270146;

	nodes[35] 	= -0.9009688679024191262361023195074450511659191621318571500535624231994324204279399655013614547185124153183109643686751036397916329;
	weights[35] 	= 0.01408144848193143054397431557122571472877820355626935122792714721203741473222424426663378467042268001853405578281613630362902914;

	nodes[36] 	= -0.9308737486442042556377992419512753071420039577069100247401853591636202160661300455021945127953618741505928771524529273877411731;
	weights[36] 	= 0.00998383664701147786979752877989632980730702736549148666997366625974925804731095195436602149021190791989879550114787167325619822;

	nodes[37] 	= -0.95557280578614073281133405376746666643958910634689043067188665898809431541844944622673474039669985370628755349326152775411795347;
	weights[37] 	= 0.0064986546439003405467477270233629957823193897703416801075190643928982399517000877445350021238018548470471263135034972083820052;

	nodes[38] 	= -0.97492791218182360701813168299393121723278580061999743764807957508764593163440379370011245812073692516401481293875625289435821838;
	weights[38] 	= 0.003703755679457624335695660276033984494465988012675160371764872267964594670526772881008561519762976707832523284875408435138077637;

	nodes[39] 	= -0.98883082622512854506974288293400861306525101357418770639949692716021353309872609924934318996817419308688871791291610516590831812;
	weights[39] 	= 0.00166157317811746718246521155556720954044561553185290478223746148770412330968575072911008496621615249261135129365239533551444827;

	nodes[40] 	= -0.99720379718118014822502987087811926565585970536236880527491970773736929489914676310977515092446693698568101079248701806606039319;
	weights[40] 	= 0.000417726122354808833332736299478691585543165063108486801247989204993619583837896163660114719332955629697750594485175417117416664;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_41_hpp__)*/
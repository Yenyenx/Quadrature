//
//        Gauss_Laguerre_Nodes_and_Weights_49.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 49.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_49_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_49_hpp__

void Gauss_Laguerre_Nodes_and_Weights_49(long double*& nodes, long double*& weights) {
	nodes	= new long double[49];
	weights	= new long double[49];

	nodes[0] 	= 0.029208949494039041802051340503500051313712154960576392447208223048787668711970272635060327169140756772211034196735667315697094863;
	weights[0] 	= 0.072805353155079524163359763806533844414622022113841668672963530566985269368117330792217231595219510221563189312320471999711808;

	nodes[1] 	= 0.1539325380822080768728639604778274427575908458834603371546411490188565871582473994463251116182838596116283010381654764492209503;
	weights[1] 	= 0.1496671373988505957667950437677121871338832903876901223402582063675204968805554863338484797872841941265697910157646829282544;

	nodes[2] 	= 0.37845191143399290464764374428009526135536490325786203491233339020410589421711988080170770437266783503774029227509079116095603309;
	weights[2] 	= 0.1880159145354518905139622974061444754535793866215877604890202287905994479126789671550539798481434872354010335295790780201;

	nodes[3] 	= 0.70304396884142983204246816516192318389360243788240497703456698619244707351904375605883868425881553775565825266461818212248379681;
	weights[3] 	= 0.18552097769024816373147825691244631108727253246668994231914761356727501989559762719056769065033573626345172170646480937446;

	nodes[4] 	= 1.1280444903095911590104159898012113130799719023313719860351578060881093214055630796004142740189586169750996386190443693762347565;
	weights[4] 	= 0.1538515970564725802714459671103600774381218914491437095166719317673530054405425814130166325826953257182062668537634218785;

	nodes[5] 	= 1.6538890653988436359118527212383359053031840705273188026405934625056413826054350516975185165468402156123702148842096234540622993;
	weights[5] 	= 0.110275180858556217930442976187257732423820949125229864410250553366458074346463260735667190454818087570985566907371862836;

	nodes[6] 	= 2.2811192334764465320896552156880821906984316061914500681590479295747456987458853279863206004700382227552040706904711314856857825;
	weights[6] 	= 0.0692844742630135998653621947971688040043283208859179603559924664114936791738732565997647426887194516506347277693803202;

	nodes[7] 	= 3.0103862812012883052899823523899496573993915493951323327958935087776590637460037628981743787464999821962449370915866403049764622;
	weights[7] 	= 0.0384588145635863675644719585152967968367983159544025829595850859372146761883577899393741650455598084685354466292008523;

	nodes[8] 	= 3.8424552273966829211629060730120185328430693514623763498220950722925047850231065720462492776779106192776118184711866358550334979;
	weights[8] 	= 0.018948481152297056829645967545165820892062796210127689396351507080644969521309768846480018360876063129217743708027935;

	nodes[9] 	= 4.7782094313820545367662395148990897285621652861915939637219255642043594712184234410771703075411507652077963626887894485478010109;
	weights[9] 	= 0.00830945675530041132219547984078327535637812281780331783110448148905686678796028189498028410108130840127132676115975;

	nodes[10] 	= 5.818655976424234617280284571808573569061643124421641091209746709431601491363741281155931931702480060716321749277698335997606958;
	weights[10] 	= 0.00324843194411253225494821518095278652276604776686672561553702649650329112284707934480250212255134805301352372862813;

	nodes[11] 	= 6.9649319334670869019542888409624493269771977329343892976364594185108408249117294630392268340673941855563398021727054336379906281;
	weights[11] 	= 0.0011329382879219968063824395582764105448291329816166001784740208854375863284811640307093921752206232121848791306876;

	nodes[12] 	= 8.2183116110416122313027774335446090784606269000042306138890809707453110037208558247017278958619782134646418194096014793633439925;
	weights[12] 	= 0.0003525644525795279617355921927029431739513217396765396578762978573486824804695420339780060591471076231827942233444;

	nodes[13] 	= 9.5802149118588324906494569999784302350573030000476145434865330472233354442022086837773489609356310796833341413158755343807766462;
	weights[13] 	= 0.000097866999979974351997146863168520288276834212688501319086174820432916161914455615126682154451085125308511491242;

	nodes[14] 	= 11.052216938021527932800913004252785285735703652301647110548315906515463060148959943594486422976937360350268117511348991791161257;
	weights[14] 	= 0.0000242157408627564272312255927029948041266873870819033439342692404422729580184702409268011519829752637016655591262;

	nodes[15] 	= 12.63605901385725832107643308613091289039713931390131853301657580761554446878324133992537392768707125579943570445752520065466988;
	weights[15] 	= 5.3355046338692115799934238459689531249062531102712318691170175651601438201667823279748384812581468417437387867e-6;

	nodes[16] 	= 14.33366132857440339499281554724786249604814766231271051139415071924080409271380843264621970056840618257038225079270721297404156;
	weights[16] 	= 1.045416085174735260340449873353466476359068043739366760000117214620440946569295899441897637233445593380463541e-6;

	nodes[17] 	= 16.147137441534024491263244042333596078118450088111035337018427544132921798510472539814620704282934459605236652013342781500433285;
	weights[17] 	= 1.818579912808515679211819464766654494816328184574332969392697818072018234203988620853635777888015559888856909e-7;

	nodes[18] 	= 18.078810942749133439428692017624369316191483608328078174176077449092894067204320003335887014241722347731530900177180676185203797;
	weights[18] 	= 2.80333458010652963978568131360333778644915466048364670031815235290630256365396842040107956568094567433993124e-8;

	nodes[19] 	= 20.131234622737801577631756236076033307781331907085282055513996477029927498101202878280568604020956323206302131176077731624591581;
	weights[19] 	= 3.8208638360505177995334762587488404816015145122286717591635588009034981543002214289925530497724628582649429e-9;

	nodes[20] 	= 22.307212582338767812597581937601409385705293408006653913443049045012827509232030366401851018332759666444695207416666962432976055;
	weights[20] 	= 4.593119497306808853614649271668097679075286590994259793657750154633400570152259602117817236079570701853079e-10;

	nodes[21] 	= 24.609825808892310948810623188835332891483266487883410302340431660795563760011905904259445313547298926473477753009906190113259205;
	weights[21] 	= 4.856157207735531722345975240257065950112816913727975383078036690499899351546749197520116779328167563931347e-11;

	nodes[22] 	= 27.042461866105614232320988234969164344071168357878436777909426997040587483005539675418603295096355405074338113545874710346395867;
	weights[22] 	= 4.50142446026012050059145130829968509588144618086308795968759139937202052374518268895006312480571715456105e-12;

	nodes[23] 	= 29.608849498801545394863270633749023091422561492855880446956175710904248954760762492626952783935277059803465686156113902550558225;
	weights[23] 	= 3.64547944439041443772385559937501385429414213126548960483717599382764679692209985535843316435345031709813e-13;

	nodes[24] 	= 32.313099151279634561718412460353774822195700489752122212473388195606771279895386253784664037392365822141565852759609361086190412;
	weights[24] 	= 2.56926212131815986104374920636631555120239202853755102140546942201984588461683375135764258676084062318624e-14;

	nodes[25] 	= 35.159750653922479025552036191775612334647472786467219957731043745388870639288619641281202747466512690147061208589611682863772969;
	weights[25] 	= 1.5689908316032601676487431199133142051458637440348804328856687884381432674301154163129529324745310143491e-15;

	nodes[26] 	= 38.153829667484568177712404700364129719420864130718081375373876863741957428328008393296966982962817978705273128462112399190224145;
	weights[26] 	= 8.26198587982037412815510002831259772901342060513764876689846001840736264528859380237892687209214036081e-17;

	nodes[27] 	= 41.300914917174047197501191802179973098348776484720351475765010247570486377441942734348487752193955205520004698659757697508667028;
	weights[27] 	= 3.731223884719470630766597680901229465537570336399223220645615063049826410959800783979528071540652628006e-18;

	nodes[28] 	= 44.607218840628768181283186618057069874868357033712184326583064472160776543617200781922733424507649729418762399986348546605600491;
	weights[28] 	= 1.4364651261491782746696809600141233060121673622685438006487654862483641757771326261166805502173009203366e-19;

	nodes[29] 	= 48.079685075367357050101336534191592024632284042945446963702609934500147666178319343060601183923359902792180108453082989122402251;
	weights[29] 	= 4.682440663660799838807618906194686057047575648232458436694253224809429627047547016628109585852194249977e-21;

	nodes[30] 	= 51.726107311014212164860196591578609417469024552574903704103453264369793720103287606984698236683158108501020799123571438548286903;
	weights[30] 	= 1.282542163577732152338063856599995340932698330978471585180331730538659637086244685921465806600820013665e-22;

	nodes[31] 	= 55.555275562740678449629337698536543240925450783144067858052314189689993683596163133862103043868255510113272686116219789352683631;
	weights[31] 	= 2.92652539636773766161405422053998589112057941887698981189600890232672312268575954712134692607701176546e-24;

	nodes[32] 	= 59.57715808862211592350163213887383740990612450261172806316616645499556305572510953697890128996140837356689703438768517388415482;
	weights[32] 	= 5.50892088180423428117097128328388427286597805642184880816834411658848848242545980911078071846886057215e-26;

	nodes[33] 	= 63.803130293042612383652811282659157653908207205925217143569888179403197030596028029535216545683860304111178267775723354574536177;
	weights[33] 	= 8.45985128027843004538460105745331750487727479518153625163625256534659726198463011155661930932141296078e-28;

	nodes[34] 	= 68.24626653908353044698274550576364069759014592243009627173742618922941895418856038742617993735671415004258993777524983761071056;
	weights[34] 	= 1.046312394658617497766045813126913926969486394921526169486618745932762782218991223777208096967969025999e-29;

	nodes[35] 	= 72.921717668009479919810125397735953408921236576362126147750949553060353056252067920398222315968454198571127166815999645865819798;
	weights[35] 	= 1.026821072666131879649115934718144205935822609551711151229559341922449284255306903511558088883387857946e-31;

	nodes[36] 	= 77.847207598448202151816938041439670669578262564347450239309524766739871562517102119080267584739354065825526059639054818090790924;
	weights[36] 	= 7.85771505159064968165731773659066950992041130987186066229018298459918421826279911782407572215916823223e-34;

	nodes[37] 	= 83.043699098598646674640562059080923596783945690726866278460276273968070615493113994721865302036999531624059832744225606186803734;
	weights[37] 	= 4.593226189603704104935825341476562809524143404589405473271722939719097429977394478479217312392284056899e-36;

	nodes[38] 	= 88.536306111979435720017671076766299925468886503017524361227003494093876883405721838032585823091651579862605908714981049956812362;
	weights[38] 	= 2.000982906740655433434506667047927181172098888403989373078649636460488639586929159188837677959777352309e-38;

	nodes[39] 	= 94.355576196413192889891203950563457397740976521470104795309060250025645566846323689329574086145462945796424554454981079031456016;
	weights[39] 	= 6.30443248361454380738610747440614310405574011073578886421081369835896897207585079355463322794517019829e-41;

	nodes[40] 	= 100.53934816696116679177308926992646603274928297175529850333176125108627277532867163573581284076501786168034116980145813625500392;
	weights[40] 	= 1.3842124699661131277501213100221122841868267267400404533988282292746561130605588554703516138357212135069e-43;

	nodes[41] 	= 107.13554136224855814149160902816159913574897204494266035838262288688497328672180597952214923010164280368020870421283701691483766;
	weights[41] 	= 2.0207744806281245399260743945055168487302605077618774825884137921371515859922003132676372296963830300567e-46;

	nodes[42] 	= 114.20653122712858723725118533650237395150485233243935173310002073490841568281610279080375933724402689187245223810936289246653292;
	weights[42] 	= 1.84535682473606520676492847341784089244602298236514860644628071285308331871120825286114459338634345122976e-49;

	nodes[43] 	= 121.83639878660318539969387229195132057397645289447535337175497022639836532023478013701708943758234147419699809192691570805656112;
	weights[43] 	= 9.71001717366755073704341722752177085008707894479964699731515075540773666561027733896874082991442054773788e-53;

	nodes[44] 	= 130.1438152244952605561672878139046255622230632857810070587111937398763769329522721566768557542930739255105744890236582951728068;
	weights[44] 	= 2.622492552973889652923242171716336694909200237168199644658232353502888560149442840707418139215257589704082e-56;

	nodes[45] 	= 139.30719756334274304327798866557691897748567282706340295895798399506773138406568974933542915255682240471246526676334072512153121;
	weights[45] 	= 3.0570619761628021770398209628505495232443199807082370231073309959573545123080032779789507236541717430853751e-60;

	nodes[46] 	= 149.62081975792771442406107404675119935189727065968197811523484449452224711668492127637697898398171402812062033773073623103818362;
	weights[46] 	= 1.15729926549573954082862582914655537024334095522900899356395499663967639114752911429809998702607928109686172e-64;

	nodes[47] 	= 161.64877015704720903095111727771175469940556335691234297241540267907324277620968091658968291233165201269338670706277389564839462;
	weights[47] 	= 8.28090072086323843312764607500830189182953712892033446729841484733754441601486894384443774372753397806711177e-70;

	nodes[48] 	= 176.8463094070158837240917793670269118588853529918672378005342333624384922584915425806719484674842195631120683998581795202220753;
	weights[48] 	= 2.8279750003325821748752322659981237947384639524603349156394587109181702166901954031419525302623291403358936959e-76;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_49_hpp__)*/
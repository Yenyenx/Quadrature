//
//        Gauss_Legendre_Nodes_and_Weights_77.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 77.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_77_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_77_hpp__

void Gauss_Legendre_Nodes_and_Weights_77(long double*& nodes, long double*& weights) {
	nodes	= new long double[77];
	weights	= new long double[77];

	nodes[0] 	= 0;
	weights[0] 	= 0.040535835862325650292052261783554786555818835237932985089808189596396028571083956539382348413599569097985743812143707326278738926;

	nodes[1] 	= -0.040524735209115925930069812856752473208290914234176119341888612602623535129512117868334776754013906404207381646250282538556742214;
	weights[1] 	= 0.0405025357267880319552496042711691702201782295924423334346610514906240775615781587569538755998774434947695760489444217198298748;

	nodes[2] 	= 0.040524735209115925930069812856752473208290914234176119341888612602623535129512117868334776754013906404207381646250282538556742214;
	weights[2] 	= 0.0405025357267880319552496042711691702201782295924423334346610514906240775615781587569538755998774434947695760489444217198298748;

	nodes[3] 	= -0.080982888385503131206497786834523903021077110139696996756670971501317247600686824537182385940721296350512200576331735908114588408;
	weights[3] 	= 0.04040269003221775617032619428698657607138358987199487294285284118511636093100288286396055036819206765266691956395223286314344;

	nodes[4] 	= 0.080982888385503131206497786834523903021077110139696996756670971501317247600686824537182385940721296350512200576331735908114588408;
	weights[4] 	= 0.04040269003221775617032619428698657607138358987199487294285284118511636093100288286396055036819206765266691956395223286314344;

	nodes[5] 	= -0.12130798689055258664180682024975630983767938820879932358812542785610164831142807496499850961777230708766489817929075570951510318;
	weights[5] 	= 0.0402364628248510841952652526450911891715909731471765261586049691777673273817153570814664457246134932056269777135892610696481;

	nodes[6] 	= 0.12130798689055258664180682024975630983767938820879932358812542785610164831142807496499850961777230708766489817929075570951510318;
	weights[6] 	= 0.0402364628248510841952652526450911891715909731471765261586049691777673273817153570814664457246134932056269777135892610696481;

	nodes[7] 	= -0.16143377669416093160718409971791302851518057822776372802005064824100514273329420440391099620209052638360238146135052323268701826;
	weights[7] 	= 0.04000412721559123741035151087560249382060324142553879133672489687180531515327120500911106460010526531598197135977442320609;

	nodes[8] 	= 0.16143377669416093160718409971791302851518057822776372802005064824100514273329420440391099620209052638360238146135052323268701826;
	weights[8] 	= 0.04000412721559123741035151087560249382060324142553879133672489687180531515327120500911106460010526531598197135977442320609;

	nodes[9] 	= -0.20129433122994435663814765725843533354690931451074071004556937920856660374019752996910303330787581901593194358996333886562531288;
	weights[9] 	= 0.0397060649312893106810375441064459939795315586951280004476544468984144213064842851133231447549524935936647769237551100005;

	nodes[10] 	= 0.20129433122994435663814765725843533354690931451074071004556937920856660374019752996910303330787581901593194358996333886562531288;
	weights[10] 	= 0.0397060649312893106810375441064459939795315586951280004476544468984144213064842851133231447549524935936647769237551100005;

	nodes[11] 	= -0.24082415971243219760968179971116636924799956866422328271314985101379739073746059742263672349944234087905348092791619512496182603;
	weights[11] 	= 0.039342765687570151937132306002140357919955080488220288202284213636378906930367706671840910327307553607124839258984572228;

	nodes[12] 	= 0.24082415971243219760968179971116636924799956866422328271314985101379739073746059742263672349944234087905348092791619512496182603;
	weights[12] 	= 0.039342765687570151937132306002140357919955080488220288202284213636378906930367706671840910327307553607124839258984572228;

	nodes[13] 	= -0.27995831473827612206470475151227341176324350979063518248281310914406325734599735414706825231604343472680489613727427160413848843;
	weights[13] 	= 0.0389148263842337856210328195269465615259641522783789781069945674326853290320096403225864281385267949339257070263451426;

	nodes[14] 	= 0.27995831473827612206470475151227341176324350979063518248281310914406325734599735414706825231604343472680489613727427160413848843;
	weights[14] 	= 0.0389148263842337856210328195269465615259641522783789781069945674326853290320096403225864281385267949339257070263451426;

	nodes[15] 	= -0.3186324989946873087775230811947078745498612750592115661612318827351469645890977562916518321808132818382202662333705958959939103;
	weights[15] 	= 0.038422950124554523673681167395015773726438636656574755942738720927649485053711119846999111675654391963039278860764919;

	nodes[16] 	= 0.3186324989946873087775230811947078745498612750592115661612318827351469645890977562916518321808132818382202662333705958959939103;
	weights[16] 	= 0.038422950124554523673681167395015773726438636656574755942738720927649485053711119846999111675654391963039278860764919;

	nodes[17] 	= -0.35678317089978107057855531760529319733412956184580228493937656321756037785588342521546337816016578583243060302257563677897147971;
	weights[17] 	= 0.03786794506008932026166682636988255329742039171892014506119207799468104318707019968680678100718503688146896072017232;

	nodes[18] 	= 0.35678317089978107057855531760529319733412956184580228493937656321756037785588342521546337816016578583243060302257563677897147971;
	weights[18] 	= 0.03786794506008932026166682636988255329742039171892014506119207799468104318707019968680678100718503688146896072017232;

	nodes[19] 	= -0.39434764900126356046846746532049078198601067913203284148816899934146997974124560742619686297007529404139911774096138183458645138;
	weights[19] 	= 0.0372507230628937188787602752773923820733634087143461605758465140495496208434734831078575525977100784539172937619937;

	nodes[20] 	= 0.39434764900126356046846746532049078198601067913203284148816899934146997974124560742619686297007529404139911774096138183458645138;
	weights[20] 	= 0.0372507230628937188787602752773923820733634087143461605758465140495496208434734831078575525977100784539172937619937;

	nodes[21] 	= -0.43126421496193568207252416931543919512602840541129038959168671375117841604074968852337917424256965957490626906002274166975678209;
	weights[21] 	= 0.03657229822732745453345833018844173832269859764413481357228790614008867292180031244072485294771154680892993677228;

	nodes[22] 	= 0.43126421496193568207252416931543919512602840541129038959168671375117841604074968852337917424256965957490626906002274166975678209;
	weights[22] 	= 0.03657229822732745453345833018844173832269859764413481357228790614008867292180031244072485294771154680892993677228;

	nodes[23] 	= -0.46747221496281179464464365992673344325763548389151649901635280146688705953058210256244278533881001686485604598736310619620610231;
	weights[23] 	= 0.0358337852039119626026426354988714582411472252435756789334132371490073943877849054950054812036110438199243773322;

	nodes[24] 	= 0.46747221496281179464464365992673344325763548389151649901635280146688705953058210256244278533881001686485604598736310619620610231;
	weights[24] 	= 0.0358337852039119626026426354988714582411472252435756789334132371490073943877849054950054812036110438199243773322;

	nodes[25] 	= -0.50291215935725151780772630943745516107801946071141297759579243909692468873341915492017078607934532747567634451682378250850408791;
	weights[25] 	= 0.035036397367978278454877534176860263640512921615278039837650919915149077811891605378365963988070354627278408261;

	nodes[26] 	= 0.50291215935725151780772630943745516107801946071141297759579243909692468873341915492017078607934532747567634451682378250850408791;
	weights[26] 	= 0.035036397367978278454877534176860263640512921615278039837650919915149077811891605378365963988070354627278408261;

	nodes[27] 	= -0.53752582041237773902442482755026754108601070227656698322393511064715924797842723198671235745864660960191988198593843236822133406;
	weights[27] 	= 0.03418144482611567926531792936667830373082134647274805491942283485044525069139455844931004349623591090085879505;

	nodes[28] 	= 0.53752582041237773902442482755026754108601070227656698322393511064715924797842723198671235745864660960191988198593843236822133406;
	weights[28] 	= 0.03418144482611567926531792936667830373082134647274805491942283485044525069139455844931004349623591090085879505;

	nodes[29] 	= -0.571256327977198250806983160177293301582360062145075911479716035476831895935667397339862192880726262421314374497650494050558702;
	weights[29] 	= 0.0332703322636985453028394501889424389873258533198666247649673652728406306000236594422994284143501443819967261;

	nodes[30] 	= 0.571256327977198250806983160177293301582360062145075911479716035476831895935667397339862192880726262421314374497650494050558702;
	weights[30] 	= 0.0332703322636985453028394501889424389873258533198666247649673652728406306000236594422994284143501443819967261;

	nodes[31] 	= -0.60404826292025738497014838606546353042510131296225507081961777274417318815426098446523386094999418954997663687535942889097059158;
	weights[31] 	= 0.032304556637030975593572024877018955429038221326153826410006886391588750095931312580660857254046192529428108;

	nodes[32] 	= 0.60404826292025738497014838606546353042510131296225507081961777274417318815426098446523386094999418954997663687535942889097059158;
	weights[32] 	= 0.032304556637030975593572024877018955429038221326153826410006886391588750095931312580660857254046192529428108;

	nodes[33] 	= -0.63584774818331236701365121150825573378666233857339978073573501318511522290290534979409053330628648346775304478300060900565133479;
	weights[33] 	= 0.03128570471390543339395646882480232970201398793588410285936738345095051913127985100030319344618204503177747;

	nodes[34] 	= 0.63584774818331236701365121150825573378666233857339978073573501318511522290290534979409053330628648346775304478300060900565133479;
	weights[34] 	= 0.03128570471390543339395646882480232970201398793588410285936738345095051913127985100030319344618204503177747;

	nodes[35] 	= -0.6666025373014514935909160584929973432171214493029843941074959364284631307894103797161295859381883468233795787462424894462718944;
	weights[35] 	= 0.03021545046662299869139868960266891869380042725717488890723832128195991494164075272728238755550666285694584;

	nodes[36] 	= 0.6666025373014514935909160584929973432171214493029843941074959364284631307894103797161295859381883468233795787462424894462718944;
	weights[36] 	= 0.03021545046662299869139868960266891869380042725717488890723832128195991494164075272728238755550666285694584;

	nodes[37] 	= -0.69626210024424222479101996765521264933468919790776327618273817366949634992946121987293644719751859574224547508077597698995656148;
	weights[37] 	= 0.0290955523217687613487024909925899428883833118545845882151814639214235466309001465279576212551355151308877;

	nodes[38] 	= 0.69626210024424222479101996765521264933468919790776327618273817366949634992946121987293644719751859574224547508077597698995656148;
	weights[38] 	= 0.0290955523217687613487024909925899428883833118545845882151814639214235466309001465279576212551355151308877;

	nodes[39] 	= -0.72477770643691172878078551451793197851174630494074421876797711362328889525333792968605132815941350930889500204009427894980205817;
	weights[39] 	= 0.02792785027127696854150724583853935476700997281884982704879488300108563951870074601729391669889827614278;

	nodes[40] 	= 0.72477770643691172878078551451793197851174630494074421876797711362328889525333792968605132815941350930889500204009427894980205817;
	weights[40] 	= 0.02792785027127696854150724583853935476700997281884982704879488300108563951870074601729391669889827614278;

	nodes[41] 	= -0.7521025048252159413843866204589218098646983042124398879954351090606968105677421557373261740516124433213943046808658734034600643;
	weights[41] 	= 0.02671426284955789083200279033396935786286446398536499375454354974893189889242141850506128597439896640347;

	nodes[42] 	= 0.7521025048252159413843866204589218098646983042124398879954351090606968105677421557373261740516124433213943046808658734034600643;
	weights[42] 	= 0.02671426284955789083200279033396935786286446398536499375454354974893189889242141850506128597439896640347;

	nodes[43] 	= -0.77819160085254314187286794389510055477337317623013966127603803386034446390330246649318218875350805712500382103884598500940534709;
	weights[43] 	= 0.02545678398169440375263776110425458068277787735825934085276300426319834787089499001222640584723460898355;

	nodes[44] 	= 0.77819160085254314187286794389510055477337317623013966127603803386034446390330246649318218875350805712500382103884598500940534709;
	weights[44] 	= 0.02545678398169440375263776110425458068277787735825934085276300426319834787089499001222640584723460898355;

	nodes[45] 	= -0.80300213022292522738363779918083262566013298979670917918193375580632004733367579647654497623288347529299863296872614466573088334;
	weights[45] 	= 0.024157479707955844940593878676602600079340919496083318635878942419047719103810988288737895046448897559;

	nodes[46] 	= 0.80300213022292522738363779918083262566013298979670917918193375580632004733367579647654497623288347529299863296872614466573088334;
	weights[46] 	= 0.024157479707955844940593878676602600079340919496083318635878942419047719103810988288737895046448897559;

	nodes[47] 	= -0.8264933293290021194355867108823116839071845495610173884690088728163005175185780122706357556886680939111424404075851012331398382;
	weights[47] 	= 0.0228184847901295205129096684242380455145461311131252662297158194288736070137152850629742363660846319712;

	nodes[48] 	= 0.8264933293290021194355867108823116839071845495610173884690088728163005175185780122706357556886680939111424404075851012331398382;
	weights[48] 	= 0.0228184847901295205129096684242380455145461311131252662297158194288736070137152850629742363660846319712;

	nodes[49] 	= -0.84862660222962403646957783330131444909916442129747240611541038533315522919503608491054712427914213205439137973359401550390282393;
	weights[49] 	= 0.021441999205456135505124960945589600985080935057256049499706173464616002679607689618781534719692918967;

	nodes[50] 	= 0.84862660222962403646957783330131444909916442129747240611541038533315522919503608491054712427914213205439137973359401550390282393;
	weights[50] 	= 0.021441999205456135505124960945589600985080935057256049499706173464616002679607689618781534719692918967;

	nodes[51] 	= -0.86936558406773405987865437941349850257270251006058903631884963469516076054686554230097517668057122422877409226445918087991124202;
	weights[51] 	= 0.020030284534316176396246234142168234853827325567865876311137946853087298798932140328414983019686982542;

	nodes[52] 	= 0.86936558406773405987865437941349850257270251006058903631884963469516076054686554230097517668057122422877409226445918087991124202;
	weights[52] 	= 0.020030284534316176396246234142168234853827325567865876311137946853087298798932140328414983019686982542;

	nodes[53] 	= -0.88867620082556406989483490418299027659868524468313098312032046888507147364266961104131611078370080257131649870005107547864065192;
	weights[53] 	= 0.01858566024834148550917974553728994619964965694994989756137877828042340085099923964490247159462481731;

	nodes[54] 	= 0.88867620082556406989483490418299027659868524468313098312032046888507147364266961104131611078370080257131649870005107547864065192;
	weights[54] 	= 0.01858566024834148550917974553728994619964965694994989756137877828042340085099923964490247159462481731;

	nodes[55] 	= -0.90652672532125781802109080769146421691294606655892288102012593066608735473846454925025668088381620972437508673252690703853975372;
	weights[55] 	= 0.01711049990653110417623962654228163062686235782333270490119731149738230158191425144591545964113018424;

	nodes[56] 	= 0.90652672532125781802109080769146421691294606655892288102012593066608735473846454925025668088381620972437508673252690703853975372;
	weights[56] 	= 0.01711049990653110417623962654228163062686235782333270490119731149738230158191425144591545964113018424;

	nodes[57] 	= -0.92288782935940219992804543525568660653779686179656603135206744641140022794817873153446345418494284819155773807500644247033293131;
	weights[57] 	= 0.01560722726874913129508125282735405525395417731799126885030667959574499759704532044759654722480942872;

	nodes[58] 	= 0.92288782935940219992804543525568660653779686179656603135206744641140022794817873153446345418494284819155773807500644247033293131;
	weights[58] 	= 0.01560722726874913129508125282735405525395417731799126885030667959574499759704532044759654722480942872;

	nodes[59] 	= -0.93773263195906104419014214580194623443617930136675500934528925471830740031208757327095701549014051291313883954070019474596830518;
	weights[59] 	= 0.0140783123400270040501679745469481757596435542442793014924537308517361797337347935791367081406577496;

	nodes[60] 	= 0.93773263195906104419014214580194623443617930136675500934528925471830740031208757327095701549014051291313883954070019474596830518;
	weights[60] 	= 0.0140783123400270040501679745469481757596435542442793014924537308517361797337347935791367081406577496;

	nodes[61] 	= -0.95103674360059187152342882818072484314273820226102650774294398044979776465218117809295431888234777401152272818523018761483286652;
	weights[61] 	= 0.0125262673692273651873599360609261815653350960338751527412107241079268421246294853144803494898998654;

	nodes[62] 	= 0.95103674360059187152342882818072484314273820226102650774294398044979776465218117809295431888234777401152272818523018761483286652;
	weights[62] 	= 0.0125262673692273651873599360609261815653350960338751527412107241079268421246294853144803494898998654;

	nodes[63] 	= -0.96277830646773431194016186773457527087546380420463375197146915917910472353637588469379331043996183897458831558790485283163282342;
	weights[63] 	= 0.0109536428539113542385909906564311012688402729562491386357550977640821034782882061519039318183524189;

	nodes[64] 	= 0.96277830646773431194016186773457527087546380420463375197146915917910472353637588469379331043996183897458831558790485283163282342;
	weights[64] 	= 0.0109536428539113542385909906564311012688402729562491386357550977640821034782882061519039318183524189;

	nodes[65] 	= -0.97293803074910839034630614367222897557231127274172299503834350772803126834730809634589834862041658459152436567055359475186142508;
	weights[65] 	= 0.0093630236923864307692619401092122690830187699638765309796819039165805115039527807298369377546929631;

	nodes[66] 	= 0.97293803074910839034630614367222897557231127274172299503834350772803126834730809634589834862041658459152436567055359475186142508;
	weights[66] 	= 0.0093630236923864307692619401092122690830187699638765309796819039165805115039527807298369377546929631;

	nodes[67] 	= -0.9814992273311384623883448371922601987591097823016816581597381880033668398534647495663529696901758627177005933316529488339106489;
	weights[67] 	= 0.0077570259500830707318423715015086894757402526021292315303682706840929884262265212149313673902230459;

	nodes[68] 	= 0.9814992273311384623883448371922601987591097823016816581597381880033668398534647495663529696901758627177005933316529488339106489;
	weights[68] 	= 0.0077570259500830707318423715015086894757402526021292315303682706840929884262265212149313673902230459;

	nodes[69] 	= -0.98844783822256130732501902966776799521523932173793364964503242413109191293499611498264824188551802572847722423341757325175496221;
	weights[69] 	= 0.0061382961597563418392698976419496857142395451908600026030438904551497557193300787280940062416176779;

	nodes[70] 	= 0.98844783822256130732501902966776799521523932173793364964503242413109191293499611498264824188551802572847722423341757325175496221;
	weights[70] 	= 0.0061382961597563418392698976419496857142395451908600026030438904551497557193300787280940062416176779;

	nodes[71] 	= -0.99377247094987824830891119226718335874057609276822801952261498754343728748906990153907541178611596230833751414646652785313966468;
	weights[71] 	= 0.0045095236002058353332382600617225201352145078878940814673177019428069134211517716574946106115064092;

	nodes[72] 	= 0.99377247094987824830891119226718335874057609276822801952261498754343728748906990153907541178611596230833751414646652785313966468;
	weights[72] 	= 0.0045095236002058353332382600617225201352145078878940814673177019428069134211517716574946106115064092;

	nodes[73] 	= -0.99746447786921409987486973633428150969505877628960629829982891556085470625457365424337203900009619134370552362361742151858587733;
	weights[73] 	= 0.00287355308365269165727841032591900696341613961106779288556755441375526423465914109044929670628877109;

	nodes[74] 	= 0.99746447786921409987486973633428150969505877628960629829982891556085470625457365424337203900009619134370552362361742151858587733;
	weights[74] 	= 0.00287355308365269165727841032591900696341613961106779288556755441375526423465914109044929670628877109;

	nodes[75] 	= -0.99951861463341000974858104034320282220484645589276066333091614955591340735716130976797243211556970560026420627378104015296258146;
	weights[75] 	= 0.00123529117713940961417186935777016848855747114460226084518332447515456857111203138926118715197756635;

	nodes[76] 	= 0.99951861463341000974858104034320282220484645589276066333091614955591340735716130976797243211556970560026420627378104015296258146;
	weights[76] 	= 0.00123529117713940961417186935777016848855747114460226084518332447515456857111203138926118715197756635;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_77_hpp__)*/
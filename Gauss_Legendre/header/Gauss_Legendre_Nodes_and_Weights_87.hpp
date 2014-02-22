//
//        Gauss_Legendre_Nodes_and_Weights_87.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 87.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_87_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_87_hpp__

void Gauss_Legendre_Nodes_and_Weights_87(long double*& nodes, long double*& weights) {
	nodes	= new long double[87];
	weights	= new long double[87];

	nodes[0] 	= 0;
	weights[0] 	= 0.035903329907265501442083267342139118149337194403809396452837289810049932087643272277125889640481862638700693917623012462917612031;

	nodes[1] 	= -0.035895616626800899472717182652823964453619059961485711323784695870692481539910637531063649226467507681833395516898154183022076985;
	weights[1] 	= 0.0358801910601870158777352072237696045818057740594291743192315911243716831726093830843041538440561788963127839689366168629756905;

	nodes[2] 	= 0.035895616626800899472717182652823964453619059961485711323784695870692481539910637531063649226467507681833395516898154183022076985;
	weights[2] 	= 0.0358801910601870158777352072237696045818057740594291743192315911243716831726093830843041538440561788963127839689366168629756905;

	nodes[3] 	= -0.071744965501499429712830854356574136163497965944466079993220206864129894788620681032897485217767546600092635616146097008986696772;
	weights[3] 	= 0.03581080434383374175662559920502492111643688898805868436989910626717505774486304297557066021665645416929174593004331868458731;

	nodes[4] 	= 0.071744965501499429712830854356574136163497965944466079993220206864129894788620681032897485217767546600092635616146097008986696772;
	weights[4] 	= 0.03581080434383374175662559920502492111643688898805868436989910626717505774486304297557066021665645416929174593004331868458731;

	nodes[5] 	= -0.10750183850894277160576247589996328906318106882024707545524806433770539542253071539546028333284345469921903339035207685664187208;
	weights[5] 	= 0.0356952591944094337764794300999495915595639769389437874850972546980215658561990066402039494393680941083000107514688274371458;

	nodes[6] 	= 0.10750183850894277160576247589996328906318106882024707545524806433770539542253071539546028333284345469921903339035207685664187208;
	weights[6] 	= 0.0356952591944094337764794300999495915595639769389437874850972546980215658561990066402039494393680941083000107514688274371458;

	nodes[7] 	= -0.14312014673100813901239936702074451197191073090196852636606969848373226028983546237542048673411003542839371235412135371645107158;
	weights[7] 	= 0.03553370454416059391133475704928306167593781050998493229998625719653259516714418652758478871184654730059618170798133200603;

	nodes[8] 	= 0.14312014673100813901239936702074451197191073090196852636606969848373226028983546237542048673411003542839371235412135371645107158;
	weights[8] 	= 0.03553370454416059391133475704928306167593781050998493229998625719653259516714418652758478871184654730059618170798133200603;

	nodes[9] 	= -0.1785539798530442142982294869841924425806255282143688775756187360293582752978973683329146193545066864129262699945383133147645765;
	weights[9] 	= 0.0353263486294102136984305309687057106248890720875159863583414705712287594309562397570584889503113064078099011108817567968;

	nodes[10] 	= 0.1785539798530442142982294869841924425806255282143688775756187360293582752978973683329146193545066864129262699945383133147645765;
	weights[10] 	= 0.0353263486294102136984305309687057106248890720875159863583414705712287594309562397570584889503113064078099011108817567968;

	nodes[11] 	= -0.2137576653401016035937625776949258157430448463755731166183606565072873133309719444564869644931179969238212050625017052808901328;
	weights[11] 	= 0.035073458722151536556625347191259967743521596325348523475164307007449892175348369431591429968498115925661534560408734401;

	nodes[12] 	= 0.2137576653401016035937625776949258157430448463755731166183606565072873133309719444564869644931179969238212050625017052808901328;
	weights[12] 	= 0.035073458722151536556625347191259967743521596325348523475164307007449892175348369431591429968498115925661534560408734401;

	nodes[13] 	= -0.24868582730667713159953792336031525664051583278808943208041497468887881367880727862722865753751455834602349168283272723219739788;
	weights[13] 	= 0.0347753607855478292487112240861533654267739788673218435038817331610332742996774871528022160261108130506683606113934365;

	nodes[14] 	= 0.24868582730667713159953792336031525664051583278808943208041497468887881367880727862722865753751455834602349168283272723219739788;
	weights[14] 	= 0.0347753607855478292487112240861533654267739788673218435038817331610332742996774871528022160261108130506683606113934365;

	nodes[15] 	= -0.28329344500409187319445219536522872342378596452305587757793126287124084168485603456219334790124863145397726928266589876136138191;
	weights[15] 	= 0.034432439053782243765938192758249066330312302909715918131544651988136722514443242586966175263329528518946102754960827;

	nodes[16] 	= 0.28329344500409187319445219536522872342378596452305587757793126287124084168485603456219334790124863145397726928266589876136138191;
	weights[16] 	= 0.034432439053782243765938192758249066330312302909715918131544651988136722514443242586966175263329528518946102754960827;

	nodes[17] 	= -0.31753591085011571433134364684927947187450636897034105647043573268382714552337359829784479390003384674726895928527145551710078156;
	weights[17] 	= 0.03404513553679937345518363647043815252334612329179165208074703474575640299174696263277605784296512868717313520334383;

	nodes[18] 	= 0.31753591085011571433134364684927947187450636897034105647043573268382714552337359829784479390003384674726895928527145551710078156;
	weights[18] 	= 0.03404513553679937345518363647043815252334612329179165208074703474575640299174696263277605784296512868717313520334383;

	nodes[19] 	= -0.35136908792604131571569387866764570238159986066491630182547080745941085167772697181373840463626252776978702319740777155574519167;
	weights[19] 	= 0.0336139494505769355842222573437893275679560969886330452191290565996675479075138955572113133259608215629983415061027;

	nodes[20] 	= 0.35136908792604131571569387866764570238159986066491630182547080745941085167772697181373840463626252776978702319740777155574519167;
	weights[20] 	= 0.0336139494505769355842222573437893275679560969886330452191290565996675479075138955572113133259608215629983415061027;

	nodes[21] 	= -0.38474936686709686366381117022235355816010693764407920171864648444543554454083511947555352715485405536597648491396898075555002789;
	weights[21] 	= 0.03313943657366202353628883669892440149088876496090931561653470169757591415966734266151642686039470978928541727928;

	nodes[22] 	= 0.38474936686709686366381117022235355816010693764407920171864648444543554454083511947555352715485405536597648491396898075555002789;
	weights[22] 	= 0.03313943657366202353628883669892440149088876496090931561653470169757591415966734266151642686039470978928541727928;

	nodes[23] 	= -0.41763372207286905502991075614465215083666269328322975126454640393301260612134298438991066220598901157945103250450659424566201765;
	weights[23] 	= 0.032622208530801443925800340678041720061026566843928688032187351033519317726387360777493437333097829778613111377;

	nodes[24] 	= 0.41763372207286905502991075614465215083666269328322975126454640393301260612134298438991066220598901157945103250450659424566201765;
	weights[24] 	= 0.032622208530801443925800340678041720061026566843928688032187351033519317726387360777493437333097829778613111377;

	nodes[25] 	= -0.44997976716528437840157310341058106024210863800676766209047427898798423517930273350445667713515182584171624987634871497880476142;
	weights[25] 	= 0.032062932004589667777658181942992887045359657147794963209258834484608123721749765641982004885273813069910746121;

	nodes[26] 	= 0.44997976716528437840157310341058106024210863800676766209047427898798423517930273350445667713515182584171624987634871497880476142;
	weights[26] 	= 0.032062932004589667777658181942992887045359657147794963209258834484608123721749765641982004885273813069910746121;

	nodes[27] 	= -0.48174580962266680508946178150304493711052163482664567970123134924839133753215176465291090084536744745776862091389514640912974292;
	weights[27] 	= 0.03146232787615076393796222330453574868730115834526911415430242501068746622870008090886112102153581152544166059;

	nodes[28] 	= 0.48174580962266680508946178150304493711052163482664567970123134924839133753215176465291090084536744745776862091389514640912974292;
	weights[28] 	= 0.03146232787615076393796222330453574868730115834526911415430242501068746622870008090886112102153581152544166059;

	nodes[29] 	= -0.51289090451945225914090951815373656563397180221026647449390628318095121777846466509347894182781912241358016779223400699002907831;
	weights[29] 	= 0.0308211702959622341537190428775453963512389728763956491830558855658238345080306114909532234393594895232792061;

	nodes[30] 	= 0.51289090451945225914090951815373656563397180221026647449390628318095121777846466509347894182781912241358016779223400699002907831;
	weights[30] 	= 0.0308211702959622341537190428775453963512389728763956491830558855658238345080306114909532234393594895232792061;

	nodes[31] 	= -0.54337490730229335344261614934950399976950412529656222330534704747650320786622199602292236733173441025358708103669232836294046102;
	weights[31] 	= 0.030140285686018824743951159604937821233662765385058801778331285161312702794351042997685384658586527301233072;

	nodes[32] 	= 0.54337490730229335344261614934950399976950412529656222330534704747650320786622199602292236733173441025358708103669232836294046102;
	weights[32] 	= 0.030140285686018824743951159604937821233662765385058801778331285161312702794351042997685384658586527301233072;

	nodes[33] 	= -0.57315852553453041187421278499211048465546476212639214680701113823368394638872674102440534392422673894177219710807733916130412264;
	weights[33] 	= 0.02942055167462304824922477020474573842355831030692479274282788314496513145913243111343551987492165123375679;

	nodes[34] 	= 0.57315852553453041187421278499211048465546476212639214680701113823368394638872674102440534392422673894177219710807733916130412264;
	weights[34] 	= 0.02942055167462304824922477020474573842355831030692479274282788314496513145913243111343551987492165123375679;

	nodes[35] 	= -0.60220336954233520168795496689113700447241675798051573996733610282514433896378273733974131061503237164326123547871232640818710726;
	weights[35] 	= 0.0286628959651762183885872833366483073683426794114193865513983644958312290231859797720441411245577865349413;

	nodes[36] 	= 0.60220336954233520168795496689113700447241675798051573996733610282514433896378273733974131061503237164326123547871232640818710726;
	weights[36] 	= 0.0286628959651762183885872833366483073683426794114193865513983644958312290231859797720441411245577865349413;

	nodes[37] 	= -0.63047200189725044729369477707581349706778655989879609452501314769154307406873540954808890075160270316199727237647889646200115228;
	weights[37] 	= 0.02786829514042920598963435976914605876213028399353569877827659189672536770012043179441247228812674725206;

	nodes[38] 	= 0.63047200189725044729369477707581349706778655989879609452501314769154307406873540954808890075160270316199727237647889646200115228;
	weights[38] 	= 0.02786829514042920598963435976914605876213028399353569877827659189672536770012043179441247228812674725206;

	nodes[39] 	= -0.65792798567134939104295403519677119337444108932733159711876956910769778583305632880889721676311984573196128176387589887803210506;
	weights[39] 	= 0.02703777340373580728397729462309072828945018757292735197334520389306404979638959961385437712361010416032;

	nodes[40] 	= 0.65792798567134939104295403519677119337444108932733159711876956910769778583305632880889721676311984573196128176387589887803210506;
	weights[40] 	= 0.02703777340373580728397729462309072828945018757292735197334520389306404979638959961385437712361010416032;

	nodes[41] 	= -0.68453593140282367411986151732875645624980665350492355136420994139313226592742968872472182532894716568620483660570673877713120739;
	weights[41] 	= 0.0261724012589335589497255190784256465235825187607078586682458561051713565530268641222395635855746483565;

	nodes[42] 	= 0.68453593140282367411986151732875645624980665350492355136420994139313226592742968872472182532894716568620483660570673877713120739;
	weights[42] 	= 0.0261724012589335589497255190784256465235825187607078586682458561051713565530268641222395635855746483565;

	nodes[43] 	= -0.71026154271147290284196837856320682496328962297223731575226311748315984790330416953775612880302137507578541459554824177607104776;
	weights[43] 	= 0.0252732941305570731641186103564666982031947513290186319028288355160975782932473047075700047355899051988;

	nodes[44] 	= 0.71026154271147290284196837856320682496328962297223731575226311748315984790330416953775612880302137507578541459554824177607104776;
	weights[44] 	= 0.0252732941305570731641186103564666982031947513290186319028288355160975782932473047075700047355899051988;

	nodes[45] 	= -0.73507166050531379410203604898500875045722427001966555387164794389247241094292604320160923218800845317360032901845233787510043259;
	weights[45] 	= 0.024341610926167632339213805212401433299488911460573179795211064974188307457680192118904804951367699428;

	nodes[46] 	= 0.73507166050531379410203604898500875045722427001966555387164794389247241094292604320160923218800845317360032901845233787510043259;
	weights[46] 	= 0.024341610926167632339213805212401433299488911460573179795211064974188307457680192118904804951367699428;

	nodes[47] 	= -0.75893430572134931573542804126891399336347226631801548249445937942324176862325139212683131435036232926447518797667897439414182609;
	weights[47] 	= 0.02337855254266017225782395101478962691130047584197776671742839896551300550214391557784801583341539191;

	nodes[48] 	= 0.75893430572134931573542804126891399336347226631801548249445937942324176862325139212683131435036232926447518797667897439414182609;
	weights[48] 	= 0.02337855254266017225782395101478962691130047584197776671742839896551300550214391557784801583341539191;

	nodes[49] 	= -0.78181872054543773635467798857177060138895695329415469180875854069103563592928678305461526419875371944076927535928555674457338957;
	weights[49] 	= 0.02238536031848547821419749914437972935749344761410978208692306747178005765145997262951023022286984842;

	nodes[50] 	= 0.78181872054543773635467798857177060138895695329415469180875854069103563592928678305461526419875371944076927535928555674457338957;
	weights[50] 	= 0.02238536031848547821419749914437972935749344761410978208692306747178005765145997262951023022286984842;

	nodes[51] 	= -0.80369540805817777823532111389631308986592236795876170181831566973115387869750750230486623041338825898224079946954310375559492167;
	weights[51] 	= 0.0213633144338025315936161522501736269566314128174942310227916080886587301091898015082651903450620389;

	nodes[52] 	= 0.80369540805817777823532111389631308986592236795876170181831566973115387869750750230486623041338825898224079946954310375559492167;
	weights[52] 	= 0.0213633144338025315936161522501736269566314128174942310227916080886587301091898015082651903450620389;

	nodes[53] 	= -0.82453617025578048013343472549463409581636996099238210932060255206672974433965945317449165268600310348786989975021275969370597928;
	weights[53] 	= 0.020313732260655569526569795936022145653276757367016076574705476209390426201775477196248263002954973;

	nodes[54] 	= 0.82453617025578048013343472549463409581636996099238210932060255206672974433965945317449165268600310348786989975021275969370597928;
	weights[54] 	= 0.020313732260655569526569795936022145653276757367016076574705476209390426201775477196248263002954973;

	nodes[55] 	= -0.84431414439703522024055702001989300788564270441370548585549515376600500637758624313743943700993136844138761614078024897161058683;
	weights[55] 	= 0.01923796666535655878505066789696780456636233187961908658219207655964441504806836174831402553233957;

	nodes[56] 	= 0.84431414439703522024055702001989300788564270441370548585549515376600500637758624313743943700993136844138761614078024897161058683;
	weights[56] 	= 0.01923796666535655878505066789696780456636233187961908658219207655964441504806836174831402553233957;

	nodes[57] 	= -0.86300383762970660257019048918059506388488601181549416331161754306750037374005215345933080475019740966779593680573824379703422189;
	weights[57] 	= 0.01813740426535425205021804375587129849916278453258139382146698880990505050729310539123494208597053;

	nodes[58] 	= 0.86300383762970660257019048918059506388488601181549416331161754306750037374005215345933080475019740966779593680573824379703422189;
	weights[58] 	= 0.01813740426535425205021804375587129849916278453258139382146698880990505050729310539123494208597053;

	nodes[59] 	= -0.88058115985204184105771321608065814756639777629847014495398243364240681420273010257620673504075080233818051803280515247932686801;
	weights[59] 	= 0.01701346364300153443364534578456211788539605884065874192385034387546504626219867795949932361761369;

	nodes[60] 	= 0.88058115985204184105771321608065814756639777629847014495398243364240681420273010257620673504075080233818051803280515247932686801;
	weights[60] 	= 0.01701346364300153443364534578456211788539605884065874192385034387546504626219867795949932361761369;

	nodes[61] 	= -0.89702345476756936701732626055870643999381574720998263290768354261588615939369521418621926416396994356393484219692071842513615979;
	weights[61] 	= 0.01586759351882631900292174204395978744357656369786344309920472630962234420067336920151173848790963;

	nodes[62] 	= 0.89702345476756936701732626055870643999381574720998263290768354261588615939369521418621926416396994356393484219692071842513615979;
	weights[62] 	= 0.01586759351882631900292174204395978744357656369786344309920472630962234420067336920151173848790963;

	nodes[63] 	= -0.91230952909412288438298335795824190063627871450948918359835006024802777476546552908278137716276979022881502377529582190547505336;
	weights[63] 	= 0.0147012708872398422298939219588069862305160296066634052891881019139854053138650831495155952458032;

	nodes[64] 	= 0.91230952909412288438298335795824190063627871450948918359835006024802777476546552908278137716276979022881502377529582190547505336;
	weights[64] 	= 0.0147012708872398422298939219588069862305160296066634052891881019139854053138650831495155952458032;

	nodes[65] 	= -0.92641967989123721995146418278272136092955438534033801689844717949808754384307452300502247467038063299598142001367445004600706379;
	weights[65] 	= 0.0135159991182456580818806860732984855439527862773732854157571491899040182987964615382865846624809;

	nodes[66] 	= 0.92641967989123721995146418278272136092955438534033801689844717949808754384307452300502247467038063299598142001367445004600706379;
	weights[66] 	= 0.0135159991182456580818806860732984855439527862773732854157571491899040182987964615382865846624809;

	nodes[67] 	= -0.9393357199742057478779880928860092306359218253214421345151853712145339046001515809336900357540464041098650597887999941825936;
	weights[67] 	= 0.0123133060300480365422870033776865955466501386345657307257739276731707931943031232618582598565112;

	nodes[68] 	= 0.9393357199742057478779880928860092306359218253214421345151853712145339046001515809336900357540464041098650597887999941825936;
	weights[68] 	= 0.0123133060300480365422870033776865955466501386345657307257739276731707931943031232618582598565112;

	nodes[69] 	= -0.95104100138931357391911901052327844788422917219519919385599527270616816625312685924021517814312688544290592162222175779953856131;
	weights[69] 	= 0.011094741940560719279720844553249763430957777182568503599574719899045970984309516945259228812791;

	nodes[70] 	= 0.95104100138931357391911901052327844788422917219519919385599527270616816625312685924021517814312688544290592162222175779953856131;
	weights[70] 	= 0.011094741940560719279720844553249763430957777182568503599574719899045970984309516945259228812791;

	nodes[71] 	= -0.96152043693607316926422968322487493050686869798060158524864604851697588894180154087329829641776445842894375864613833393007840063;
	weights[71] 	= 0.009861877713701826716584130479151970250867578370029102044490664975189535750981313001318405421821;

	nodes[72] 	= 0.96152043693607316926422968322487493050686869798060158524864604851697588894180154087329829641776445842894375864613833393007840063;
	weights[72] 	= 0.009861877713701826716584130479151970250867578370029102044490664975189535750981313001318405421821;

	nodes[73] 	= -0.97076051974728427435354730906652230253226916339579217011374271574759447869775309028761066392935421927565586955954860798202386618;
	weights[73] 	= 0.008616302838488951832950103594050488838210945724518437123942981933379561158963622762060891356384;

	nodes[74] 	= 0.97076051974728427435354730906652230253226916339579217011374271574759447869775309028761066392935421927565586955954860798202386618;
	weights[74] 	= 0.008616302838488951832950103594050488838210945724518437123942981933379561158963622762060891356384;

	nodes[75] 	= -0.97874934100381627242647803756942348207954935465157043586311389654905583814839282090403011432380606219815593140496836872564842852;
	weights[75] 	= 0.007359623648818063660770582721953260592993709547806781781982776146520436804567652557105251574128;

	nodes[76] 	= 0.97874934100381627242647803756942348207954935465157043586311389654905583814839282090403011432380606219815593140496836872564842852;
	weights[76] 	= 0.007359623648818063660770582721953260592993709547806781781982776146520436804567652557105251574128;

	nodes[77] 	= -0.98547660606842036796380790822650648967736606933771188759341385369987093919970963271984108265331862526363296888368978513162388496;
	weights[77] 	= 0.006093462047634872130102255464233219078945055613001689610701747177805941913676461093161412356405;

	nodes[78] 	= 0.98547660606842036796380790822650648967736606933771188759341385369987093919970963271984108265331862526363296888368978513162388496;
	weights[78] 	= 0.006093462047634872130102255464233219078945055613001689610701747177805941913676461093161412356405;

	nodes[79] 	= -0.99093365011096457052286782353888400751744586947177834428952117416502657992814605714342569836587813352261403968312556451339553822;
	weights[79] 	= 0.004819456238501885899308698577986734118211442576062099292553696107850478554113752662923285364381;

	nodes[80] 	= 0.99093365011096457052286782353888400751744586947177834428952117416502657992814605714342569836587813352261403968312556451339553822;
	weights[80] 	= 0.004819456238501885899308698577986734118211442576062099292553696107850478554113752662923285364381;

	nodes[81] 	= -0.99511345813799200594550833041623102715997529363182854208328332714815550522179559773525666835014482640038866371988131294485511332;
	weights[81] 	= 0.0035392716553886285401815859779436036393001760919735338136659356348146955183611718357525146783123;

	nodes[82] 	= 0.99511345813799200594550833041623102715997529363182854208328332714815550522179559773525666835014482640038866371988131294485511332;
	weights[82] 	= 0.0035392716553886285401815859779436036393001760919735338136659356348146955183611718357525146783123;

	nodes[83] 	= -0.99801072156298235808167889143184637647347706385664214678000239552270245000693782120679573783357663941927022370975196218868067734;
	weights[83] 	= 0.0022546907537528530924812107952446828825373821201444971101678115054303842189786683038651805776917;

	nodes[84] 	= 0.99801072156298235808167889143184637647347706385664214678000239552270245000693782120679573783357663941927022370975196218868067734;
	weights[84] 	= 0.0022546907537528530924812107952446828825373821201444971101678115054303842189786683038651805776917;

	nodes[85] 	= -0.99962235043248427238909618574949756539039949065840032081048659990970255107872672250000526622975710695327933579072482523280088997;
	weights[85] 	= 0.00096910973817707533760653484407315860921939910086073450839241030895485608028803147087700067381391;

	nodes[86] 	= 0.99962235043248427238909618574949756539039949065840032081048659990970255107872672250000526622975710695327933579072482523280088997;
	weights[86] 	= 0.00096910973817707533760653484407315860921939910086073450839241030895485608028803147087700067381391;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_87_hpp__)*/
//
//        Gauss_Legendre_Nodes_and_Weights_90.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 90.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_90_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_90_hpp__

void Gauss_Legendre_Nodes_and_Weights_90(long double*& nodes, long double*& weights) {
	nodes	= new long double[90];
	weights	= new long double[90];

	nodes[0] 	= -0.017355729146299652461298372708181882552152869246174451391870941486761083026633571950745520127019299566734280933352932879126612439;
	weights[0] 	= 0.03470797248895005792046013412440782284296743441334758393004376308716328624910038555090368398447187023722495091669066166168532375;

	nodes[1] 	= 0.017355729146299652461298372708181882552152869246174451391870941486761083026633571950745520127019299566734280933352932879126612439;
	weights[1] 	= 0.03470797248895005792046013412440782284296743441334758393004376308716328624910038555090368398447187023722495091669066166168532375;

	nodes[2] 	= -0.052046275137206949059278730384284851054463381265296242726842241331559914781585131706783627670755002409637609586401712945026043573;
	weights[2] 	= 0.034666152085688240188272308521948073209460159482684001117160880055599211574553442408018302655937525873913414902938528392705496;

	nodes[3] 	= 0.052046275137206949059278730384284851054463381265296242726842241331559914781585131706783627670755002409637609586401712945026043573;
	weights[3] 	= 0.034666152085688240188272308521948073209460159482684001117160880055599211574553442408018302655937525873913414902938528392705496;

	nodes[4] 	= -0.086674109420734770085236546477084716619208290596072430223421938247722002760558823542873931144719873064067542903247274264503519456;
	weights[4] 	= 0.03458256166949689141805379730840532368387527008361770672764485334994583045506943319147555112749053618497029192146992104569815;

	nodes[5] 	= 0.086674109420734770085236546477084716619208290596072430223421938247722002760558823542873931144719873064067542903247274264503519456;
	weights[5] 	= 0.03458256166949689141805379730840532368387527008361770672764485334994583045506943319147555112749053618497029192146992104569815;

	nodes[6] 	= -0.12119750815392408296874927739752916792515355315409280441745047803144988497446631250258491390929714926053561201424931359197600483;
	weights[6] 	= 0.034457301960324256174595638704569536322492773237564424936956721889701844590064332667824965926675128864235118661596090217392;

	nodes[7] 	= 0.12119750815392408296874927739752916792515355315409280441745047803144988497446631250258491390929714926053561201424931359197600483;
	weights[7] 	= 0.034457301960324256174595638704569536322492773237564424936956721889701844590064332667824965926675128864235118661596090217392;

	nodes[8] 	= -0.15557487333052911951140512637191978686612741030157082731059030646000110122061040212407451158741647194577012497313582798792803301;
	weights[8] 	= 0.03429052388637504193169730502814407775646627800101618990458942357993395304087585999615725158535311103078729250610199042404;

	nodes[9] 	= 0.15557487333052911951140512637191978686612741030157082731059030646000110122061040212407451158741647194577012497313582798792803301;
	weights[9] 	= 0.03429052388637504193169730502814407775646627800101618990458942357993395304087585999615725158535311103078729250610199042404;

	nodes[10] 	= -0.1897647829033790190208742531811678866535030824532657430794391582672663704780744939059343966580682357925306390940024181894765391;
	weights[10] 	= 0.034082428402253995463605021759988284132234984287141659499161378934895532984501685660770904235641933212820725405671296462;

	nodes[11] 	= 0.1897647829033790190208742531811678866535030824532657430794391582672663704780744939059343966580682357925306390940024181894765391;
	weights[11] 	= 0.034082428402253995463605021759988284132234984287141659499161378934895532984501685660770904235641933212820725405671296462;

	nodes[12] 	= -0.22372604069472285926895840739944813935560220585781549531852696416944887845612673765663461735409778189478533272540946240480862273;
	weights[12] 	= 0.03383326624683168725792750824648835783410804335422623850899457893893625878735527604712882323611004083734205805815743539;

	nodes[13] 	= 0.22372604069472285926895840739944813935560220585781549531852696416944887845612673765663461735409778189478533272540946240480862273;
	weights[13] 	= 0.03383326624683168725792750824648835783410804335422623850899457893893625878735527604712882323611004083734205805815743539;

	nodes[14] 	= -0.25741772603442012992088756679318003317191382430244701721944460949119600124268725749735017336211203095506308549765810635304307359;
	weights[14] 	= 0.0335433376411242766829331069386480136080141608377020991652773252088690763946236779154873279641181382032983065444366615;

	nodes[15] 	= 0.25741772603442012992088756679318003317191382430244701721944460949119600124268725749735017336211203095506308549765810635304307359;
	weights[15] 	= 0.0335433376411242766829331069386480136080141608377020991652773252088690763946236779154873279641181382032983065444366615;

	nodes[16] 	= -0.29079924306616665154960212022744252784632754330050020205061660139327533065616575378452955214582855516634781326921673895488554834;
	weights[16] 	= 0.03321299192655131651404082908657951053280886527196894243013169284389213014853177424782125903503809687008169433233338;

	nodes[17] 	= 0.29079924306616665154960212022744252784632754330050020205061660139327533065616575378452955214582855516634781326921673895488554834;
	weights[17] 	= 0.03321299192655131651404082908657951053280886527196894243013169284389213014853177424782125903503809687008169433233338;

	nodes[18] 	= -0.32383036966234596651139524849941007883110245990795651699002650584622142544685782396132846576556221462496791802584052698651809385;
	weights[18] 	= 0.0328426271440075045786302847995380084443702081107652868537709663439305536699631061998513795380027392230313456268984;

	nodes[19] 	= 0.32383036966234596651139524849941007883110245990795651699002650584622142544685782396132846576556221462496791802584052698651809385;
	weights[19] 	= 0.0328426271440075045786302847995380084443702081107652868537709663439305536699631061998513795380027392230313456268984;

	nodes[20] 	= -0.35647130588856784613118851504560859474675016762836512885281255106730427139778432363065620789647361341244580148607589087157916749;
	weights[20] 	= 0.032432689554255616911789544051550198821346778287873066926137930657393712719183519284387761991419730890595378533198;

	nodes[21] 	= 0.35647130588856784613118851504560859474675016762836512885281255106730427139778432363065620789647361341244580148607589087157916749;
	weights[21] 	= 0.032432689554255616911789544051550198821346778287873066926137930657393712719183519284387761991419730890595378533198;

	nodes[22] 	= -0.38868272195949820677650908580660230040094799015929158942472425951927698751779055900713579051059865745199577488327942687890435853;
	weights[22] 	= 0.03198367310021857603945597543544486131267266947092239210363102643570989839654253062346858848466700957827450576751;

	nodes[23] 	= 0.38868272195949820677650908580660230040094799015929158942472425951927698751779055900713579051059865745199577488327942687890435853;
	weights[23] 	= 0.03198367310021857603945597543544486131267266947092239210363102643570989839654253062346858848466700957827450576751;

	nodes[24] 	= -0.42042580562819775610139544587035653654312932397120924896738601307121549380105522078481263936675617744624752960103619325199797936;
	weights[24] 	= 0.0314961188118186360769579304529577022146495221476710394658385456583241821878308631642567101492751144561742733969;

	nodes[25] 	= 0.42042580562819775610139544587035653654312932397120924896738601307121549380105522078481263936675617744624752960103619325199797936;
	weights[25] 	= 0.0314961188118186360769579304529577022146495221476710394658385456583241821878308631642567101492751144561742733969;

	nodes[26] 	= -0.45166230895186936757637863295448285407603020012438627010398629408468274596386116470343730157210078103821124640470772639304728641;
	weights[26] 	= 0.03097061415408092094593660491803681066873582794613653445780333688487384403699542391264604702892167263123798359;

	nodes[27] 	= 0.45166230895186936757637863295448285407603020012438627010398629408468274596386116470343730157210078103821124640470772639304728641;
	weights[27] 	= 0.03097061415408092094593660491803681066873582794613653445780333688487384403699542391264604702892167263123798359;

	nodes[28] 	= -0.48235459437766569252012122195097422291302913556512469531305666546568894997716991497609331661468137343472741691682711447474546153;
	weights[28] 	= 0.0304077923192869526903943309389610462462739971488387172800056412045449469660921906635231165767052012637109453;

	nodes[29] 	= 0.48235459437766569252012122195097422291302913556512469531305666546568894997716991497609331661468137343472741691682711447474546153;
	weights[29] 	= 0.0304077923192869526903943309389610462462739971488387172800056412045449469660921906635231165767052012637109453;

	nodes[30] 	= -0.51246568009302797098846248827823042090913473472456902810768971032940917551782251298359575990537647017172009904247295537598964037;
	weights[30] 	= 0.029808331464031275487147835458279810798148558042053080483925200283357578399653001604351338171979536176886064;

	nodes[31] 	= 0.51246568009302797098846248827823042090913473472456902810768971032940917551782251298359575990537647017172009904247295537598964037;
	weights[31] 	= 0.029808331464031275487147835458279810798148558042053080483925200283357578399653001604351338171979536176886064;

	nodes[32] 	= -0.54195928458591342618930450484091187762899218159479966578257472597388902998494595834051834990790045942338408933305847857282373618;
	weights[32] 	= 0.02917295389210074248655799063016158871034734703059046112283694421267729672276443540038963353791104859758501;

	nodes[33] 	= 0.54195928458591342618930450484091187762899218159479966578257472597388902998494595834051834990790045942338408933305847857282373618;
	weights[33] 	= 0.02917295389210074248655799063016158871034734703059046112283694421267729672276443540038963353791104859758501;

	nodes[34] 	= -0.57079987036122097870536167141224734505762537300368037836516630757870812959879712719728842632959220577191493780071827723705821867;
	weights[34] 	= 0.0285024251841614163187553339309557944885986626216237180632612693071427668334968937965562005869657556958109;

	nodes[35] 	= 0.57079987036122097870536167141224734505762537300368037836516630757870812959879712719728842632959220577191493780071827723705821867;
	weights[35] 	= 0.0285024251841614163187553339309557944885986626216237180632612693071427668334968937965562005869657556958109;

	nodes[36] 	= -0.59895268676074218588876938303881374735972774672912686553874213372796359043153980934245229367781201189665915418557948895496559384;
	weights[36] 	= 0.027797553275302275158038649777360197525125091212053728682716386389005080345878031393009251682826192898356;

	nodes[37] 	= 0.59895268676074218588876938303881374735972774672912686553874213372796359043153980934245229367781201189665915418557948895496559384;
	weights[37] 	= 0.027797553275302275158038649777360197525125091212053728682716386389005080345878031393009251682826192898356;

	nodes[38] 	= -0.62638381183504512676260933169675419467515805924397908301862046206153954929227811021484409703176326455626540712266825564799350078;
	weights[38] 	= 0.02705918748154795852161423544965209115338161478959322133513876055300623546586380365359903209932300356264;

	nodes[39] 	= 0.62638381183504512676260933169675419467515805924397908301862046206153954929227811021484409703176326455626540712266825564799350078;
	weights[39] 	= 0.02705918748154795852161423544965209115338161478959322133513876055300623546586380365359903209932300356264;

	nodes[40] 	= -0.65306019321684219196126211628667647430711902272130010681762406561662931847763964939753062385652442694265122740041169623071376779;
	weights[40] 	= 0.02628821747651458736159588829732374056145538768813671593223634204952713343297523747631841929634297163817;

	nodes[41] 	= 0.65306019321684219196126211628667647430711902272130010681762406561662931847763964939753062385652442694265122740041169623071376779;
	weights[41] 	= 0.02628821747651458736159588829732374056145538768813671593223634204952713343297523747631841929634297163817;

	nodes[42] 	= -0.67894968794659714618126864528028908775598450063958764363388766203808464249300941558203950145011638603614370615443398271917274459;
	weights[42] 	= 0.025485572219443228484467320747637061484795408523500536532951818637666843311749092470163101841911845281;

	nodes[43] 	= 0.67894968794659714618126864528028908775598450063958764363388766203808464249300941558203950145011638603614370615443398271917274459;
	weights[43] 	= 0.025485572219443228484467320747637061484795408523500536532951818637666843311749092470163101841911845281;

	nodes[44] 	= -0.70402110120239114355546936420711909883004398738926783595400221777692232848676440054210491082164194533575606361325011708522485006;
	weights[44] 	= 0.024652218835904852935966062062970488710445484215638138328174160221835269935748412988605960781176085833;

	nodes[45] 	= 0.70402110120239114355546936420711909883004398738926783595400221777692232848676440054210491082164194533575606361325011708522485006;
	weights[45] 	= 0.024652218835904852935966062062970488710445484215638138328174160221835269935748412988605960781176085833;

	nodes[46] 	= -0.72824422388739036362579949768585383163504910348475192046025024302727307741171565738408755010012703978912815361297144558389326656;
	weights[46] 	= 0.02378916145252872321010088444713216319036592044677704235270265345892384340998661738500819763963296204;

	nodes[47] 	= 0.72824422388739036362579949768585383163504910348475192046025024302727307741171565738408755010012703978912815361297144558389326656;
	weights[47] 	= 0.02378916145252872321010088444713216319036592044677704235270265345892384340998661738500819763963296204;

	nodes[48] 	= -0.75158986902963846817841520247797862892950546008714206477082473101105314780022943771948271434066732851074686982916782038999612595;
	weights[48] 	= 0.02289743998716318463498863898883293679736496420127008386508937472859233023525976208807469315010356958;

	nodes[49] 	= 0.75158986902963846817841520247797862892950546008714206477082473101105314780022943771948271434066732851074686982916782038999612595;
	weights[49] 	= 0.02289743998716318463498863898883293679736496420127008386508937472859233023525976208807469315010356958;

	nodes[50] 	= -0.77402990695033424680695799169995663610442589279089475456556611215219932508473896127589343486453105964383652982908623870846996543;
	weights[50] 	= 0.0219781288959341338386918188398510663651080119436177560924370392024738787497870567419588328006677061;

	nodes[51] 	= 0.77402990695033424680695799169995663610442589279089475456556611215219932508473896127589343486453105964383652982908623870846996543;
	weights[51] 	= 0.0219781288959341338386918188398510663651080119436177560924370392024738787497870567419588328006677061;

	nodes[52] 	= -0.79553729915824813486360058748346004532019263424657368078401361140758670993886501462512199643124233514573337402085890104068907988;
	weights[52] 	= 0.021032335878722563117062319621424460197758004258622551375582458960610977992920539865636286484737278;

	nodes[53] 	= 0.79553729915824813486360058748346004532019263424657368078401361140758670993886501462512199643124233514573337402085890104068907988;
	weights[53] 	= 0.021032335878722563117062319621424460197758004258622551375582458960610977992920539865636286484737278;

	nodes[54] 	= -0.81608613092948105644375361737040389518609435392719001777437280436101782703498862904533880865689269838866259795657649010302005855;
	weights[54] 	= 0.020061200544639595964532472614240155749536707727755420644623232805813571463213555011104482508861515;

	nodes[55] 	= 0.81608613092948105644375361737040389518609435392719001777437280436101782703498862904533880865689269838866259795657649010302005855;
	weights[55] 	= 0.020061200544639595964532472614240155749536707727755420644623232805813571463213555011104482508861515;

	nodes[56] 	= -0.8356516425333770455641991520144477035779867359315983046709403322801131581314324707429271435201648773118778086153345855650066155;
	weights[56] 	= 0.01906589303913731842532353012626483352149000660143800751081378618433374976208679271367304208366564;

	nodes[57] 	= 0.8356516425333770455641991520144477035779867359315983046709403322801131581314324707429271435201648773118778086153345855650066155;
	weights[57] 	= 0.01906589303913731842532353012626483352149000660143800751081378618433374976208679271367304208366564;

	nodes[58] 	= -0.85421025906707188228602150859715544403254587069589522524358352650588440757239061562086694775304692445555049804722060508967600663;
	weights[58] 	= 0.01804761263446023616404970739191416682804473753582526243015244306940733663733801590171297789858682;

	nodes[59] 	= 0.85421025906707188228602150859715544403254587069589522524358352650588440757239061562086694775304692445555049804722060508967600663;
	weights[59] 	= 0.01804761263446023616404970739191416682804473753582526243015244306940733663733801590171297789858682;

	nodes[60] 	= -0.87173961886290343447402788763856342410346323671503585292623908642815339093717320317219624191445270859322658385349911073434679971;
	weights[60] 	= 0.0170075862852226757093973341213835670672606407841280678316362805552761025446961437427020147768798;

	nodes[61] 	= 0.87173961886290343447402788763856342410346323671503585292623908642815339093717320317219624191445270859322658385349911073434679971;
	weights[61] 	= 0.0170075862852226757093973341213835670672606407841280678316362805552761025446961437427020147768798;

	nodes[62] 	= -0.8882186004347459812983757255594339931330404433100763252617758716940839408778876429426550276686351966559774551604810173238978841;
	weights[62] 	= 0.0159470671510066390132068013372140191697474780560639887585758599088340240537076400173089415444257;

	nodes[63] 	= 0.8882186004347459812983757255594339931330404433100763252617758716940839408778876429426550276686351966559774551604810173238978841;
	weights[63] 	= 0.0159470671510066390132068013372140191697474780560639887585758599088340240537076400173089415444257;

	nodes[64] 	= -0.90362734793130269386998558261532724014816668249019277030166248629204133179242070613455306489046922896848087523717681934576559159;
	weights[64] 	= 0.014867333088043324050384579789600247494713053214615591053705446902553799917901732560832095525091;

	nodes[65] 	= 0.90362734793130269386998558261532724014816668249019277030166248629204133179242070613455306489046922896848087523717681934576559159;
	weights[65] 	= 0.014867333088043324050384579789600247494713053214615591053705446902553799917901732560832095525091;

	nodes[66] 	= -0.91794729506658638337235631597088431411880883537877840531043564688301219227770680051089813174150347689021569673223659400441850551;
	weights[66] 	= 0.013769685112337093430751403629405518669753359522209947583866879232937215225345672321870098381894;

	nodes[67] 	= 0.91794729506658638337235631597088431411880883537877840531043564688301219227770680051089813174150347689021569673223659400441850551;
	weights[67] 	= 0.013769685112337093430751403629405518669753359522209947583866879232937215225345672321870098381894;

	nodes[68] 	= -0.93116118750043200700584661222945753392303706996788030973088990901391311438525159794242694207351207605589643454109925730393881404;
	weights[68] 	= 0.012655445837168128868876023941617437157830025894770278749355795687364917078056169571980560314958;

	nodes[69] 	= 0.93116118750043200700584661222945753392303706996788030973088990901391311438525159794242694207351207605589643454109925730393881404;
	weights[69] 	= 0.012655445837168128868876023941617437157830025894770278749355795687364917078056169571980560314958;

	nodes[70] 	= -0.94325310364535776815357521642820074754550142957725191598551791616267490925072632981552348603905509874192106709224503650660753597;
	weights[70] 	= 0.011525957889148058850593763179488323303070005720976099953672524179464958834337230080749998078614;

	nodes[71] 	= 0.94325310364535776815357521642820074754550142957725191598551791616267490925072632981552348603905509874192106709224503650660753597;
	weights[71] 	= 0.011525957889148058850593763179488323303070005720976099953672524179464958834337230080749998078614;

	nodes[72] 	= -0.95420847388150033616072026336948023829072571917236112999923156033131058651893223410476518333208995135956997243248362015459295611;
	weights[72] 	= 0.0103825823098932146138077066652438224225600426103104291253570475226023936010828129471524556157;

	nodes[73] 	= 0.95420847388150033616072026336948023829072571917236112999923156033131058651893223410476518333208995135956997243248362015459295611;
	weights[73] 	= 0.0103825823098932146138077066652438224225600426103104291253570475226023936010828129471524556157;

	nodes[74] 	= -0.96401409817150548339366659197016231801359511846224141114654243102797609539334255661697719914315023457896950374417541571130013506;
	weights[74] 	= 0.00922669695774199094031969838235662153404088446166004770491977322311091524051756454405708708932;

	nodes[75] 	= 0.96401409817150548339366659197016231801359511846224141114654243102797609539334255661697719914315023457896950374417541571130013506;
	weights[75] 	= 0.00922669695774199094031969838235662153404088446166004770491977322311091524051756454405708708932;

	nodes[76] 	= -0.97265816209019313999746483044522862013392878545238272132396242903565296898625376967965681386487450318147616820201302282462277128;
	weights[76] 	= 0.00805969494462001565867178776568157549821365563090271352519413855571454184755805861900525036517;

	nodes[77] 	= 0.97265816209019313999746483044522862013392878545238272132396242903565296898625376967965681386487450318147616820201302282462277128;
	weights[77] 	= 0.00805969494462001565867178776568157549821365563090271352519413855571454184755805861900525036517;

	nodes[78] 	= -0.98013025134514838545895322281229265041556492656682958753075613321239157403473221244847170938821726207194350753542913541314894444;
	weights[78] 	= 0.00688298320846328431473007048696900552589278179463065836181413883249431428926773849982219642757;

	nodes[79] 	= 0.98013025134514838545895322281229265041556492656682958753075613321239157403473221244847170938821726207194350753542913541314894444;
	weights[79] 	= 0.00688298320846328431473007048696900552589278179463065836181413883249431428926773849982219642757;

	nodes[80] 	= -0.98642136505783284873425405711242300922829819787127907883165786911942593312818952015579037699004883261030236955705417253639482214;
	weights[80] 	= 0.00569798156074735260084782204535913539752522221338541358326217729687670589017742030781465037112;

	nodes[81] 	= 0.98642136505783284873425405711242300922829819787127907883165786911942593312818952015579037699004883261030236955705417253639482214;
	weights[81] 	= 0.00569798156074735260084782204535913539752522221338541358326217729687670589017742030781465037112;

	nodes[82] 	= -0.99152392881106278612914692430217948880601242903662987011160551949418071776552685629227771150215521145211254005497093567956696945;
	weights[82] 	= 0.00450612361367497786413799637464266160768424776908905654991923600190027156757843348998274437889;

	nodes[83] 	= 0.99152392881106278612914692430217948880601242903662987011160551949418071776552685629227771150215521145211254005497093567956696945;
	weights[83] 	= 0.00450612361367497786413799637464266160768424776908905654991923600190027156757843348998274437889;

	nodes[84] 	= -0.99543181205834466392675540697078643315697665773872786432567469885660867126077228877756129929527635177426655382003704323871097755;
	weights[84] 	= 0.00330886724333601819543178369482621426975329077016628103674750552926740455936758838751806925823;

	nodes[85] 	= 0.99543181205834466392675540697078643315697665773872786432567469885660867126077228877756129929527635177426655382003704323871097755;
	weights[85] 	= 0.00330886724333601819543178369482621426975329077016628103674750552926740455936758838751806925823;

	nodes[86] 	= -0.99814037993856815356130561895306783507237621514334814830790124419206920051565751989797991410497962657234917195201685881926929183;
	weights[86] 	= 0.002107778774526329891475705677866799551191756172309896328274482576584358514962253402939463054923;

	nodes[87] 	= 0.99814037993856815356130561895306783507237621514334814830790124419206920051565751989797991410497962657234917195201685881926929183;
	weights[87] 	= 0.002107778774526329891475705677866799551191756172309896328274482576584358514962253402939463054923;

	nodes[88] 	= -0.99964697128663843746324845003652990544031181873588855085128324007641036750931098431353667337594089153335877903715003317632442948;
	weights[88] 	= 0.0009059323712148330937245142086768676183206764648099217939087788569299219354387914823812507327106;

	nodes[89] 	= 0.99964697128663843746324845003652990544031181873588855085128324007641036750931098431353667337594089153335877903715003317632442948;
	weights[89] 	= 0.0009059323712148330937245142086768676183206764648099217939087788569299219354387914823812507327106;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_90_hpp__)*/
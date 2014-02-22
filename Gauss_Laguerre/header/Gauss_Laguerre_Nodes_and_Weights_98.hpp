//
//        Gauss_Laguerre_Nodes_and_Weights_98.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 98.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_98_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_98_hpp__

void Gauss_Laguerre_Nodes_and_Weights_98(long double*& nodes, long double*& weights) {
	nodes	= new long double[98];
	weights	= new long double[98];

	nodes[0] 	= 0.014678256201651070802912365212060716601350412585107012967772112919817584732349503493018896684277749989803429440007284373671707093;
	weights[0] 	= 0.037120727210017608416247704757107802274227642930278778783668430294456235686853317110314527655962242979718874102566791968631506;

	nodes[1] 	= 0.077342958016454228898300976294650128348486346711561560202576333034660481536537901163950451809846807854444979662087695563194909899;
	weights[1] 	= 0.0811699089229232294110871332553674662203064137369423851219310690551277349880498042883322352060936043548956379881276496082974;

	nodes[2] 	= 0.19009830247834955640682220391234710148826715199724850278670029879917752675131128611495928386055286632855898644604038189511894565;
	weights[2] 	= 0.113960915507782114047232537864452667812838334438403695928454424850440387630880227782346384758251521509613356749687887804909;

	nodes[3] 	= 0.35299803303744651130320823285637909328998879084728306142356907332023247775111224819037121649902106885011003261798641026550695827;
	weights[3] 	= 0.1320749533216010964454431605231026864866338379516761513158822153799325607357192694120847833353058603380934668681258007829;

	nodes[4] 	= 0.56608673311591194914594987838781310389447404733506201514412612563318966130293755836873479747535376089110185552768009118523155921;
	weights[4] 	= 0.13523664896556386160461559634692786757097911466850814842607769005062993144662884910313868926288528562349951894677593548;

	nodes[5] 	= 0.82941952114392871436509708157319146281951500539830471104362813829763312062843596372962461720750299965924050416202870044465227579;
	weights[5] 	= 0.12586292036544840036947468367034086798338531431372147868626428578606981265106782910943255214407419885363337060907368611;

	nodes[6] 	= 1.1430639732344216043633289736856036715204734144776069919571232735183377483688516295874241112770473784857965166155141092676098421;
	weights[6] 	= 0.1080314937749234539671631781442980884397368994314234330230918165258274556542737352019688583820538834842213966430281406;

	nodes[7] 	= 1.5071005623100370387049998317723334429813455435373030693818355049217009032144110144015952889618159129371768878537282900462397868;
	weights[7] 	= 0.086241715653859716357311256305217391346255294313347288340994617211760418307321730466070590901295411339182283484132214;

	nodes[8] 	= 1.9216228634641222824094675690199095674746886146364400543241233016226284304112371026278240074812531655578897612039479997447047723;
	weights[8] 	= 0.06437313806969123410798291580193400950400552209033173445536262626052081575509699812684829252100836460487005543137618;

	nodes[9] 	= 2.3867377175380980616894259937422874178947382210859498351417980698460429614557998475233978174992017327744949124607957406484787686;
	weights[9] 	= 0.0450866326657595295526722716807355260800148197869861708905739286031582341652225987486565044339704099636865494194639;

	nodes[10] 	= 2.9025653958205697763938207055059635841315810361325037321220147157883814984568983893158934400670892719496274988975035812109477358;
	weights[10] 	= 0.029703784086164296321681564402770804741851526516946497999183014712270996159694741092237834120004281103288012018099;

	nodes[11] 	= 3.4692397783221639497443013992198746587836325310955497785400619015689453724605500642059047574404269938653762011085180760251780112;
	weights[11] 	= 0.01843983211216795764020503960346953429711304515861131742089512972684688270416908134500793875850897782568862500663;

	nodes[12] 	= 4.0869085501972710370934666039981904426325644006519579730244646954548371086404517554927451172620284379103239704027228526954802541;
	weights[12] 	= 0.0108003249681876353985534720531624224186792148243665697753412721785162620307547691948042856642525704143224148975;

	nodes[13] 	= 4.7557334184962331502951051944965362990411368826646575965029594053794465181486120879218003926247450747272876381406082629159877167;
	weights[13] 	= 0.005973910160571383818891481568024863282750107647391345288652587302738149602802142702612549609205180370295343694;

	nodes[14] 	= 5.4758903506435112091218640934297957444818672980754124509280771751389618770989930876756087964925671695688470152776723901844163622;
	weights[14] 	= 0.00312264812297031790527677431013414201617571420487281268759395336024508332313102659096424042711581686550804728;

	nodes[15] 	= 6.2475698357847292201272386716534656414976239765565032739246986027366856431622506454362936624528134403461997251086074743344158498;
	weights[15] 	= 0.0015432984256646750293530472815060339775978659511753449979108952364053965743952826866279882885500449517227487;

	nodes[16] 	= 7.0709771700947714616396068823641733471182043645381172480795774180193597066418934740786140524475069414496650118324418180310221148;
	weights[16] 	= 0.0007214346167009858861711838826991668502360618293591481219629954504312894300488149157437264567279336253395815;

	nodes[17] 	= 7.9463327671740511272837908419717405508504214696539281029911174811728547723658053353665884664563109328323851760311602914940331653;
	weights[17] 	= 0.000319060084640890902009205682143724216890831038751529546802924304409693154081222199931524188617259146009092;

	nodes[18] 	= 8.8738724947366854651010103058575644374003663851031142428775087774295429186207626870967645718262340301253984662163201087318978181;
	weights[18] 	= 0.00013351942704970705759676185439522413020562975509434522040892840240887641003039387603813762758726804138574;

	nodes[19] 	= 9.8538480388950060075496238171534328324674642315391722196894199869824009442405222447850299977234772753792858738412705946494552651;
	weights[19] 	= 0.00005287466245466488909801021076061579103559770534370975415198656926311062719249317505523497209177937674675;

	nodes[20] 	= 10.886527297462459677980386057199113505987487444121888415998379403240546956276893939083863154873352763585220472724216635804205523;
	weights[20] 	= 0.0000198147365832731531615215192785946582961496252926043814746808638125855239781625705376154527119517139568;

	nodes[21] 	= 11.972194803828836678644989106360812913174583265140220550031066812123046275552617269929714480062390153991644332804840803290284523;
	weights[21] 	= 7.026652270908074518199949311957910228275883062922330019976959079223770761750119576573721036634862388e-6;

	nodes[22] 	= 13.111152183107274296932783774585484863988014437328705439452626474143269261089977117139837672827551693282056471180041499804253433;
	weights[22] 	= 2.357699462769217400888902158679533397613761808170841313234971501246550049648698046478725028534299625e-6;

	nodes[23] 	= 14.303718642412059145779496247515437635884621576850821133965909392977354535716008111543938485908658410285802756645340385436852573;
	weights[23] 	= 7.48426716523901638822622154814104803280125974722727452132574460614345673108194423121583617298657948e-7;

	nodes[24] 	= 15.550231497300914649658510274316956136310098573529489548245565756902285100533787657985931697207576995308416245396265389407077853;
	weights[24] 	= 2.24726550797789384402756528448031212038255719552464442650077428516162184043598614825862629498760468e-7;

	nodes[25] 	= 16.851046736606655875469944333163004862685343691400547358433298881419073347117475935895132694976337489256106341450904129729335892;
	weights[25] 	= 6.381324889342693301783735626966891386917212905538752507496958416483088756993892490214092671124153e-8;

	nodes[26] 	= 18.20653962809258982923145749174213647433227131224716713573328221143465408116448693677209984126485103001679685731655556219138798;
	weights[26] 	= 1.713209504275058006909408353249615776082454579575288786515978116645147366971716331568151733873899e-8;

	nodes[27] 	= 19.617105367595912515308571671617762636523768319924275776517825263305317227135009949632988389863740429063417796493877582406838525;
	weights[27] 	= 4.34740853415994188141153727710540913166917914644882487278457420325691392073101768738304355336753e-9;

	nodes[28] 	= 21.083159774575995103647371742487046429371802867038593665007033404969319250687854410007700451131785677500172792987888585823459993;
	weights[28] 	= 1.04239897313874808457294825513794179325014626285641481907529085390601067725466269064619506726917e-9;

	nodes[29] 	= 22.605140037262591894491005772095876263094561434212853424977377889212729435105493497530654435459205393473927033074848723858784344;
	weights[29] 	= 2.360861837699723068851722929326246110607862799975574078146102913707719148531399019160182468172e-10;

	nodes[30] 	= 24.183505510905754544676073280124949397381970714197034187020143815173440702241410438727216548253305781891606069454745571995249949;
	weights[30] 	= 5.04866282795988662056863829357770991063504248805116486633633356611291206613201501074597970417e-11;

	nodes[31] 	= 25.818738572968144779281281133729934112937821265609042264616938225373045595827648397986989407509077243791806630533151953289173773;
	weights[31] 	= 1.01900002483458109746064625051667172874944695350395977269180280765511673607815089352811810055e-11;

	nodes[32] 	= 27.511345539475541784027646937894352632394654041703542472659082956431817592586180691462809426670524411124725902030308776169149499;
	weights[32] 	= 1.9403211424602734937914454619925991544214518064142962616528230711863426269435716181758352875e-12;

	nodes[33] 	= 29.261857647157252271157087278993431907234922980035491982602653131797213074279839149887747562778525315081356664834766876139164051;
	weights[33] 	= 3.48394148513895065893157656919288669687845190833419179473061757977598562245662522864417875e-13;

	nodes[34] 	= 31.070832106470123689430094773441871777085539543196840557471237709895820292886595376692389896889484653562482452358713635947338826;
	weights[34] 	= 5.89587989355355911259853208397128849521864751551770293714722150952917580152824584575321156e-14;

	nodes[35] 	= 32.938853231113974638211426913038459788239284604208880961971846106974842415639898959226668774718443476849881407620208391920118999;
	weights[35] 	= 9.39887647746718714467391991737237541827326731913384594121305862362286383731183516648921927e-15;

	nodes[36] 	= 34.866533650219425078168355761977374446025988924347969119566491845352598339936733974320804367778823637320750402681766981527834493;
	weights[36] 	= 1.41061262939245133847982421202987810027073568829303284482771393622491878971926431069733588e-15;

	nodes[37] 	= 36.854515610029308711277657610487857484401771104774627800681547746650105830693599603167462092851601281395210944381356385942840184;
	weights[37] 	= 1.9919786670812878760023015787658387310848636109856651159516273425968595757829547041294316e-16;

	nodes[38] 	= 38.903472372611276662027068333091673395886769343647743849272759910121734548457525372758798711972461151797138677738218050572526339;
	weights[38] 	= 2.645041159167221148940169291233150450531764257696344485290071448001141408471998792772048e-17;

	nodes[39] 	= 41.014109719942481028959744122609543386150894810628834983010776384829305012416582568997141403753141206153463517187524724583216771;
	weights[39] 	= 3.300360908890079016014606741851438451676893605275495593743598907942001179536065470641598e-18;

	nodes[40] 	= 43.187167572609665801602729510439144257175143679194773024575344249282615201710166778092629165410619416886219252069863371711782466;
	weights[40] 	= 3.86692894022209081921811279114037739162253638876695482531011640040167638023674617055269e-19;

	nodes[41] 	= 45.423421733383879370197742644951286059573014687969228091040316838817624838764525459958776531187837057128680880900757844258507784;
	weights[41] 	= 4.2513285518223962327815559945330053393005078646495893584875325051296659362793026679385e-20;

	nodes[42] 	= 47.723685767074987555400653902473244182350814082058400268824309220192522109011875870976109267214572293821533919062564891403143643;
	weights[42] 	= 4.3822543128375436059488045252546521907849187969757686872388379844450205157613030243123e-21;

	nodes[43] 	= 50.088813029366614280693382351498417660043968467993677961580002972477056710983683719195842133242820551714286493704470989379317377;
	weights[43] 	= 4.231823830521798705920577780849910093095232127227724204141906191916560711637213218016e-22;

	nodes[44] 	= 52.519698858799772789850194307084002868543711838763606081280591707110047226582106283053234035498622732062545015213911055553860997;
	weights[44] 	= 3.825061592969481701751531692823734115880574318467728067665127746195363668138300588281e-23;

	nodes[45] 	= 55.017282947739909752647398702974030304428160222471811002951675420026043402157883194681826782890909341179620183112135766407889704;
	weights[45] 	= 3.2332108479366787166520735650714956445672108289691637661894612470904891986488105561e-24;

	nodes[46] 	= 57.582551910058705208734904904856843140007146337448227991952532005093732611481023903045516110205968677999533364385491292198803567;
	weights[46] 	= 2.55327354720882459157967454184678562435484378344728863013299248952885955948573543918e-25;

	nodes[47] 	= 60.216542065425729867715264595148949324061680966743772647255017541719660500032045509973726562748053155930052692990225466480938245;
	weights[47] 	= 1.88186869076043496104019735482765241667642352768775203753138562976142181029554543788e-26;

	nodes[48] 	= 62.920342462579721126154235028723625432065538576252787419458934374678860864130465999711106094240265877944846263337199661796328107;
	weights[48] 	= 1.2931460000223875452721431168581567865157480693781487099043292633910067201224701499e-27;

	nodes[49] 	= 65.695098166786758618353443660347127108580712861476832397046007849286571519126177983082927109474375781719403480137273390371612222;
	weights[49] 	= 8.275324215906083664815492636370643785976228640986017388219930432652490992309290296e-29;

	nodes[50] 	= 68.542013839954888471160595131262967736876472716256026398180215186482681858754915771054494538107799773919676106691590208942962324;
	weights[50] 	= 4.925932369142435611005785515811620674950176009257370037428306184113456509263902628e-30;

	nodes[51] 	= 71.46235764563573085662441689672786067495274863193483831196951435343169154621759965913363832449279496484060199175271211213737421;
	weights[51] 	= 2.724060625503819180173888193751778557526064907209231763029350094735723841891644465e-31;

	nodes[52] 	= 74.457465515492023731410134231695107032023485716970270809807300986915626318879846666955478904852543518856713151684674893269232854;
	weights[52] 	= 1.397652742542658377165648513204086144958853871759774997772826641509242938455099416e-32;

	nodes[53] 	= 77.528745818852700295228124995219209634539758523348258764181191469965809063622434873381842322462362815771040742420204395922416061;
	weights[53] 	= 6.64406167417111406636121638574162494273393989549613145488103700470549591655893769e-34;

	nodes[54] 	= 80.677684482843013629128799275268375314804057304588277195828283515116983726084132039929003203551871695263567187502585827862603206;
	weights[54] 	= 2.92202393047417929378444038836824876738788508345869161443300103693318053905420986e-35;

	nodes[55] 	= 83.905850617422961223512276034725427074891668047450428422633373097978758531645134442294415940744577052824346959195254641536417205;
	weights[55] 	= 1.1870726603435668318971963085170410598195878872024342702239260544113412052777528e-36;

	nodes[56] 	= 87.214902707683533799521296472522351738369369861029060428813464689582578592898401027585564902694165827648579063305263960122704396;
	weights[56] 	= 4.4473683528073005993416780999854991478413497665441431228749158654932808105474012e-38;

	nodes[57] 	= 90.606595445170440005391796698725666430418550652553647308432985815224998940656739094363905616893084012824909917830271918508430576;
	weights[57] 	= 1.5339395532240002305237712322437636868351546639250819707593521338227796821920129e-39;

	nodes[58] 	= 94.082787281115689553209166675633018465913882363767671587011942526704113819381138249714306896915365679573222948645107017830738355;
	weights[58] 	= 4.861774649949728577252912626023116238094290282267412844770404956917113492936664e-41;

	nodes[59] 	= 97.645448797612823481778307937399655695855093254264439326276421807690071860084661788203592211024575327914560180529966667065358736;
	weights[59] 	= 1.4132413784110718852526874081042967352064842655203117724439118172400329641709928e-42;

	nodes[60] 	= 101.29667200841102411415889579829140216746137396546284044448623226301995422665758624719868683179806726669546872046925729848979227;
	weights[60] 	= 3.759877921523666911736961972757965413447941471215207903827547015189857047493913e-44;

	nodes[61] 	= 105.03868071967484438391172433400405066663603977821163696396398389444886056809986223142577936877423420624491868125810388237993455;
	weights[61] 	= 9.135050419317824630636408251560301765483326227572565731998658662797806852567305e-46;

	nodes[62] 	= 108.87384210344714711768952672924318683913443535058818592131459245302059988756720595617215929786447533125796735085079869511283958;
	weights[62] 	= 2.022133872505638388278409685255659328845217313895645008885133153923429107171576e-47;

	nodes[63] 	= 112.80467966352988565692966316147496991870465657080784984443062177214351801596413707404123507992095238531482445850689110517551875;
	weights[63] 	= 4.068038086088799125393875807261295774425741664447770299853466346985174599567177e-49;

	nodes[64] 	= 116.8338878061604863716311639889547734210813354090994475857145474662990496515517753985618647557735729941293576769337329602966213;
	weights[64] 	= 7.417829819097569774750543387995914809467802778037986726316826525844943212178235e-51;

	nodes[65] 	= 120.96434826761525495812246303494345242147920579267998096440225056672867430919953101027522327047552247294772693902087593875286251;
	weights[65] 	= 1.222489707913428122917485049076646993391151231220357880855975404506794695296916e-52;

	nodes[66] 	= 125.19914869952071241991325605702374558559463793081994781500865251154221244051563312063124306446597778581709845255940516850117158;
	weights[66] 	= 1.815352435734974375660230245570210437392738591182041346784850301694432041121512e-54;

	nodes[67] 	= 129.54160377253599071779567306293553946096742111081962906967407155927879866027388382682889258607945662231717365116115227958892224;
	weights[67] 	= 2.421012826527235352376167097244942814682888423769769108799073266122320167646396e-56;

	nodes[68] 	= 133.99527923323206617810606208939211962300913985001345164873810867708403959012929348640453037584561052523604225852036578993471656;
	weights[68] 	= 2.889471371431554226564492585483532262570172805389749960352069580770321224107825e-58;

	nodes[69] 	= 138.56401944144275938923725985837458199096383616998422673777656811302179733253873314186323082105841504729518224529231808110381798;
	weights[69] 	= 3.074465199089532107693009418853275617316516439592959429448173650212438827915285e-60;

	nodes[70] 	= 143.2519790314081814928230575852399504052120795445684360276238715541561394013693826333169276260011077739032057103441109365965929;
	weights[70] 	= 2.904435309957072666881465702694152742183641937237277918162005888218898361366704e-62;

	nodes[71] 	= 148.0636594867751560514999052874419327909747703024276228557675606513126062733287029330996054669060030759372019102362731513285757;
	weights[71] 	= 2.425249828406266422182553744149866217187933605926065555053354657272214700061298e-64;

	nodes[72] 	= 153.00395160654881332322789915774007425970698392059869401956016834437868905990640487091257434794860076652372663589219973868239134;
	weights[72] 	= 1.781344969192224308401644783266585112557089071418281116348588014423637867185688e-66;

	nodes[73] 	= 158.07818507948114802751771203398921126528821310912429321641794410792316330038516544317568235448409031515855215149279361412226925;
	weights[73] 	= 1.1448316482859276001023381364258807418011851747493379487946924910116663536265079e-68;

	nodes[74] 	= 163.29218669616390930452066397186804556084868228701672656304610676265368377995283295857467289505935034134608653317612952815367344;
	weights[74] 	= 6.400718249411567684382984634940826979529301479549253467174976260990120509807489e-71;

	nodes[75] 	= 168.65234913641083385476062481169388099503124660954914813745919223597746552767387283742286932026034628995392404039691870782094032;
	weights[75] 	= 3.093551806368481641891749350808575231394709982755234568133053578239944409362244e-73;

	nodes[76] 	= 174.16571280988409490649427535586308607900845205710012865390033025325283134826143422168637539463509275244399915791455838996630582;
	weights[76] 	= 1.2835044012812952325432974709684398351719579883943563802356742301534444717397831e-75;

	nodes[77] 	= 179.84006395118652768516452887182675396741196720109534387969273215934088264973157149032579915218902571467560027723383054457432639;
	weights[77] 	= 4.5362589214826299254037550995550889157891159094152198971420486617378238166289309e-78;

	nodes[78] 	= 185.68405315066480526412033167141536581011497696230705053835665666556205943243491974867148820122660885398746920333467657964622526;
	weights[78] 	= 1.35405646594905528119497126944014727833139329410969985932511916282069941021611671e-80;

	nodes[79] 	= 191.70733984795935307200835241753649910253875631036675138425872342151121622790505499868860195177262459322628168916745526408981036;
	weights[79] 	= 3.3811077020929204850770386543825601586172330622904413354345134614711840774422884e-83;

	nodes[80] 	= 197.92077019058946944488041537749896103436907054666765544999034803682609850809386447878932647881447278947768481249092404270910908;
	weights[80] 	= 6.98714999543722591875733109479404464867756382999044722927081723723604300798187079e-86;

	nodes[81] 	= 204.33659831508757790651228615981586591247534366444164141952505198018796652169151930940453695321813090397184414497837972316506558;
	weights[81] 	= 1.180569445446179978125666648619287035742703369776231820581987213607205268593128422e-88;

	nodes[82] 	= 210.96876493482636482228543364368294842940158411189612277057370159454305496293184126349233897766306055946602173673625704728843586;
	weights[82] 	= 1.608577169179347619724840836286031207265820541423829236439850756444371392310776338e-91;

	nodes[83] 	= 217.83325274256941840586240143022779582264248516095956096174415182806641566101407332957155048566605652660397331675803365037311165;
	weights[83] 	= 1.739741127504399968812393584015551538581348493386003282913922035316546545925387471e-94;

	nodes[84] 	= 224.94854658347837538000354872439842282765273080003647032632309208667343578966880001863023254070551684574678606654500951633806871;
	weights[84] 	= 1.4664986416043190248715773891357752521200398293795254946678727006676461461467155207e-97;

	nodes[85] 	= 232.33623935843322240607777701868825549278953913667908952697439707889496315779221009395908140525502652255183952604402202240250792;
	weights[85] 	= 9.4311532308768141996795857831247024720481381373254181437029188451734811558286747086e-101;

	nodes[86] 	= 240.02184519789724271914226086937852007917844272798772570795870448853285020549804251753162829686194394965592108355199460182565239;
	weights[86] 	= 4.51220605456005533279430273189397722510400315730767836222275435982056169420465708624e-104;

	nodes[87] 	= 248.03591506226138920730814042548456605620401271152514496768026025822117000486968271211121098871106979594232066429955890779899104;
	weights[87] 	= 1.558320255223582460782125988423458597911673425448206919150209463015222390975667436303e-107;

	nodes[88] 	= 256.41560686580565948611826864471563289109694049555432174818967665602219114303005370349420482884807170834193631460085036473897102;
	weights[88] 	= 3.744987992863499616865733008063268167263570548712320577977573059843216852921162493444e-111;

	nodes[89] 	= 265.20696284794224788708062828739190610421564575460070651497410299014559172523020108243628421033644010430435114944608212877788923;
	weights[89] 	= 5.9849959749006179113445607641004398645397862890235132934788622204136434849177771053947e-115;

	nodes[90] 	= 274.46833386915052139358389140398250401819828555999241016221529390464379695866436764809382736269825819660578723909013244229720565;
	weights[90] 	= 6.00549634385981579263704048714850969760774319253400801132842932864787366343833702039518e-119;

	nodes[91] 	= 284.27575917316621040676475814948012044065269140702000319803830067907306161969235297707163690781928993321914996802215037525163965;
	weights[91] 	= 3.511041843791336920506114612004828622117968724236632003114621108317801531350189467287153e-123;

	nodes[92] 	= 294.73189364356430859951441338628344530394717053484272802233497013702986997372433144793945220652335319262327477263847022299929253;
	weights[92] 	= 1.0813326091112336780459834072593566350170235607304669732054919980433614157471305801368144e-127;

	nodes[93] 	= 305.98190090744132786523345781871821474286717170961137526389696658428174306971084445796297831853792387058183357959975367075155513;
	weights[93] 	= 1.52178649417159128621299770038881939239376512569683805412569184840648599083979040859122753e-132;

	nodes[94] 	= 318.24453834191486031188605670053821341205114747459438230407423722002909570221514124303970722363154564212974258615594095585346298;
	weights[94] 	= 7.90294548527046561716039132199857107042403161341933443364871529870557530833124281435961589e-138;

	nodes[95] 	= 331.88162759330957222143373916144588012525455001988584853255900094078688597937778324018257856196328046816339151531922847322646895;
	weights[95] 	= 1.06488644633663309958010242960606040234328834624669864112809341864273227237467510111872954396e-143;

	nodes[96] 	= 347.58907029609931601157291425391167906761107018737214626958321800423603969082345959473177871705643608697942238972326482461909035;
	weights[96] 	= 1.8986055580342867376000232903619276389662130175428913701338294642804144400803103747105603929498e-150;

	nodes[97] 	= 367.16960824895638553999141106884774247893856859238788508238318875745912226898414575256623347899789102718397338402439120295941478;
	weights[97] 	= 7.98257843330169139889041650529124033852872385029552437539102958805378945653023843364357325333501e-159;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_98_hpp__)*/
//
//        Gauss_Laguerre_Nodes_and_Weights_78.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 78.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_78_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_78_hpp__

void Gauss_Laguerre_Nodes_and_Weights_78(long double*& nodes, long double*& weights) {
	nodes	= new long double[78];
	weights	= new long double[78];

	nodes[0] 	= 0.018418025263588714368220406401341901465504148394389788190716389777688332837966937306136655482402035808091917299403945752982467513;
	weights[0] 	= 0.04640491840324373904320106976320700342338568308370489890644205901228459397064513371392674834074392388986454614012764644782386;

	nodes[1] 	= 0.097051579527303554111465897154610867871216426679919503230796289636947137130071925100682113315867395890562535512087344780257686651;
	weights[1] 	= 0.0998697296668786828120693584840743098525972295097771865321322831214976268606312923444020816767045743449829845257034176243231;

	nodes[2] 	= 0.23855245231813770399563799903866556226405098149036923496196897614972827886063448612626095188419393818431740264891574414698053038;
	weights[2] 	= 0.136256858135940306926407964167850312151645156354801565747007863271167723645299152458875741784997517403755743203942391262311;

	nodes[3] 	= 0.44300881457497798090796197451427858952261148899839311753699954485171197352597502709256457878295531314781544753202833762113127612;
	weights[3] 	= 0.1515109463243064495166832164024131650817332753641613538359136331913809889364077220910911442173853985872282102353341138171;

	nodes[4] 	= 0.71050665832731952827034235364900210020852143797177687182737531347240925685406973164501939217237549047929145472093781817653809815;
	weights[4] 	= 0.146953065454236575869737765882696958312881409256451642943944764681326547486473097495667847688468578668126501877140066015;

	nodes[5] 	= 1.0411546183031771874002104964977073807861172261721922390555076674301190395480048453639603887814732963324195701813806541671272104;
	weights[5] 	= 0.12789667485282062113993203270546807970613603185217766959578755143717292642399303625323066031672478738498319202788405758;

	nodes[6] 	= 1.4350865280076294910078261985574334753820905326617399609021520045065769047321412693326317101774808444769816537015743070524062906;
	weights[6] 	= 0.1013390716703576984709804273804405256292140832681675764201862581597777034979087245319744185238013101185243116015759988;

	nodes[7] 	= 1.8924621499465120963084286000741491589761142085196972240436930173917243487179967599332896391301232119466656248328133307354285517;
	weights[7] 	= 0.07371615584049108361341150657382140365053789643719371719980164106172394991579908165551184248787041396342697705883705;

	nodes[8] 	= 2.4134676493942416595376919190211202198355451411926173200537303329933496099627048749121882953104550622352310379160270185526373009;
	weights[8] 	= 0.04948600700396452054983619164117486645756685928077357851862535939411630922269982163076044039115102175799283127787072;

	nodes[9] 	= 2.9983160540738309126403676235184514670626157136290116538499739091085802968999925601574266729656269786199202261525714167506135521;
	weights[9] 	= 0.0307627969362328979326605259772762302007967070644286292753083889184489497611979367277586993556697396849132563034146;

	nodes[10] 	= 3.6472477553386512917125578949541738025471216222332591552617718483826963808051305528007925334516436332217756284575415796398817963;
	weights[10] 	= 0.017750315407532076311090713902590881468554283083853424659208182746200006635552212206396921551756260748102974144464;

	nodes[11] 	= 4.3605310685347999975538838927144455927579423426994579050996667271097748882547071387456317394500939995043634897442312103232972182;
	weights[11] 	= 0.0095219411139764901266519991726934176502856047800197619276514169015186723093901181803971253222902545154712768953;

	nodes[12] 	= 5.1384628606544706856260968391321428980667262102117929708869633324104317449049509599561747922247258847075865461188795103745216964;
	weights[12] 	= 0.00475415287204186694356102115159629405493508927577621499184945721592735903077629499343171896366073595702505126712;

	nodes[13] 	= 5.9813692507455932279856928299124729317025179085394309628824061958123826186739043626064277824018096429472830778598266731765597494;
	weights[13] 	= 0.0022109828929184865847758187943208243780243046289404979715953541780546705433709358617867113457217340027330408635;

	nodes[14] 	= 6.8896063879379397657215304752608316660591349255542140438206159059357022966654244137469567418135146861288628397462833764201392186;
	weights[14] 	= 0.000958263455872924440652673951001831683919226092823355400407781347433173848793664489909454988580527785542616886;

	nodes[15] 	= 7.8635613120508056095377097270919114175883485940118214138059813132690698499573357113566897410890881205192771840259191708143126889;
	weights[15] 	= 0.000387174672385843418654990497310821963118181058554859448667997428610772034260711579821945084516976167182171859;

	nodes[16] 	= 8.9036529021499111662177056811859106531940660977312298439193290957093357470395642227933656520518328286156200843260836910304050378;
	weights[16] 	= 0.00014585352401079456322064574377949521935268838220198653351633438492499046089010208742240414944575799487779;

	nodes[17] 	= 10.010332918982379722797225751517511750231526139582219336441974749563527387535989877277203473160620586000418574815327292123114763;
	weights[17] 	= 0.00005122987159837808880249361278003492100076636352763819641803756787902691741013621318824914277349535512383897;

	nodes[18] 	= 11.184087147891257407282060577817011855914856481105060637545109757684566078238029427638283917060882747505519926145695526432817007;
	weights[18] 	= 0.0000167759121899652132558501765849957148077337526754073533103115103089459420705680150428469531222194137935805;

	nodes[19] 	= 12.425436649582113052990978585371125541077454007281042120853543030771485935189087275855071608529699007239370036132002490861144424;
	weights[19] 	= 5.1206368132465895624881948556073058954416929231144250842702931712489768546000059848610459761961594430694e-6;

	nodes[20] 	= 13.734939126985390729586161033629735024681228115288694500231516614137027703314442770187566814151667491045531966421524056592290579;
	weights[20] 	= 1.4565254095940084451494697366535884617896553816953194402665921280341600840525039927071836886624776711753e-6;

	nodes[21] 	= 15.113190417438287515968450795269908192543178914046761689355250132680490510852247638080814845156259172292156893679268964277613456;
	weights[21] 	= 3.8593661715094179230693082894498830438883118892758464702611358134693133862807141858605470965524380992e-7;

	nodes[22] 	= 16.560826120512499374335997632553462738916267656795144980593697873191313198975830581913265331453765079076637889030200552247191749;
	weights[22] 	= 9.5221269814836584210828448546300173909641667203617475307086112079097940663307794307424273837317659407e-8;

	nodes[23] 	= 18.078523373056442947668725697768172515439157672488550219124652191280211320196800275970021999222998742032939937915217700356039149;
	weights[23] 	= 2.1865458455448338608952859361978368565759414059448575376795223364678519776462704140224236507472444283e-8;

	nodes[24] 	= 19.6670027844233742520466923185315180160955294824837396618866967520484925300211519572463519262119992325052999403915465470041435;
	weights[24] 	= 4.670333119490718182129125091728869265997340892320294799423760040401154293176655790148445127441454738e-9;

	nodes[25] 	= 21.327030546444991412933831498035301106557654915361185062196540467089903230915011880316993260926676312160072587221052504346323039;
	weights[25] 	= 9.2732481531718499050679354178927664276963775480372478688937056718941807369476050892014710745878549e-10;

	nodes[26] 	= 23.059420734512972723636184886663061148125777234810056661453012973405837188359568166444633691471611526070339665461868980995784892;
	weights[26] 	= 1.71046073054553224713245628508265766042658331656144019394595625221482152251433028458042923141443846e-10;

	nodes[27] 	= 24.865037818183160492462512375042014558632581640126839650686110038448340694994028453678285913606618147521283485977422609226833524;
	weights[27] 	= 2.9286419673761734967998264948720693228339588790781169091516604236925664300855683641804406134667385e-11;

	nodes[28] 	= 26.744799402059844866333513133842342925299526465777348978649228955666050655840608177235148885029524668308958886600372030604310793;
	weights[28] 	= 4.65091180415972867557704782856824207917770425243549089758856630777607016932213436461534036508632e-12;

	nodes[29] 	= 28.699679220399612837924357210665254148313396960151310207679397474861918859099396796120120145960598578100552379880226331256131253;
	weights[29] 	= 6.84457747661723374505423083634643957274057279856006824538768764902963337040387044641414343947253e-13;

	nodes[30] 	= 30.730710411953597758626449475239361848821304333819470740623170067444830176158033088098537050807479554087579457290189184699593246;
	weights[30] 	= 9.3256800142814171726684125834052277045130076138724564393942311153113822086690421689194695084908e-14;

	nodes[31] 	= 32.838989105113100483921724970353557392416115490832576999023842568673494283568228608619040700948336788204883484416719034539683865;
	weights[31] 	= 1.17516215622981778913222081376049890097750358949636779932554274638389769008670642548949341470167e-14;

	nodes[32] 	= 35.025678347519671629618323793137468191570205234682131508534249732282730728324285363365414696446574588191064445432566106737236212;
	weights[32] 	= 1.3681219533593238564820334167623726097151538348517893590602309075004359135500311669224527878174e-15;

	nodes[33] 	= 37.292012419046987927981876803760403849630549549342393467896255832641631601364565839606761502800806161085595159569003545253374901;
	weights[33] 	= 1.4697875424907676057238224959603752631722556416305703096742442055202383248642259983991343110716e-16;

	nodes[34] 	= 39.63930157257919820479552612447768803948064802656888944506308834745360485166731075569418886638819635880040494043604730518422631;
	weights[34] 	= 1.45527484242470711168795150366559394058803797695566579934680256247364925166480249027581639723e-17;

	nodes[35] 	= 42.068937253445578975748545759072889445794319083783331783105370163958376832028100210723023729995511751580150214342408106790625724;
	weights[35] 	= 1.326224783351743780586688657164969828503718469694043160730993262189792217269718008667473731605e-18;

	nodes[36] 	= 44.582397855903020151546755135186174621055957736452776103168384176037605261436524753869806251883368197365431834584710355668210349;
	weights[36] 	= 1.11084274853719335949856937493812397893964676854799278784580912061807520269019988158236358278e-19;

	nodes[37] 	= 47.181255083904634883590560229173092111376522348950121526329172896488275390567439500057573754829256514667609645610284716316118508;
	weights[37] 	= 8.5386891134599817847467052409329475890302617391211403337685507861483948705517746298582986748e-21;

	nodes[38] 	= 49.867180993823227616065031190067572834437355046470518437968480903012264845773880809839499178109299182901852641615002098518332889;
	weights[38] 	= 6.0135115417986609604984095794916403806044586405809750653144578459762319175629061018577553998e-22;

	nodes[39] 	= 52.641955809144029715165988521532280976626978230153630394056018938077630238423924166495605368665277830896417969881240398144578094;
	weights[39] 	= 3.873563513177985697507735808032705019789987455586765353471340895418673327173510317251177237e-23;

	nodes[40] 	= 55.507476611813390866137634904619868250009724452574794022213970678348708238281784345745209769310044766722354847229064908675675266;
	weights[40] 	= 2.27789940221683331476706141876604438706233425742147436942835732657945980650350257109209085e-24;

	nodes[41] 	= 58.465767032442018990945088838692121905868429658578070398009521575693018895462313562807739595862344980356329323888775304543574003;
	weights[41] 	= 1.220505948281607369454362657590720594345764852301991558827683375129210559094385877591373813e-25;

	nodes[42] 	= 61.518988082556170874610427298797890512090648984351998390653971444461381272010816762381549628791533675185127423050216371448750239;
	weights[42] 	= 5.94575222723441234675954114735004388747691936343991594043046392940609304340676172843799501e-27;

	nodes[43] 	= 64.669450297379130227107909747431923025959556717804468129020217896548260242157574437090546844177438903407319476746615457891932214;
	weights[43] 	= 2.62754431109020973459676911506100119944535921331622330157896104970939054160406443498836813e-28;

	nodes[44] 	= 67.919627388237526746488859216622942394106705993996516776766753032620021056056159891331481400210490666310304892852334950357335278;
	weights[44] 	= 1.05078378567208679979852403060002294001446429178440037438810016528330961016237555375503748e-29;

	nodes[45] 	= 71.272171640936460925163357939419181130586500765502863031812715749463625747291029748269029239924599926490055775982374506260440862;
	weights[45] 	= 3.7928257364786534465184213610127184768856496828906468318629442555603501342962167889813241e-31;

	nodes[46] 	= 74.729931342022664065314108704896450080227306126989941043992630343852031780479851354060438030555160206406234869262578796428595891;
	weights[46] 	= 1.23219586041804438982118751294993000023283988492832877648101281748722290227454933929364492e-32;

	nodes[47] 	= 78.295970570941643730670589965874854674744018270448696717301062738661716038359652873517134788665056718134954467162771083010186173;
	weights[47] 	= 3.5921261383913001724498030250643777463264200340539069034005994988131161173112063424645393e-34;

	nodes[48] 	= 81.973591765542846350623938181940821665634151779800787756871316266087658454678974021250404644686002699286735841636028404470766338;
	weights[48] 	= 9.366189173133675338567664241352333446756951717831603036331195083532913620818492986767908e-36;

	nodes[49] 	= 85.76636155494182990099504863255300857804435350145802479254944103212519204519993630033331595405520959064126311565815775318715802;
	weights[49] 	= 2.1766277598948565696228247951040948976303499630765496235781655078782865109629204029418814e-37;

	nodes[50] 	= 89.678140462374221645836593880819107950278054987531062958684699633950427534241582628179843415046370609642282228717285032864623626;
	weights[50] 	= 4.491162876959123908030093739177365506048208131858679839030012422048748825926634981889379e-39;

	nodes[51] 	= 93.713117218010343885322396981773706957857870752893346749109713016079699520221356610490846183111608989276494160369697977275374987;
	weights[51] 	= 8.193865041221116562655909890392260297449916849689997965800205211692823150215140709017801e-41;

	nodes[52] 	= 97.875848596701665744573230289656958456439294005159350882644373440187930461597884920111636069132633128005560848298857996950076345;
	weights[52] 	= 1.3158837075790881272817383611793368443642078267616323836659194494491786870989486631805173e-42;

	nodes[53] 	= 102.17130592051847031895016673156024410360612753440361652753497489265178812324564472988416816285733561843036890591538247669744109;
	weights[53] 	= 1.8510141209670966186552383528765365360590406753142802320014590269596343753480791752930513e-44;

	nodes[54] 	= 106.6049296575542198354554041794407670298675195161222190667507217701259281382721121426595704753367004308471914240327518264424616;
	weights[54] 	= 2.2684456695255733284545973856536796905931749298351650880575129233112355310145896389060603e-46;

	nodes[55] 	= 111.18269393030372030378016009694097322506796298810564328106819908230361632629682357180909547481193511032712663347875938298462424;
	weights[55] 	= 2.4077247691818637461823361122046805951811033077965546354213995053160778608719369768715586e-48;

	nodes[56] 	= 115.91118325213750267220619041100630671956272849577035272701161055207928300098706634157398504203545237826496425926889453613440413;
	weights[56] 	= 2.1989538012387175658675550907472086170309954611711958092438537916106127182109139512316318e-50;

	nodes[57] 	= 120.79768448646889791671478481125745218761504074690721747234341433873668756732271128586536304603967183392185045433620133802781799;
	weights[57] 	= 1.7156371110788144357466544313143318392307995312334257748693515084651629057029061244323815e-52;

	nodes[58] 	= 125.85029793909623806285228405765750882678281335208562099602884231490161985462644676987201884152314869187667745192703065986923075;
	weights[58] 	= 1.1343701741538518009132632775801770328996874896297962151140628438140007381220346463567562e-54;

	nodes[59] 	= 131.07807275165019415359849752719602289329635614624105547662199521274598491408367256815606240527573766478275678216520771964868961;
	weights[59] 	= 6.2996583292869330364240152488090696209619228427485292889858177199410010305459021043843293e-57;

	nodes[60] 	= 136.49117351585024231552988275176940804769213727076691925344492733458452109049789111565025223530527630873569844231794063392638524;
	weights[60] 	= 2.9090178378793864131416395925926824572555221483805246795010629048672717054576078279739063e-59;

	nodes[61] 	= 142.10108750811488339693907917101243157642139018039565348205937131020736168436818235999087851751903891849309238375384287984385178;
	weights[61] 	= 1.10435917488325295261881098221515392389134431631634617216514369037668075372038464610197921e-61;

	nodes[62] 	= 147.92088551713574500667725398472229282328720934557417095958862573318390949371205542958146455926850512062175325390452277936265712;
	weights[62] 	= 3.4024979005745195936689900504181749370917472688098617406207304147682623194035321869092782e-64;

	nodes[63] 	= 153.96555448704825715355478251941161281641880855855409275941854925568987301460306953847918586300165246894635095373436860970038627;
	weights[63] 	= 8.3825774277993440561071826175090832750014061597071122551724993399190231725033148027442596e-67;

	nodes[64] 	= 160.25242808309299032549215340690760488280387691288956011611146791921590227427382906590003847666259137317760060446618060010322879;
	weights[64] 	= 1.62335710266694529452258399711912386554769832057611627263830617456711901526100518036339116e-69;

	nodes[65] 	= 166.80175342051881113014732303271634571723676225432869553912824642080337921734076777044626348551843079667220816906534779590634631;
	weights[65] 	= 2.422291329660664924511909519876598468249634409813876557959232179127811720575434611991546784e-72;

	nodes[66] 	= 173.6374513958240699300204478556763889520769032286983057684365241257133106442390817943154574539820147250239360557664204764218506;
	weights[66] 	= 2.719970529610011738594582134259257157570748148088852583020916229032768495354308590681830385e-75;

	nodes[67] 	= 180.78815940979366917823113707177061844665454805839931872080554666159099448614082011149914737334133836773412694413475495646808536;
	weights[67] 	= 2.2344175086903667384951959426035671847565073590110282056670898171445264550336828051712302438e-78;

	nodes[68] 	= 188.28869836190451500114428235841116656257508858686183352505697001257989368039239464641497747164021577411703052738806421921172402;
	weights[68] 	= 1.29755953985295847295095930242366874951562453998249001631671079220724265044200476395170720737e-81;

	nodes[69] 	= 196.18219959131922495014022203979134027991770004530487129936058151245369249263849023594901607049941884560603125947733016212094703;
	weights[69] 	= 5.10522438917678639523183019216577730529135076057968991244631954337334939422952067022558901874e-85;

	nodes[70] 	= 204.5233016539248156741501797239524198148474372669177444774791514119063540385757032434774619457498118026121289356653762710681776;
	weights[70] 	= 1.289719994951654269468331910129378842412654696450656542049700827179670256123435903870748411905e-88;

	nodes[71] 	= 213.38317045465576096176268787135153440504837926196500135997451119096718576591783166313645073352813530903311945368092035868741414;
	weights[71] 	= 1.95083840208714477138561626490997209835269773213892704095986559168458459543895816574318019292e-92;

	nodes[72] 	= 222.8578259230977553967887130029425701734702345954482718611406608264706814143261981701738947106636497852516223176521181656915934;
	weights[72] 	= 1.6081067460237487313639258500078112338136658018121428554968580953416861705407181620115766445364e-96;

	nodes[73] 	= 233.08295876180677729451501276072707729099027305519187617486354946974075341569923480793350008158257112772693947661471640979021272;
	weights[73] 	= 6.32607562833799589608367212072408082080179439048052152975785139300273492205051379235461961988853e-101;

	nodes[74] 	= 244.26289538228059796759157776353644405600900005586249056103695514087589487730765106258018766364616981091948108829380486173263426;
	weights[74] 	= 9.730394249651853768345526478778233554109580642713655502721092836542432640993286273271465409152861e-106;

	nodes[75] 	= 256.73529475902840836113230715415514735703026700193640068766180227264224015851808814458486608819087865298249265562709678539718804;
	weights[75] 	= 4.21558053037271139086034851616656062904786903477511911882865518827952561682442066640436974785778391e-111;

	nodes[76] 	= 271.148931675734515558512577178796315571410246671606102229547105228211959275917656425276116602858324473791195102155269490872868;
	weights[76] 	= 2.750196564654332898615584483974548164721562079193325630849777296911419168039755071046483344041253475e-117;

	nodes[77] 	= 289.18243841718553792439290364680561214013623709952793670610089666068967555644259739591198936233080916983310151069653649283435208;
	weights[77] 	= 5.45286449928280646633699566293936250516714619310464727506636820053578931104520585019672130600963677366e-125;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_78_hpp__)*/
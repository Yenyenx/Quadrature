//
//        Gauss_Laguerre_Nodes_and_Weights_74.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 74.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_74_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_74_hpp__

void Gauss_Laguerre_Nodes_and_Weights_74(long double*& nodes, long double*& weights) {
	nodes	= new long double[74];
	weights	= new long double[74];

	nodes[0] 	= 0.019406939896931443552556794945083007155913495184879594053144267013036835064072593328008552912334105230811771084801819862887019942;
	weights[0] 	= 0.048848301335707812207362892042939223677850710472128947748002010484065649611441937164211898442040251506828321726589794785750688;

	nodes[1] 	= 0.10226348832909412413515673751186400239125974576822952656011677528740002830903084057225994078013100787673096078440797305514052749;
	weights[1] 	= 0.1046871319980676765350710824410740927293050920844611292251347765637185371465846049341683496288951204961963684331730116257239;

	nodes[2] 	= 0.25136747345444351916713736524318714413052085270617157726299920049853108637652993075339041495439876756526957043671513815737690913;
	weights[2] 	= 0.141752332627000323538351886961412699859921930761511431539622678205529525803061002784574774673432812494712057657119282430655;

	nodes[3] 	= 0.46681840954496278612346729172862982733793133387977271631197228498408672774289338465344497780518164828003611147936063780314534279;
	weights[3] 	= 0.15590563627185694732479075873092061254976219026710689715082682844900329541511590381395119043152504102246894651423802725473;

	nodes[4] 	= 0.74871649333237179217272423460788649691674044908080734067756689733233598349884500016231706127950849507335241761846825426367426926;
	weights[4] 	= 0.149062992151042753758697157739753479491887799020263691486285713743322216132720436525804723206349979125487523342229823135;

	nodes[5] 	= 1.0971888031746575405690469304144665159743586891878125764652563305236582506374412559878979803937800575559388577712799139779554617;
	weights[5] 	= 0.12745100935401427719434256106486886171283037765670858490503927175924538408428739675522315451528051497045719070636300476;

	nodes[6] 	= 1.5123920517096280742321464967321403853388586624776187710004243171361623933443235259536329007054002790862022270622335000019930373;
	weights[6] 	= 0.0988697373351469089730979074750192433223191982082578549250801570729810953411287880743253408662267957021874039023295147;

	nodes[7] 	= 1.9945134295725182228204377324198289282382503780456586516528184974416952589289369722758774991116919684141975440712297641216193677;
	weights[7] 	= 0.070169653486723746513899988986971809673329334014418052534745227680657707266788424994448869849064876670592322370152478;

	nodes[8] 	= 2.543771194478031022469214329474948855402796114464854000252664250147263815288604709081406013919141020990326802170972756322329801;
	weights[8] 	= 0.04579870259417609541823417177492336987890941608785701954430789566629387856330209436323479250340650589475077775080656;

	nodes[9] 	= 3.1604152618319723023426328117055897013831570563733323233312157354599808143892442324343891124476996205371757802096067897007734378;
	weights[9] 	= 0.0275834571919309592535918865708901378879106407708694054313024610437683626501031325040765744049536573445947739010563;

	nodes[10] 	= 3.8447278563850658416235843926329613061209339286078850572431170039110197605813245143941281581578677396703042305061337201975166756;
	weights[10] 	= 0.015364945730147407017739666652678934153549798864388058546234836897595294053749179863452417853031665542055798075773;

	nodes[11] 	= 4.5970242446629708624432440381623162542543069102581708606455339312164529565811691370575147950443981185703799655034058771995391773;
	weights[11] 	= 0.007928339410947880029492628417368085632608772122242718769648799752833183023984175954670446348027157053808688988392;

	nodes[12] 	= 5.4176535580082403831665717347492822871084970851422156788135784594963150046777572898578338669178967482640651513903024936865731456;
	weights[12] 	= 0.00379375113501622484799871808367720392943887826545298654105060425570346448323743707119636636038733816096434360965;

	nodes[13] 	= 6.3069997134861628172276805252835569943986030576264888775871635007679142357265250918340433965768329833522746527977528705188855987;
	weights[13] 	= 0.0016846212297220796442397539262653340856572500736678991182727350111222763757027053574401099023523609035791763318;

	nodes[14] 	= 7.2654824394952063616183509990995986047582833327352679564791375581705882613220432378423494407072357242926371473960862280187737389;
	weights[14] 	= 0.0006945089096282912146800786934455731072878385066574412614449935944789743865288530298468695399499732522185205739;

	nodes[15] 	= 8.2935584132866972633404242559129039235899259056664900787394556921798290494608591529546125153359620022202741097196979322242775782;
	weights[15] 	= 0.000265889156788127632569160736379918256251919442966212932683499337865324201622403882080080305807454801755839882;

	nodes[16] 	= 9.3917225183076228137958664370663992491170134926153233936725744877196467938078840746440123239465816492476408798623016874280017196;
	weights[16] 	= 0.000094537347339949234768662337602344739655244253800292158989953387043196288519058726883266802037391622875301972;

	nodes[17] 	= 10.560509230194129198209337130190921639459840841470643009566256485252580616691232122291334311399556211321543664550645976045214287;
	weights[17] 	= 0.00003121467999527447380309747613265450436773470874136620185139500803019997248729719526711949469732478429187494;

	nodes[18] 	= 11.800494141318005323767729111422962067430806052510833554043559803163930072756267767582409563170445856979421304770657660234113322;
	weights[18] 	= 9.56948370778119559687617634564915923176875767028950959432959967532043407061583835630565151136865384867764e-6;

	nodes[19] 	= 13.112295635018132470817897626712292987908527840174661021698368750496546163598116809328974334670900814530825626409521782063761432;
	weights[19] 	= 2.7231321919287592479676374343274502141975764234266857177930967183333884695580169201336256124837105055169e-6;

	nodes[20] 	= 14.496576722044162020156846318500104542058490037097549051367874300104254890654627786513141106281000636373657363224989558918078554;
	weights[20] 	= 7.19010842554843211764268951122962947707656543810257797923312077010604593761541526789814958989021028921e-7;

	nodes[21] 	= 15.954047053320536732347796548055354397095457916001672904843471840028765208434517031251247345355753962487200136871012945616523991;
	weights[21] 	= 1.760707236451310761543493055308384244262551517371159971132324384731138730239249520531216532364784185733e-7;

	nodes[22] 	= 17.485465124932241584023579676534712528543567944512092479820220915072850502094563747408907423927179479471612065178641016039649105;
	weights[22] 	= 3.99656703733386792382104464353178892507309618071953703997420039012325741939625486774069617930070201551e-8;

	nodes[23] 	= 19.091640693272578859533941430467785750155731183290785982803204415773684677283466833915295026125835812957402761014542516557611757;
	weights[23] 	= 8.4035869673670228879341511426992747812488426494055859694714956587967603514282182483869912713604862241e-9;

	nodes[24] 	= 20.773437420617853313180583322552184602014490797424294123788685876687940649233815998714123567929782598415087217482893314623086186;
	weights[24] 	= 1.6357475863147993666537795533352173667672690155310415082648203912834621886163290253759908110679707751e-9;

	nodes[25] 	= 22.531775774052008777717035028522885474850172351536345960552483617437229912584426445954754484598322946023921722137164239654620121;
	weights[25] 	= 2.945136786520704017238108686703669459251207280863829521635786883028631999324537878208530227511866412e-10;

	nodes[26] 	= 24.367636203713160302847753936136167178380942295180034218437718656488197553551716414311590398437183044644931327081285830587412083;
	weights[26] 	= 4.90075493022979389939871714382222485844749368581615872716710108269373116240684007860566995674641481e-11;

	nodes[27] 	= 26.282062629842010959534999180489667764342753068985043105808161367916476622963891170717696578265100791726134150757771868810034441;
	weights[27] 	= 7.5298484819439719295481047523773189415860938664664470260493785326182774959729770381293953902107809e-12;

	nodes[28] 	= 28.276166272161363037178867453695914061457307784639552085538469983130144335786154400964130477251125075638923705036609780035498951;
	weights[28] 	= 1.0671819926498559201839105975369980609675795572799941513168590048662651968537122477994608917624068e-12;

	nodes[29] 	= 30.351129859805052553283143732211402259560946980190115489739975860948445618233068408335262132984524495215210024893166023560151406;
	weights[29] 	= 1.3936308397172447904546261517637347946207691905122186710976653078189976725457620156182259545546185e-13;

	nodes[30] 	= 32.508212265462904744842735969071138140912502702183756592502257836304997037253764376166522913257813703163403348274939708420695299;
	weights[30] 	= 1.674963554839163673178172975115505840224654726125862198299184970105781910894342684539821773523679e-14;

	nodes[31] 	= 34.748753613760344656160072263394138688564542140772739819850801088800547304074947869114176944501469694568324038880343357454161319;
	weights[31] 	= 1.85039438382607270219442314973385520071275366915600836792068797814083771382822667430374883838316e-15;

	nodes[32] 	= 37.074180921323212503259734462340492709436622534745686117470607750674610713648697744844594063327994754307510406301091714044354065;
	weights[32] 	= 1.87645068783843133070438346481956943396760035848198939687997749041797394728889563290109091392311e-16;

	nodes[33] 	= 39.486014334705524356324646890675418318169199611947189476371008095274278886484513061517805460737027366319472090364277258534273685;
	weights[33] 	= 1.7441900145503954128757480026894751181474062594080658143575719326624232023194827631686375250201e-17;

	nodes[34] 	= 41.985874042645026079067364063119086335286812119212221848270536544640558666055302129697957205015042536669270379696205861739531296;
	weights[34] 	= 1.4837430695927525166700910385434477470355382578334538016790771731359816631599991810060314483174e-18;

	nodes[35] 	= 44.575487951285100981408722214363647777574252734889834150776276563142364522472803305127723728482793147057127163150318317522005637;
	weights[35] 	= 1.153208746827130032708910339085704102798759822375849421558121040882437032548008344887748767087e-19;

	nodes[36] 	= 47.256700225467194858088489113864082126646734018795277708892861289110231950506696857209898310035372323631103643110419253943329089;
	weights[36] 	= 8.17458350151581691493544934261361419477309705194820826662808034892692827634948247730006894848e-21;

	nodes[37] 	= 50.031480816460821575136832257329048173401216040394064502475969700251814548891143251610712178059137955011782131055120825901659102;
	weights[37] 	= 5.27472960094293735956026801368964934008767936602756167479207318496417286126161035996652547109e-22;

	nodes[38] 	= 52.901936117192101866976594909578907213440792553453685775505706715325614317942405851327934000334805334808941201662976783093526937;
	weights[38] 	= 3.0918598884660437865319168749785451108404762954794758617396088210889346829014170439071772014e-23;

	nodes[39] 	= 55.870320910955759628807386796917061824305886804049283544098792455817791631706814125330207333740011688565220256414212720883253181;
	weights[39] 	= 1.6427347033086933601759586766435317606482724889579354407967050907194827186425033643337536612e-24;

	nodes[40] 	= 58.939051809763276932672783799252113469807418886685977654848614531740656577855599196745460406075035278393838000442233002963817979;
	weights[40] 	= 7.8925116112918003405299815090924338980661339310779017237136456381837474508134965331381065242e-26;

	nodes[41] 	= 62.110722415185641316049497975801837335913144669916044843489654598215514236343225548048241336548947173306959740925722118766055158;
	weights[41] 	= 3.4202520071866030727356970103378880531612270465640191413005450335893104524714947625680683432e-27;

	nodes[42] 	= 65.388120479455996251980587942555323452497198591772607299898667980522283031664340757412843664231954224279752858069612663587776903;
	weights[42] 	= 1.3332342408172373052860038551591159483051540110343575128092374659521066537520614318801151679e-28;

	nodes[43] 	= 68.77424739985807618667797744941323247828937439223431983415579639071169090650893881561572820149814706638966522634242346396404487;
	weights[43] 	= 4.660986943081068281890633890572526353273096662712082153391302477522802389002559961783985422e-30;

	nodes[44] 	= 72.272340447847259832316861282267723013609878914767099685617001646975839278042853015876968929307891458120220390846811857471028083;
	weights[44] 	= 1.45675904947628462922972718715722305056432213833192915953576934727777068954710510730228376e-31;

	nodes[45] 	= 75.885898219620981872516447412175376947367186595219907843874743380809339301537219044928326265169662966001478462161686078242855719;
	weights[45] 	= 4.056375868587187803147048870470708921961750715444342283552997512406983960648914840457203093e-33;

	nodes[46] 	= 79.618709901862375917854312401998842097649975083949419498614212720373968808386125166466540448144018687211976450957190205226324936;
	weights[46] 	= 1.002549635414344641083349342697029961799978992129465044592308172093598249807765112916345524e-34;

	nodes[47] 	= 83.474889081661440267910736610894139943082674867931911614686628053614457628173650145446496545095213204318945881314705340476093041;
	weights[47] 	= 2.190419695937252890149973627996354734595951240564838433918691202285384899146144650116534827e-36;

	nodes[48] 	= 87.458913001994265713127097951437983525718055612905121929346836280210700017595407083353232236604877404209642398949067725021692976;
	weights[48] 	= 4.21194048364469856205973378364280945935760209529197078017987289498840736897842222669433905e-38;

	nodes[49] 	= 91.575668385643013901832760043232931540810573406914630903630276429749070314500896138611718745354628890731124421086855853613260668;
	weights[49] 	= 7.09371559858111184079625350118981354794928175239565350130428718010083384029108552800632133e-40;

	nodes[50] 	= 95.830505237649840975234711298553569982842763720969138267379903928583272715457166169800333619968106203044948079195995859162241956;
	weights[50] 	= 1.040892111355745540013182124613711941774544197599699322521671129059059400908323301639128275e-41;

	nodes[51] 	= 100.22930041244168680712867952090259588547940871837893717460264567349701712000097769676495680176487534728478584257683490816325395;
	weights[51] 	= 1.322985606808888547362606764797452760791197981053244166169931908974070467753737576309422193e-43;

	nodes[52] 	= 104.7785332292942448614782313630961865515830678434630263156790789125798698626775099613210663990203266687348895754358802317926137;
	weights[52] 	= 1.44723816035539362689929860820977813389957082051126848092136726336779114839968433440576334e-45;

	nodes[53] 	= 109.48537608556020592933426011588309135937512007512777457084559931605431625323733587649723542514022710396120440602401314187297855;
	weights[53] 	= 1.352946430371289188100503012504342921261642991371987599686997150238527157908130169009805811e-47;

	nodes[54] 	= 114.35780391894828790193680084702952728432269057529101281716610277946601008618639154854814449706117968625291310143605021713680192;
	weights[54] 	= 1.07238940702605360106494546998596341779061120631016912930981716246233249404262726498436289e-49;

	nodes[55] 	= 119.40472760826620388214422544263312029478448533523054279643805520576903425477755242323223717424239802608301950171987398763251459;
	weights[55] 	= 7.14380681770687142919188608311014536401192015165506718505804677801303210001825724713074657e-52;

	nodes[56] 	= 124.63615812680460543509177897243982124850490032552381122373869978948897650306893224685400000237322539228450296039505472329513613;
	weights[56] 	= 3.960174301157980026760226181290457033810859117732553141365967344349423563096898836945278936e-54;

	nodes[57] 	= 130.06341070400868728629400973410323123981208940054030608207395184157254599335508047726202077416790546250738613681660216865870434;
	weights[57] 	= 1.806547663979668755797988806395791646792804758848248998293079944330424102017250648509916948e-56;

	nodes[58] 	= 135.69936176866466412049502689018329811128908432329978690471061728718248267284011003645904383554850895255831355781489710840104031;
	weights[58] 	= 6.695907557468864165046598054094803373491557792205947420378838324052980486097031534194121683e-59;

	nodes[59] 	= 141.55877661502745741861055806713873194558777315564775940290932340019857926544183827840203747984825398645599324322296163900789832;
	weights[59] 	= 1.9872852328063157051458665689011392899457741355556035807041093778393708376397331808817690268e-61;

	nodes[60] 	= 147.6587334942415273328919772264233511685366222572189275445048332807378981877027404708538955099296690025436846045397629280571351;
	weights[60] 	= 4.6438495857042717125078262901889923284084305330992338582635641449824274825839116460680080607e-64;

	nodes[61] 	= 154.01918177673051284256539548665402352054659006813862807246407475333509103047354076188879042433057216516295739907870822118766352;
	weights[61] 	= 8.3774632217612078514433623695076948070908947168053642594115694592540592844328330779725053749e-67;

	nodes[62] 	= 160.66369072694408807342516183924170787171640996185357426254753980782185852461604253376411120078901336143883701682022451857136659;
	weights[62] 	= 1.13989986126046877647643891957424078496304442777352893349435016669438079897375097632377037085e-69;

	nodes[63] 	= 167.62047628606278112407118259838633157864449642646650829812070401696177249611397130430761174291476605330546103894849786388870253;
	weights[63] 	= 1.137788239532162517224577284429458380579990611711245493606335165406681038682498042104137834446e-72;

	nodes[64] 	= 174.92384550476035068019913543915327892903148592618894354008057349627916399547143771141188150612438894385998270832329345061810454;
	weights[64] 	= 8.05418236443138639034262852317755338543479077593954478039555976758633592266379548128294620264e-76;

	nodes[65] 	= 182.61629056711275759410120122902626640811860714083691464174480277217617257879758582135244162390485761423423548408650581113409093;
	weights[65] 	= 3.877815690357509171096214737732424678852095038995256797139294535115461217655463638455675048911e-79;

	nodes[66] 	= 190.75163576917130033529005714375627535832806867196713095836095674564029169027338793953689067770040548902259524455350741828258763;
	weights[66] 	= 1.2044309498186331612253832401004726743207004921157720883323487338737831676996231808258674860694e-82;

	nodes[67] 	= 199.39997891435431826558825809819969828403004704421074982843423805924746134632896043226875105916846128443839596824050893607429628;
	weights[67] 	= 2.25280305678908016391262953341846607197554927254205335188820713460566924563389096792838589331611e-86;

	nodes[68] 	= 208.65588645766711953596409637156581398891482587571890339623631462491092660060996129508295955192407048221111318806273940701763328;
	weights[68] 	= 2.312952025596464127915537442500763930720067678616033609253375199802050276925513611980434768776685e-90;

	nodes[69] 	= 218.65297444579532649336218686173239851107131437185672498397543956311507629952945062018683876517808094096555614449162426129291674;
	weights[69] 	= 1.1438622959667195012450043982653605706474315795517553913742120864551771356052736362691565462578382e-94;

	nodes[70] 	= 229.59240882047474828151766304827949791125503131445460024710531625146782942321257800528285685546247471949654868119573839205303114;
	weights[70] 	= 2.23960428504519875626560027572936685142991167336546632713666249937782948048244499164598451958740554e-99;

	nodes[71] 	= 241.80655567596820269661236461019787069563391680880752569203051174248538356384563085316991466319538146996822222504463215371047637;
	weights[71] 	= 1.257239337540964284431394915189179757854690091032489467807707550800670859722452035905079569131624529e-104;

	nodes[72] 	= 255.93386214590862483305971203114646712712084188287805068605289892434512930375808944635174560528193521428329776723058190452169441;
	weights[72] 	= 1.09309636791482268755924069828473838547169125467389029647516900288219026307290799128455309823908365723e-110;

	nodes[73] 	= 273.6257443167443255471919303514083208941099309103553396796633767130305464729750347238711601880463179108219083854656367683111588;
	weights[73] 	= 3.052929593345096823171817942917809989147803789712657194257205751461006902042404311581940479071227317469e-118;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_74_hpp__)*/
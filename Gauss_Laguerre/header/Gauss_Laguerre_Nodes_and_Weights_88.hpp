//
//        Gauss_Laguerre_Nodes_and_Weights_88.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 88.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_88_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_88_hpp__

void Gauss_Laguerre_Nodes_and_Weights_88(long double*& nodes, long double*& weights) {
	nodes	= new long double[88];
	weights	= new long double[88];

	nodes[0] 	= 0.01633684791117569176038508512096373006192431260538673714134237999005883064163759180335076552079282093436032188533887458373212845;
	weights[0] 	= 0.041246893776253290058753268608863358431510178107825479807487633802093992932767210446820822915045416828198774061850225082401395;

	nodes[1] 	= 0.08608353209143296390877975747514480263224787501956983842273157041700632692973224843296770825680686823558733708724094603335434185;
	weights[1] 	= 0.0895581601467248436143600262330790015811486376785482835550075106665071453546815983989347660019786735736426812690586434588077;

	nodes[2] 	= 0.21158624752743404278596631431225940416763626810465360297431825412139247066625739247169413372387179729492976606551056150160879835;
	weights[2] 	= 0.124150856942367930853584492978310788040856244163273528754862559883668706098158830390092090005522867605552244504398507589983;

	nodes[3] 	= 0.39291245092412652282920108231548247678326574871837101169298653404206933009643635549125647402124258828587728662535046326860660152;
	weights[3] 	= 0.1412668874924319956703578300241123675925072154114884322829616105676798289481207743559642865604166201437093587254493242612;

	nodes[4] 	= 0.63012283157124081694266697736138619005351845309450154601056429566805269493523560935285556558263065969441885120527348409775602248;
	weights[4] 	= 0.14121339827829699049286950948458898255877941125967525465432172300695630338721173175334071743459937878149615574737122799;

	nodes[5] 	= 0.92329326659200344658202528902416061652905620361821978866936989674902483533769344588778728243565126740808352878100937969149071414;
	weights[5] 	= 0.12757553823684489948478101171653468918179740507318455460467463078770625156004237573592217904940674755425139958460424241;

	nodes[6] 	= 1.2725170067497164631057797382913114457845990009999975744367550942050286965677562028612296139012858340203960829493757646252835736;
	weights[6] 	= 0.1056874713192304429634659526454071282756938737594677641446539171095200417753760006200383034964682268879139496809418188;

	nodes[7] 	= 1.6779052223894446154612686637181328271394747799439531539205007766328964312750764398699561121634590991498693800091702730399942952;
	weights[7] 	= 0.080964790381855182894370545428669218885058798365814720617975253634191311373327605381909849938161627220078849772973798;

	nodes[8] 	= 2.1395873008417729192362795840637721602065509830838033426788396334303363464676875150950318142602613982721730084812905159791007223;
	weights[8] 	= 0.0576601629862447501565781128450754997405916171163326423150049397381899134907055074399116036405736772001038111963345;

	nodes[9] 	= 2.6577111093646794724274355033201804331507318565179942684420873945300869489360186827977008733973521420980719089735005597576783686;
	weights[9] 	= 0.0383071937360424381967184229382864584965211437689277466675276171216157510714218459869710082385142919613565314118293;

	nodes[10] 	= 3.2324432718522364840333554210827248617505168327023698258973884695619886383464134668849336332047800019179268935647541454445920012;
	weights[10] 	= 0.023798776230674542542424022023629927138541159668139916646745152411368509682910951751627569557057957820112913722812;

	nodes[11] 	= 3.8639694737254089442288500180510139504679072517432392411829675303322217547241345679361929097120332067274588507791604588482742881;
	weights[11] 	= 0.01384958311028304924054316695992721742436234581994079928241132415421953860816578715261446929492465983644861734159;

	nodes[12] 	= 4.5524948007307914549105943150534680960490361541837917459129901122763683859794371216122007732875172067612801797439298124947881022;
	weights[12] 	= 0.0075588416367985316226131350007654228378958321682436231288660487347692205038025448673092322215560792424366123587;

	nodes[13] 	= 5.2982441148060932293043107631185207719504572856805270159853964217808921466997494593823113628500492336210632161360949248830154747;
	weights[13] 	= 0.003872490092917425511862445528602056580719326294153657065077528081466689436808338024333922343758537565971433475;

	nodes[14] 	= 6.10146246939186730909725621613744267253411563684163483542465372650211986584789976697905043127910001799503355728741996642835552;
	weights[14] 	= 0.001863427778237282392441973829333015793291832636475469493404417597103183069432130069533205709881549305855878819;

	nodes[15] 	= 6.9624155663939702385741325348816051883413836787187275729884322752552663236197399551837629212320971671563740241185416938060877325;
	weights[15] 	= 0.00084257684973306411221386437999150177752554474441103089731742526631434425420343476408512735996748877456314642;

	nodes[16] 	= 7.8813902570606460237725785741233864332315635280713733465056946396516842577055662099859281303390895080094228157164660803020525212;
	weights[16] 	= 0.0003580994583659223204931768922110260899186223632968986282517971511532682857502143215065581233318584235913886;

	nodes[17] 	= 8.8586950892039637552875604203780084749484319801733076878947885167301699516906034242318403421061040870088315510098650688972491023;
	weights[17] 	= 0.0001430754652449412756984368883590745997019051446694756250852194873290618763741866983682677264083772172757485;

	nodes[18] 	= 9.8946609034202152306201198280545418243736324421595548330993421523056155698978268171610000541551955032764381883757464129924246124;
	weights[18] 	= 0.000053742896613076727654004565530432926278246366098798183347790913199871947451007256866773800048122098786848;

	nodes[19] 	= 10.989641481229996233966285393580134357358454213540849686038423372733985755880736625162283337636034317120481182238067751752316157;
	weights[19] 	= 0.00001897850363952405210842288743115101984378897087413220942253432249722308831896826612525097945720796126816;

	nodes[20] 	= 12.144014248360129657160349858697125029950891545260276355339743459474201312046118637504381254190372607584516298045228727900623151;
	weights[20] 	= 6.3000928328422312313279227254781887736780704632879277164071690079096930704884908215103400046840241026e-6;

	nodes[21] 	= 13.358181036725668381980922159309199900870713937538713213922560502910761199137074681420315268001287181628483153655353022478288886;
	weights[21] 	= 1.96565494487110312597311975308791276488354691938262479746811228142346375996891437737432889627987616476e-6;

	nodes[22] 	= 14.632568909042894383025036559424413421889363893379023743147594177223442414252811507759127631019009989396394313515765432698755597;
	weights[22] 	= 5.7630073125224378561856621319413912178414185863228149099004701643816755613372463469644878166203937725e-7;

	nodes[23] 	= 15.967631050417014515131430683338999280427056035874257440416856302355771073738618784423190762147412435917255498358441986388923801;
	weights[23] 	= 1.58728823448876761863889559108249088068317264875415285948092860478534631661283610699275116067480849e-7;

	nodes[24] 	= 17.363847731705775689143890560787475721539916585946836970820837047938546912612542823559858498617941509392010930672345108847852133;
	weights[24] 	= 4.1057155238811314446708156481710206013458955271857866277576760818269185415906638033160538928117532e-8;

	nodes[25] 	= 18.821727349968103491714984278360114357636286189524332037245379503220023427439435646570503313520108225106649475477434266056876396;
	weights[25] 	= 9.9698734330925706317324757811943155476493687425621324954186081518378790776994836059886646571438795e-9;

	nodes[26] 	= 20.341807551871722176276914195462306137978216327078641962965263940490725483069196533175799375162962472406624818882271985647953872;
	weights[26] 	= 2.2718510304393628082441066327201881099669556764596374112992985350888487012535755228788849430836771e-9;

	nodes[27] 	= 21.924656446563231479366678723247180928035558653752302940497934481471646553941175183190094278772958495942970290646360759895573827;
	weights[27] 	= 4.855813937117849435797276600605099758388490652531570586076968126572934617213999287385608175944043e-10;

	nodes[28] 	= 23.570873915207206479548494841933264559309498819802565969331747997247865769829751563418656833635811736058314403328802086307544468;
	weights[28] 	= 9.73015893895412844370380700064736111521487458585513773610047662818366293131377711286209437556932e-11;

	nodes[29] 	= 25.28109302518786641555799535043665433460436773824150800036671979369825503603419222238372043917765057134877013339646927649628984;
	weights[29] 	= 1.82691576364034463519948611484357499290713497690625676592902933171631717912828255357329707438999e-11;

	nodes[30] 	= 27.05598155784968337241358169961871268624638755943789197211505888896015418321994219109122479214747215091166398464811062705056635;
	weights[30] 	= 3.2122102423306901522968531850222606766546343039899334885934270687946600014743581448910005497791e-12;

	nodes[31] 	= 28.896243659645855332611995326889236999954884989216829770446401103832382289333474983498392770999822158555662159073734080416073384;
	weights[31] 	= 5.285710434340964816708663084428482928271935623329866904179105666074362978784387916357800479673e-13;

	nodes[32] 	= 30.80262162768200711580246387722093358810766989111258750359372684927841364688211148265640234751495584226032095349362577285167381;
	weights[32] 	= 8.13437994812926872682029940088060585677729411295172536531073132802772226499038257219933132521e-14;

	nodes[33] 	= 32.775897841905656338079922532413581368639796718624427843043545347749940287825093884883659928468606611840988620332296663678456039;
	weights[33] 	= 1.16991701376703472133960221228727084722766151163359918292157933774916683542495524747292086041e-14;

	nodes[34] 	= 34.81689685762193753470693796459565436984997757318153755174226285623529363813854739804099912940496090015447720994788445531976516;
	weights[34] 	= 1.57131237050819916138737340760783465727729222498456864909034346224434688293442888687003502e-15;

	nodes[35] 	= 36.926487673638676141903048468921810186478740058046110974876418502883659467353655581852511887888883886658920131970697687701474531;
	weights[35] 	= 1.9692144959789155706556731429908870770050280864612005418255433746940541564829363375872647249e-16;

	nodes[36] 	= 39.105586193189563259471525222381746137575038804806763710335383984671291306787626655764055110975270197292026862257401730042856798;
	weights[36] 	= 2.300756471505430545504436919913143864904909815031404688323077844487931981788961097042524975e-17;

	nodes[37] 	= 41.355157896888787215889415099694034872665183343220392941414688297856242217009473527778172296389636840153355526609567728737539479;
	weights[37] 	= 2.50378208030599374682619857634894160882130019110677856390717567456089212175645703156871979e-18;

	nodes[38] 	= 43.676220749376493241612576215161680799612744996319828296684813812160284040859031608507543606132070987566365613731102128808710033;
	weights[38] 	= 2.53540694698282828184889360870154104543923955331180595007166075141391136584466787882643137e-19;

	nodes[39] 	= 46.069848364072276746742153002454391465077253132361471717599717264355653464066954877910107049973020559650191379061853688239137291;
	weights[39] 	= 2.3865790593865795089788598785354749810764685580073252851707233873376722928931876877437882e-20;

	nodes[40] 	= 48.537173453623604533757442001298748312150917245612451527051995560453251524529105887100822641147407210596763950468330726093784224;
	weights[40] 	= 2.085960312026735000205017439604102967510741199727941848481351189988944596069314068856733e-21;

	nodes[41] 	= 51.079391597289346379879349961382120098101297180796561230631375915803633019631333574953454988118773068072194661146332052235520143;
	weights[41] 	= 1.6909673273407364173932674176983275326040106474590215708007885989182495935411977608173075e-22;

	nodes[42] 	= 53.697765360721526815244074730051066218351031692603974678436854055234078606401817216890920453360544067539301030679361327749062426;
	weights[42] 	= 1.269785600712531134233860153851989596383014930348965718051569366306651146596186774410708e-23;

	nodes[43] 	= 56.393628808504536267196255389323790788740257695178849964584362692130877747435313740069449975414704616630622049029988133064866024;
	weights[43] 	= 8.82118499482912720388896298031300720220675586112646929994590507972801711208118383528851e-25;

	nodes[44] 	= 59.168392455505502065200669480580886920137616355826419923646686407247381576546013105956382442411623804263521646069359218362041644;
	weights[44] 	= 5.66143335746524770616744445132640504021983495433463729673258845484567100965219432484901e-26;

	nodes[45] 	= 62.023548709734103319831784073041303562042886993683370690479142150701826096411832662488691300821752402146901974367459846500257277;
	weights[45] 	= 3.35192552756798306455122569706990346095296043805014218493873355674558909132122296270141e-27;

	nodes[46] 	= 64.960677867189713422035658789381942882644249737847628332903840047881028232534366722153281118300538666119287784832923573023223531;
	weights[46] 	= 1.8279226670537214503441949226024221752104750866362760013721618052936317221154899669352e-28;

	nodes[47] 	= 67.981454728314561594016602788771290015916234674523348542298162713416724220046133707852824887931186621438606865932062676568982038;
	weights[47] 	= 9.166476531363523812430226703103293051301290817909243722788459229672333845064417359461e-30;

	nodes[48] 	= 71.087655916451584685620486970028340578003959516783408631137917547098805697689286222318680210749027872607913769953257293717546885;
	weights[48] 	= 4.219581827220678533210025033689244812973269305403121437666412026541511979667765824872e-31;

	nodes[49] 	= 74.281167991467992905208241341020904356970081707409478505043170259634989086215262287869277174737597934829358251177167559274443739;
	weights[49] 	= 1.779721668132402668734891238442708698394130509193517817841925887665635470390490355962e-32;

	nodes[50] 	= 77.563996466876142311296465159554024818455986427124861858836703029369181471172947647732196569776252425457992143171592584734939636;
	weights[50] 	= 6.864233455710945652648996047727566183024659053858053462181748739495629199137071852261e-34;

	nodes[51] 	= 80.938275856893219650375952891379895547790688828748561969067991218718397533836784616225508742431034595464984593047142755597781766;
	weights[51] 	= 2.415877217522410695304465713450456018387211119333114145981101434873220860413861059582e-35;

	nodes[52] 	= 84.406280901596544356153972004232508122563626907130313229297355641275164101347997497570362338477095379915980747634394165114235563;
	weights[52] 	= 7.74150295644314928272351505578277873969228490294350517344304419200570067461601848485e-37;

	nodes[53] 	= 87.970439144491980759569826598296839827847825985774296573731252870750747812873682262837754337657721025888521516869717500623446682;
	weights[53] 	= 2.25321112530386215131538403919124067815419897340545119605648437706123514661229126261e-38;

	nodes[54] 	= 91.633345068484796372009708016039638814904487140072751936492756666442337028385397759777845671947374282987647165726956516080417329;
	weights[54] 	= 5.94143001749165084573525232696816131112257094523786646838507437722325679251233224278e-40;

	nodes[55] 	= 95.397776034786066576327634965939277317003582871030643897909294391590442663136523628519145485178206311116217229205882241959636475;
	weights[55] 	= 1.41546725595395019714963778802115761977723334695067972053878061642651318227900397962e-41;

	nodes[56] 	= 99.266710316452439921804065837853936481633652719446634322948232073656021245147202621293894913016780488010864050164275577116216529;
	weights[56] 	= 3.03772779108782192425106241219867983984828913898819641863751701666049942849121005955e-43;

	nodes[57] 	= 103.24334757630667096031611673241282348912563252249770032289754186713665041555877455981276985082756288374229435809698730269532466;
	weights[57] 	= 5.8541376463025099454674366700674048926934075710813427335949669466339032896129054157e-45;

	nodes[58] 	= 107.33113221087308986386314512708809072655619135014736099012211099093538283302546700656764092107463891540377725504287758351047375;
	weights[58] 	= 1.0096278519055517922728147665023889224696759887886798458028652528572191799982280469e-46;

	nodes[59] 	= 111.53378007156652330004200886932725448665729052897113391071040004564946732538904294170931552840519292443379378448039474752212124;
	weights[59] 	= 1.55255233983575190606507393099835308693209467631425935613800901499395182737984975264e-48;

	nodes[60] 	= 115.85530918683826964019503551171076969907554362693562856242651713939454523065909355145902987583537536488664419200899781227260075;
	weights[60] 	= 2.12026282190369110352143471223106140769901220744328777835085589043116549848693151876e-50;

	nodes[61] 	= 120.3000752511863090893086314331160721735444247942906327396545994389426160091403054011608666904047481656375064513486044806494811;
	weights[61] 	= 2.56046121288336594275553479580846668738123635602788458522588715764538586786832976211e-52;

	nodes[62] 	= 124.87281282816394949967368608706719164242762809689253202811775737612139646060491971195505561790219366136215261117550893290047616;
	weights[62] 	= 2.72141748540374176143779342402689263419836352621834600241143435742134516415024491164e-54;

	nodes[63] 	= 129.5786834474338160451633872966172767349220902447326166616930957896329055099599536573493604849645837505982624238732331567511076;
	weights[63] 	= 2.53279634406183636301377875922384355095260968450743685765652460389478115970183642467e-56;

	nodes[64] 	= 134.42333207796863734845141717482134900645703014646152652669734739057095661474231025175374812613067355286060116022908058212614136;
	weights[64] 	= 2.05260416077929897346937979187731808351101142446023213768333588485050224127748428965e-58;

	nodes[65] 	= 139.41295385504317309011051660987056902201817679895828017114963544871628294148467255318909869861945499389180200429558333442762542;
	weights[65] 	= 1.43961086882654197211173757118141842876344829372103875041410838274942738700433913505e-60;

	nodes[66] 	= 144.55437346207705321966956586035391759087432464637967091067777011391148411320128237785011545610767554305297242120255547747284281;
	weights[66] 	= 8.67929744646995170401789643466266115230403734549807564819998779474759432962780453262e-63;

	nodes[67] 	= 149.85514026889647429187814868891397948309072875623525285709058484597458241046775344485576626144658758498206974514564575152550465;
	weights[67] 	= 4.4645408849528215527405224656758749747039037152084430414918970830696553115626338895e-65;

	nodes[68] 	= 155.32364327707831700371735043021203478185442316604669428466742625073525477675387385075358509185299026501706102458339206021864393;
	weights[68] 	= 1.943186534075775519091843537728647946521339928613655130310013835552791608701490276088e-67;

	nodes[69] 	= 160.96925122623370788762236602161092262240695206100502780199356924900228020663306609101695405640305055150438176174559803457803046;
	weights[69] 	= 7.09038450730671249892135232108339681509256990633269674722929043156723799700951049732e-70;

	nodes[70] 	= 166.80248503080600815578836096859043019088252016684941313278484440246767021357224238656290206206559889772467261078607167580692562;
	weights[70] 	= 2.146448815633308046968293661786966933317518305454224340840265969699428609359130232642e-72;

	nodes[71] 	= 172.83523228762846222745302023315375337691451114613516111232876054237543600618618253251030269089038229560397222715054689258758664;
	weights[71] 	= 5.327930487509541041293074165312768004101827151257621041163491721878572791546553620084e-75;

	nodes[72] 	= 179.08101729887848899091782564992496863293592672913294426289489109323590599325296972773111232544338812482288919124796298366916074;
	weights[72] 	= 1.0699763806495551460693869510425290256198225326708716474148011861823585957214173338555e-77;

	nodes[73] 	= 185.55534549873281948255574477667577577662554788972356206507068841117792023064306128694617387287035535956354308345369666290171884;
	weights[73] 	= 1.7120216714292267386670853199173375126443167307357926638537163730801918153785326632594e-80;

	nodes[74] 	= 192.27614934814496043636594170568487522726058006837789348042528354891002666693485952022542976398079880528758535765344245794703296;
	weights[74] 	= 2.14420672824869353334505769417548387639663137423964467544169303024752225396900163827359e-83;

	nodes[75] 	= 199.26437534684150563269711688324054491753768748472100372725867443958775790082456124852998013232182011891071255463400772299968903;
	weights[75] 	= 2.0590173899492016724913940283279639491094701949369194366277703184329149570070625127361e-86;

	nodes[76] 	= 206.54477172595043166995831460893535438879674106753314375971111638992121375805370381244640647288756234723948060830271714788203681;
	weights[76] 	= 1.479374132512498296035046351615216152716873172077797666856251182797771589036297572619753e-89;

	nodes[77] 	= 214.14696890869568562631249850720259351314591182962325278424415904113197084295890214376642288160908100402065834877084476157921754;
	weights[77] 	= 7.723682309697974310242485519177181308624721884733991645048802008526902056448465647347252e-93;

	nodes[78] 	= 222.10699991207330400748122442606534077372507337638613554001984266230899886385968373366625461515615621683037144736468541886716252;
	weights[78] 	= 2.8279475315753925308606371515858411255906773778136941001276839337535795067067904323713311e-96;

	nodes[79] 	= 230.46950519761593820210153258073444641174065953564830309433756107987322127955257679586941842435491290213306550421924437774534335;
	weights[79] 	= 6.9490115529478959115299518175701496414943123542103549884321229114896613403655241233676003e-100;

	nodes[80] 	= 239.29104729528961583030695126924856589910908929560030127609587851476969902949641413809801192693679091536165997224050272226831633;
	weights[80] 	= 1.083951622941061941073696818942583983852613054383027119828160754161150007806209967629988383e-103;

	nodes[81] 	= 248.64531723197808156615911402150800114009124717587357853652573570026032747293761528468094061483426640701221073893025789701423999;
	weights[81] 	= 9.98353922582945092740023888045308784210478464483709977025851275361466634899930299582526377e-108;

	nodes[82] 	= 258.6317723578957663231318663855174052847455750533707557726728518412573809332233304442228187453100221257449741206372859001833442;
	weights[82] 	= 4.9246201467662465790460343796483922348690605885660531230550456312450641752155131354427783441e-112;

	nodes[83] 	= 269.39101080665126928297511383034485347117705690374638819136461875090801922926035915464519459585714316682740909955298684843014703;
	weights[83] 	= 1.13369533722464027091081159494215604125238339315732277600674576875342478329208316373639042048e-116;

	nodes[84] 	= 281.13483509020180752725066454898866385777801821511644868456333791863010176053789943315847603079514453518912151380366608014567957;
	weights[84] 	= 9.90493655258103119896663394929956798916110843870887133449831520798446823489147139104123390261e-122;

	nodes[85] 	= 294.21342311031157933948312462171386648462092342038377316741870363063593782504202594754327627718029404550527046202862747435420995;
	weights[85] 	= 2.33638236773074126701461304724897619496297204914202087626497424642905365756241535830043203589315e-127;

	nodes[86] 	= 309.29997078007710036514467569984966841484472633952994817768605728013685165582292412762429479619113815947724281358156395770779612;
	weights[86] 	= 7.762324714729386895201325453230262601304511188312102939960393135796172927499535938717248790142626e-134;

	nodes[87] 	= 328.13744042347875733140219434150996925183533260485225208097531840335204854105670304675673304665722555747112203479937165945092105;
	weights[87] 	= 6.87336615731770688625019251871268343211285662325233180243252529294726889505958625354681395297571575e-142;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_88_hpp__)*/
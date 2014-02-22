//
//        Gauss_Laguerre_Nodes_and_Weights_104.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 104.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_104_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_104_hpp__

void Gauss_Laguerre_Nodes_and_Weights_104(long double*& nodes, long double*& weights) {
	nodes	= new long double[104];
	weights	= new long double[104];

	nodes[0] 	= 0.013835472974563349333131519252482299435607761038189953788580861544164944786796153429116976228213943883261879678314376045732695286;
	weights[0] 	= 0.035018814259450915485572593235191323634846061076267953475154475152712850175347422950161745079332294004893719171534903061368132;

	nodes[1] 	= 0.07290171681915675262507576296116373201054322481851299843060438197225487976577162914098688921764261805513529487461480066831532679;
	weights[1] 	= 0.0768489030899662844657144964431644719604892380902062294757186077355960850835469776999846869581101604922198839338393837818673;

	nodes[2] 	= 0.17918043802045900719153097713704382045034098741606175330023673790173925903214387458478890877121739450517242151496715394423113044;
	weights[2] 	= 0.108593056521553054916715571442633782906994133201592997245787494513101584431032491793605645568392408169692081131180773127369;

	nodes[3] 	= 0.33271927288130767331453382009988249360328369778615145768599421010585414473809018639054756542805932809470419342687316014949583506;
	weights[3] 	= 0.1270336004573658209173998847863440669493783916235316005296613954708340457133424957640504607632715698636022778588666620009;

	nodes[4] 	= 0.53355587014223375595763107001889043755993484458424939376363545507305805532519885238294711138531183330896906302008026174383480448;
	weights[4] 	= 0.131672794539549215238605594063845234469051307363512313822877576299526087287145345720676232710458942490602178587311786401;

	nodes[5] 	= 0.78173644361734895925155353573336573090581238466772722208492827421479451551486728795101740055775890352717880383939322603663875794;
	weights[5] 	= 0.1244108655648430800187059506321306079837780293720570089871621190553579169335313709241087718451017180505253830625264101;

	nodes[6] 	= 1.0773175692094822693105113543772977639231018288891265776483926857179606497613940685791416990176818227329384560192094833723929568;
	weights[6] 	= 0.1087251064426381586857867231379991498419221075564318667243143601360420616943959357591222432918162133644270683140307754;

	nodes[7] 	= 1.420366579818909106496495549656733575761846792900533470083018364097062886048609612522256707063441908890052287404804574932281154;
	weights[7] 	= 0.088630168805969559819074041815526877548353328232542589258399722897821555204276008331615629705376377763634685870981444;

	nodes[8] 	= 1.8109617360789940779605974789455063565914890564990557544804166437833196617144166303957800399740183877481975758313529886879748309;
	weights[8] 	= 0.0677526039112818947729592157619583786152780159666732371213672087610210230277748514094652872530093830177416633743148;

	nodes[9] 	= 2.2491923537669356517875541992600395006428779111707092109008507213797464130447971834530102366003599581573055620564968405489343859;
	weights[9] 	= 0.048742320126359325983836677804089712670831787508741505613245278716115390475840135029725446709581657828743467692096;

	nodes[10] 	= 2.7351589281998437586615250779102915078282438450718580225706644538907907415862997902494097663158820133625138885177491077586761599;
	weights[10] 	= 0.03308230588131635484149072634160529556416039502349906367281836153808413454410928224603031442873019077285916083115;

	nodes[11] 	= 3.2689732672021809967986383113909163807001248367433668572729340759428602192627976252721546289131702469627477439147028035014689244;
	weights[11] 	= 0.0212209391353390772919651799521893669210965037920558838239675165405230768991005590842471042013650761934547156472;

	nodes[12] 	= 3.8507586367779371146974794358765355228205116712320944768272320719896756308229431380583140366577682491494638355330528638751782163;
	weights[12] 	= 0.012881804437248771400360513413460277807734942715379913609756784751772115546024268027551491776661308969610234654;

	nodes[13] 	= 4.4806499213464603503391505711972779855115304422618584321323936269643048687391412235604474453543818031089122777942578702445426742;
	weights[13] 	= 0.007407147525992929555835049503543243178642601432269267057057079461421939312764516925088096272237392420467324013;

	nodes[14] 	= 5.1587937996325575635479700377830317771962639631344653246265302570088412878151624805882441289965285671554004032140557861275594329;
	weights[14] 	= 0.00403738928433948272931644072954879731946380820494597821679413623645575075154231163059844587555021641523500401;

	nodes[15] 	= 5.8853489370358941930032330697915433991738662049832069586199253134676204051862270534759047492141851786465808010981271454387356431;
	weights[15] 	= 0.0020871773472652878576598658728411571399980209777305865569385657841036192957635558940700046326216037693481783;

	nodes[16] 	= 6.6604861952273061607815295501031873747614594845983213288676601218197302292423162614577954679917318775357777906026553430214813258;
	weights[16] 	= 0.001023763748759617023432365769541428283316826539876106815302902014567168772146715036630800790335587076977347;

	nodes[17] 	= 7.4843888597205137309498763407120718939224986675769845621179297012326350263502470857681748912095746155009435732591405885503370169;
	weights[17] 	= 0.000476591273576742575463997980148152969785986168905860067152016163218768816803085921386955741083615853599075;

	nodes[18] 	= 8.3572528862051149405648671344827337433794386714617340529346647521406170141185107575786821291013465973336199562621326890152784443;
	weights[18] 	= 0.00021061226718402790919570928725257659768723110088885596689323645243927570843542143043223119775893814851709;

	nodes[19] 	= 9.2792871664836881824426416911763999092463520793058663594451069024412290309348463435931182153522818273959820919068994840168118506;
	weights[19] 	= 0.0000883620220108551740005802695923755468437670839135094237644844517467145535097429761407770262778131749155;

	nodes[20] 	= 10.250713814925214620211955617683064750364255772779871771246365880573659674160674766617211782648075060787516486803330138393203268;
	weights[20] 	= 0.0000351980168925921609317101699453711707410784655027040627184890603120183843864189651448890950494865921804;

	nodes[21] 	= 11.27176847642586334448691077209078885972341822961637547108806505680990932829033383858618350321893082325223458006023218741742122;
	weights[21] 	= 0.000013312031894512048167960383147694227143452373351430732516869595647310850196212918084204124227829197258;

	nodes[22] 	= 12.342700656955373326491098620081186246230088425394871951910429844780537550839755374028463081243945985935025772233172077342015918;
	weights[22] 	= 4.779989944356848640821640684352787871000291615472352209813470988307292084666119246340493937944807945e-6;

	nodes[23] 	= 13.46377407786264547869169076330290351699039671499463637932935851457418159641190460243110656999855859147849337879808219423312725;
	weights[23] 	= 1.62941269796034094500212502597413989047443341905393521718408675633306875465434729058497695939423439e-6;

	nodes[24] 	= 14.635267055218048434568732615999221966592285112775824282480485888426431381252225248336566509339730377210346804840458723545134569;
	weights[24] 	= 5.2723664460237158118655604986617397984342334479728016313577593958228915698316928184191412119068042e-7;

	nodes[25] 	= 15.857472905582964883060712663873576686357558398272100812530086125865951179232414553442747924905543854442562504413171656581951503;
	weights[25] 	= 1.619140841985281936303780280951147030006313145415842625536179591078376196628676204051279201970825e-7;

	nodes[26] 	= 17.13070037972009370298989716847023965239804705245161782949519956183550499819159005885380291326951726269112013563531329068189587;
	weights[26] 	= 4.71833456125011892643797091918937061678757321291026141395785368557038387552163777841397554697065e-8;

	nodes[27] 	= 18.455274125891982023543609006282335929012755788080776426101288881770688819342028588451358480931627879682758244084305668520059851;
	weights[27] 	= 1.3044444317663194995102675040273271869150545163229194151948360777667562337298435111976386493849e-8;

	nodes[28] 	= 19.831535184541357804259589003140613292058608803453931526029005612662668708237341332946098463073164897517958087303015102833246562;
	weights[28] 	= 3.420508416527372165926771579715031543956256250805079915134302203895435711927469630308745641679e-9;

	nodes[29] 	= 21.259841516306399888493040521123089053971298123678660856832843230120614556676932071035182763733888751451132231827922086515833669;
	weights[29] 	= 8.50487088101692085009150059028193607996343855065732738320500954958438349194600376498260119279e-10;

	nodes[30] 	= 22.740568565498628657334542191808293035415986887148008195961768252651532909618262472400492995098086900156645861941869031936028809;
	weights[30] 	= 2.00460648110431265660643399989395402665271437535501179163249823515766668363462160012300322256e-10;

	nodes[31] 	= 24.274109861362332890351396774769064915927323006155819430090277764270980264430496292608919418510444559157669766332657404072366322;
	weights[31] 	= 4.477505054334034223309367818735265510569112697527528287142923361052016277394834007632523786e-11;

	nodes[32] 	= 25.860877659644294777920031079404240850163741066061149829433886617691090099268141351150901685522650600816991073383473977253927564;
	weights[32] 	= 9.474117626350766503583057265118157577320811963330381037416612808450551218196090908402299071e-12;

	nodes[33] 	= 27.501303627233213643325630903403139266397624152453424751149320772918079559412835103747584381098490623689280210452724434795290819;
	weights[33] 	= 1.898350550402694634648192547477476257249924834399856067162364748284828301451419265248848558e-12;

	nodes[34] 	= 29.195839572882124516128887937400180181360765391174020498739722360184799420051313024458704868850939041727048515928103980241538757;
	weights[34] 	= 3.60061963222406923564898192647384008164215827451998663961155165458860382481422370975247641e-13;

	nodes[35] 	= 30.944958227307052881787688260574170002316154474075577914210289495133603535757744885924786158927560962941670628960583811985695584;
	weights[35] 	= 6.4618735021822492777489462926427917696812276428005879692504089979478013061911624330492387e-14;

	nodes[36] 	= 32.749154076264311089273400744089656288887393151599870986257170298603392398646726967290436801890428349052253691563056869895090399;
	weights[36] 	= 1.0967964081148613861119722026101168110023315756718575108831459152709234714553189402304035e-14;

	nodes[37] 	= 34.608944250550828280665785839369731288404298014774216321316095274548578724957900479957631462096254836021853717341038213418847645;
	weights[37] 	= 1.75984551980735963755949253267861564517997897079407210903377231178103094574632016814495e-15;

	nodes[38] 	= 36.52486947725081837475859401867443847119095597943278207536761591830113714302704051690613586275145141932786493902042970404557562;
	weights[38] 	= 2.66800723480655582856676625940848654321752170601870854285535593314732048628519427062882e-16;

	nodes[39] 	= 38.497495096972612971078579219315472127534960219289842620859804281709636564375927728721333572094448130578851051588313768677658239;
	weights[39] 	= 3.81974554478781721265762239001355298301141057295775171361470732777605275609726636947824e-17;

	nodes[40] 	= 40.527412152286973014263450332046347207893629041204908001328176528744844931352010267268392125295521917798104083418176517285281771;
	weights[40] 	= 5.1614962636978402155252200868860086041948148033699149016039388992944755170731182786395e-18;

	nodes[41] 	= 42.615238553098779911449303125270678695528645889539995960085562743921484521618713006234471115907623835478041199444022917098545354;
	weights[41] 	= 6.578951427493116782665544517495768464473849899467289492375878590946557215045607928223e-19;

	nodes[42] 	= 44.761620325264737322438447710737579155834698940114062655578784674204871781411157414582033243360454807579051590712085219419664414;
	weights[42] 	= 7.90515973356137048684997433330726880643286418825616706127197371389931624262087694057e-20;

	nodes[43] 	= 46.967232949418693203690529647727576543525009549404199906625026964552010572526505812743605994974593453025802811603318259514179756;
	weights[43] 	= 8.94863861521308967306630886726223140656865664389632987888090759158654535262266968831e-21;

	nodes[44] 	= 49.232782797692762504998132666488444891721745364445033401607741609067955599841931163022043807117106766465014503678486321694876877;
	weights[44] 	= 9.5367622299511439592867988921613460819119950535511704445812832322920872961768550189e-22;

	nodes[45] 	= 51.559008676837393497563519371719422545672999169045468443758002447450854380302643847780908343967430183886246820303615004440647305;
	weights[45] 	= 9.5616577869662880531448805381690578035413251436866186284653080020909291550097151784e-23;

	nodes[46] 	= 53.946683487159384543526186444254240495371495407493089766765883058277477599653637327237542143208133735436287747180015887463017746;
	weights[46] 	= 9.012160251636693867489690688598082263621166513407188163759088778857708458131397205e-24;

	nodes[47] 	= 56.396616007728148466013623330004683480520136064702150776381567063527985096871634466799710654006623796334334359349101926916028616;
	weights[47] 	= 7.978976795832446762943984631941478288651033872053323848152078762600349621552621728e-25;

	nodes[48] 	= 58.909652819464146155772036430463473405359269115762856774478402928660870195713529414428381950903487736338685690492885978579049054;
	weights[48] 	= 6.63025651305255962690040072720328842545006291699174107465792461398998942185308774e-26;

	nodes[49] 	= 61.486680379039100637481748233295712016731758645341921173486052998386203065226530479303301343142283347650647189980118483823021909;
	weights[49] 	= 5.16657589701847035642842632866838960608412354467655886092548848946496244994656412e-27;

	nodes[50] 	= 64.128627258008444129624738729704817280721550438667957014588912761235020356329822009786997145937631345649646742249476464399145956;
	weights[50] 	= 3.77198991318872319262799267043878977224617007704840246547716820678880052905915383e-28;

	nodes[51] 	= 66.836466563289530336746148559551811836596897035307047641230648884908113162895235683826921790903202517578456583979838395851953575;
	weights[51] 	= 2.5776246348238806215291460121794383096843761701662791776414641319245792725313627e-29;

	nodes[52] 	= 69.611218557026331858008697995050986736938762149691962067515070216286208596781861963280966760180702553035047684209344914232639095;
	weights[52] 	= 1.6470839229442608741681001083987173442287837436136427716210565509930068728728667e-30;

	nodes[53] 	= 72.453953496080244803440593686890789931731548960778574600706540357941853803464405749089116819712534254754013524878928629396628922;
	weights[53] 	= 9.831101922697186691112919247844450771509731344497457494406411547769909128767163e-32;

	nodes[54] 	= 75.365794713901750424547593256724648623621923459931492142481493065968532398355710084700090224448197320087918122979031356827290371;
	weights[54] 	= 5.475191928533607604421095770623333401730865961851531400720776853972904062769389e-33;

	nodes[55] 	= 78.347921970421885187082206602141414800416404431992545589448556547077802557202355184139930464387732566346665508240636229742142956;
	weights[55] 	= 2.841860576777461112106879670810529674383537508299702487312261940734858880972496e-34;

	nodes[56] 	= 81.401575098918698407792749372157199693865684144441048103927836086413211135121298915036220869716135703928539751173737194562332338;
	weights[56] 	= 1.373035703336877649167974457779407123166999502198543927867015107448228633768723e-35;

	nodes[57] 	= 84.528057982637371898925711082303154754770044923743992177911276648098947571691586652832168388488428637371377618810097821336345331;
	weights[57] 	= 6.16705747623877127924834370483075833985964491883075289875226305181300418663194e-37;

	nodes[58] 	= 87.728742898363685585364572276222694887777564149455741171174575264145433906174348506937336401752782209235007016117638476778362891;
	weights[58] 	= 2.57159727500669771545298230332399056338463561437333595171579834712545979623644e-38;

	nodes[59] 	= 91.005075269277677017981837768646469029488876201682567306066483778336556560846183676574375043399336878710460369527909648289759079;
	weights[59] 	= 9.9411495768581020863281520982001345397159146879794104059399660960944916442458e-40;

	nodes[60] 	= 94.358578875378942369013818470681527960684009349692548726040086167816530457492498267093728139929486526424879747200674396810015527;
	weights[60] 	= 3.5573354392987212669244216963606091501113133047525333051832735372321915208615e-41;

	nodes[61] 	= 97.790861576736332591729137879657532556889682051439762079629442641441178284217735768551332080684904697064374808192259090047657491;
	weights[61] 	= 1.17645949562239338003521848583112938319284974493371487306701622344340233395418e-42;

	nodes[62] 	= 101.30362161296683875860908293507248728347671063364308603130648274859280816264248433042047642997559708421896880788056418984368443;
	weights[62] 	= 3.5897425455563308905619075141007950215182720605934879919085829783088661783004e-44;

	nodes[63] 	= 104.89865455192862667703288243646406426264853043316697949613536994714699776607471102801790787619595064880452234962487564688196715;
	weights[63] 	= 1.0088157212762203185188247688193863514335024466835305368033136997518074473583e-45;

	nodes[64] 	= 108.57786097191323117303488240833968269909901375062074708731853066216650450534125328712834970513815304324763443334091384675008089;
	weights[64] 	= 2.6061847292482896770047090892439793023044703154886800110812835272660760422772e-47;

	nodes[65] 	= 112.3432549750021250843965596315473667614299193690817169413224988390887105633266332845159078492025279710211139086267799317036843;
	weights[65] 	= 6.17698934840346239490843057200588623549583369714233101025232895810853627108e-49;

	nodes[66] 	= 116.19697364516030708281859849046778889140691440139871083133892754233838176213423141239729974714187893607796919299727914895287961;
	weights[66] 	= 1.3403157675066069269120488677088689945707504661226742541038419612244697063243e-50;

	nodes[67] 	= 120.14128758363186431934228174307687503529947967323661674368248636166468468070867013243142722748838032156935835539382796495117714;
	weights[67] 	= 2.65655391681944976904223850296937438651556720694988354131068489001341609996e-52;

	nodes[68] 	= 124.17861267697904608296226983892550808921407820290074840186100421991143358406284970617808115330996843738927119763619246764998479;
	weights[68] 	= 4.798121461874734644824854925489032603253361427427364011619825509726421442598e-54;

	nodes[69] 	= 128.31152328054937765902295914168467743714889554234935438748249275133241874401088081992963035827860124280481755816868798800774852;
	weights[69] 	= 7.876918951515905155684786282964593025691448540147113373248005686064224862881e-56;

	nodes[70] 	= 132.54276703338409865894943772487149982576119195983560126075357890268221433602418900331936709215295322713102321403133034430986834;
	weights[70] 	= 1.172170282474017521060779701469807268796710556453130925206731345574829875614e-57;

	nodes[71] 	= 136.87528156102505822687625320629779232490396297812937702448247822993531592671201598544110884173525088885831548871567773380120447;
	weights[71] 	= 1.576554240993402231945350561465772365744017797361293434227049452067087046663e-59;

	nodes[72] 	= 141.31221337217348735315967352622542273196762010901745181057424249253750533213653357182237478221198558179885101151567187708520308;
	weights[72] 	= 1.910537705545954596202296316613625496837857056529918033944359164640314883084e-61;

	nodes[73] 	= 145.85693931608129569943513688115111544453347217333519790863044519732294436458264257735349831367118112905223432276465506482554649;
	weights[73] 	= 2.079103427749110758049443736346511802937975567497798300676539379903805063205e-63;

	nodes[74] 	= 150.51309104301573372659155490698360661789026143229598296945200163733755279182709693338578229868639468733913097520877137684305722;
	weights[74] 	= 2.024444362779280980765910752999293622059389713668692072419329787025258959175e-65;

	nodes[75] 	= 155.28458300420908200238689227574257935234308759542063318897063926237944747017395595927687149794942965857777469138058056456164042;
	weights[75] 	= 1.756946381303729829573966424485577554109527925461245469737928944944109045203e-67;

	nodes[76] 	= 160.17564464579166289306840441130194034316093662914237666250140376027847411560139320804346628901747826014201977336679839137646792;
	weights[76] 	= 1.353355990327569041717039528266836682487763503558833860714812659938457620594e-69;

	nodes[77] 	= 165.19085760053785203233054781807570348459227027992825675296139867797413526102136611690902201931314267727055431629507271858474473;
	weights[77] 	= 9.210703348093260168703477653637467517348782338831132794577471748058527901064e-72;

	nodes[78] 	= 170.33519887159104886534677076275153147425668716181707635780264448244849573107251102021467102263594370274535521870551884421174931;
	weights[78] 	= 5.511335919415902770307729694603063992677721405830398244641871109544785179895e-74;

	nodes[79] 	= 175.61409124698654186157618841781058776682177698630583798015030405392946889676998034346427571143098155664515297384933951183237421;
	weights[79] 	= 2.8838231392150113113921338239983758906204718418386093645410916199746415009681e-76;

	nodes[80] 	= 181.0334625011145982768772530036600488304666051582277442761498394876669715989257758949046708953998482683059591900866730540297097;
	weights[80] 	= 1.3118225486870102586956803734735794393759835707721041269410454845715214086716e-78;

	nodes[81] 	= 186.59981535486127867061787370306359372139319953488681510675535695370117258625988332674398452378801882635801197636086883162950596;
	weights[81] 	= 5.1543762718993772094981145535026929324385687278106919340187692346671159998241e-81;

	nodes[82] 	= 192.32031071619207933486577915979598468861442635216294267814365755040238706314032757482966647319661506617720758067773673286209607;
	weights[82] 	= 1.7369550629400467305935029490383851275615968382629970401375185232474291311075e-83;

	nodes[83] 	= 198.20286745917295200245183407257543149316158454673697671623561309901733906526180366706247014459945540123821593886702555647193326;
	weights[83] 	= 4.9808519335613937938372730037812961541496177353252025409358847591824044009524e-86;

	nodes[84] 	= 204.25628299706122695935347323752706759565609990519037094897004306002123654445612993778133783609726606535578148657645754995030966;
	weights[84] 	= 1.20485562066133932195117805705420158253421603781837741107431613976849057081894e-88;

	nodes[85] 	= 210.4903802751477209656085470415620855139363500715980109386915667616118666706510636315665611611887848104685990879801322137894195;
	weights[85] 	= 2.43475953820258413310176349742309573147127345942388620540625918196835766883635e-91;

	nodes[86] 	= 216.91618871818470246318367368882805109171331991773895160108878982995318323370694810689109177927783473411687767141267179237456974;
	weights[86] 	= 4.06557834923379401247815291989405194703686130490333462344233785556578717697795e-94;

	nodes[87] 	= 223.54616937060362526183448607052642048464427698370132843685663287579905562422643038773644578396013198410141171351721481981320242;
	weights[87] 	= 5.540832970294631933258650567123553709915859842677931905365176288688844573381274e-97;

	nodes[88] 	= 230.39449836394963812798837252263934773427551882105517173215353840807114637928190148279900442982954018914348736955927682979102205;
	weights[88] 	= 6.077430922648963931340101460062798937785446283301430583609742015164647382222626e-100;

	nodes[89] 	= 237.4774285724410357050667238615044122474635545572490103143615607753015726364702765695747260850542440208959316243770516750796988;
	weights[89] 	= 5.2792585447739759077330600023124835443021550070867351615745081508047994794472174e-103;

	nodes[90] 	= 244.81375791985612874317067223512214373780604038179579090000922790192735816431888734186549174337305230374385258786581592162715674;
	weights[90] 	= 3.5649976384859745834277707502328141819047968374182818371507932889954516551404142e-106;

	nodes[91] 	= 252.42544604381003107813238063354247348133257064008122167707159559204478768062175097192656768106401968088172136776694337227375225;
	weights[91] 	= 1.83126415140759371106521252941505360482797671673815357619908447520698902998043556e-109;

	nodes[92] 	= 260.33844198292071117609282011697033084871911236575732428789410889000749898370005025086365217895223907715227986170169665473037868;
	weights[92] 	= 6.9745089459343232846089081519986989143308569557254060603762858014467148525448534e-113;

	nodes[93] 	= 268.58381978929570586227497573000912378011689825235555183100541723245604967352436989394678216159621589132863851108686506001360776;
	weights[93] 	= 1.9099503566411548612363338228265346104236411209652319518463491331470879705778563888e-116;

	nodes[94] 	= 277.1993769658778996946137285196239437495779637263728281031907742749896897181418091729553663812297938623625868887828205894411964;
	weights[94] 	= 3.6230984311559457934974879357057551225947262418442029543155614486050511137418925091e-120;

	nodes[95] 	= 286.23195312728981636208250800878643492467085704905855549394274846029000461617512662910024812661104268011853946727363023281223832;
	weights[95] 	= 4.54605321504008839923279324845525227674620367151734898763048909618919364716697577767e-124;

	nodes[96] 	= 295.74091672823761364525032520442394108847416407473397920895892186849660375065250837659849982099090057028730188410670526071172824;
	weights[96] 	= 3.558723468726426323455115724418374873011949222712212795958161338382937464054599831397e-128;

	nodes[97] 	= 305.80364348265804094103668839223006881545084037531245186083586821940855868867196276284650765278485918223948232452752375188437598;
	weights[97] 	= 1.610675905840561741694089650939046500174724159564952925359160663959210179617686130791e-132;

	nodes[98] 	= 316.52460832812245009822614088101078864258780077605231831162027095142122725376663526200138924933873069838498009098800599920867434;
	weights[98] 	= 3.80380670740442969254697911150604345913904181692503928794975091550190036976215811271813e-137;

	nodes[99] 	= 328.05157362370879173100716370431097448914081638558541844392898940669203733616223880262707014611329595709449718241645468122604776;
	weights[99] 	= 4.055358588832503470443976699066569611493064301293810848359721465982004020763261591278453e-142;

	nodes[100] 	= 340.60725519995479918882978039053032002809916806936052349314582258341437637780686933507168365591176709451374149923081894950806124;
	weights[100] 	= 1.56995790055680901703449741410411284401820593034007910702602735288072045661635974917852181e-147;

	nodes[101] 	= 354.56010071347991453987557685575051091876065810942450483353762593749113103768296617245409269152093788068729827073490134319793978;
	weights[101] 	= 1.541522798540857850656254945529120254202247258645859312483177167793892047611442252061908347e-153;

	nodes[102] 	= 370.61892922756218895517959491875404344747309535385501108701163596968514469782077343226132072700035752103645528739140979131064267;
	weights[102] 	= 1.93255950112727948860518512862337871020464770799304865189960973590986665339195691997073978688e-160;

	nodes[103] 	= 390.62047847798170900754716830999922070212489167639906630288656145847692181328661013776478741160661840616033429120722771951527233;
	weights[103] 	= 5.3284993822242782395414211964113298662976761311387054538003830962287908695101935183178802071431e-169;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_104_hpp__)*/
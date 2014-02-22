//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_123.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 123.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_123_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_123_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_123(long double*& nodes, long double*& weights) {
	nodes	= new long double[123];
	weights	= new long double[123];

	nodes[0] 	= 0.99967907529643052120766090081274909339885709292458895676765054827555319898244607899137492225156827683034318191330780093624942873;
	weights[0] 	= 0.000016258917912724524944558220546060861146287185819863356090744397321072978146136820429408262249179345334975934655797755385073467997;

	nodes[1] 	= 0.99871650717105280714631143675951404574748850709489684182620990194905934010548723944121556589615486138903525817752386052544124697;
	weights[1] 	= 0.00006499393524180325380110950375486464887894754395050298808555990019149289168064808357241624417528128442786486648275630118231175849;

	nodes[2] 	= 0.99711291344764746235951469126378858015017108075659323561238131092307087588089915011335725166008080983546936698695964526317181498;
	weights[2] 	= 0.00014607994989671520712070738587577697057723847967320448921897379682499166174959085096868186246477697013859223207596123523266008002;

	nodes[3] 	= 0.99486932339189514632135330988371949300396522229124421086696361681437929431576825978651789553423325255135901751577275639872226897;
	weights[3] 	= 0.00025930881524078541194200708013663052447590262378872699927385302952537233392625611556243082665287906878249001052490050325832899014;

	nodes[4] 	= 0.99198717705074300651667041845758380950462774108632676018612612740515493593574160817881916863178878412995614184965375031031258363;
	weights[4] 	= 0.00040438987440061598540040499234223083006733511163612541125005933489884124576104174772033796911085777732557836408767300221563093;

	nodes[5] 	= 0.98846832432811139916219068940315377492098000323048479480341026677470683616403416896494127591134895751543510332436577715183283358;
	weights[5] 	= 0.0005809507063781115155175596423630079373033326600328727467269949341241407262887143247366105551980649417849594968626867294019061699;

	nodes[6] 	= 0.98431502379753415466184922756379311101203082123477717863998814709838813659753244278904755993190703131781850419059068370680048773;
	weights[6] 	= 0.0007885380820498398708362753963696733401403976632715306915952820489346915086880263239769360654024626675301148659312649074061159527;

	nodes[7] 	= 0.97952994125249449393800644281177072429142234254752196182696634610768398404542542476125059373420481368883782200813075965619251934;
	weights[7] 	= 0.001026619127599691790746216191296567038920961667870748665087382517365579839244072420696696008343556055614821283036309249899736394;

	nodes[8] 	= 0.97411614799538706167120235934688319675195043761073584356130759734072605326071740405914084707385876818399555045118668391877565693;
	weights[8] 	= 0.0012945826923983243054061621062113642310703609119490753310327169803928368144921712872549256013402097875918824659592270436872541577;

	nodes[9] 	= 0.96807711886620430515300767280129074283476515184750303544712414513007634054724812789019242897702088084065519955418315374412755047;
	weights[9] 	= 0.0015917409178180610722753134963076043699708598592014404225009523712346981969436008981420861015445003219299399861893450284733521654;

	nodes[10] 	= 0.96141673001221248523098980433874241136652640834234934674798109472329083214104328725574012817968489311208312569985588782831578556;
	weights[10] 	= 0.0019173310029561242801987567342953142327377130590799450415870905282300909117176875918824903703021117692433470689674762342375683294;

	nodes[11] 	= 0.9541392564000488514758967202113007469136420247869636129857635670002195268600426906873568024339496818233148730456570348367550484;
	weights[11] 	= 0.0022705171627336119089383817471306489719641200360018223807384596678548644979485363406331480738812191879480442463851499221403875213;

	nodes[12] 	= 0.9462493690718368405241967976805762668189061420321807959222755199565133675842458586790980060553468958352268475753099973066337561;
	weights[12] 	= 0.0026503927733438083527863705773290229333104588840247935685370965998705586009990986173094075479243011686075804556804146206733236426;

	nodes[13] 	= 0.93775213214708045842917617431232988813085636366328588479386966809100654094438859666144295478888561908650186374183825627725612428;
	weights[13] 	= 0.0030559826995424933651367021132749443346890264436760564589419295198497973384161742600808080286073188941184768437609677749953372397;

	nodes[14] 	= 0.928652999572262179333821507060237921618891696291600508900667798346620922243375838067942028809189644545197933981926961751046139;
	weights[14] 	= 0.003486245797806128479197363938637618994774212619021073574373920412412343325648303798887063143462618748609837272998784289254765778;

	nodes[15] 	= 0.91895781162023062912718817327815455127649512336822918694730952172130799679758647513754466224529993989247194942560518137010796733;
	weights[15] 	= 0.003940077588932349740860381980111394083035686416896131222864157914588921927776096902601389918255884599596976034977745184087580696;

	nodes[16] 	= 0.90867279114162492002412240677165228621164150729560196682182206225761380987313896321526791579613295296241232321517746486936142762;
	weights[16] 	= 0.004416313093222239619602922172700782667255701924737833052292020949959099174422052588541794845011662882578927046186829084879096525;

	nodes[17] 	= 0.89780453957074165713680289766204120244347649336781535357313670417222261223093419982702331931941817203561614101159938201856352532;
	weights[17] 	= 0.004913729820966505867907760530823663749760470794108968326937257724368587073355067498113849988171423065333467120211409307535280608;

	nodes[18] 	= 0.88636003268840824893196806205756874353409727056842505240612842699305031321588443335935859524790371002653005268110255323692780778;
	weights[18] 	= 0.005431050910559032197939604562747235347942594832482731130485863151114417838898656908905582228942486928480739880150968161081166336;

	nodes[19] 	= 0.87434661614458211882748466420065178557509489350207206289408456175144952797130469468407687070034059347291865279267893077276713341;
	weights[19] 	= 0.005966948406182308298046211359002636374376367304028372028386501782113332010362759480570986457910021215381943597728213352164730204;

	nodes[20] 	= 0.86177200074354963496981803479697376053951972359161812788857780132423883947047454857457602068095623325141158908719075458915675023;
	weights[20] 	= 0.006520046666650967699142551709435804378167791632549839268560701849301408237783269411972776529293982940117669129996972072801276362;

	nodes[21] 	= 0.84864425749475095046410433899380845398255448975619605598991780922253513961874172021488069663113541187241442418614269729052857408;
	weights[21] 	= 0.007088925896662981019269054778201593086800911833708141473893358803212972280324004976730493774328213741304061732316128402122589275;

	nodes[22] 	= 0.83497181243240737919895007780515241057446385180093180752432960127321048817696934779510871942426612047204431264503494352906562358;
	weights[22] 	= 0.007672125791393833418842716432922987036688666351915116430252786460223441390720486617305389340606193130593039908763388581542061523;

	nodes[23] 	= 0.82076344120727632636354456135537077672345953181099136338689226894666075016837421178743848797211353586318065049573683951948736948;
	weights[23] 	= 0.008268149285078065284228055932095237153502341766771000023809427748901342443218910436678433855100864182819872600028061451639234474;

	nodes[24] 	= 0.80602826345400505254859513576925596003296805068961832725200540526393219185951537999144589920582408816750985675941443631461032558;
	weights[24] 	= 0.008875466393955621087245554596451468395226656774362704293477642663328880774093726440636160775137342308528235543054378484613345781;

	nodes[25] 	= 0.79077573693769858207822045946126159061859457561891211699133614666485818924435574811355855038359436262762549250427780854628770115;
	weights[25] 	= 0.009492518143718218259037623705512842874814878324724548512079200998084844520747760646665925541999495483350952133956817203849214031;

	nodes[26] 	= 0.77501565148345877749056715155087430707623438625229988425957534911470717933027265927554495075820464109782753323956667752378994377;
	weights[26] 	= 0.010117720571374037577243504538781432298107407414678719024957621367866702924239611455880990023182986432927103155345012280709347479;

	nodes[27] 	= 0.75875812269279090191325463636343718741869383721228988381356893005347850356527893820015996473153825321737884977148314322505691659;
	weights[27] 	= 0.010749468791258005801425266234480170229577618851317403730884819205548653859795999314176756820870563362650419658145757396577109429;

	nodes[28] 	= 0.74201358545091079005628974919881284998957258503789916054619242676293631970019554611292646395448854939086713732601813225128466093;
	weights[28] 	= 0.011386141114750280476368665286414030562518957839632737931188702057971361257076238438168280781531600460826315346505107871450359737;

	nodes[29] 	= 0.72479278722911995886548466244054825259193898155773759624219791993860829167158957677769290430433624011132849993664786142753822491;
	weights[29] 	= 0.012026103213127678638206403575142793382096606286656968115780445583194066961706597820111592907115925964702401877080869672382708888;

	nodes[30] 	= 0.70710678118654752440084436210484903928483593768847403658833986899536623923105351942519376716382078636750692311545614851246241803;
	weights[30] 	= 0.012667712312862069509930013642256060016924070158770587987802195936725066154379874994467882360250472048315113252069686720351184857;

	nodes[31] 	= 0.68896691907568656780086680381814168712997767732397239037078370975794950909723607179587228299400048213420561610512638549894980275;
	weights[31] 	= 0.013309321412596460381653623709369326651751534030884207859823946290256065347053152168824171813385018131927824627058503768319660827;

	nodes[32] 	= 0.67038484395627852761023045671611216184408214003714713926161631581491715263017349274137137597902510264375157623098039692076659332;
	weights[32] 	= 0.013949283510973858543491361998098089471329182477908438044415689815478771051683511550767483938969343635803911157634265569252009978;

	nodes[33] 	= 0.65137248272222220745399961469101646609198705473004344317217016677299171614658253417884041154713498289603921285807095665046422269;
	weights[33] 	= 0.014585955834466133218434761050031949804270521466223772244719572667901478448963750674759007899630380733979806845993616044125260286;

	nodes[34] 	= 0.63194203844630399808126727053341673684911150467580103188883163474570006616839358539141505073794001679685465022222500557684545708;
	weights[34] 	= 0.015217704054350101442616522745730687735740732902862456950646770505583429384520138533054774697317957663703123348794361159993022236;

	nodes[35] 	= 0.61210598254766284414670562025986006624865369989862281105571514700886060784934558111559939710189713936906673986127543862397161394;
	weights[35] 	= 0.015842906482005920760822403578999277159033261992816627463525190875365287788011989342269839178501448613279274370182556236853155683;

	nodes[36] 	= 0.59187704678701726369749057488688018234257962589246274735686390613586999332016663482156157074740790466965119320070966836202266581;
	weights[36] 	= 0.016459958231768517932614472688060651638621483543178471682126749210121251534666023548299603945363601788101990961084994956089023934;

	nodes[37] 	= 0.57126821509479227915742454362845548235348263222272508111517547311629144768438417422549378515570963511882462659746351122249507397;
	weights[37] 	= 0.017067275340646073735631971352416882880345798550770175951794964124548789865540839552257330865400079913810353904111311989063135241;

	nodes[38] 	= 0.5502927152373913716928201431260802030024931055911967223750784332876129739877295544517731072968643823628179726057784058661252186;
	weights[38] 	= 0.017663298834330305601017310851589132997159473965626059545351605413226690918039263371630375379894750966037186595375984859160308192;

	nodes[39] 	= 0.52896401032696245736549239391223472566782512357991555328333613388797478937710050911609151319418109352413484044520128502093132487;
	weights[39] 	= 0.01824649872906115800059097250631052694704722848383303450171103307023716002843574501220527094617273035532616477182324503857978044;

	nodes[40] 	= 0.50729579018010733674753661233798575196555357912621315244871520664452750526052638472636188115683627991738354229403408576634300256;
	weights[40] 	= 0.018815377959073171320717475575076315655680348684991336707043690024148724070976480576962988191206961156512557374142401367901093352;

	nodes[41] 	= 0.48530196253108102521457222925972997943130242201796629693092671437683017856594704546836105305619658623234162376817810611842037825;
	weights[41] 	= 0.019368476219541830721813815925509483659471773013512803947217890091336800298396990508364778262590922881248282906411160088537639511;

	nodes[42] 	= 0.46299664410512076671795201240206200211454564721738841825392424230358259077124119283474803358920715490642557662572818211626268126;
	weights[42] 	= 0.019904373715165106821920422721764884685905545485058444845118528722335714469861093080030182491558457168149486623988405279621203378;

	nodes[43] 	= 0.4403941515576343095161715337137760630173953655340046697749680096272632886073372156924814816604581660228810445410412293084013905;
	weights[43] 	= 0.020421694804757633151952266753688456284087669523432207648667134149081545235404682490821914732329521031296759383927964133167089106;

	nodes[44] 	= 0.4175089922850631204988983925715332880857505722336068464376481106121760667180489633096244778251256969552686601863238265996690999;
	weights[44] 	= 0.02091911153250189940025710511181133736659243839280334292331237092349103313433769740039396987548928121405129945795254435582327319;

	nodes[45] 	= 0.3943558551133185801016261030214455736355625461923895680366818943444195466732587209535601766285785728931374154882315960530981746;
	weights[45] 	= 0.021395347036791789278999645304400725950812453900645044752740233958861210380983653086334374802245059497033250469161628256614789019;

	nodes[46] 	= 0.3709496008697677795187832504613714657766430777884844801459110812932872589875449228401078835164155810096476442604575926581321541;
	weights[46] 	= 0.021849178827918010540662663345874501039073927698520102401230471461037788983111446190048701577038325348020389231140589151447603937;

	nodes[47] 	= 0.347305252844820285541854355481012246461978039063910865509891350182138089984594535977281131543712483853603152938731098236859635;
	weights[47] 	= 0.022279441926181645654723325171237175699159113873865119516662462353600334970343575728854956691893625202511749660378405665707032475;

	nodes[48] 	= 0.3234379871492380979025474833971787876719666783019220427617102266349380455596517066746033045304595852264478129275591132194565835;
	weights[48] 	= 0.022685031852380330667073656707183097100537681433516382407067295273579573707760651371626357172576642928022646048458958820029046072;

	nodes[49] 	= 0.2993631229733579540081126169766754622404683370510831362211854513503109243833722764576485715608750891202463504930794376022190348;
	weights[49] 	= 0.023064907462990527110921645537381471061884020281539353594865932205595267810811213648302616646619724908682182257754223518561982193;

	nodes[50] 	= 0.2750961127544780934575888098987339713079306926081051731654084839430369845451669351929554025557832698041823418089772778267490145;
	weights[50] 	= 0.023418093622768014739661270550216805801110427258461230934017301345220041397042062397053274350198832327386879435171897206464801385;

	nodes[51] 	= 0.2506525322587205393148020352659594949328900736557558206701012024700826941068901116301086216006118559228843888132763916519156328;
	weights[51] 	= 0.023743683707906077947584713788204515663877280458339735553103439502215434111816149090793678618956443774700286517950028412229017549;

	nodes[52] 	= 0.226048070583734846952801188751510179895524420474611676404916755831603266004797041211790926848426723842333584566394216515079086;
	weights[52] 	= 0.024040841933325814714453865178300755802777779405592100644571674893057295494267578701680839119160734309038344038180146397015115557;

	nodes[53] 	= 0.2012985200886600791415289683390134818533964414403184288910426057177916708137234594976377353555932640336815540649690557440527082;
	weights[53] 	= 0.024308805498124447229113811093215552994927178649670427310517009356084552469515677568239068712157388041015405221103064190802633321;

	nodes[54] 	= 0.176419766257808455314884368489606560716975870766783143375174238568314014892768982439435986443340443348466398249044889429907526;
	weights[54] 	= 0.024546886543674299149023751888142446693707742654269645284009109824515440800071723664958828655098481429100111638208108533296253762;

	nodes[55] 	= 0.151427777504576663657467646727219652305760766258121998633590843453891566307530836649855156242362842843689211757006650572692723;
	weights[55] 	= 0.024754473919346027504342467642149112096544807657508303228877396939325991582471035664199154165302879154845267007276686711300463545;

	nodes[56] 	= 0.1263385949221291894904811173099765440334116482311817000456403581004189325189961973705071619441239386495127244412914251065930663;
	weights[56] 	= 0.024931034751323523034459622292169889203780805205905050564354332538551291062998708241215426751390086319304648140051700438486738785;

	nodes[57] 	= 0.1011683219874321777860407155854228233862112145002848360432122367759577099956132449134867215604769246386088630679290496301753923;
	weights[57] 	= 0.025076115810483353607918020204375489509372237693752448976330538843924759974833493873373333893848065027847736493614472937444040724;

	nodes[58] 	= 0.0759331142252462895711663052093807842041765264520885978821059775819741412844232394781194054838119227441907078827372000287594808;
	weights[58] 	= 0.025189344675827423812739319898636343063270901837867971486385418076625140647010159137967082858036167126491634272063412205469709635;

	nodes[59] 	= 0.0506491688387127122787518574851995267465834870717102478976051393318732425018805734290327941628462494203196768343532750576313372;
	weights[59] 	= 0.025270430690482335766058917780757255384969192773590672987518831973258639417079101905363348476325662812202361637656617139520057956;

	nodes[60] 	= 0.0253327143131879262671501454744466201174911681575001515110197208385211519911455317890469075674757756065777483424882571707150632;
	weights[60] 	= 0.025319165707811414494915469063966059172701853131721312619513647476129059330613613168506356458251764751295250569483575685317296247;

	nodes[61] 	= 0.e-127;
	weights[61] 	= 0.025335424625724139019860027284512120033848140317541175975604391873450132308759749988935764720500944096630226504139373440702369715;

	nodes[62] 	= -0.0253327143131879262671501454744466201174911681575001515110197208385211519911455317890469075674757756065777483424882571707150632;
	weights[62] 	= 0.025319165707811414494915469063966059172701853131721312619513647476129059330613613168506356458251764751295250569483575685317296247;

	nodes[63] 	= -0.0506491688387127122787518574851995267465834870717102478976051393318732425018805734290327941628462494203196768343532750576313372;
	weights[63] 	= 0.025270430690482335766058917780757255384969192773590672987518831973258639417079101905363348476325662812202361637656617139520057956;

	nodes[64] 	= -0.0759331142252462895711663052093807842041765264520885978821059775819741412844232394781194054838119227441907078827372000287594808;
	weights[64] 	= 0.025189344675827423812739319898636343063270901837867971486385418076625140647010159137967082858036167126491634272063412205469709635;

	nodes[65] 	= -0.1011683219874321777860407155854228233862112145002848360432122367759577099956132449134867215604769246386088630679290496301753923;
	weights[65] 	= 0.025076115810483353607918020204375489509372237693752448976330538843924759974833493873373333893848065027847736493614472937444040724;

	nodes[66] 	= -0.1263385949221291894904811173099765440334116482311817000456403581004189325189961973705071619441239386495127244412914251065930663;
	weights[66] 	= 0.024931034751323523034459622292169889203780805205905050564354332538551291062998708241215426751390086319304648140051700438486738785;

	nodes[67] 	= -0.151427777504576663657467646727219652305760766258121998633590843453891566307530836649855156242362842843689211757006650572692723;
	weights[67] 	= 0.024754473919346027504342467642149112096544807657508303228877396939325991582471035664199154165302879154845267007276686711300463545;

	nodes[68] 	= -0.176419766257808455314884368489606560716975870766783143375174238568314014892768982439435986443340443348466398249044889429907526;
	weights[68] 	= 0.024546886543674299149023751888142446693707742654269645284009109824515440800071723664958828655098481429100111638208108533296253762;

	nodes[69] 	= -0.2012985200886600791415289683390134818533964414403184288910426057177916708137234594976377353555932640336815540649690557440527082;
	weights[69] 	= 0.024308805498124447229113811093215552994927178649670427310517009356084552469515677568239068712157388041015405221103064190802633321;

	nodes[70] 	= -0.226048070583734846952801188751510179895524420474611676404916755831603266004797041211790926848426723842333584566394216515079086;
	weights[70] 	= 0.024040841933325814714453865178300755802777779405592100644571674893057295494267578701680839119160734309038344038180146397015115557;

	nodes[71] 	= -0.2506525322587205393148020352659594949328900736557558206701012024700826941068901116301086216006118559228843888132763916519156328;
	weights[71] 	= 0.023743683707906077947584713788204515663877280458339735553103439502215434111816149090793678618956443774700286517950028412229017549;

	nodes[72] 	= -0.2750961127544780934575888098987339713079306926081051731654084839430369845451669351929554025557832698041823418089772778267490145;
	weights[72] 	= 0.023418093622768014739661270550216805801110427258461230934017301345220041397042062397053274350198832327386879435171897206464801385;

	nodes[73] 	= -0.2993631229733579540081126169766754622404683370510831362211854513503109243833722764576485715608750891202463504930794376022190348;
	weights[73] 	= 0.023064907462990527110921645537381471061884020281539353594865932205595267810811213648302616646619724908682182257754223518561982193;

	nodes[74] 	= -0.3234379871492380979025474833971787876719666783019220427617102266349380455596517066746033045304595852264478129275591132194565835;
	weights[74] 	= 0.022685031852380330667073656707183097100537681433516382407067295273579573707760651371626357172576642928022646048458958820029046072;

	nodes[75] 	= -0.347305252844820285541854355481012246461978039063910865509891350182138089984594535977281131543712483853603152938731098236859635;
	weights[75] 	= 0.022279441926181645654723325171237175699159113873865119516662462353600334970343575728854956691893625202511749660378405665707032475;

	nodes[76] 	= -0.3709496008697677795187832504613714657766430777884844801459110812932872589875449228401078835164155810096476442604575926581321541;
	weights[76] 	= 0.021849178827918010540662663345874501039073927698520102401230471461037788983111446190048701577038325348020389231140589151447603937;

	nodes[77] 	= -0.3943558551133185801016261030214455736355625461923895680366818943444195466732587209535601766285785728931374154882315960530981746;
	weights[77] 	= 0.021395347036791789278999645304400725950812453900645044752740233958861210380983653086334374802245059497033250469161628256614789019;

	nodes[78] 	= -0.4175089922850631204988983925715332880857505722336068464376481106121760667180489633096244778251256969552686601863238265996690999;
	weights[78] 	= 0.02091911153250189940025710511181133736659243839280334292331237092349103313433769740039396987548928121405129945795254435582327319;

	nodes[79] 	= -0.4403941515576343095161715337137760630173953655340046697749680096272632886073372156924814816604581660228810445410412293084013905;
	weights[79] 	= 0.020421694804757633151952266753688456284087669523432207648667134149081545235404682490821914732329521031296759383927964133167089106;

	nodes[80] 	= -0.4629966441051207667179520124020620021145456472173884182539242423035825907712411928347480335892071549064255766257281821162626813;
	weights[80] 	= 0.019904373715165106821920422721764884685905545485058444845118528722335714469861093080030182491558457168149486623988405279621203378;

	nodes[81] 	= -0.4853019625310810252145722292597299794313024220179662969309267143768301785659470454683610530561965862323416237681781061184203783;
	weights[81] 	= 0.019368476219541830721813815925509483659471773013512803947217890091336800298396990508364778262590922881248282906411160088537639511;

	nodes[82] 	= -0.5072957901801073367475366123379857519655535791262131524487152066445275052605263847263618811568362799173835422940340857663430026;
	weights[82] 	= 0.018815377959073171320717475575076315655680348684991336707043690024148724070976480576962988191206961156512557374142401367901093352;

	nodes[83] 	= -0.5289640103269624573654923939122347256678251235799155532833361338879747893771005091160915131941810935241348404452012850209313249;
	weights[83] 	= 0.01824649872906115800059097250631052694704722848383303450171103307023716002843574501220527094617273035532616477182324503857978044;

	nodes[84] 	= -0.5502927152373913716928201431260802030024931055911967223750784332876129739877295544517731072968643823628179726057784058661252186;
	weights[84] 	= 0.017663298834330305601017310851589132997159473965626059545351605413226690918039263371630375379894750966037186595375984859160308192;

	nodes[85] 	= -0.571268215094792279157424543628455482353482632222725081115175473116291447684384174225493785155709635118824626597463511222495074;
	weights[85] 	= 0.017067275340646073735631971352416882880345798550770175951794964124548789865540839552257330865400079913810353904111311989063135241;

	nodes[86] 	= -0.5918770467870172636974905748868801823425796258924627473568639061358699933201666348215615707474079046696511932007096683620226658;
	weights[86] 	= 0.016459958231768517932614472688060651638621483543178471682126749210121251534666023548299603945363601788101990961084994956089023934;

	nodes[87] 	= -0.6121059825476628441467056202598600662486536998986228110557151470088606078493455811155993971018971393690667398612754386239716139;
	weights[87] 	= 0.015842906482005920760822403578999277159033261992816627463525190875365287788011989342269839178501448613279274370182556236853155683;

	nodes[88] 	= -0.6319420384463039980812672705334167368491115046758010318888316347457000661683935853914150507379400167968546502222250055768454571;
	weights[88] 	= 0.015217704054350101442616522745730687735740732902862456950646770505583429384520138533054774697317957663703123348794361159993022236;

	nodes[89] 	= -0.6513724827222222074539996146910164660919870547300434431721701667729917161465825341788404115471349828960392128580709566504642227;
	weights[89] 	= 0.014585955834466133218434761050031949804270521466223772244719572667901478448963750674759007899630380733979806845993616044125260286;

	nodes[90] 	= -0.6703848439562785276102304567161121618440821400371471392616163158149171526301734927413713759790251026437515762309803969207665933;
	weights[90] 	= 0.013949283510973858543491361998098089471329182477908438044415689815478771051683511550767483938969343635803911157634265569252009978;

	nodes[91] 	= -0.6889669190756865678008668038181416871299776773239723903707837097579495090972360717958722829940004821342056161051263854989498027;
	weights[91] 	= 0.013309321412596460381653623709369326651751534030884207859823946290256065347053152168824171813385018131927824627058503768319660827;

	nodes[92] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	weights[92] 	= 0.012667712312862069509930013642256060016924070158770587987802195936725066154379874994467882360250472048315113252069686720351184857;

	nodes[93] 	= -0.7247927872291199588654846624405482525919389815577375962421979199386082916715895767776929043043362401113284999366478614275382249;
	weights[93] 	= 0.012026103213127678638206403575142793382096606286656968115780445583194066961706597820111592907115925964702401877080869672382708888;

	nodes[94] 	= -0.7420135854509107900562897491988128499895725850378991605461924267629363197001955461129264639544885493908671373260181322512846609;
	weights[94] 	= 0.011386141114750280476368665286414030562518957839632737931188702057971361257076238438168280781531600460826315346505107871450359737;

	nodes[95] 	= -0.7587581226927909019132546363634371874186938372122898838135689300534785035652789382001599647315382532173788497714831432250569166;
	weights[95] 	= 0.010749468791258005801425266234480170229577618851317403730884819205548653859795999314176756820870563362650419658145757396577109429;

	nodes[96] 	= -0.7750156514834587774905671515508743070762343862522998842595753491147071793302726592755449507582046410978275332395666775237899438;
	weights[96] 	= 0.010117720571374037577243504538781432298107407414678719024957621367866702924239611455880990023182986432927103155345012280709347479;

	nodes[97] 	= -0.7907757369376985820782204594612615906185945756189121169913361466648581892443557481135585503835943626276254925042778085462877012;
	weights[97] 	= 0.009492518143718218259037623705512842874814878324724548512079200998084844520747760646665925541999495483350952133956817203849214031;

	nodes[98] 	= -0.8060282634540050525485951357692559600329680506896183272520054052639321918595153799914458992058240881675098567594144363146103256;
	weights[98] 	= 0.008875466393955621087245554596451468395226656774362704293477642663328880774093726440636160775137342308528235543054378484613345781;

	nodes[99] 	= -0.8207634412072763263635445613553707767234595318109913633868922689466607501683742117874384879721135358631806504957368395194873695;
	weights[99] 	= 0.008268149285078065284228055932095237153502341766771000023809427748901342443218910436678433855100864182819872600028061451639234474;

	nodes[100] 	= -0.8349718124324073791989500778051524105744638518009318075243296012732104881769693477951087194242661204720443126450349435290656236;
	weights[100] 	= 0.007672125791393833418842716432922987036688666351915116430252786460223441390720486617305389340606193130593039908763388581542061523;

	nodes[101] 	= -0.8486442574947509504641043389938084539825544897561960559899178092225351396187417202148806966311354118724144241861426972905285741;
	weights[101] 	= 0.007088925896662981019269054778201593086800911833708141473893358803212972280324004976730493774328213741304061732316128402122589275;

	nodes[102] 	= -0.8617720007435496349698180347969737605395197235916181278885778013242388394704745485745760206809562332514115890871907545891567502;
	weights[102] 	= 0.006520046666650967699142551709435804378167791632549839268560701849301408237783269411972776529293982940117669129996972072801276362;

	nodes[103] 	= -0.8743466161445821188274846642006517855750948935020720628940845617514495279713046946840768707003405934729186527926789307727671334;
	weights[103] 	= 0.005966948406182308298046211359002636374376367304028372028386501782113332010362759480570986457910021215381943597728213352164730204;

	nodes[104] 	= -0.8863600326884082489319680620575687435340972705684250524061284269930503132158844333593585952479037100265300526811025532369278078;
	weights[104] 	= 0.005431050910559032197939604562747235347942594832482731130485863151114417838898656908905582228942486928480739880150968161081166336;

	nodes[105] 	= -0.8978045395707416571368028976620412024434764933678153535731367041722226122309341998270233193194181720356161410115993820185635253;
	weights[105] 	= 0.004913729820966505867907760530823663749760470794108968326937257724368587073355067498113849988171423065333467120211409307535280608;

	nodes[106] 	= -0.9086727911416249200241224067716522862116415072956019668218220622576138098731389632152679157961329529624123232151774648693614276;
	weights[106] 	= 0.004416313093222239619602922172700782667255701924737833052292020949959099174422052588541794845011662882578927046186829084879096525;

	nodes[107] 	= -0.9189578116202306291271881732781545512764951233682291869473095217213079967975864751375446622452999398924719494256051813701079673;
	weights[107] 	= 0.003940077588932349740860381980111394083035686416896131222864157914588921927776096902601389918255884599596976034977745184087580696;

	nodes[108] 	= -0.928652999572262179333821507060237921618891696291600508900667798346620922243375838067942028809189644545197933981926961751046139;
	weights[108] 	= 0.003486245797806128479197363938637618994774212619021073574373920412412343325648303798887063143462618748609837272998784289254765778;

	nodes[109] 	= -0.93775213214708045842917617431232988813085636366328588479386966809100654094438859666144295478888561908650186374183825627725612428;
	weights[109] 	= 0.00305598269954249336513670211327494433468902644367605645894192951984979733841617426008080802860731889411847684376096777499533724;

	nodes[110] 	= -0.9462493690718368405241967976805762668189061420321807959222755199565133675842458586790980060553468958352268475753099973066337561;
	weights[110] 	= 0.002650392773343808352786370577329022933310458884024793568537096599870558600999098617309407547924301168607580455680414620673323643;

	nodes[111] 	= -0.9541392564000488514758967202113007469136420247869636129857635670002195268600426906873568024339496818233148730456570348367550484;
	weights[111] 	= 0.002270517162733611908938381747130648971964120036001822380738459667854864497948536340633148073881219187948044246385149922140387521;

	nodes[112] 	= -0.96141673001221248523098980433874241136652640834234934674798109472329083214104328725574012817968489311208312569985588782831578556;
	weights[112] 	= 0.001917331002956124280198756734295314232737713059079945041587090528230090911717687591882490370302111769243347068967476234237568329;

	nodes[113] 	= -0.96807711886620430515300767280129074283476515184750303544712414513007634054724812789019242897702088084065519955418315374412755047;
	weights[113] 	= 0.001591740917818061072275313496307604369970859859201440422500952371234698196943600898142086101544500321929939986189345028473352165;

	nodes[114] 	= -0.97411614799538706167120235934688319675195043761073584356130759734072605326071740405914084707385876818399555045118668391877565693;
	weights[114] 	= 0.001294582692398324305406162106211364231070360911949075331032716980392836814492171287254925601340209787591882465959227043687254158;

	nodes[115] 	= -0.97952994125249449393800644281177072429142234254752196182696634610768398404542542476125059373420481368883782200813075965619251934;
	weights[115] 	= 0.001026619127599691790746216191296567038920961667870748665087382517365579839244072420696696008343556055614821283036309249899736394;

	nodes[116] 	= -0.98431502379753415466184922756379311101203082123477717863998814709838813659753244278904755993190703131781850419059068370680048773;
	weights[116] 	= 0.000788538082049839870836275396369673340140397663271530691595282048934691508688026323976936065402462667530114865931264907406115953;

	nodes[117] 	= -0.98846832432811139916219068940315377492098000323048479480341026677470683616403416896494127591134895751543510332436577715183283358;
	weights[117] 	= 0.00058095070637811151551755964236300793730333266003287274672699493412414072628871432473661055519806494178495949686268672940190617;

	nodes[118] 	= -0.99198717705074300651667041845758380950462774108632676018612612740515493593574160817881916863178878412995614184965375031031258363;
	weights[118] 	= 0.00040438987440061598540040499234223083006733511163612541125005933489884124576104174772033796911085777732557836408767300221563093;

	nodes[119] 	= -0.99486932339189514632135330988371949300396522229124421086696361681437929431576825978651789553423325255135901751577275639872226897;
	weights[119] 	= 0.00025930881524078541194200708013663052447590262378872699927385302952537233392625611556243082665287906878249001052490050325832899;

	nodes[120] 	= -0.99711291344764746235951469126378858015017108075659323561238131092307087588089915011335725166008080983546936698695964526317181498;
	weights[120] 	= 0.00014607994989671520712070738587577697057723847967320448921897379682499166174959085096868186246477697013859223207596123523266008;

	nodes[121] 	= -0.99871650717105280714631143675951404574748850709489684182620990194905934010548723944121556589615486138903525817752386052544124697;
	weights[121] 	= 0.0000649939352418032538011095037548646488789475439505029880855599001914928916806480835724162441752812844278648664827563011823117585;

	nodes[122] 	= -0.99967907529643052120766090081274909339885709292458895676765054827555319898244607899137492225156827683034318191330780093624942873;
	weights[122] 	= 0.000016258917912724524944558220546060861146287185819863356090744397321072978146136820429408262249179345334975934655797755385073468;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_123_hpp__)*/
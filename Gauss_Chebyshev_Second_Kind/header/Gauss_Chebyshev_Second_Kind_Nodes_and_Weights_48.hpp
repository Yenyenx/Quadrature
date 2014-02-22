//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_48.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 48.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_48_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_48_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_48(long double*& nodes, long double*& weights) {
	nodes	= new long double[48];
	weights	= new long double[48];

	nodes[0] 	= 0.99794539275033634200884048095799255502867258933623225817600418015448099982126956980084169828915659505606661084040474498473673455;
	weights[0] 	= 0.0002631880842751405900345050503074478336607991390569804747483399874985681414526545526699807446251331039915696976051395334291831304;

	nodes[1] 	= 0.99179001382324610895744277721878492801900041944013412387387665767136817923145925717844189463726137672419820963754791234337759693;
	weights[1] 	= 0.001048430796032991875410255013676898535275331757214627065818358071042403505658241405514973102441635126548815698734346096241503421;

	nodes[2] 	= 0.98155915699106535384924304768513068905942203748793837483965126350135465270811720953291220626722454969444649744815330422648903543;
	weights[2] 	= 0.0023428344716556964578091972392085856345640186256195930352180036238889225210029962962007214724656101508335826064398060292730170444;

	nodes[3] 	= 0.9672948630390294157758746656854387201623703301937929374610559594660321428855360828848611861749241489163220075765282164292085717;
	weights[3] 	= 0.004125145038575250672931867185779976663394666470250417767179581773093231363055560610203987573713437569296924808293880304928759375;

	nodes[4] 	= 0.94905574701066866775602478085777238466807392720198188856844139213956404734374519614452797685428249874894449288268501087328702263;
	weights[4] 	= 0.006366097006557470658814874077562943568937180037140038098523007632750483447568426923148528760014079690859669446945931627646491515;

	nodes[5] 	= 0.9269167573460217630248384996993891944013259407561402786052710958406112352497312801955714919808836874015471896208700050998612883;
	weights[5] 	= 0.009028894006242549506831511559186186564790208664601341427370318755695082348232781070966321757812920715129511517365898604531724027;

	nodes[6] 	= 0.90096886790241912623610231950744505116591916213185715005356242319943242042793996550136145471851241531831096436867510363979163288;
	weights[6] 	= 0.012069812984512654751977984775336326910381317333945158195366126181746355484763637942828958288933725730172047813842402545967739264;

	nodes[7] 	= 0.87131870412338935154662548438908118012147736797040548804600484888491322370175834017046207521117463943160069395631233957932786508;
	weights[7] 	= 0.015438922135815334134183138264951401774918725321531601114156017523564607283417191526499728510547751015047871604855869777933983842;

	nodes[8] 	= 0.83808810489184065771119794927104310867134142232060671102092198981556255205726133064477343633069350056235098649656731788116228492;
	weights[8] 	= 0.019080900781030247590786513652963318131645250152226169431535484803047479039063634281268463306307814891413527419118443598641210765;

	nodes[9] 	= 0.80141362186795665978698328953331477081454612240496602469254315335237263777721259148724250941738436211707019155258674878187778879;
	weights[9] 	= 0.022935947731490900515576986337891940852871040011895560499065982832234607142392302585802445351628784423196398642854353223859832576;

	nodes[10] 	= 0.76144595836913443540598277943590961821515175474217829172124211483598572783756162659342186368665459817281265622205602839681423037;
	weights[10] 	= 0.026940763222849254503136449174863888738575282682221824103364306171387272861381309698372485423036920959891771733718176419194433515;

	nodes[11] 	= 0.71834935009772757997708537133404821164754276843684193996107336856614373848964789141759858609875310947184750279060096549666597374;
	weights[11] 	= 0.031029588295456305697012887900321242989969290380521376838944018523247924816047843112006167298507413323362598145241631921753299313;

	nodes[12] 	= 0.67230089026131678808641846163742293155995171065545381012426366925040693332520611627718186455940281779311514717021405280899223693;
	weights[12] 	= 0.035135284554661516866848959114767853987480560346134423776002724207241431015011573800437217392140813533980302147099170507623258276;

	nodes[13] 	= 0.62348980185873353052500488400423981063227473089640210536554943909685365245648728457594250732658537166705809220917454300913572926;
	weights[13] 	= 0.039190436581396838124475081940032132516464571361232109179028426460812323716803325526015647891405719631370340815743901214463273883;

	nodes[14] 	= 0.57211666012216964981321920343705270163647115408351468574417996433140407012031626351125581878279460577968485402810833450273867439;
	weights[14] 	= 0.04312845889149400444444087051758687519673236724210331680584697604167623408081587761576608520831719476396536195510911080659583129;

	nodes[15] 	= 0.51839256831052503153847431467525924008986116487442732107469914043673194774016895384953037712592581250601516686926694357896615206;
	weights[15] 	= 0.04688468926749372350584899550223810442688433948961690665873270242118750597262645658276866878997280547886906832787771765351192194;

	nodes[16] 	= 0.46253829024083527769710564642986817024748958293135435273144691201310180168931245002348556727840757028679621255474188617952729918;
	weights[16] 	= 0.05039745051046867378048287301728586393389734136808833256147434215699824124699441969263587118531245630060625780314063809730133857;

	nodes[17] 	= 0.4047833431223938171559229929865110885458860416231227729491963463368437930556517863690521811491687588959937025898949483960457527;
	weights[17] 	= 0.05360906317792473295213299800494652117248068803541626798928317356844734585557160087212972382144457886261072259915033204778188246;

	nodes[18] 	= 0.3453650544213076319521147752559623304845541222662702245950673554557242174965847032099063289596168712288286791241996696444824287;
	weights[18] 	= 0.05646679267865209714698168252734359502767489569001580825341366525959846257773651367520918423515156252124761647550022159909325919;

	nodes[19] 	= 0.2845275866310324418705029934626948723724297364078231371398832594579087299269566332703757441243568672778541550360389143469874172;
	weights[19] 	= 0.05892371517325501944771437667513350796850946341316377298841757765855305404734881206309779742393898685390886444401151327377599065;

	nodes[20] 	= 0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[20] 	= 0.060939488062297408497212768401756643580195875568219369088996325654149049594369072196442351867593307066391471603030921476965195589;

	nodes[21] 	= 0.1595998950333792234665111684813029413298624089408318502532886095528588143883456959528700703149388245178645734255058732702910753;
	weights[21] 	= 0.062481012410670237757278309052316932687991404400201836340239802419186480675593180701136785058482704869844239099187747970902446259;

	nodes[22] 	= 0.0960230259076817630536649578433145559324348809625445607252184292633930485636848724463631157173474281619367207939638230200779865;
	weights[22] 	= 0.063522976431190966272476461560144103333697241020058346579814519882541198233170955350657930603470193823566424951816157977904731329;

	nodes[23] 	= 0.0320515775716551742335505253456438979992608809395892841895448311951936085165908254086637604908094482246694645059413051956984518;
	weights[23] 	= 0.064048271103449293865261299274273429018300491333301276971196366467365836601473881575228681268263716589432062271637264352453153934;

	nodes[24] 	= -0.0320515775716551742335505253456438979992608809395892841895448311951936085165908254086637604908094482246694645059413051956984518;
	weights[24] 	= 0.064048271103449293865261299274273429018300491333301276971196366467365836601473881575228681268263716589432062271637264352453153934;

	nodes[25] 	= -0.0960230259076817630536649578433145559324348809625445607252184292633930485636848724463631157173474281619367207939638230200779865;
	weights[25] 	= 0.063522976431190966272476461560144103333697241020058346579814519882541198233170955350657930603470193823566424951816157977904731329;

	nodes[26] 	= -0.1595998950333792234665111684813029413298624089408318502532886095528588143883456959528700703149388245178645734255058732702910753;
	weights[26] 	= 0.062481012410670237757278309052316932687991404400201836340239802419186480675593180701136785058482704869844239099187747970902446259;

	nodes[27] 	= -0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[27] 	= 0.06093948806229740849721276840175664358019587556821936908899632565414904959436907219644235186759330706639147160303092147696519559;

	nodes[28] 	= -0.2845275866310324418705029934626948723724297364078231371398832594579087299269566332703757441243568672778541550360389143469874172;
	weights[28] 	= 0.05892371517325501944771437667513350796850946341316377298841757765855305404734881206309779742393898685390886444401151327377599065;

	nodes[29] 	= -0.3453650544213076319521147752559623304845541222662702245950673554557242174965847032099063289596168712288286791241996696444824287;
	weights[29] 	= 0.05646679267865209714698168252734359502767489569001580825341366525959846257773651367520918423515156252124761647550022159909325919;

	nodes[30] 	= -0.4047833431223938171559229929865110885458860416231227729491963463368437930556517863690521811491687588959937025898949483960457527;
	weights[30] 	= 0.05360906317792473295213299800494652117248068803541626798928317356844734585557160087212972382144457886261072259915033204778188246;

	nodes[31] 	= -0.4625382902408352776971056464298681702474895829313543527314469120131018016893124500234855672784075702867962125547418861795272992;
	weights[31] 	= 0.05039745051046867378048287301728586393389734136808833256147434215699824124699441969263587118531245630060625780314063809730133857;

	nodes[32] 	= -0.5183925683105250315384743146752592400898611648744273210746991404367319477401689538495303771259258125060151668692669435789661521;
	weights[32] 	= 0.04688468926749372350584899550223810442688433948961690665873270242118750597262645658276866878997280547886906832787771765351192194;

	nodes[33] 	= -0.5721166601221696498132192034370527016364711540835146857441799643314040701203162635112558187827946057796848540281083345027386744;
	weights[33] 	= 0.04312845889149400444444087051758687519673236724210331680584697604167623408081587761576608520831719476396536195510911080659583129;

	nodes[34] 	= -0.6234898018587335305250048840042398106322747308964021053655494390968536524564872845759425073265853716670580922091745430091357293;
	weights[34] 	= 0.03919043658139683812447508194003213251646457136123210917902842646081232371680332552601564789140571963137034081574390121446327388;

	nodes[35] 	= -0.6723008902613167880864184616374229315599517106554538101242636692504069333252061162771818645594028177931151471702140528089922369;
	weights[35] 	= 0.03513528455466151686684895911476785398748056034613442377600272420724143101501157380043721739214081353398030214709917050762325828;

	nodes[36] 	= -0.7183493500977275799770853713340482116475427684368419399610733685661437384896478914175985860987531094718475027906009654966659737;
	weights[36] 	= 0.03102958829545630569701288790032124298996929038052137683894401852324792481604784311200616729850741332336259814524163192175329931;

	nodes[37] 	= -0.7614459583691344354059827794359096182151517547421782917212421148359857278375616265934218636866545981728126562220560283968142304;
	weights[37] 	= 0.02694076322284925450313644917486388873857528268222182410336430617138727286138130969837248542303692095989177173371817641919443351;

	nodes[38] 	= -0.8014136218679566597869832895333147708145461224049660246925431533523726377772125914872425094173843621170701915525867487818777888;
	weights[38] 	= 0.02293594773149090051557698633789194085287104001189556049906598283223460714239230258580244535162878442319639864285435322385983258;

	nodes[39] 	= -0.8380881048918406577111979492710431086713414223206067110209219898155625520572613306447734363306935005623509864965673178811622849;
	weights[39] 	= 0.01908090078103024759078651365296331813164525015222616943153548480304747903906363428126846330630781489141352741911844359864121077;

	nodes[40] 	= -0.8713187041233893515466254843890811801214773679704054880460048488849132237017583401704620752111746394316006939563123395793278651;
	weights[40] 	= 0.01543892213581533413418313826495140177491872532153160111415601752356460728341719152649972851054775101504787160485586977793398384;

	nodes[41] 	= -0.9009688679024191262361023195074450511659191621318571500535624231994324204279399655013614547185124153183109643686751036397916329;
	weights[41] 	= 0.01206981298451265475197798477533632691038131733394515819536612618174635548476363794282895828893372573017204781384240254596773926;

	nodes[42] 	= -0.9269167573460217630248384996993891944013259407561402786052710958406112352497312801955714919808836874015471896208700050998612883;
	weights[42] 	= 0.00902889400624254950683151155918618656479020866460134142737031875569508234823278107096632175781292071512951151736589860453172403;

	nodes[43] 	= -0.94905574701066866775602478085777238466807392720198188856844139213956404734374519614452797685428249874894449288268501087328702263;
	weights[43] 	= 0.00636609700655747065881487407756294356893718003714003809852300763275048344756842692314852876001407969085966944694593162764649152;

	nodes[44] 	= -0.9672948630390294157758746656854387201623703301937929374610559594660321428855360828848611861749241489163220075765282164292085717;
	weights[44] 	= 0.004125145038575250672931867185779976663394666470250417767179581773093231363055560610203987573713437569296924808293880304928759375;

	nodes[45] 	= -0.98155915699106535384924304768513068905942203748793837483965126350135465270811720953291220626722454969444649744815330422648903543;
	weights[45] 	= 0.002342834471655696457809197239208585634564018625619593035218003623888922521002996296200721472465610150833582606439806029273017044;

	nodes[46] 	= -0.99179001382324610895744277721878492801900041944013412387387665767136817923145925717844189463726137672419820963754791234337759693;
	weights[46] 	= 0.001048430796032991875410255013676898535275331757214627065818358071042403505658241405514973102441635126548815698734346096241503421;

	nodes[47] 	= -0.99794539275033634200884048095799255502867258933623225817600418015448099982126956980084169828915659505606661084040474498473673455;
	weights[47] 	= 0.00026318808427514059003450505030744783366079913905698047474833998749856814145265455266998074462513310399156969760513953342918313;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_48_hpp__)*/
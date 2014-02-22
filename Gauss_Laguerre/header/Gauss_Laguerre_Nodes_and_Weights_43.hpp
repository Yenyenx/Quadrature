//
//        Gauss_Laguerre_Nodes_and_Weights_43.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 43.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_43_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_43_hpp__

void Gauss_Laguerre_Nodes_and_Weights_43(long double*& nodes, long double*& weights) {
	nodes	= new long double[43];
	weights	= new long double[43];

	nodes[0] 	= 0.033238085424746213181060108472866206908290483102559185322199580680329030471985150269234445842476715482281825810787281361563804626;
	weights[0] 	= 0.082516318111156190815494507229011647638093155185726189070376212452307367381830638815380879284263345631540271313530890505677346;

	nodes[1] 	= 0.17517712820996224005416351178612900503535254477972716576592432687525359705037028996844401170435380227538764529614534249703619949;
	weights[1] 	= 0.1667555309593264632298698632770324756372587510525421468164488180738820131655670123882679007969601153352333505222946928489423;

	nodes[2] 	= 0.43073107028859235020684734828079587225253488017637805169153396568601634486817037725779287589333714823877063408131211829805105846;
	weights[2] 	= 0.203126897262782429865057408681536116797175818840842839774523582201995407218289290942072741461492448356703252820429210024771;

	nodes[3] 	= 0.80029172532678845414553369002199379826448408283101864662071939289243036009202112538091178758676218560239874016330584729437886683;
	weights[3] 	= 0.19168020819782320023773119100641650804516707115248802485183425310956003939251071418420246605484483109048891078502792674619;

	nodes[4] 	= 1.2843533107738146887373264525334988127378130092799980044984350223478837050441682361276757816070498812353710724319318828910604907;
	weights[4] 	= 0.1499070419394415703325073109951669645379440428076822147978061667881456479196402131552577702341925576226507451101946264049;

	nodes[5] 	= 1.8835604775071323989490343061243426685322676129869916102187652968737482472751638237109987695729248201112243426125247397896749504;
	weights[5] 	= 0.099900613389889181709345031192145255283264888813209833731489313048285880425190015592982952588072272165513353455939425657;

	nodes[6] 	= 2.5987172569253880290117526687768295600296394478593922974657071201071708425844168863683095309634175549361230623011468260351462301;
	weights[6] 	= 0.05751995085504946073221385616392506144716186667332260602516436917828864186136349770857313923451121656778410890496027293;

	nodes[7] 	= 3.4307938938215888450458332015014380559506530643296079276450731403701030571762422461670955210680404622206651769730191363001119538;
	weights[7] 	= 0.0288307257858783924757865753384448654822271947480674022114213567065139839474080461652381534645095572857265971781250568;

	nodes[8] 	= 4.3809345066194071085477531223166397340349239102412634267345268359773944251324923016590535825247159502294771524956179487758954827;
	weights[8] 	= 0.01263378018766872641006950471380983833142993654518103761077104382389296530360983254504802587809037417579224174220892;

	nodes[9] 	= 5.4504661510862053458089728662470368072168124248072981184839124716542988356688788376072525405698572062491782186386604712764256205;
	weights[9] 	= 0.004851347888965599593998793629669871003902631370997837989277864266729778100212895102182687347642679371437814729507834;

	nodes[10] 	= 6.6409095608549595249349663523629039820408274562874254046725724056584321352625331174428826286967855914135316987714445306238460595;
	weights[10] 	= 0.001634201423156429510300933070893929680387671793342062063996388091400295594330130791170417010599676174497796957654988;

	nodes[11] 	= 7.9539918105216172582190356046541112534084166356576164926977734387373001474884674200255287809034065613297530696405041577927838555;
	weights[11] 	= 0.00048298984730168569651159152180738878638368002445706259988635234296946816124631069162150032335583249134042280112263;

	nodes[12] 	= 9.3916611791501164210719474624668714410657053604555309839895487326980798117835760311572217102634021218695920708613742816166235954;
	weights[12] 	= 0.00012518113242379503278998896291065810340782296901219529704396780304012156863442733518666017070230512137220069096937;

	nodes[13] 	= 10.956104547517913339090153609600363795591308356949388710058416652805506595444814210339510439756281327939984372935052891808791066;
	weights[13] 	= 0.00002842135628364423516547617417986361300753293780321848077995330628134903910864033956852459113839514583525630562616;

	nodes[14] 	= 12.649767735758408353304332929478806779387280955919356671784105179860108913229825324500139704843651509854258867335478502587915545;
	weights[14] 	= 5.64391490119641417368564217608061725232064660571034062187794278664989216980580884334505559641091121989093509742e-6;

	nodes[15] 	= 14.475379281021626136257374233308305981164469985017604300670611310407807384925797627831301737038653693110024052957871522608392228;
	weights[15] 	= 9.7830643814065130431062725865783651921008608283864330032984765830725647893584813651062968413364560514373150949e-7;

	nodes[16] 	= 16.435978272258363799814500377860527207945128535392315678169345553478781689290088528106525554152017810064936904074768842637078336;
	weights[16] 	= 1.4766174199357267822948440802635004441494629701295434715385639968763640606817163551620166163951454257216586279e-7;

	nodes[17] 	= 18.534947008555947260000814640012462458132956968087752701370024009061529864235650808278639905682018665328424162007456117582423373;
	weights[17] 	= 1.935126165557700467562098691151555587693393548588609360069517130739048222539353006012529025720270192916975095e-8;

	nodes[18] 	= 20.776049438837934709080538322242299779567768028131655964791985134047344724829910336448340907250412495977299335722462071329121579;
	weights[18] 	= 2.194578714352754078070561727984596031427818918416775025014269995236982307449534025370532799786978518986705843e-9;

	nodes[19] 	= 23.163476588354721065995681567269915915469684462685536434638424886111003584847233164371557885330333788545922840210784964815150225;
	weights[19] 	= 2.14553836749594504044280704549001866267429152700492404477033120720176180353481705343980636969260368339000645e-10;

	nodes[20] 	= 25.70190050101572360858334955899488583547246421380379490029800104968045231318148015286055212864345873590600040289135417746363202;
	weights[20] 	= 1.80044484361888268623215543650536747105844505092236475076594975385255975325080316183957808928354748024072021e-11;

	nodes[21] 	= 28.396538654169700276826140302379630799624690424245517530468925765416700531459823965047930786328389788354615270039202900915961765;
	weights[21] 	= 1.29046413136595139754834025115026597355574244694852249172221405460294051249030298286645099447738321740000025e-12;

	nodes[22] 	= 31.25323137387233548845866853068514419838384064629043560657088011153210800766682080509105955146615902654135943380405019442915621;
	weights[22] 	= 7.856296312650811291910775775297797188670426035463969966025220483236171694379853170157771969634270805114657e-14;

	nodes[23] 	= 34.278535551968399185394942890406179398501432514672924967312649746532180862976367158216536131215699369501773691723507847334268649;
	weights[23] 	= 4.037014369294941679895110380787375050533286049213446110606544224461280457089460817071824599982390964023523e-15;

	nodes[24] 	= 37.479839026960317508165322862655152974434522407140848073782400068102630968556742604030201578598056601916248169871200913425972961;
	weights[24] 	= 1.738491744621008707478052614344935818553002359040048804190711224496034301194188115000411805536346789727063e-16;

	nodes[25] 	= 40.865501466922973129196690694750376092638649858460732890064709649191366195069638751643194512874819746638935312912527507647852377;
	weights[25] 	= 6.223438433708781705163730306111276769814205605250071634434288977227518904878626141933941810698318434067932e-18;

	nodes[26] 	= 44.445029680818823981791701367624526846239933698207986970553632044991314675808090750032212573315359839881688622204645004886501048;
	weights[26] 	= 1.834897694508604480266289359271143378110691269969374088128168352118318447085967717451121827995019250615778e-19;

	nodes[27] 	= 48.229298290725243710409370508476928491327698009696186160786972482317175147935355847038795280644057013739739998639095635006859083;
	weights[27] 	= 4.40864471354571508018621249739359101042879032899554668012627992500468601460600601942749336620082682793894e-21;

	nodes[28] 	= 52.230831110965121760898153122679018202963999768660348372023713997872760659382303246146486959966546796663986475838571856421363359;
	weights[28] 	= 8.52686194932759419981267093302659692487100838991715853974735853064974687454963016207258846570270145413586e-23;

	nodes[29] 	= 56.464165202754220917376138882334953303082486330341285722267643120665974632923528855404519574469085557566098925502631278254695148;
	weights[29] 	= 1.308821260004133141346379112960175493849223140257568944240235694654465248555196905887442088295766795801328e-24;

	nodes[30] 	= 60.94632975686360149248608094276792853752812803301030102037719991114009655835892566900542768623300319240047163109689529450358381;
	weights[30] 	= 1.567937714290374789612132299255066970938119505387321622359319233334618740866520954673443152833688127478768e-26;

	nodes[31] 	= 65.697488056502592325211435452170690853097402872092562157105501468040425148394221936182378037122725807077663636953388517630232763;
	weights[31] 	= 1.437300418196412709985769668865457413247469373015660998881663753704858915279215251419095059796752672945841e-28;

	nodes[32] 	= 70.741817040700829198945597321386287470286787645672460176444018524052663119697599591827571402322070506540507576812487866453225328;
	weights[32] 	= 9.84554898321421872393780803242016574489807146083947505204743098479294751086236093840870366422235850579676e-31;

	nodes[33] 	= 76.108743433264453365301764437340085029851774164637693136777096412657159849065784942378485521897761618820054371197898765627666026;
	weights[33] 	= 4.89640476945675378106813505453678611041615667665000932715574213725829154175997025985581248128120705699391e-33;

	nodes[34] 	= 81.834733853655233431683298372271325780742903797646881955831070759852722818270730636639079876938879915790035446976720893971835094;
	weights[34] 	= 1.705860283818797481115146256186264442499150127835717125908374986068234996746206763594905373720035211658464e-35;

	nodes[35] 	= 87.96598190481124582638608089343234144227315756847158736700836978238780916020424294555950779842151359443635409420288280515030586;
	weights[35] 	= 3.979260838728188612024771909500986673221529637618146666390732894122130183776028774590734860214043336839613e-38;

	nodes[36] 	= 94.562622103834214168416892945521809907187245965036306769214532586598859197381815282554678607088021364327053917265933561356148728;
	weights[36] 	= 5.860393759867726799094626416551310571264446457093196041087458971933886656541796150872744492555141847700387e-41;

	nodes[37] 	= 101.70570905648291302669907657513208232704589720179133928351932764411444945780259073289563209809665944794536796534931023750592955;
	weights[37] 	= 5.0346761176095301894775643973352288801766192090559774293001395096552629436298911922804116837396703855121181e-44;

	nodes[38] 	= 109.50961685166409318317698723642032525186125850162919981685607819918589704352572833460932142453155950607270918971904714057381284;
	weights[38] 	= 2.25731691005039975016752900704671492549159840146866512144814501332012297039185086625250892148859714077781609e-47;

	nodes[39] 	= 118.14623736034144186643923571962577202588080033947789612446008967662001109430855849498911098781544389865336130786107064257563042;
	weights[39] 	= 4.47074572492880011856138062396003997406029139920384693261834241221389059837510166175108069367958590998632541e-51;

	nodes[40] 	= 127.89893127059917709991319983470872788114275851409716206754793004647144395271313433974603197957279194279292692832680968433033875;
	weights[40] 	= 2.975439488499488432750813304990386548009841695663287543135644215478280004991793372895829141250252234798818117e-55;

	nodes[41] 	= 139.3104844197457780811037092962133572465367939942868223814641928661471625129618767380051958939550070807255636210338660738334113;
	weights[41] 	= 3.95672175337000415112576865721181352973268696628709461289364600873193521355158397745164543798469758489189383595e-60;

	nodes[42] 	= 153.77990500254633382567853987670433098915905532565130877197545963009811279565283237707767150723303035569287876445525172278014638;
	weights[42] 	= 2.808906903896686864306822538731194998823533866957692472758389315963580195247095902268855535952848905451730852151e-66;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_43_hpp__)*/
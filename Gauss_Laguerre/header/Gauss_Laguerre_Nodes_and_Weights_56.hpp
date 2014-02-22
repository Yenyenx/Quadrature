//
//        Gauss_Laguerre_Nodes_and_Weights_56.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 56.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_56_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_56_hpp__

void Gauss_Laguerre_Nodes_and_Weights_56(long double*& nodes, long double*& weights) {
	nodes	= new long double[56];
	weights	= new long double[56];

	nodes[0] 	= 0.025589950246990134278339151155908845236391445519379371689988720372257982600756642952312100774760446120485280771676750590150947758;
	weights[0] 	= 0.064015267368883130183613571298614086994269905730038456207484554454127184605565008818140681461059866899800557003373522935049669;

	nodes[1] 	= 0.13485365676188616864231365253567585395397302244756440676758819184854228144019948747635536464371993233585166749319016021302456418;
	weights[1] 	= 0.1336344460773159928876961761598156034289146865014601853959312797456155644855130057026594702597311383131463690251394440761877;

	nodes[2] 	= 0.331516219204912945055227044269244886806599060344095436168988436875030240281914710209339767123277288778513092534487997035231703;
	weights[2] 	= 0.172587017837522045675473007757208921977636306940233368749624662526252634342065905220496633527987166849747920497245969943908;

	nodes[3] 	= 0.61577380109770486166563242662215369436927599206393816394429230791655841616332131694858088806476974663511405739758584939889916127;
	weights[3] 	= 0.17726077695653787334420600506752317631068728976856991736466099592731699909183580262550304359616598717648075883078823813959;

	nodes[4] 	= 0.98785290991984052937592177917713290016133529263321582157377383834462202572771133411024562771647818097458060298973280299699775171;
	weights[4] 	= 0.154938484041019176390392510862759051083462250677409888593756742291041741012852055046029993069406357570480964304120340566;

	nodes[5] 	= 1.448045581947551595500994108988587701703690975062794547723714945966130681276801926702303545455549092019040952799797591847074108;
	weights[5] 	= 0.11854030343956479524038590427831105604403253359899010913500055891280894379568312437638852414036956867440274698683139444;

	nodes[6] 	= 1.9967138611873816795165206218301202457046183219413339949371293456143780313559345564912040436453521127824607230914397304454017551;
	weights[6] 	= 0.0805240528332059418239208626839289033334390022738412418816493417867631693727283748545212259772963529774934240248018611;

	nodes[7] 	= 2.6342919819784980858638459351230197284703996838528224579283862451063955584373699937790925864668133263675269403710437923478603348;
	weights[7] 	= 0.0489610645279394058380154925722880766525767471247249559055695173130507253655586830337743288595425652054532681547470817;

	nodes[8] 	= 3.3612884504001764628355899550034239616008961870402420940296776612449966566849899720212079029673630528800300294209771894995061794;
	weights[8] 	= 0.026777420189325666162610834563009876929992813119159714800382972947369921213632304614857652822073678437142183704891631;

	nodes[9] 	= 4.1782883793898724042164660741758369351108891301665872630482366878677494620705548360797064373955680450028748089804210426846930422;
	weights[9] 	= 0.01321322038587945112395811513195447609283686713785234660792779235630255337227683616269022259020716153863189121936554;

	nodes[10] 	= 5.0859561768573148723107639717852245059755110867768356030592176326010116514809037998770913241699187239396826807331559103676529026;
	weights[10] 	= 0.0058938789017570351184014534666747484686287990280842684989479768241307075374544875656715216217145547555056046519234;

	nodes[11] 	= 6.0850386377814316053645968320846612674910942360596191477452623379104632050997468037342539521097948793845901821614165043286684967;
	weights[11] 	= 0.0023792634228538806657379037813717218600160844743698412580923060683210422188083372108778312076313837875511398609622;

	nodes[12] 	= 7.176368482959884216843470053054926675609220578907863681258610073813786836994193587693548002432264449245424237136167831975788565;
	weights[12] 	= 0.000869742920612107309012136499712162731638697663333448931393936209863469209500909523173989603988654694699968257129;

	nodes[13] 	= 8.360868389121552718948795813564029055572554360712668371792985832543973810002312110100708131415921316385746915935882724367166396;
	weights[13] 	= 0.000287955742880198947773193017329164210566310000051490912191357608339736943139994799397709272862682471769049508082;

	nodes[14] 	= 9.6395555608876834291785950897917877630099125315803878884786543985620197942193164567631865224978723899140278040785404164359966862;
	weights[14] 	= 0.00008633463676210569333213386046239893535612426398075649847999951732270871643691996503713630534261905094726803533;

	nodes[15] 	= 11.013546902925991495359023117463385613062659194900206908674620294267429023208592474331418907901645414837516859893577812334477103;
	weights[15] 	= 0.00002343094019633373123548743119415638833062547264502142321005849186789776580646295624021496305142449960429010004;

	nodes[16] 	= 12.48406486025095383019147054163043553123045703623003593768829154800683404039113796485256939073971048857235398927951365955929078;
	weights[16] 	= 5.7525336237395193890369835908574237616586676222086845393896296154635552031217742770037832707398750503188744e-6;

	nodes[17] 	= 14.052444006085296610758420462175908540313087402295668286205398067290479229194476009794005099815662352766421118615837552919494354;
	weights[17] 	= 1.27650249981907072135357347542483068867874022950184408638528025197820523934504955569238301825064193797579979e-6;

	nodes[18] 	= 15.720138470312695680248734061776093405244078876610056815342078928874833199294800218026960927739267247696404078966594406878138307;
	weights[18] 	= 2.5575285432664654630011912748164737334159621054177117798432598217232575325626751145081491104833112843562302e-7;

	nodes[19] 	= 17.488730317758327470118164236921255702140235991272233726192765390753981087940543188440220122332691229625816742240076982627038118;
	weights[19] 	= 4.620801031393889278595415836857152211564130747629351723871926831337496566822766144775862293171257182225878e-8;

	nodes[20] 	= 19.359939004906685645559814250130544244773956123952390233101038532505862228469608310596642828530497791696164067835990846469593746;
	weights[20] 	= 7.51784240667051891853083197096035984592462792715115345358906447347561072842878568941882614611827866552326e-9;

	nodes[21] 	= 21.335632066939603376462420841153771357050765828760888376067634606143121918708811267144142091397435233974270252398558469113936147;
	weights[21] 	= 1.09963495353222997004267502456278190476549249195671997409060032019498591347651171876890342620824972217729e-9;

	nodes[22] 	= 23.41783721508758622916687515603341687418293652499560997414992295893842112724226242867393936663594274638178828093917094812926989;
	weights[22] 	= 1.4434452913113319729241415894851706785017998663796163457091683483830705330842445842158661157421759622893e-10;

	nodes[23] 	= 25.608756058430517231897459355104412587539886735773174300584360973690038307568219227873726865072206599372856278539873094437913863;
	weights[23] 	= 1.696989488316210352782390826422756401050524468611975179296862758306497817777166532129643175266899200461e-11;

	nodes[24] 	= 27.910779705996930500364815857283594049545440604496441791049934405898778517731805900982139445335953782316287343194959620672282146;
	weights[24] 	= 1.782888822626291567420640750977125062996494053799314742650194237532441637731031763337344112121696178408e-12;

	nodes[25] 	= 30.32650655628361757072037003652858657425409871780849194003850074851333001653950387972836863290711962286322863036896303920527189;
	weights[25] 	= 1.669850260979165334907491007461445921209702079699636835764055214726343596435152669830911628717650273203e-13;

	nodes[26] 	= 32.858762644742260119185198178220660174893212686585048221327770773449446424343544558312170842050013693569987395871051167575372421;
	weights[26] 	= 1.39051592726741686940635263941399139167608048863204276541070499467636891757577775937483365632808029823e-14;

	nodes[27] 	= 35.510624998763595123062311238280330124358855801589024047018927558672241039388639553231841876004710527195669173436967185188235457;
	weights[27] 	= 1.02646170763922843920223967776831830953046264223064009652662109171731228129679836074396155624721945748e-15;

	nodes[28] 	= 38.285448548745381164515727413776809152553452565131942343303270634965726765081282376783408839764183084204549326021436483965637627;
	weights[28] 	= 6.6953999162438581976253061981271052390174069948580804846297963295190919776061182179753654398587320209e-17;

	nodes[29] 	= 41.186897268990746709939173614707366660864089718277474875058859416101214332292151198144383031935667987500004031947889970148788903;
	weights[29] 	= 3.8453753459711454900832621808513287465567512519245995204057364696125119793173407767607432981849060521e-18;

	nodes[30] 	= 44.218980381589049134912996080715211883395612284180944716264661214852660182863826757358511675153799349660137362434704970861248316;
	weights[30] 	= 1.9370407302111191294305334584274056435747376714557839302132135999035872875134152485958310927842166012e-19;

	nodes[31] 	= 47.386094661179501388516348030216107468970372272916225238038753867727881255024659026477390633738335016732510294023804431187754393;
	weights[31] 	= 8.521502814551173814175935722816534270472380304769358304124305778570625223772912651757406390934468441e-21;

	nodes[32] 	= 50.693074143881303473938830933711897646293324331100274475930708628967059166889515085720677589382594999726570808052996930354587729;
	weights[32] 	= 3.258517676938615449791123571062977289363708132658601949513520747212254009646264956159747864832544382e-22;

	nodes[33] 	= 54.145248891013706083186464006450438416250158406843054063309774982498633993376543685495578781453060889067631333441693337014446877;
	weights[33] 	= 1.077417576671369879210859422734003353054634648855835584728487195536864375672621523591955852774718351e-23;

	nodes[34] 	= 57.748514917624641220412184280627103203127681144489659340179341187130776660909359486068977600021692936430275648742121402206512984;
	weights[34] 	= 3.06264562518322806454718398006996377883198133291622938469884489978151662467158459562355823376053312e-25;

	nodes[35] 	= 61.509418010366788780543628692483987499242648182196577420293185712765807503499685403518139066047425995069551215492426152665651584;
	weights[35] 	= 7.43645930431395637528651043384700972307347694451423068906457540713886514360861431206873206730389719e-27;

	nodes[36] 	= 65.435254991440755681126340240218451432257638758541972897023911753714998189936312900993236251291076906373950895159086503053990986;
	weights[36] 	= 1.53135838655505624360173144670086758554177997384024598894408563273706813977159876627385781243675989e-28;

	nodes[37] 	= 69.534197127417786704275980297668668008522987125591790132230968116954475203051495428569062877790111888086243639248292280903526121;
	weights[37] 	= 2.65299792908431058565971832622554669033909578190232086018784011803108239569004089534571327163623136e-30;

	nodes[38] 	= 73.815441972220079886029766489484006572823063044589210358259729909249950633541692524947440440177244067203827269463144305297313173;
	weights[38] 	= 3.83189728980813278331471683053035711053472164795992347034101443405656013343273635154587846367533209e-32;

	nodes[39] 	= 78.289402184162676407568228073114379612005934425215009027846315380292285573626245741672971530207657064292668559167214783253492839;
	weights[39] 	= 4.56724081828961693917237175442653388266268118895444898077804530584501503068287791563189523512982777e-34;

	nodes[40] 	= 82.967943098502675412075658188699227750141038955998284510947022673548786416970673734695873268694999287511175247906454732675345783;
	weights[40] 	= 4.4399789011242962844417781408603534341926487380866414351960877736549840126187247861577466116056658e-36;

	nodes[41] 	= 87.864685597962107133269159190054264380775285183644920447819108451049365554256554297920709447459069325227390835641098901215629924;
	weights[41] 	= 3.473500602432607335626844048021058507924835605969045924310657871260715998987094421770663154969006e-38;

	nodes[42] 	= 92.995397970706231880727254610283759628292224117907612336051138572327730707880092915356975002395259110468608478396563740918782292;
	weights[42] 	= 2.15311805015180133814474699431377276583440347766903685722734182762099167996269162309847675223772825e-40;

	nodes[43] 	= 98.378511439960763554592447224602571305396220788574954166897294988577941083630384754851951556568904656773459695163594811262676367;
	weights[43] 	= 1.03848353514067994860674002369168038935324216486417598355187517139768650857687292633411831327211109e-42;

	nodes[44] 	= 104.0358114380587441865718752036971349576661614613488522448772150674086077111086464278986960499725783740225021017465028206927687;
	weights[44] 	= 3.814601619150918780503240466385112553888687254830953193835823832103987214350571698829600066965004599e-45;

	nodes[45] 	= 109.99338508049418812677692990071177930743795636448807395442990432676789455454530138918905264521926368035363224203089196845179018;
	weights[45] 	= 1.0400882255792656354892844381502372764251256943923408666847573664291022036116750436625828133255891452e-47;

	nodes[46] 	= 116.28295333877812659282582432341402157088212888075826443023589031179879911543263402265716107554687202245605712635796881982943727;
	weights[46] 	= 2.0404161348408530186196716084068646312900286770733313903966167014641624388765864547385737231817257251e-50;

	nodes[47] 	= 122.94380125094639753262466947721375253398299095392196556229075417985398840771074367071808269390396449892023922944051455080395234;
	weights[47] 	= 2.7710014115213759197113333780619141318781848567925049687165019552658920009378765713467210477425374191e-53;

	nodes[48] 	= 130.02567701374784316449581801756996199149594284699788524657770576026184599867683143082996149174715990840484927292954425041139127;
	weights[48] 	= 2.481001026926627724459311586015707319107119837398842572668287769233234788995022369332507451499167621e-56;

	nodes[49] 	= 137.59334131882639746587255107804372552551544019732471489105150205967964042662277745282030753110215000024367164116752425874090115;
	weights[49] 	= 1.37446927592543219796813954263614448519546171827764234705190662401230107801307791581813784288206723528e-59;

	nodes[50] 	= 145.73410731496937097734173335871872020887781653469359499876884912035713576036255727354237126134755439495438947897525964163840395;
	weights[50] 	= 4.32592288642329201537053118668399847533221251057112360444849266395554022517718047634955682935634491772e-63;

	nodes[51] 	= 154.57124645977552147991088366327296304565062634224933432667768332753774311940027500710937514476702700749070595801816460624079477;
	weights[51] 	= 6.858480471582741023558528519352647973512120534065935839999688221957901350454427965694701969958080843435e-67;

	nodes[52] 	= 164.29017239726783081212978441070142521467260439645504644947304685181202031762464868857731942240690742290950091101393669370572166;
	weights[52] 	= 4.5737449743899039864346446056411092831508314896170972373510807282172065890574886907254073632497662806594e-71;

	nodes[53] 	= 175.19687082004241866634484727288995383406372959035038457589009936525551451853225533307584074413492082634273110121485820394120469;
	weights[53] 	= 9.54027090221623433216885013163564097635962138641121822306940702962164151571231477590598543058911370434285e-76;

	nodes[54] 	= 187.87829558388989818531461654444669327401503775023838706225322410367107447649929337990287265271453932674667594200974697298899913;
	weights[54] 	= 3.5405192017195272483740641308813298099233557147138591820269938311207593267445798416805567605565168236056031e-81;

	nodes[55] 	= 203.85006192921232560146812954064148911546179994559497110043232859127772957679558808817638910171370025919177616731591239592482218;
	weights[55] 	= 5.55599919294244369603906416719900911512887024109884249684873479103048784272259005436057796795662248262083339e-88;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_56_hpp__)*/
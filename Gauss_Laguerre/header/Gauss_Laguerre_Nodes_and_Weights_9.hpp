//
//        Gauss_Laguerre_Nodes_and_Weights_9.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 9.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_9_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_9_hpp__

void Gauss_Laguerre_Nodes_and_Weights_9(long double*& nodes, long double*& weights) {
	nodes	= new long double[9];
	weights	= new long double[9];

	nodes[0] 	= 0.15232222773180824742810707312742257521704615861097336788230874342434291804279909801293616908745733547571644687268414815357774496;
	weights[0] 	= 0.336126421797962519673467717605989942501521662071926329848217132566110382370809032798514136467308361211429995707776225074218742;

	nodes[1] 	= 0.8072200227422558477414192109515515746567930900973004271277443890030712436509751431776370074706225226577480243282023469222776401;
	weights[1] 	= 0.41121398042398438730914694279287672537679707673872641511964536594802104678594264138570966482605435133420824954893738470187583;

	nodes[2] 	= 2.0051351556193471229830332470140978405335795825697556068886559349521850413388151243393578555287127390243187097878932460676438643;
	weights[2] 	= 0.1992875253708855808605756072117874219485121404588039509793149151821636800516401402266879242165941089318588659494383261008476;

	nodes[3] 	= 3.7834739733312329916754060936401765878120585227258405498178179044876950066547305318913183778784761582953667913259405104743403867;
	weights[3] 	= 0.0474605627656515992621163600478783932628604592222938755235030529747087936865376618838226163271309200464530095679752076778174;

	nodes[4] 	= 6.2049567778766126069735352100615841886131382238123350142769226870105587565882116929646182856007103387724455226175305761466843125;
	weights[4] 	= 0.0055996266107945831770041990055553699780919960389967612167303575142370308190601894359235918292734751889611726104087882268026;

	nodes[5] 	= 9.3729852516875762018097107321456391523882038406523771965451376645029765128546709366143070972554357628959283683856503647329413967;
	weights[5] 	= 0.00030524976709321056630541282429122486290089611401823057012729030228821534571200658116939520460468803697435037130531412825185;

	nodes[6] 	= 13.466236911092093571097881839711718238123198798369262664697676606992242506392027416159096447629192492639136983229727846204821421;
	weights[6] 	= 6.592123026075352392255722848751027975051388021489394257677144181539776220618406305007144691773265916875678458235510257964e-6;

	nodes[7] 	= 18.833597788991696614149899299625873400964240022995271988552172384873752637661484513460124137253310928316919970494250459317607518;
	weights[7] 	= 4.110769330349548442902410403300909049066314162650327323516583200880750429413253317973796340641370787833709494495952301032e-8;

	nodes[8] 	= 26.374071890927376796141007293721936441691741760166883184211563684753175376816285543380604622296081721922419182958120501980105716;
	weights[8] 	= 3.29087403035070757646681380322502273040713208449309732024573023565734151493344842463789155704896022286055736204050177618838e-11;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_9_hpp__)*/
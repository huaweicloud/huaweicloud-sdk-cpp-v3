#ifndef HUAWEICLOUD_SDK_VPC_V2_VpcMeta_H_
#define HUAWEICLOUD_SDK_VPC_V2_VpcMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/vpc/v2/VpcExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_VPC_V2_EXPORT  VpcMeta {
public:
    static HttpRequestDef genRequestDefForAcceptVpcPeering();
    static HttpRequestDef genRequestDefForAssociateRouteTable();
    static HttpRequestDef genRequestDefForBatchCreateSecurityGroupTags();
    static HttpRequestDef genRequestDefForBatchCreateSubnetTags();
    static HttpRequestDef genRequestDefForBatchDeleteSecurityGroupTags();
    static HttpRequestDef genRequestDefForBatchDeleteSubnetTags();
    static HttpRequestDef genRequestDefForCreateFlowLog();
    static HttpRequestDef genRequestDefForCreatePort();
    static HttpRequestDef genRequestDefForCreateRouteTable();
    static HttpRequestDef genRequestDefForCreateSecurityGroup();
    static HttpRequestDef genRequestDefForCreateSecurityGroupRule();
    static HttpRequestDef genRequestDefForCreateSecurityGroupTag();
    static HttpRequestDef genRequestDefForCreateSubnet();
    static HttpRequestDef genRequestDefForCreateSubnetTag();
    static HttpRequestDef genRequestDefForCreateVpcPeering();
    static HttpRequestDef genRequestDefForDeleteFlowLog();
    static HttpRequestDef genRequestDefForDeletePort();
    static HttpRequestDef genRequestDefForDeleteRouteTable();
    static HttpRequestDef genRequestDefForDeleteSecurityGroup();
    static HttpRequestDef genRequestDefForDeleteSecurityGroupRule();
    static HttpRequestDef genRequestDefForDeleteSecurityGroupTag();
    static HttpRequestDef genRequestDefForDeleteSubnet();
    static HttpRequestDef genRequestDefForDeleteSubnetTag();
    static HttpRequestDef genRequestDefForDeleteVpcPeering();
    static HttpRequestDef genRequestDefForDisassociateRouteTable();
    static HttpRequestDef genRequestDefForListFlowLogs();
    static HttpRequestDef genRequestDefForListPorts();
    static HttpRequestDef genRequestDefForListRouteTables();
    static HttpRequestDef genRequestDefForListSecurityGroupRules();
    static HttpRequestDef genRequestDefForListSecurityGroupTags();
    static HttpRequestDef genRequestDefForListSecurityGroups();
    static HttpRequestDef genRequestDefForListSecurityGroupsByTags();
    static HttpRequestDef genRequestDefForListSubnetTags();
    static HttpRequestDef genRequestDefForListSubnets();
    static HttpRequestDef genRequestDefForListSubnetsByTags();
    static HttpRequestDef genRequestDefForListVpcPeerings();
    static HttpRequestDef genRequestDefForRejectVpcPeering();
    static HttpRequestDef genRequestDefForShowFlowLog();
    static HttpRequestDef genRequestDefForShowPort();
    static HttpRequestDef genRequestDefForShowQuota();
    static HttpRequestDef genRequestDefForShowRouteTable();
    static HttpRequestDef genRequestDefForShowSecurityGroup();
    static HttpRequestDef genRequestDefForShowSecurityGroupRule();
    static HttpRequestDef genRequestDefForShowSecurityGroupTags();
    static HttpRequestDef genRequestDefForShowSubnet();
    static HttpRequestDef genRequestDefForShowSubnetTags();
    static HttpRequestDef genRequestDefForShowVpcPeering();
    static HttpRequestDef genRequestDefForUpdateFlowLog();
    static HttpRequestDef genRequestDefForUpdatePort();
    static HttpRequestDef genRequestDefForUpdateRouteTable();
    static HttpRequestDef genRequestDefForUpdateSubnet();
    static HttpRequestDef genRequestDefForUpdateVpcPeering();
    static HttpRequestDef genRequestDefForCreatePrivateip();
    static HttpRequestDef genRequestDefForDeletePrivateip();
    static HttpRequestDef genRequestDefForListPrivateips();
    static HttpRequestDef genRequestDefForShowNetworkIpAvailabilities();
    static HttpRequestDef genRequestDefForShowPrivateip();
    static HttpRequestDef genRequestDefForNeutronAddRouterInterface();
    static HttpRequestDef genRequestDefForNeutronCreateNetwork();
    static HttpRequestDef genRequestDefForNeutronCreatePort();
    static HttpRequestDef genRequestDefForNeutronCreateRouter();
    static HttpRequestDef genRequestDefForNeutronCreateSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronCreateSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronCreateSubnet();
    static HttpRequestDef genRequestDefForNeutronDeleteNetwork();
    static HttpRequestDef genRequestDefForNeutronDeletePort();
    static HttpRequestDef genRequestDefForNeutronDeleteRouter();
    static HttpRequestDef genRequestDefForNeutronDeleteSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronDeleteSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronDeleteSubnet();
    static HttpRequestDef genRequestDefForNeutronListNetworks();
    static HttpRequestDef genRequestDefForNeutronListPorts();
    static HttpRequestDef genRequestDefForNeutronListRouters();
    static HttpRequestDef genRequestDefForNeutronListSecurityGroupRules();
    static HttpRequestDef genRequestDefForNeutronListSecurityGroups();
    static HttpRequestDef genRequestDefForNeutronListSubnets();
    static HttpRequestDef genRequestDefForNeutronRemoveRouterInterface();
    static HttpRequestDef genRequestDefForNeutronShowNetwork();
    static HttpRequestDef genRequestDefForNeutronShowPort();
    static HttpRequestDef genRequestDefForNeutronShowRouter();
    static HttpRequestDef genRequestDefForNeutronShowSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronShowSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronShowSubnet();
    static HttpRequestDef genRequestDefForNeutronUpdateNetwork();
    static HttpRequestDef genRequestDefForNeutronUpdatePort();
    static HttpRequestDef genRequestDefForNeutronUpdateRouter();
    static HttpRequestDef genRequestDefForNeutronUpdateSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronUpdateSubnet();
    static HttpRequestDef genRequestDefForNeutronAddFirewallRule();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallRule();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallRule();
    static HttpRequestDef genRequestDefForNeutronListFirewallGroups();
    static HttpRequestDef genRequestDefForNeutronListFirewallPolicies();
    static HttpRequestDef genRequestDefForNeutronListFirewallRules();
    static HttpRequestDef genRequestDefForNeutronRemoveFirewallRule();
    static HttpRequestDef genRequestDefForNeutronShowFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronShowFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronShowFirewallRule();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallRule();
    static HttpRequestDef genRequestDefForListApiVersion();
    static HttpRequestDef genRequestDefForBatchCreateVpcTags();
    static HttpRequestDef genRequestDefForBatchDeleteVpcTags();
    static HttpRequestDef genRequestDefForCreateVpc();
    static HttpRequestDef genRequestDefForCreateVpcResourceTag();
    static HttpRequestDef genRequestDefForCreateVpcRoute();
    static HttpRequestDef genRequestDefForDeleteVpc();
    static HttpRequestDef genRequestDefForDeleteVpcRoute();
    static HttpRequestDef genRequestDefForDeleteVpcTag();
    static HttpRequestDef genRequestDefForListVpcRoutes();
    static HttpRequestDef genRequestDefForListVpcTags();
    static HttpRequestDef genRequestDefForListVpcs();
    static HttpRequestDef genRequestDefForListVpcsByTags();
    static HttpRequestDef genRequestDefForShowVpc();
    static HttpRequestDef genRequestDefForShowVpcRoute();
    static HttpRequestDef genRequestDefForShowVpcTags();
    static HttpRequestDef genRequestDefForUpdateVpc();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_VpcMeta_H_


#include <huaweicloud/vpc/v2/VpcMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef VpcMeta::genRequestDefForAcceptVpcPeering() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForAssociateRouteTable() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchCreateSecurityGroupTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchCreateSubnetTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchDeleteSecurityGroupTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchDeleteSubnetTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateFlowLog() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreatePort() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateRouteTable() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateSecurityGroupTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateSubnet() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateSubnetTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateVpcPeering() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteFlowLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeletePort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteRouteTable() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteSecurityGroupTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteSubnet() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteSubnetTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteVpcPeering() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDisassociateRouteTable() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListFlowLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrafficType")
                  .withJsonTag("traffic_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogGroupId")
                  .withJsonTag("log_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogTopicId")
                  .withJsonTag("log_topic_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogStoreType")
                  .withJsonTag("log_store_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListPorts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminStateUp")
                  .withJsonTag("admin_state_up")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkId")
                  .withJsonTag("network_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MacAddress")
                  .withJsonTag("mac_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceId")
                  .withJsonTag("device_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceOwner")
                  .withJsonTag("device_owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SecurityGroups")
                  .withJsonTag("security_groups")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FixedIps")
                  .withJsonTag("fixed_ips")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableEfi")
                  .withJsonTag("enable_efi")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListRouteTables() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SubnetId")
                  .withJsonTag("subnet_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSecurityGroupRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SecurityGroupId")
                  .withJsonTag("security_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RemoteIpPrefix")
                  .withJsonTag("remote_ip_prefix")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSecurityGroupTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSecurityGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSecurityGroupsByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSubnetTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSubnets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListSubnetsByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListVpcPeerings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForRejectVpcPeering() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowFlowLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowPort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowQuota() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowRouteTable() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowSecurityGroupTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowSubnet() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowSubnetTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowVpcPeering() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdateFlowLog() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdatePort() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdateRouteTable() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdateSubnet() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdateVpcPeering() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreatePrivateip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeletePrivateip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListPrivateips() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowNetworkIpAvailabilities() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowPrivateip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronAddRouterInterface() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateNetwork() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreatePort() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateRouter() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateSubnet() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteNetwork() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeletePort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteRouter() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteSubnet() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListNetworks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Shared")
                  .withJsonTag("shared")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RouterExternal")
                  .withJsonTag("router:external")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminStateUp")
                  .withJsonTag("admin_state_up")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProviderNetworkType")
                  .withJsonTag("provider:network_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListPorts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminStateUp")
                  .withJsonTag("admin_state_up")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkId")
                  .withJsonTag("network_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MacAddress")
                  .withJsonTag("mac_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceId")
                  .withJsonTag("device_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceOwner")
                  .withJsonTag("device_owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SecurityGroups")
                  .withJsonTag("security_groups")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FixedIps")
                  .withJsonTag("fixed_ips")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListRouters() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminStateUp")
                  .withJsonTag("admin_state_up")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListSecurityGroupRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ethertype")
                  .withJsonTag("ethertype")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RemoteIpPrefix")
                  .withJsonTag("remote_ip_prefix")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RemoteGroupId")
                  .withJsonTag("remote_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SecurityGroupId")
                  .withJsonTag("security_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PortRangeMax")
                  .withJsonTag("port_range_max")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PortRangeMin")
                  .withJsonTag("port_range_min")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListSecurityGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListSubnets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Cidr")
                  .withJsonTag("cidr")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableDhcp")
                  .withJsonTag("enable_dhcp")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkId")
                  .withJsonTag("network_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpVersion")
                  .withJsonTag("ip_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GatewayIp")
                  .withJsonTag("gateway_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronRemoveRouterInterface() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowNetwork() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowPort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowRouter() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowSecurityGroupRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowSubnet() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateNetwork() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdatePort() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateRouter() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateSubnet() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronAddFirewallRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateFirewallGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateFirewallPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronCreateFirewallRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteFirewallGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteFirewallPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronDeleteFirewallRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListFirewallGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IngressFirewallPolicyId")
                  .withJsonTag("ingress_firewall_policy_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EgressFirewallPolicyId")
                  .withJsonTag("egress_firewall_policy_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListFirewallPolicies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronListFirewallRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronRemoveFirewallRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowFirewallGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowFirewallPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronShowFirewallRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateFirewallGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateFirewallPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForNeutronUpdateFirewallRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListApiVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchCreateVpcTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForBatchDeleteVpcTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateVpc() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateVpcResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForCreateVpcRoute() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteVpc() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteVpcRoute() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForDeleteVpcTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListVpcRoutes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Destination")
                  .withJsonTag("destination")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListVpcTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListVpcs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForListVpcsByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowVpc() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowVpcRoute() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForShowVpcTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VpcMeta::genRequestDefForUpdateVpc() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}



#include <huaweicloud/eip/v2/EipMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef EipMeta::genRequestDefForAddPublicipsIntoSharedBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchCreateSharedBandwidths() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchModifyBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForChangeBandwidthToPeriod() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCreateSharedBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDeleteSharedBandwidth() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListBandwidthPkg() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListBandwidths() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShareType")
                  .withJsonTag("share_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListQuotas() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForRemovePublicipsFromSharedBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowBandwidth() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdateBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdatePrePaidBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchCreatePublicipTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchCreatePublicips() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchDeletePublicIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchDeletePublicipTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForBatchDisassociatePublicips() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForChangePublicipToPeriod() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCountPublicIp() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCountPublicIpInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCreatePrePaidPublicip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCreatePublicip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCreatePublicipTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDeletePublicip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDeletePublicipTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicipTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicips() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpVersion")
                  .withJsonTag("ip_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PortId")
                  .withJsonTag("port_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicIpAddress")
                  .withJsonTag("public_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PrivateIpAddress")
                  .withJsonTag("private_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AllowShareBandwidthTypeAny")
                  .withJsonTag("allow_share_bandwidth_type_any")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicipsByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowPublicIpType() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowPublicip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowPublicipTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdatePublicip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowResourcesJobDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForNeutronCreateFloatingIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForNeutronDeleteFloatingIp() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForNeutronListFloatingIps() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FloatingIpAddress")
                  .withJsonTag("floating_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RouterId")
                  .withJsonTag("router_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PortId")
                  .withJsonTag("port_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FixedIpAddress")
                  .withJsonTag("fixed_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FloatingNetworkId")
                  .withJsonTag("floating_network_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForNeutronShowFloatingIp() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForNeutronUpdateFloatingIp() {
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


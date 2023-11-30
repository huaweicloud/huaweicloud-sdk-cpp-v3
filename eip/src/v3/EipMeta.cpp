
#include <huaweicloud/eip/v3/EipMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef EipMeta::genRequestDefForListBandwidth() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthType")
                  .withJsonTag("bandwidth_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameLike")
                  .withJsonTag("name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IngressSize")
                  .withJsonTag("ingress_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminState")
                  .withJsonTag("admin_state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BillingInfo")
                  .withJsonTag("billing_info")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableBandwidthRules")
                  .withJsonTag("enable_bandwidth_rules")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleQuota")
                  .withJsonTag("rule_quota")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargeMode")
                  .withJsonTag("charge_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListBandwidthsLimit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargeMode")
                  .withJsonTag("charge_mode")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListCommonPools() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListEipBandwidths() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthType")
                  .withJsonTag("bandwidth_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameLike")
                  .withJsonTag("name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TenantId")
                  .withJsonTag("tenant_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IngressSize")
                  .withJsonTag("ingress_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminState")
                  .withJsonTag("admin_state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BillingInfo")
                  .withJsonTag("billing_info")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableBandwidthRules")
                  .withJsonTag("enable_bandwidth_rules")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleQuota")
                  .withJsonTag("rule_quota")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargeMode")
                  .withJsonTag("charge_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicBorderGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicipPool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListShareBandwidthTypes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthType")
                  .withJsonTag("bandwidth_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameEn")
                  .withJsonTag("name_en")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameZh")
                  .withJsonTag("name_zh")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
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

HttpRequestDef EipMeta::genRequestDefForShowPublicipPool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForAssociatePublicips() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForAttachBatchPublicIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForAttachShareBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForCountEipAvailableResources() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDetachBatchPublicIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDetachShareBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDisableNat64() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDisassociatePublicips() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForEnableNat64() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListPublicips() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpVersion")
                  .withJsonTag("ip_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicIpAddress")
                  .withJsonTag("public_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicIpAddressLike")
                  .withJsonTag("public_ip_address_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicIpv6Address")
                  .withJsonTag("public_ipv6_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicIpv6AddressLike")
                  .withJsonTag("public_ipv6_address_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkType")
                  .withJsonTag("network_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicipPoolName")
                  .withJsonTag("publicip_pool_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AliasLike")
                  .withJsonTag("alias_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Alias")
                  .withJsonTag("alias")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodprivateIpAddress")
                  .withJsonTag("vnic.private_ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodprivateIpAddressLike")
                  .withJsonTag("vnic.private_ip_address_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPerioddeviceId")
                  .withJsonTag("vnic.device_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPerioddeviceOwner")
                  .withJsonTag("vnic.device_owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodvpcId")
                  .withJsonTag("vnic.vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodportId")
                  .withJsonTag("vnic.port_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPerioddeviceOwnerPrefixlike")
                  .withJsonTag("vnic.device_owner_prefixlike")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodinstanceType")
                  .withJsonTag("vnic.instance_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VnicPeriodinstanceId")
                  .withJsonTag("vnic.instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodid")
                  .withJsonTag("bandwidth.id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodname")
                  .withJsonTag("bandwidth.name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodnameLike")
                  .withJsonTag("bandwidth.name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodsize")
                  .withJsonTag("bandwidth.size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodshareType")
                  .withJsonTag("bandwidth.share_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BandwidthPeriodchargeMode")
                  .withJsonTag("bandwidth.charge_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BillingInfo")
                  .withJsonTag("billing_info")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BillingMode")
                  .withJsonTag("billing_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssociateInstanceType")
                  .withJsonTag("associate_instance_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssociateInstanceId")
                  .withJsonTag("associate_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AllowShareBandwidthTypeAny")
                  .withJsonTag("allow_share_bandwidth_type_any")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowPublicip() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdateAssociatePublicip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdateDisassociatePublicip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
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


}
}
}
}


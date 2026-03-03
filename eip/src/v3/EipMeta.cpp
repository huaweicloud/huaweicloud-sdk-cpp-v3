
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
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
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

HttpRequestDef EipMeta::genRequestDefForShowPublicipPoolTypes() {
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

HttpRequestDef EipMeta::genRequestDefForCreateTenantVpcIgw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForDeleteTenantVpcIgw() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForListTenantVpcIgws() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForShowInternalVpcIgw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EipMeta::genRequestDefForUpdateTenantVpcIgw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
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

HttpRequestDef EipMeta::genRequestDefForShowPublicip() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
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


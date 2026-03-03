
#include <huaweicloud/geip/v3/GeipMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef GeipMeta::genRequestDefForAddInternetBandwidthTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchCreateInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchCreateInternetBandwidthTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchDeleteInternetBandwidthTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForCountInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameLike")
                  .withJsonTag("name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessSite")
                  .withJsonTag("access_site")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForCreateInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForCreateUserDisclaimer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteInternetBandwidthTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteUserDisclaimer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGeipResourceQuotas() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListInternetBandwidthCountFilterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListInternetBandwidthDomainTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListInternetBandwidthFilterTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListInternetBandwidthLimits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargeMode")
                  .withJsonTag("charge_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListInternetBandwidths() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("ExtFields")
                  .withJsonTag("ext-fields")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameLike")
                  .withJsonTag("name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessSite")
                  .withJsonTag("access_site")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListSupportMasks() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("Mask")
                  .withJsonTag("mask")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowInternetBandwidthTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowUserDisclaimer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForUpdateInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForAddGeipSegmentTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForAddGlobalEipTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForAssociateGeipSegmentInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForAssociateInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamBindingInstanceService;
    reqDefBuilder.withRequestField(headerParamBindingInstanceService
                  .withName("BindingInstanceService")
                  .withJsonTag("binding-instance-service")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForAttachInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchAttachGeipSegmentInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchAttachInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchCreateGeipSegmentTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchCreateGlobalEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchCreateGlobalEipTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchDeleteGeipSegmentTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchDeleteGlobalEipTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchDetachGeipSegmentInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForBatchDetachInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForCreateGlobalEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForCreateGlobalEipSegment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteGeipSegmentTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteGlobalEip() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteGlobalEipSegment() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDeleteGlobalEipTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDetachInternetBandwidth() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ForceUnbind")
                  .withJsonTag("force_unbind")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDisassociateGeipSegmentInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForDisassociateInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamIsReserveGcb;
    reqDefBuilder.withRequestField(headerParamIsReserveGcb
                  .withName("IsReserveGcb")
                  .withJsonTag("is_reserve_gcb")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGeipSegmentCountFilterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGeipSegmentDomainTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGeipSegmentFilterTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGlobalEipCountFilterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGlobalEipDomainTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListGlobalEipFilterTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowGeipSegmentTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowGlobalEip() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowGlobalEipSegment() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowGlobalEipTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForUpdateGlobalEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForUpdateGlobalEipSegment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListJobs() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForShowJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListSupportRegions() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceType")
                  .withJsonTag("instance_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublicBorderGroup")
                  .withJsonTag("public_border_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessSite")
                  .withJsonTag("access_site")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RegionId")
                  .withJsonTag("region_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RemoteEndpoint")
                  .withJsonTag("remote_endpoint")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef GeipMeta::genRequestDefForListTenantGeipSupportInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}


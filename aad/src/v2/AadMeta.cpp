
#include <huaweicloud/aad/v2/AadMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef AadMeta::genRequestDefForAddWafWhiteIpRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForCreateDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeleteDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeleteWafWhiteIpRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListDDoSAttackEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListDDoSConnectionNumber() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListDDoSFlow() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListFrequencyControlRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListInstanceDomains() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafAttackEvent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domains")
                  .withJsonTag("domains")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Recent")
                  .withJsonTag("recent")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sip")
                  .withJsonTag("sip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafBandwidth() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domains")
                  .withJsonTag("domains")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ValueType")
                  .withJsonTag("value_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Recent")
                  .withJsonTag("recent")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafCustomRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafGeoIpRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafQps() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domains")
                  .withJsonTag("domains")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ValueType")
                  .withJsonTag("value_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Recent")
                  .withJsonTag("recent")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWafWhiteIpRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListWhiteBlackIpRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowDomainCertificate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowFlowBlock() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowWafPolicy() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowWafQps() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Recent")
                  .withJsonTag("recent")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Domains")
                  .withJsonTag("domains")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OverseasType")
                  .withJsonTag("overseas_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpgradeInstanceSpec() {
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


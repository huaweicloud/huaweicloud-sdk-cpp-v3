
#include <huaweicloud/aad/v1/AadMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef AadMeta::genRequestDefForExecuteUnblockIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListBlockIps() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListUnblockQuotaStatistics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowBlockStatistics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowUnblockRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForAddBlackWhiteIpList() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForAddPolicyBlackAndWhiteIpList() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForAssociateIpToPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForAssociateIpToPolicyAndPackage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForBatchCreateInstanceIpRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForBatchDeleteInstanceIpRule() {
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

HttpRequestDef AadMeta::genRequestDefForCreatePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeleteAlarmConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeleteBlackWhiteIpList() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeletePolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDeletePolicyBlackAndWhiteIpList() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDisassociateIpFromPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForDisassociateIpFromPolicyAndPackage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListInstanceId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListInstanceIpRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListPackage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListPeak() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListPolicy() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PolicyName")
                  .withJsonTag("policy_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListProtectedIp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PackageId")
                  .withJsonTag("package_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PolicyId")
                  .withJsonTag("policy_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListSourceIps() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForListUnboundProtectedIp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForModifyDomainWebSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForSetCertForDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowAlarmConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowLtsConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForShowPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdateAlarmConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdateDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdateInstanceIpRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdateLtsConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdatePackageIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdatePackageName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdatePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AadMeta::genRequestDefForUpdateTagForProtectedIp() {
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


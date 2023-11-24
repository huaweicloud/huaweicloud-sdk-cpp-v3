
#include <huaweicloud/live/v1/LiveMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef LiveMeta::genRequestDefForBatchShowIpBelongs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateDomainMapping() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateRecordCallbackConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateRecordIndex() {
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

HttpRequestDef LiveMeta::genRequestDefForCreateRecordRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateSnapshotConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateStreamForbidden() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForCreateTranscodingsTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteDomainKeyChain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteDomainMapping() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PullDomain")
                  .withJsonTag("pull_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PushDomain")
                  .withJsonTag("push_domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteRecordCallbackConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteRecordRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteSnapshotConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteStreamForbidden() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StreamName")
                  .withJsonTag("stream_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteTranscodingsTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListLiveSampleLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PlayDomain")
                  .withJsonTag("play_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListLiveStreamsOnline() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PublishDomain")
                  .withJsonTag("publish_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Stream")
                  .withJsonTag("stream")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListRecordCallbackConfigs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PublishDomain")
                  .withJsonTag("publish_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListRecordContents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PublishDomain")
                  .withJsonTag("publish_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Stream")
                  .withJsonTag("stream")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RecordType")
                  .withJsonTag("record_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListRecordRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PublishDomain")
                  .withJsonTag("publish_domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Stream")
                  .withJsonTag("stream")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RecordType")
                  .withJsonTag("record_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListSnapshotConfigs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForListStreamForbidden() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StreamName")
                  .withJsonTag("stream_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForRunRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
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

HttpRequestDef LiveMeta::genRequestDefForShowDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForShowDomainKeyChain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForShowRecordCallbackConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForShowRecordRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForShowTranscodingsTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateDomainIp6Switch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateDomainKeyChain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateRecordCallbackConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateRecordRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateSnapshotConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateStreamForbidden() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateTranscodingsTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForDeleteDomainHttpsCert() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForShowDomainHttpsCert() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateDomainHttpsCert() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LiveMeta::genRequestDefForUpdateObsBucketAuthorityPublic() {
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

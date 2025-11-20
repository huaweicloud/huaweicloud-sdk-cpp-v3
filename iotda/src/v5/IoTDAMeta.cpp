
#include <huaweicloud/iotda/v5/IoTDAMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IoTDAMeta::genRequestDefForCreateAccessCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddQueue() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForBatchShowQueue() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueueName")
                  .withJsonTag("queue_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteQueue() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowQueue() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DefaultApp")
                  .withJsonTag("default_app")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCountAsyncHistoryCommands() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommandName")
                  .withJsonTag("command_name")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateAsyncCommand() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListAsyncCommands() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommandName")
                  .withJsonTag("command_name")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListAsyncHistoryCommands() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommandName")
                  .withJsonTag("command_name")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowAsyncDeviceCommand() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateRoutingBacklogPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteRoutingBacklogPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListRoutingBacklogPolicy() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PolicyName")
                  .withJsonTag("policy_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowRoutingBacklogPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateRoutingBacklogPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateBatchTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteBatchTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListBatchTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskType")
                  .withJsonTag("task_type")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForRetryBatchTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowBatchTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskDetailStatus")
                  .withJsonTag("task_detail_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Target")
                  .withJsonTag("target")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForStopBatchTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteBatchTaskFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListBatchTaskFiles() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddBridge() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteBridge() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListBridges() {
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForResetBridgeSecret() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForBroadcastMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamSpAuthToken;
    reqDefBuilder.withRequestField(headerParamSpAuthToken
                  .withName("SpAuthToken")
                  .withJsonTag("Sp-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamStageAuthToken;
    reqDefBuilder.withRequestField(headerParamStageAuthToken
                  .withName("StageAuthToken")
                  .withJsonTag("Stage-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCheckCertificate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ActionId")
                  .withJsonTag("action_id")
                  .withLocationType(Query_));
    FieldDef headerParamSpAuthToken;
    reqDefBuilder.withRequestField(headerParamSpAuthToken
                  .withName("SpAuthToken")
                  .withJsonTag("Sp-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamStageAuthToken;
    reqDefBuilder.withRequestField(headerParamStageAuthToken
                  .withName("StageAuthToken")
                  .withJsonTag("Stage-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamSpAuthToken;
    reqDefBuilder.withRequestField(headerParamSpAuthToken
                  .withName("SpAuthToken")
                  .withJsonTag("Sp-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamStageAuthToken;
    reqDefBuilder.withRequestField(headerParamStageAuthToken
                  .withName("StageAuthToken")
                  .withJsonTag("Stage-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListCertificates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
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
    FieldDef headerParamSpAuthToken;
    reqDefBuilder.withRequestField(headerParamSpAuthToken
                  .withName("SpAuthToken")
                  .withJsonTag("Sp-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamStageAuthToken;
    reqDefBuilder.withRequestField(headerParamStageAuthToken
                  .withName("StageAuthToken")
                  .withJsonTag("Stage-Auth-Token")
                  .withLocationType(Header_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateCommand() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateDeviceAuthenticationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceAuthenticationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceAuthenticationTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("template_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceAuthenticationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceAuthenticationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateDeviceAuthorizer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceAuthorizer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceAuthorizers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorizerName")
                  .withJsonTag("authorizer_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceAuthorizer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceAuthorizer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceByDeviceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceCertificate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("CommonName")
                  .withJsonTag("common_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Fingerprint")
                  .withJsonTag("fingerprint")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddDeviceGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateOrDeleteDeviceInGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ActionId")
                  .withJsonTag("action_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceId")
                  .withJsonTag("device_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceGroups() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("LastModifiedTime")
                  .withJsonTag("last_modified_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupType")
                  .withJsonTag("group_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDevicesInGroup() {
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForChangeGateway() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForFreezeDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceGroupsByDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDevices() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProductId")
                  .withJsonTag("product_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GatewayId")
                  .withJsonTag("gateway_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsCascadeQuery")
                  .withJsonTag("is_cascade_query")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NodeId")
                  .withJsonTag("node_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceName")
                  .withJsonTag("device_name")
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
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForResetDeviceSecret() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ActionId")
                  .withJsonTag("action_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForResetFingerprint() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForSearchDevices() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUnfreezeDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateDeviceProxy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceProxy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceProxies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProxyName")
                  .withJsonTag("proxy_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceProxy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceProxy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceShadow() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceShadow() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDeviceShadowDesiredData() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateDomainConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDomainConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDomainConfigurations() {
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDomainConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDomainConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateRoutingFlowControlPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteRoutingFlowControlPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListRoutingFlowControlPolicy() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ScopeValue")
                  .withJsonTag("scope_value")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PolicyName")
                  .withJsonTag("policy_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowRoutingFlowControlPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateRoutingFlowControlPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddFunctions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteFunctions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListFunctions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProductId")
                  .withJsonTag("product_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddHarmonySoftBus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateSyncHarmonySoftBus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteHarmonySoftBus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListHarmonySoftBus() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForResetHarmonySoftBusKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowHarmonySoftBus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceMessages() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateOtaModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteOtaModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListOtaModules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProductId")
                  .withJsonTag("product_id")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowOtaModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateOtaModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateOtaPackage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteOtaPackage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListOtaPackageInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PackageType")
                  .withJsonTag("package_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProductId")
                  .withJsonTag("product_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowOtaPackage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForBindDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDevicePolicies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PolicyName")
                  .withJsonTag("policy_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowTargetsInDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUnbindDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateDevicePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteProduct() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListProducts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProductName")
                  .withJsonTag("product_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowProduct() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListProperties() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceId")
                  .withJsonTag("service_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateProperties() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateProvisioningTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteProvisioningTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListProvisioningTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("template_name")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowProvisioningTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateProvisioningTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateRoutingRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateRuleAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteRoutingRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteRuleAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListRoutingRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Event")
                  .withJsonTag("event")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppType")
                  .withJsonTag("app_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleName")
                  .withJsonTag("rule_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Active")
                  .withJsonTag("active")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListRuleActions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RuleId")
                  .withJsonTag("rule_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Channel")
                  .withJsonTag("channel")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppType")
                  .withJsonTag("app_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowRoutingRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowRuleAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateRoutingRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateRuleAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForChangeRuleStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleType")
                  .withJsonTag("rule_type")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateSecurityProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteSecurityProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListSecurityProfiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SecurityType")
                  .withJsonTag("security_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetType")
                  .withJsonTag("target_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetId")
                  .withJsonTag("target_id")
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowSecurityProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUpdateSecurityProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCreateServerCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteServerCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListServerCertificate() {
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowServerCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListResourcesByTags() {
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
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForTagDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForUntagDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForAddTunnel() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForCloseDeviceTunnel() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForDeleteDeviceTunnel() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForListDeviceTunnels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceId")
                  .withJsonTag("device_id")
                  .withLocationType(Query_));
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IoTDAMeta::genRequestDefForShowDeviceTunnel() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamInstanceId;
    reqDefBuilder.withRequestField(headerParamInstanceId
                  .withName("InstanceId")
                  .withJsonTag("Instance-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}


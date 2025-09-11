
#include <huaweicloud/functiongraph/v2/FunctionGraphMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef FunctionGraphMeta::genRequestDefForAsyncInvokeFunction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXCffInstanceMemory;
    reqDefBuilder.withRequestField(headerParamXCffInstanceMemory
                  .withName("XCffInstanceMemory")
                  .withJsonTag("X-Cff-Instance-Memory")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForBatchDeleteFunctionTriggers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForBatchDeleteWorkflows() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCancelAsyncInvocation() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateCallbackWorkflow() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXWorkflowRunId;
    reqDefBuilder.withRequestField(headerParamXWorkflowRunId
                  .withName("XWorkflowRunId")
                  .withJsonTag("X-Workflow-Run-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXWorkflowStateId;
    reqDefBuilder.withRequestField(headerParamXWorkflowStateId
                  .withName("XWorkflowStateId")
                  .withJsonTag("X-Workflow-State-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateDependencyVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateFunction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateFunctionApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateFunctionTrigger() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateFunctionVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateVersionAlias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateVpcEndpoint() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForCreateWorkflow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteDependencyVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteFunction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteFunctionApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteFunctionAsyncInvokeConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteFunctionTrigger() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteVersionAlias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForDeleteVpcEndpoint() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForEnableAsyncStatusLog() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForEnableLtsLogs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForExportFunction() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Config")
                  .withJsonTag("config")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Code")
                  .withJsonTag("code")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForImportFunction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForInvokeFunction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXCffLogType;
    reqDefBuilder.withRequestField(headerParamXCffLogType
                  .withName("XCffLogType")
                  .withJsonTag("X-Cff-Log-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXCFFRequestVersion;
    reqDefBuilder.withRequestField(headerParamXCFFRequestVersion
                  .withName("XCFFRequestVersion")
                  .withJsonTag("X-CFF-Request-Version")
                  .withLocationType(Header_));
    FieldDef headerParamXCffInstanceMemory;
    reqDefBuilder.withRequestField(headerParamXCffInstanceMemory
                  .withName("XCffInstanceMemory")
                  .withJsonTag("X-Cff-Instance-Memory")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xCffRequestId").
        withJsonTag("X-Cff-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListActiveAsyncInvocations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Requests")
                  .withJsonTag("requests")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryBeginTime")
                  .withJsonTag("query_begin_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryEndTime")
                  .withJsonTag("query_end_time")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListAppTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Runtime")
                  .withJsonTag("runtime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListAsyncInvocations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RequestId")
                  .withJsonTag("request_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryBeginTime")
                  .withJsonTag("query_begin_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryEndTime")
                  .withJsonTag("query_end_time")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListBridgeFunctions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListBridgeVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListDependencies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ispublic")
                  .withJsonTag("ispublic")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DependencyType")
                  .withJsonTag("dependency_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Runtime")
                  .withJsonTag("runtime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListDependencyVersion() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListEvents() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionAsMetric() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionAsyncInvokeConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionReservedInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Urn")
                  .withJsonTag("urn")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ispublic")
                  .withJsonTag("ispublic")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Runtime")
                  .withJsonTag("runtime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Scene")
                  .withJsonTag("scene")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Service")
                  .withJsonTag("service")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionTriggers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctionVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListFunctions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Maxitems")
                  .withJsonTag("maxitems")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PackageName")
                  .withJsonTag("package_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuncName")
                  .withJsonTag("func_name")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListQuotas() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListReservedInstanceConfigs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FunctionUrn")
                  .withJsonTag("function_urn")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Option")
                  .withJsonTag("option")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListVersionAliases() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListWorkflow() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkflowName")
                  .withJsonTag("workflow_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProject")
                  .withJsonTag("enterprise_project")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Mode")
                  .withJsonTag("mode")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForListWorkflowExecutions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForRetryWorkFlow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowAppTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowDependencyVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFuncReservedInstanceMetrics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFuncSnapshotState() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionAsyncInvokeConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionMetrics() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowFunctionTrigger() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowLtsLogDetails() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowProjectAsyncStatusLogInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowProjectTagsList() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowResInstanceInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowTenantMetric() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MetricType")
                  .withJsonTag("metric_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowTracing() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowVersionAlias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowWorkFlow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowWorkFlowMetric() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXGetWorkflowFullHistoryData;
    reqDefBuilder.withRequestField(headerParamXGetWorkflowFullHistoryData
                  .withName("XGetWorkflowFullHistoryData")
                  .withJsonTag("X-Get-Workflow-Full-History-Data")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForShowWorkflowExecutionForPage() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForStartSyncWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForStartWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXCreateTime;
    reqDefBuilder.withRequestField(headerParamXCreateTime
                  .withName("XCreateTime")
                  .withJsonTag("X-Create-Time")
                  .withLocationType(Header_));
    FieldDef headerParamXWorkflowRunID;
    reqDefBuilder.withRequestField(headerParamXWorkflowRunID
                  .withName("XWorkflowRunID")
                  .withJsonTag("X-WorkflowRun-ID")
                  .withLocationType(Header_));
    FieldDef headerParamXWorkflowRunMergeFnParameters;
    reqDefBuilder.withRequestField(headerParamXWorkflowRunMergeFnParameters
                  .withName("XWorkflowRunMergeFnParameters")
                  .withJsonTag("X-WorkflowRun-MergeFnParameters")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForStopWorkFlow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFuncSnapshot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionAsyncInvokeConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionCollectState() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionMaxInstanceConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateFunctionReservedInstancesCount() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateTracing() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateTrigger() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateVersionAlias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef FunctionGraphMeta::genRequestDefForUpdateWorkFlow() {
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


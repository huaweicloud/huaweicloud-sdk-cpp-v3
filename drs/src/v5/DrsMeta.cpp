
#include <huaweicloud/drs/v5/DrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef DrsMeta::genRequestDefForBatchCreateJobsAsync() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchDeleteJobsById() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchExecuteJobActions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchStopJobsAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchTagAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCheckDataFilter() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCollectColumns() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCollectDbObjectsAsync() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsRefresh")
                  .withJsonTag("is_refresh")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbNames")
                  .withJsonTag("db_names")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCollectDbObjectsInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCommitAsyncJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCopyJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCreateJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForDeleteJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForDownloadBatchCreateTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForDownloadDbObjectTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileImportDbLevel")
                  .withJsonTag("file_import_db_level")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForExecuteJobAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForExportOperationInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForImportBatchCreateJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListAsyncJobDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListAsyncJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AsyncJobId")
                  .withJsonTag("async_job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("user_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListDbObjects() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbNames")
                  .withJsonTag("db_names")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobType")
                  .withJsonTag("job_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EngineType")
                  .withJsonTag("engine_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetType")
                  .withJsonTag("net_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceIds")
                  .withJsonTag("instance_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceIp")
                  .withJsonTag("instance_ip")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListLinks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobType")
                  .withJsonTag("job_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListProjectTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowActions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowColumnInfoResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowComparePolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDataFilteringResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDataProcessingRulesResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDataProgress() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDbObjectCollectionStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDbObjectTemplateProgress() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDbObjectTemplateResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDbObjectsList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowDirtyData() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BeginTime")
                  .withJsonTag("begin_time")
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
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainId")
                  .withJsonTag("domain_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowHealthCompareJobList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowIncrementComponentsDetail() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowInstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowJobDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CompareType")
                  .withJsonTag("compare_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryType")
                  .withJsonTag("query_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectType")
                  .withJsonTag("object_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CompareTaskId")
                  .withJsonTag("compare_task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceDbName")
                  .withJsonTag("source_db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetDbName")
                  .withJsonTag("target_db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CompareDetailType")
                  .withJsonTag("compare_detail_type")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowMetering() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowMonitorData() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowObjectMapping() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowProgressData() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowSupportObjectType() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowUpdateObjectSavingStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryId")
                  .withJsonTag("query_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForStopJobAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateBatchAsyncJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateDataProgress() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateStartPosition() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUploadDbObjectTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileImportDbLevel")
                  .withJsonTag("file_import_db_level")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForValidateJobName() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
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



#include <huaweicloud/drs/v3/DrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef DrsMeta::genRequestDefForBatchChangeData() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchCheckJobs() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchCheckResults() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchCreateJobs() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchDeleteJobs() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListJobDetails() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListJobStatus() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListProgresses() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListRposAndRtos() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListStructDetail() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchListStructProcess() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchResetPassword() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchRestoreTask() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSetDefiner() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSetObjects() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSetPolicy() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSetSmn() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSetSpeed() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchShowParams() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchStartJobs() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchStopJobs() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchSwitchover() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchUpdateJob() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchUpdateUser() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchValidateClustersConnections() {
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

HttpRequestDef DrsMeta::genRequestDefForBatchValidateConnections() {
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

HttpRequestDef DrsMeta::genRequestDefForCreateCompareResultFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef headerParamRegion;
    reqDefBuilder.withRequestField(headerParamRegion
                  .withName("Region")
                  .withJsonTag("Region")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCreateCompareTask() {
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

HttpRequestDef DrsMeta::genRequestDefForCreateDataLevelTableCompareJob() {
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

HttpRequestDef DrsMeta::genRequestDefForCreateObjectLevelCompareJob() {
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

HttpRequestDef DrsMeta::genRequestDefForDeleteCompareJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForDownloadCompareResultFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("CompareType")
                  .withJsonTag("compare_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CompareJobId")
                  .withJsonTag("compare_job_id")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef headerParamRegion;
    reqDefBuilder.withRequestField(headerParamRegion
                  .withName("Region")
                  .withJsonTag("Region")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListAvailableNodeTypes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EngineType")
                  .withJsonTag("engine_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbUseType")
                  .withJsonTag("db_use_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobDirection")
                  .withJsonTag("job_direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsUseSelloutInfo")
                  .withJsonTag("is_use_sellout_info")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsMultiWrite")
                  .withJsonTag("is_multi_write")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListAvailableZone() {
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

HttpRequestDef DrsMeta::genRequestDefForListCompareResult() {
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

HttpRequestDef DrsMeta::genRequestDefForListContentCompareDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetDbName")
                  .withJsonTag("target_db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbName")
                  .withJsonTag("db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListContentCompareDifference() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TableName")
                  .withJsonTag("table_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbName")
                  .withJsonTag("db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListContentCompareOverview() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListDataCompareDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DbName")
                  .withJsonTag("db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetDbName")
                  .withJsonTag("target_db_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryTbName")
                  .withJsonTag("query_tb_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListDataCompareOverview() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListDataLevelTableCompareJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListObejectLevelCompareDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("CompareJobId")
                  .withJsonTag("compare_job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListObejectLevelCompareOverview() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListUsers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowJobList() {
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

HttpRequestDef DrsMeta::genRequestDefForShowMonitoringData() {
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

HttpRequestDef DrsMeta::genRequestDefForShowQuotas() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForStartPromptlyDataLevelTableCompareJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateParams() {
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

HttpRequestDef DrsMeta::genRequestDefForUpdateTuningParams() {
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



#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsBuildMeta::genRequestDefForCreateBuildJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForCreateTemplates() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDeleteBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDeleteTemplates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDisableBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDisableNotice() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NoticeType")
                  .withJsonTag("notice_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadBuildLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogLevel")
                  .withJsonTag("log_level")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadKeystore() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainId")
                  .withJsonTag("domain_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadRealTimeLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Length")
                  .withJsonTag("length")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadTaskLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskName")
                  .withJsonTag("task_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogLevel")
                  .withJsonTag("log_level")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForEnableBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListBuildInfoRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListBuildInfoRecordByJobId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListJobConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GetAllParams")
                  .withJsonTag("get_all_params")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListNotice() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListOfficialTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListProjectJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortOrder")
                  .withJsonTag("sort_order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatorId")
                  .withJsonTag("creator_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BuildStatus")
                  .withJsonTag("build_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ByGroup")
                  .withJsonTag("by_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupPathId")
                  .withJsonTag("group_path_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListRecyclingJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForListTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForRunJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowBuildParamsList() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowBuildRecord() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowBuildRecordBuildScript() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowBuildRecordFullStages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Cascade")
                  .withJsonTag("cascade")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowHistoryDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowImageTemplateList() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobBuildSuccessRatio() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Branch")
                  .withJsonTag("branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobBuildTime() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Branch")
                  .withJsonTag("branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GetAllParams")
                  .withJsonTag("get_all_params")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobConfigDiff() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RevisedlNo")
                  .withJsonTag("revisedl_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OriginalNo")
                  .withJsonTag("original_no")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobListByProjectId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobRolePermission() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobSuccessRatio() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobSystemParameters() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowLastHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowListHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowListPeriodHistory() {
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

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowOutputInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowProjectPermission() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowRecordDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowReportSummary() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BuildNo")
                  .withJsonTag("build_no")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowRunningStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowYamlTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DefaultHost")
                  .withJsonTag("default_host")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForStopBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForUpdateBuildJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForUpdateNotice() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadLogByRecordId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowFlowGraph() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowRecordInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForStopJob() {
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



#include <huaweicloud/cloudtest/v1/CloudtestMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CloudtestMeta::genRequestDefForAddCaseResultFour() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForAddTestCaseComment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForAddTestCaseResultLog() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchAddRelationsByOneCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchAddResourcesForIterator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchDeleteTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchDeleteTestCases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IsAsync")
                  .withJsonTag("is_async")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchDeleteTestReport() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchRemoveTestCasesFromIterator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchUpdateTestCasesInDiffVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchUpdateVersionTestCases() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCheckPermission() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateIterator() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchUri")
                  .withJsonTag("branch_uri")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreatePlan() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateProjectBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateRelationsByOneCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateReport() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateResourceUri() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateService() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateTaskDefaultResult() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateTestCaseInPlan() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateUserDefinedUrlKeyWord() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateVersionTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteBasicAwById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteCacheFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Uri")
                  .withJsonTag("uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParentUri")
                  .withJsonTag("parent_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BakUp")
                  .withJsonTag("bak_up")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteFacotrById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteRelationsByOneCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteService() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteTestCaseComment() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("VersionUri")
                  .withJsonTag("version_uri")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteTestReportCustomDetailByUri() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAlarmStatisticsUsing() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAlertGroupsByCondition() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAlertTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("pageNum")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("pageSize")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAllBranches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sort_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAllConfigItemByType() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAllIterators() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAllTestCases() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAttachments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListAvailableConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListBasicAw() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListBasicAwInfoListSupportsSearch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParentId")
                  .withJsonTag("parent_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListBranches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sort_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListCasesStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TestServiceId")
                  .withJsonTag("testServiceId")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListDomainVisibleServices() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListIssueTree() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListIteratorIssueTree() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListIterators() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListIteratorsInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListLinesUsing() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListMsgInfosUsing() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListOwnTestCases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sort_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Keyword")
                  .withJsonTag("keyword")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListProjectFieldConfigs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListProjectTestCaseFields() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListPublicLibAndAws() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListReports() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListResourcePools() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListScattersUsing() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListSubTaskCaseOverstockUsing() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExecutorType")
                  .withJsonTag("executorType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Label")
                  .withJsonTag("label")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LocationId")
                  .withJsonTag("locationId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("pageNum")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("pageSize")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTaskAssignCases() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTaskResultsDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Result")
                  .withJsonTag("result")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTaskTestCases() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTasks() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestCaseComments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VersionUri")
                  .withJsonTag("version_uri")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestCaseHistories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestCaseScriptDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestCases() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestCasesByIssue() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestReportsByCondition() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Own")
                  .withJsonTag("own")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestTypes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestcasesByProjectIssuesRelation() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListUsageInfos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListUserDnsMapping() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListUserPackageUsage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListUserPopupInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListUsingGet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListVariables() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForRemoveIssuesFromIterator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForRunTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForSaveTaskSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForSaveTestReportCustomDetail() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForSetTaskResult() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowAllConfigValueByTypeAndKey() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Key")
                  .withJsonTag("key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowAllFeatureChildren() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowApiTestcaseHistories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PlanId")
                  .withJsonTag("plan_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowAsset() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowAssetTree() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowBackgroundInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowCaseResult() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowConcurrencyPackageUsing() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceId")
                  .withJsonTag("service_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TestType")
                  .withJsonTag("test_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowDisclaimerRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowDomainInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowEchoTestPackageUsing() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowEtlData() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowFactorByAssetId() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowFactorById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowFeatureChildren() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowFreeDeclaration() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowIfTaskNameRepeat() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowIfUserNameRepeat() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserId")
                  .withJsonTag("userId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("userName")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowIssuesByPlanId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowIteratorByDefect() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowIteratorDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindMapById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapCreatorName() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowOperationalDataCurrentMonthUsing() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowPlanJournals() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowPlanList() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("CurrentStage")
                  .withJsonTag("current_stage")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BranchUri")
                  .withJsonTag("branch_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAllVersion")
                  .withJsonTag("query_all_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FixVersionIds")
                  .withJsonTag("fix_version_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowPlans() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CurrentStage")
                  .withJsonTag("current_stage")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowProgress() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowProjectDataDashboard() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowRegisterService() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowReport() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowRequirementsOverview() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowReviewByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowSceneByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowStatisticById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowSystemConfigs() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTemplateById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTemplateByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCase() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("VersionUri")
                  .withJsonTag("version_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskUri")
                  .withJsonTag("task_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Refresh")
                  .withJsonTag("refresh")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsRecycle")
                  .withJsonTag("is_recycle")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCaseAndDefectInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCaseDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCaseDetailV2() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TestcaseNumber")
                  .withJsonTag("testcase_number")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCaseReviews() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VersionUri")
                  .withJsonTag("version_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestCasesChangeStatistics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestcaseByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestpointByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowUserAccessInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectUuid")
                  .withJsonTag("project_uuid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowUserExecuteTestCaseInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateBasicAwById() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateIterator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateService() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateTestCaseComment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateTestCaseResult() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateTestReportCustomDetailByUri() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateUserDnsMapping() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateVersionTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUploadCacheFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Override")
                  .withJsonTag("override")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParentType")
                  .withJsonTag("parent_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParentUri")
                  .withJsonTag("parent_uri")
                  .withLocationType(Query_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateApiTestSuiteByRepoFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListEnvironments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUploadStepImg() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchDeleteFacotrByIds() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForBatchShowTestCase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateAssetTree() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateBackupMindmap() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForCreateTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteAsset() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteAssetTree() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteMindmapBackupById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteMindmapRecycleById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDeleteTemplateById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForDownloadAssetTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForExportFactor() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForImportAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForImportFactor() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowDefaultTemplateByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapBackupById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapBackupByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapRecycleById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowMindmapRecycleByPage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForShowTestcaseById() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateAssetTree() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForUpdateMindmapName() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForAddFeature() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTestcasePlans() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CloudtestMeta::genRequestDefForListTaskResults() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IteratorUri")
                  .withJsonTag("iterator_uri")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReleaseDev")
                  .withJsonTag("release_dev")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}




#include "huaweicloud/cloudtest/v1/model/TestCasesQueryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCasesQueryInfo::TestCasesQueryInfo()
{
    keyword_ = "";
    keywordIsSet_ = false;
    exeplatformsIsSet_ = false;
    own_ = false;
    ownIsSet_ = false;
    useOffset_ = false;
    useOffsetIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseUrisIsSet_ = false;
    ownerIdsIsSet_ = false;
    statusCodesIsSet_ = false;
    rankIdsIsSet_ = false;
    moduleIdsIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    creatorIdsIsSet_ = false;
    resultCodesIsSet_ = false;
    iterationIdsIsSet_ = false;
    createStartTime_ = "";
    createStartTimeIsSet_ = false;
    createEndTime_ = "";
    createEndTimeIsSet_ = false;
    associatedIssue_ = false;
    associatedIssueIsSet_ = false;
    associatedDefects_ = false;
    associatedDefectsIsSet_ = false;
    includeSubIssue_ = false;
    includeSubIssueIsSet_ = false;
    includeSubFeature_ = false;
    includeSubFeatureIsSet_ = false;
    labelIdsIsSet_ = false;
    executeStartTime_ = "";
    executeStartTimeIsSet_ = false;
    executeEndTime_ = "";
    executeEndTimeIsSet_ = false;
    executorIdsIsSet_ = false;
    testTypesIsSet_ = false;
    isKeyword_ = false;
    isKeywordIsSet_ = false;
    issueTreeSearch_ = false;
    issueTreeSearchIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    serviceTypesIsSet_ = false;
    stageType_ = 0;
    stageTypeIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    customFieldInfoIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    associateIssueDetail_ = false;
    associateIssueDetailIsSet_ = false;
    notAssignTask_ = false;
    notAssignTaskIsSet_ = false;
    testDesignsIsSet_ = false;
    reviewStatus_ = 0;
    reviewStatusIsSet_ = false;
}

TestCasesQueryInfo::~TestCasesQueryInfo() = default;

void TestCasesQueryInfo::validate()
{
}

web::json::value TestCasesQueryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(exeplatformsIsSet_) {
        val[utility::conversions::to_string_t("exeplatforms")] = ModelBase::toJson(exeplatforms_);
    }
    if(ownIsSet_) {
        val[utility::conversions::to_string_t("own")] = ModelBase::toJson(own_);
    }
    if(useOffsetIsSet_) {
        val[utility::conversions::to_string_t("useOffset")] = ModelBase::toJson(useOffset_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(caseUrisIsSet_) {
        val[utility::conversions::to_string_t("case_uris")] = ModelBase::toJson(caseUris_);
    }
    if(ownerIdsIsSet_) {
        val[utility::conversions::to_string_t("owner_ids")] = ModelBase::toJson(ownerIds_);
    }
    if(statusCodesIsSet_) {
        val[utility::conversions::to_string_t("status_codes")] = ModelBase::toJson(statusCodes_);
    }
    if(rankIdsIsSet_) {
        val[utility::conversions::to_string_t("rank_ids")] = ModelBase::toJson(rankIds_);
    }
    if(moduleIdsIsSet_) {
        val[utility::conversions::to_string_t("module_ids")] = ModelBase::toJson(moduleIds_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creator_ids")] = ModelBase::toJson(creatorIds_);
    }
    if(resultCodesIsSet_) {
        val[utility::conversions::to_string_t("result_codes")] = ModelBase::toJson(resultCodes_);
    }
    if(iterationIdsIsSet_) {
        val[utility::conversions::to_string_t("iteration_ids")] = ModelBase::toJson(iterationIds_);
    }
    if(createStartTimeIsSet_) {
        val[utility::conversions::to_string_t("create_start_time")] = ModelBase::toJson(createStartTime_);
    }
    if(createEndTimeIsSet_) {
        val[utility::conversions::to_string_t("create_end_time")] = ModelBase::toJson(createEndTime_);
    }
    if(associatedIssueIsSet_) {
        val[utility::conversions::to_string_t("associated_issue")] = ModelBase::toJson(associatedIssue_);
    }
    if(associatedDefectsIsSet_) {
        val[utility::conversions::to_string_t("associated_defects")] = ModelBase::toJson(associatedDefects_);
    }
    if(includeSubIssueIsSet_) {
        val[utility::conversions::to_string_t("include_sub_issue")] = ModelBase::toJson(includeSubIssue_);
    }
    if(includeSubFeatureIsSet_) {
        val[utility::conversions::to_string_t("include_sub_feature")] = ModelBase::toJson(includeSubFeature_);
    }
    if(labelIdsIsSet_) {
        val[utility::conversions::to_string_t("label_ids")] = ModelBase::toJson(labelIds_);
    }
    if(executeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_start_time")] = ModelBase::toJson(executeStartTime_);
    }
    if(executeEndTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_end_time")] = ModelBase::toJson(executeEndTime_);
    }
    if(executorIdsIsSet_) {
        val[utility::conversions::to_string_t("executor_ids")] = ModelBase::toJson(executorIds_);
    }
    if(testTypesIsSet_) {
        val[utility::conversions::to_string_t("test_types")] = ModelBase::toJson(testTypes_);
    }
    if(isKeywordIsSet_) {
        val[utility::conversions::to_string_t("is_keyword")] = ModelBase::toJson(isKeyword_);
    }
    if(issueTreeSearchIsSet_) {
        val[utility::conversions::to_string_t("issue_tree_search")] = ModelBase::toJson(issueTreeSearch_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(serviceTypesIsSet_) {
        val[utility::conversions::to_string_t("service_types")] = ModelBase::toJson(serviceTypes_);
    }
    if(stageTypeIsSet_) {
        val[utility::conversions::to_string_t("stage_type")] = ModelBase::toJson(stageType_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(caseTypeIsSet_) {
        val[utility::conversions::to_string_t("case_type")] = ModelBase::toJson(caseType_);
    }
    if(customFieldInfoIsSet_) {
        val[utility::conversions::to_string_t("custom_field_info")] = ModelBase::toJson(customFieldInfo_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(associateIssueDetailIsSet_) {
        val[utility::conversions::to_string_t("associate_issue_detail")] = ModelBase::toJson(associateIssueDetail_);
    }
    if(notAssignTaskIsSet_) {
        val[utility::conversions::to_string_t("not_assign_task")] = ModelBase::toJson(notAssignTask_);
    }
    if(testDesignsIsSet_) {
        val[utility::conversions::to_string_t("test_designs")] = ModelBase::toJson(testDesigns_);
    }
    if(reviewStatusIsSet_) {
        val[utility::conversions::to_string_t("review_status")] = ModelBase::toJson(reviewStatus_);
    }

    return val;
}
bool TestCasesQueryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exeplatforms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exeplatforms"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExeplatforms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("own"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("own"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useOffset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useOffset"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_defects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_defects"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedDefects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_sub_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_sub_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSubIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_sub_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_sub_feature"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSubFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_keyword"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_tree_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_tree_search"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueTreeSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_types"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_info"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryCustomFieldsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_issue_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_issue_detail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateIssueDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_assign_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_assign_task"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotAssignTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_designs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_designs"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestDesigns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewStatus(refVal);
        }
    }
    return ok;
}


std::string TestCasesQueryInfo::getKeyword() const
{
    return keyword_;
}

void TestCasesQueryInfo::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool TestCasesQueryInfo::keywordIsSet() const
{
    return keywordIsSet_;
}

void TestCasesQueryInfo::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getExeplatforms()
{
    return exeplatforms_;
}

void TestCasesQueryInfo::setExeplatforms(const std::vector<std::string>& value)
{
    exeplatforms_ = value;
    exeplatformsIsSet_ = true;
}

bool TestCasesQueryInfo::exeplatformsIsSet() const
{
    return exeplatformsIsSet_;
}

void TestCasesQueryInfo::unsetexeplatforms()
{
    exeplatformsIsSet_ = false;
}

bool TestCasesQueryInfo::isOwn() const
{
    return own_;
}

void TestCasesQueryInfo::setOwn(bool value)
{
    own_ = value;
    ownIsSet_ = true;
}

bool TestCasesQueryInfo::ownIsSet() const
{
    return ownIsSet_;
}

void TestCasesQueryInfo::unsetown()
{
    ownIsSet_ = false;
}

bool TestCasesQueryInfo::isUseOffset() const
{
    return useOffset_;
}

void TestCasesQueryInfo::setUseOffset(bool value)
{
    useOffset_ = value;
    useOffsetIsSet_ = true;
}

bool TestCasesQueryInfo::useOffsetIsSet() const
{
    return useOffsetIsSet_;
}

void TestCasesQueryInfo::unsetuseOffset()
{
    useOffsetIsSet_ = false;
}

std::string TestCasesQueryInfo::getVersionUri() const
{
    return versionUri_;
}

void TestCasesQueryInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCasesQueryInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCasesQueryInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getCaseUris()
{
    return caseUris_;
}

void TestCasesQueryInfo::setCaseUris(const std::vector<std::string>& value)
{
    caseUris_ = value;
    caseUrisIsSet_ = true;
}

bool TestCasesQueryInfo::caseUrisIsSet() const
{
    return caseUrisIsSet_;
}

void TestCasesQueryInfo::unsetcaseUris()
{
    caseUrisIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getOwnerIds()
{
    return ownerIds_;
}

void TestCasesQueryInfo::setOwnerIds(const std::vector<std::string>& value)
{
    ownerIds_ = value;
    ownerIdsIsSet_ = true;
}

bool TestCasesQueryInfo::ownerIdsIsSet() const
{
    return ownerIdsIsSet_;
}

void TestCasesQueryInfo::unsetownerIds()
{
    ownerIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getStatusCodes()
{
    return statusCodes_;
}

void TestCasesQueryInfo::setStatusCodes(const std::vector<std::string>& value)
{
    statusCodes_ = value;
    statusCodesIsSet_ = true;
}

bool TestCasesQueryInfo::statusCodesIsSet() const
{
    return statusCodesIsSet_;
}

void TestCasesQueryInfo::unsetstatusCodes()
{
    statusCodesIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getRankIds()
{
    return rankIds_;
}

void TestCasesQueryInfo::setRankIds(const std::vector<std::string>& value)
{
    rankIds_ = value;
    rankIdsIsSet_ = true;
}

bool TestCasesQueryInfo::rankIdsIsSet() const
{
    return rankIdsIsSet_;
}

void TestCasesQueryInfo::unsetrankIds()
{
    rankIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getModuleIds()
{
    return moduleIds_;
}

void TestCasesQueryInfo::setModuleIds(const std::vector<std::string>& value)
{
    moduleIds_ = value;
    moduleIdsIsSet_ = true;
}

bool TestCasesQueryInfo::moduleIdsIsSet() const
{
    return moduleIdsIsSet_;
}

void TestCasesQueryInfo::unsetmoduleIds()
{
    moduleIdsIsSet_ = false;
}

std::string TestCasesQueryInfo::getIssueId() const
{
    return issueId_;
}

void TestCasesQueryInfo::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool TestCasesQueryInfo::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void TestCasesQueryInfo::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getCreatorIds()
{
    return creatorIds_;
}

void TestCasesQueryInfo::setCreatorIds(const std::vector<std::string>& value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool TestCasesQueryInfo::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void TestCasesQueryInfo::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getResultCodes()
{
    return resultCodes_;
}

void TestCasesQueryInfo::setResultCodes(const std::vector<std::string>& value)
{
    resultCodes_ = value;
    resultCodesIsSet_ = true;
}

bool TestCasesQueryInfo::resultCodesIsSet() const
{
    return resultCodesIsSet_;
}

void TestCasesQueryInfo::unsetresultCodes()
{
    resultCodesIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getIterationIds()
{
    return iterationIds_;
}

void TestCasesQueryInfo::setIterationIds(const std::vector<std::string>& value)
{
    iterationIds_ = value;
    iterationIdsIsSet_ = true;
}

bool TestCasesQueryInfo::iterationIdsIsSet() const
{
    return iterationIdsIsSet_;
}

void TestCasesQueryInfo::unsetiterationIds()
{
    iterationIdsIsSet_ = false;
}

std::string TestCasesQueryInfo::getCreateStartTime() const
{
    return createStartTime_;
}

void TestCasesQueryInfo::setCreateStartTime(const std::string& value)
{
    createStartTime_ = value;
    createStartTimeIsSet_ = true;
}

bool TestCasesQueryInfo::createStartTimeIsSet() const
{
    return createStartTimeIsSet_;
}

void TestCasesQueryInfo::unsetcreateStartTime()
{
    createStartTimeIsSet_ = false;
}

std::string TestCasesQueryInfo::getCreateEndTime() const
{
    return createEndTime_;
}

void TestCasesQueryInfo::setCreateEndTime(const std::string& value)
{
    createEndTime_ = value;
    createEndTimeIsSet_ = true;
}

bool TestCasesQueryInfo::createEndTimeIsSet() const
{
    return createEndTimeIsSet_;
}

void TestCasesQueryInfo::unsetcreateEndTime()
{
    createEndTimeIsSet_ = false;
}

bool TestCasesQueryInfo::isAssociatedIssue() const
{
    return associatedIssue_;
}

void TestCasesQueryInfo::setAssociatedIssue(bool value)
{
    associatedIssue_ = value;
    associatedIssueIsSet_ = true;
}

bool TestCasesQueryInfo::associatedIssueIsSet() const
{
    return associatedIssueIsSet_;
}

void TestCasesQueryInfo::unsetassociatedIssue()
{
    associatedIssueIsSet_ = false;
}

bool TestCasesQueryInfo::isAssociatedDefects() const
{
    return associatedDefects_;
}

void TestCasesQueryInfo::setAssociatedDefects(bool value)
{
    associatedDefects_ = value;
    associatedDefectsIsSet_ = true;
}

bool TestCasesQueryInfo::associatedDefectsIsSet() const
{
    return associatedDefectsIsSet_;
}

void TestCasesQueryInfo::unsetassociatedDefects()
{
    associatedDefectsIsSet_ = false;
}

bool TestCasesQueryInfo::isIncludeSubIssue() const
{
    return includeSubIssue_;
}

void TestCasesQueryInfo::setIncludeSubIssue(bool value)
{
    includeSubIssue_ = value;
    includeSubIssueIsSet_ = true;
}

bool TestCasesQueryInfo::includeSubIssueIsSet() const
{
    return includeSubIssueIsSet_;
}

void TestCasesQueryInfo::unsetincludeSubIssue()
{
    includeSubIssueIsSet_ = false;
}

bool TestCasesQueryInfo::isIncludeSubFeature() const
{
    return includeSubFeature_;
}

void TestCasesQueryInfo::setIncludeSubFeature(bool value)
{
    includeSubFeature_ = value;
    includeSubFeatureIsSet_ = true;
}

bool TestCasesQueryInfo::includeSubFeatureIsSet() const
{
    return includeSubFeatureIsSet_;
}

void TestCasesQueryInfo::unsetincludeSubFeature()
{
    includeSubFeatureIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getLabelIds()
{
    return labelIds_;
}

void TestCasesQueryInfo::setLabelIds(const std::vector<std::string>& value)
{
    labelIds_ = value;
    labelIdsIsSet_ = true;
}

bool TestCasesQueryInfo::labelIdsIsSet() const
{
    return labelIdsIsSet_;
}

void TestCasesQueryInfo::unsetlabelIds()
{
    labelIdsIsSet_ = false;
}

std::string TestCasesQueryInfo::getExecuteStartTime() const
{
    return executeStartTime_;
}

void TestCasesQueryInfo::setExecuteStartTime(const std::string& value)
{
    executeStartTime_ = value;
    executeStartTimeIsSet_ = true;
}

bool TestCasesQueryInfo::executeStartTimeIsSet() const
{
    return executeStartTimeIsSet_;
}

void TestCasesQueryInfo::unsetexecuteStartTime()
{
    executeStartTimeIsSet_ = false;
}

std::string TestCasesQueryInfo::getExecuteEndTime() const
{
    return executeEndTime_;
}

void TestCasesQueryInfo::setExecuteEndTime(const std::string& value)
{
    executeEndTime_ = value;
    executeEndTimeIsSet_ = true;
}

bool TestCasesQueryInfo::executeEndTimeIsSet() const
{
    return executeEndTimeIsSet_;
}

void TestCasesQueryInfo::unsetexecuteEndTime()
{
    executeEndTimeIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getExecutorIds()
{
    return executorIds_;
}

void TestCasesQueryInfo::setExecutorIds(const std::vector<std::string>& value)
{
    executorIds_ = value;
    executorIdsIsSet_ = true;
}

bool TestCasesQueryInfo::executorIdsIsSet() const
{
    return executorIdsIsSet_;
}

void TestCasesQueryInfo::unsetexecutorIds()
{
    executorIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesQueryInfo::getTestTypes()
{
    return testTypes_;
}

void TestCasesQueryInfo::setTestTypes(const std::vector<std::string>& value)
{
    testTypes_ = value;
    testTypesIsSet_ = true;
}

bool TestCasesQueryInfo::testTypesIsSet() const
{
    return testTypesIsSet_;
}

void TestCasesQueryInfo::unsettestTypes()
{
    testTypesIsSet_ = false;
}

bool TestCasesQueryInfo::isIsKeyword() const
{
    return isKeyword_;
}

void TestCasesQueryInfo::setIsKeyword(bool value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool TestCasesQueryInfo::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void TestCasesQueryInfo::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

bool TestCasesQueryInfo::isIssueTreeSearch() const
{
    return issueTreeSearch_;
}

void TestCasesQueryInfo::setIssueTreeSearch(bool value)
{
    issueTreeSearch_ = value;
    issueTreeSearchIsSet_ = true;
}

bool TestCasesQueryInfo::issueTreeSearchIsSet() const
{
    return issueTreeSearchIsSet_;
}

void TestCasesQueryInfo::unsetissueTreeSearch()
{
    issueTreeSearchIsSet_ = false;
}

int32_t TestCasesQueryInfo::getServiceType() const
{
    return serviceType_;
}

void TestCasesQueryInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TestCasesQueryInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TestCasesQueryInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<int32_t>& TestCasesQueryInfo::getServiceTypes()
{
    return serviceTypes_;
}

void TestCasesQueryInfo::setServiceTypes(std::vector<int32_t> value)
{
    serviceTypes_ = value;
    serviceTypesIsSet_ = true;
}

bool TestCasesQueryInfo::serviceTypesIsSet() const
{
    return serviceTypesIsSet_;
}

void TestCasesQueryInfo::unsetserviceTypes()
{
    serviceTypesIsSet_ = false;
}

int32_t TestCasesQueryInfo::getStageType() const
{
    return stageType_;
}

void TestCasesQueryInfo::setStageType(int32_t value)
{
    stageType_ = value;
    stageTypeIsSet_ = true;
}

bool TestCasesQueryInfo::stageTypeIsSet() const
{
    return stageTypeIsSet_;
}

void TestCasesQueryInfo::unsetstageType()
{
    stageTypeIsSet_ = false;
}

std::string TestCasesQueryInfo::getFeatureUri() const
{
    return featureUri_;
}

void TestCasesQueryInfo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool TestCasesQueryInfo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void TestCasesQueryInfo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string TestCasesQueryInfo::getSortField() const
{
    return sortField_;
}

void TestCasesQueryInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool TestCasesQueryInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void TestCasesQueryInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string TestCasesQueryInfo::getSortType() const
{
    return sortType_;
}

void TestCasesQueryInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool TestCasesQueryInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void TestCasesQueryInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t TestCasesQueryInfo::getPageNo() const
{
    return pageNo_;
}

void TestCasesQueryInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool TestCasesQueryInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void TestCasesQueryInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t TestCasesQueryInfo::getPageSize() const
{
    return pageSize_;
}

void TestCasesQueryInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool TestCasesQueryInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void TestCasesQueryInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t TestCasesQueryInfo::getCaseType() const
{
    return caseType_;
}

void TestCasesQueryInfo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool TestCasesQueryInfo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void TestCasesQueryInfo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

std::vector<QueryCustomFieldsInfo>& TestCasesQueryInfo::getCustomFieldInfo()
{
    return customFieldInfo_;
}

void TestCasesQueryInfo::setCustomFieldInfo(const std::vector<QueryCustomFieldsInfo>& value)
{
    customFieldInfo_ = value;
    customFieldInfoIsSet_ = true;
}

bool TestCasesQueryInfo::customFieldInfoIsSet() const
{
    return customFieldInfoIsSet_;
}

void TestCasesQueryInfo::unsetcustomFieldInfo()
{
    customFieldInfoIsSet_ = false;
}

std::string TestCasesQueryInfo::getTaskUri() const
{
    return taskUri_;
}

void TestCasesQueryInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool TestCasesQueryInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void TestCasesQueryInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

bool TestCasesQueryInfo::isAssociateIssueDetail() const
{
    return associateIssueDetail_;
}

void TestCasesQueryInfo::setAssociateIssueDetail(bool value)
{
    associateIssueDetail_ = value;
    associateIssueDetailIsSet_ = true;
}

bool TestCasesQueryInfo::associateIssueDetailIsSet() const
{
    return associateIssueDetailIsSet_;
}

void TestCasesQueryInfo::unsetassociateIssueDetail()
{
    associateIssueDetailIsSet_ = false;
}

bool TestCasesQueryInfo::isNotAssignTask() const
{
    return notAssignTask_;
}

void TestCasesQueryInfo::setNotAssignTask(bool value)
{
    notAssignTask_ = value;
    notAssignTaskIsSet_ = true;
}

bool TestCasesQueryInfo::notAssignTaskIsSet() const
{
    return notAssignTaskIsSet_;
}

void TestCasesQueryInfo::unsetnotAssignTask()
{
    notAssignTaskIsSet_ = false;
}

std::vector<bool>& TestCasesQueryInfo::getTestDesigns()
{
    return testDesigns_;
}

void TestCasesQueryInfo::setTestDesigns(std::vector<bool> value)
{
    testDesigns_ = value;
    testDesignsIsSet_ = true;
}

bool TestCasesQueryInfo::testDesignsIsSet() const
{
    return testDesignsIsSet_;
}

void TestCasesQueryInfo::unsettestDesigns()
{
    testDesignsIsSet_ = false;
}

int32_t TestCasesQueryInfo::getReviewStatus() const
{
    return reviewStatus_;
}

void TestCasesQueryInfo::setReviewStatus(int32_t value)
{
    reviewStatus_ = value;
    reviewStatusIsSet_ = true;
}

bool TestCasesQueryInfo::reviewStatusIsSet() const
{
    return reviewStatusIsSet_;
}

void TestCasesQueryInfo::unsetreviewStatus()
{
    reviewStatusIsSet_ = false;
}

}
}
}
}
}



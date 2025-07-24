

#include "huaweicloud/cloudtest/v1/model/TaskVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskVo::TaskVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    parentPath_ = "";
    parentPathIsSet_ = false;
    originUri_ = "";
    originUriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    createDateTimestamp_ = 0L;
    createDateTimestampIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimeTimestamp_ = 0L;
    updateTimeTimestampIsSet_ = false;
    relationChangeTime_ = utility::datetime();
    relationChangeTimeIsSet_ = false;
    relationChangeTimeTimestamp_ = 0L;
    relationChangeTimeTimestampIsSet_ = false;
    testCaseCondition_ = "";
    testCaseConditionIsSet_ = false;
    updatorId_ = "";
    updatorIdIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
    relationChangerId_ = "";
    relationChangerIdIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    serviceTypeName_ = "";
    serviceTypeNameIsSet_ = false;
    tagListIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    modulePath_ = "";
    modulePathIsSet_ = false;
    modulePathName_ = "";
    modulePathNameIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    extParam_ = "";
    extParamIsSet_ = false;
    executeWay_ = 0;
    executeWayIsSet_ = false;
    executeType_ = 0;
    executeTypeIsSet_ = false;
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    statusName_ = "";
    statusNameIsSet_ = false;
    resultCode_ = 0;
    resultCodeIsSet_ = false;
    resultName_ = "";
    resultNameIsSet_ = false;
    executeStatusCode_ = 0;
    executeStatusCodeIsSet_ = false;
    executeStatusName_ = "";
    executeStatusNameIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
    executeLatestTime_ = utility::datetime();
    executeLatestTimeIsSet_ = false;
    executeLatestTimeTimestamp_ = 0L;
    executeLatestTimeTimestampIsSet_ = false;
    executeDuration_ = "";
    executeDurationIsSet_ = false;
    executeTimes_ = 0;
    executeTimesIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    caseOperationInfoIsSet_ = false;
    assignCaseNum_ = 0;
    assignCaseNumIsSet_ = false;
    finishCaseNum_ = 0;
    finishCaseNumIsSet_ = false;
    assignDefectNum_ = 0;
    assignDefectNumIsSet_ = false;
    taskAssignMsg_ = "";
    taskAssignMsgIsSet_ = false;
    iteratorVersionUri_ = "";
    iteratorVersionUriIsSet_ = false;
    resultNumberListIsSet_ = false;
    finishDate_ = utility::datetime();
    finishDateIsSet_ = false;
    finishDateTimestamp_ = 0L;
    finishDateTimestampIsSet_ = false;
    planStartDate_ = utility::datetime();
    planStartDateIsSet_ = false;
    planStartTimestamp_ = 0L;
    planStartTimestampIsSet_ = false;
    planEndDate_ = utility::datetime();
    planEndDateIsSet_ = false;
    planEndTimestamp_ = 0L;
    planEndTimestampIsSet_ = false;
    expirationStatus_ = 0;
    expirationStatusIsSet_ = false;
    expirationStatusName_ = "";
    expirationStatusNameIsSet_ = false;
}

TaskVo::~TaskVo() = default;

void TaskVo::validate()
{
}

web::json::value TaskVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(parentPathIsSet_) {
        val[utility::conversions::to_string_t("parent_path")] = ModelBase::toJson(parentPath_);
    }
    if(originUriIsSet_) {
        val[utility::conversions::to_string_t("origin_uri")] = ModelBase::toJson(originUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(createDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_date_timestamp")] = ModelBase::toJson(createDateTimestamp_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_time_timestamp")] = ModelBase::toJson(updateTimeTimestamp_);
    }
    if(relationChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("relation_change_time")] = ModelBase::toJson(relationChangeTime_);
    }
    if(relationChangeTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("relation_change_time_timestamp")] = ModelBase::toJson(relationChangeTimeTimestamp_);
    }
    if(testCaseConditionIsSet_) {
        val[utility::conversions::to_string_t("test_case_condition")] = ModelBase::toJson(testCaseCondition_);
    }
    if(updatorIdIsSet_) {
        val[utility::conversions::to_string_t("updator_id")] = ModelBase::toJson(updatorId_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }
    if(relationChangerIdIsSet_) {
        val[utility::conversions::to_string_t("relation_changer_id")] = ModelBase::toJson(relationChangerId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(serviceTypeNameIsSet_) {
        val[utility::conversions::to_string_t("service_type_name")] = ModelBase::toJson(serviceTypeName_);
    }
    if(tagListIsSet_) {
        val[utility::conversions::to_string_t("tag_list")] = ModelBase::toJson(tagList_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(modulePathIsSet_) {
        val[utility::conversions::to_string_t("module_path")] = ModelBase::toJson(modulePath_);
    }
    if(modulePathNameIsSet_) {
        val[utility::conversions::to_string_t("module_path_name")] = ModelBase::toJson(modulePathName_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(extParamIsSet_) {
        val[utility::conversions::to_string_t("ext_param")] = ModelBase::toJson(extParam_);
    }
    if(executeWayIsSet_) {
        val[utility::conversions::to_string_t("execute_way")] = ModelBase::toJson(executeWay_);
    }
    if(executeTypeIsSet_) {
        val[utility::conversions::to_string_t("execute_type")] = ModelBase::toJson(executeType_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(statusNameIsSet_) {
        val[utility::conversions::to_string_t("status_name")] = ModelBase::toJson(statusName_);
    }
    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(resultNameIsSet_) {
        val[utility::conversions::to_string_t("result_name")] = ModelBase::toJson(resultName_);
    }
    if(executeStatusCodeIsSet_) {
        val[utility::conversions::to_string_t("execute_status_code")] = ModelBase::toJson(executeStatusCode_);
    }
    if(executeStatusNameIsSet_) {
        val[utility::conversions::to_string_t("execute_status_name")] = ModelBase::toJson(executeStatusName_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }
    if(executeLatestTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_latest_time")] = ModelBase::toJson(executeLatestTime_);
    }
    if(executeLatestTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("execute_latest_time_timestamp")] = ModelBase::toJson(executeLatestTimeTimestamp_);
    }
    if(executeDurationIsSet_) {
        val[utility::conversions::to_string_t("execute_duration")] = ModelBase::toJson(executeDuration_);
    }
    if(executeTimesIsSet_) {
        val[utility::conversions::to_string_t("execute_times")] = ModelBase::toJson(executeTimes_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(caseOperationInfoIsSet_) {
        val[utility::conversions::to_string_t("case_operation_info")] = ModelBase::toJson(caseOperationInfo_);
    }
    if(assignCaseNumIsSet_) {
        val[utility::conversions::to_string_t("assign_case_num")] = ModelBase::toJson(assignCaseNum_);
    }
    if(finishCaseNumIsSet_) {
        val[utility::conversions::to_string_t("finish_case_num")] = ModelBase::toJson(finishCaseNum_);
    }
    if(assignDefectNumIsSet_) {
        val[utility::conversions::to_string_t("assign_defect_num")] = ModelBase::toJson(assignDefectNum_);
    }
    if(taskAssignMsgIsSet_) {
        val[utility::conversions::to_string_t("task_assign_msg")] = ModelBase::toJson(taskAssignMsg_);
    }
    if(iteratorVersionUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_version_uri")] = ModelBase::toJson(iteratorVersionUri_);
    }
    if(resultNumberListIsSet_) {
        val[utility::conversions::to_string_t("result_number_list")] = ModelBase::toJson(resultNumberList_);
    }
    if(finishDateIsSet_) {
        val[utility::conversions::to_string_t("finish_date")] = ModelBase::toJson(finishDate_);
    }
    if(finishDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("finish_date_timestamp")] = ModelBase::toJson(finishDateTimestamp_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_timestamp")] = ModelBase::toJson(planStartTimestamp_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(planEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_timestamp")] = ModelBase::toJson(planEndTimestamp_);
    }
    if(expirationStatusIsSet_) {
        val[utility::conversions::to_string_t("expiration_status")] = ModelBase::toJson(expirationStatus_);
    }
    if(expirationStatusNameIsSet_) {
        val[utility::conversions::to_string_t("expiration_status_name")] = ModelBase::toJson(expirationStatusName_);
    }

    return val;
}
bool TaskVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_change_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_change_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_change_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationChangeTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_changer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_changer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationChangerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePathName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_way"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_way"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteWay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStatusName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_latest_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_latest_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteLatestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_latest_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_latest_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteLatestTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_operation_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_operation_info"));
        if(!fieldValue.is_null())
        {
            CaseOperationVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseOperationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assign_case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assign_case_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_case_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assign_defect_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assign_defect_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignDefectNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_assign_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_assign_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskAssignMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueAndCodeVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultNumberList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationStatusName(refVal);
        }
    }
    return ok;
}


std::string TaskVo::getUri() const
{
    return uri_;
}

void TaskVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TaskVo::uriIsSet() const
{
    return uriIsSet_;
}

void TaskVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TaskVo::getName() const
{
    return name_;
}

void TaskVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskVo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskVo::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskVo::getStage() const
{
    return stage_;
}

void TaskVo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool TaskVo::stageIsSet() const
{
    return stageIsSet_;
}

void TaskVo::unsetstage()
{
    stageIsSet_ = false;
}

std::string TaskVo::getNumber() const
{
    return number_;
}

void TaskVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TaskVo::numberIsSet() const
{
    return numberIsSet_;
}

void TaskVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TaskVo::getTags() const
{
    return tags_;
}

void TaskVo::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TaskVo::tagsIsSet() const
{
    return tagsIsSet_;
}

void TaskVo::unsettags()
{
    tagsIsSet_ = false;
}

std::string TaskVo::getDescription() const
{
    return description_;
}

void TaskVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TaskVo::getRegion() const
{
    return region_;
}

void TaskVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TaskVo::regionIsSet() const
{
    return regionIsSet_;
}

void TaskVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string TaskVo::getAuthorId() const
{
    return authorId_;
}

void TaskVo::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool TaskVo::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void TaskVo::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string TaskVo::getAuthorName() const
{
    return authorName_;
}

void TaskVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool TaskVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void TaskVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string TaskVo::getOwnerId() const
{
    return ownerId_;
}

void TaskVo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool TaskVo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void TaskVo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string TaskVo::getOwnerName() const
{
    return ownerName_;
}

void TaskVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TaskVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TaskVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string TaskVo::getParentUri() const
{
    return parentUri_;
}

void TaskVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TaskVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TaskVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TaskVo::getParentPath() const
{
    return parentPath_;
}

void TaskVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool TaskVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void TaskVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string TaskVo::getOriginUri() const
{
    return originUri_;
}

void TaskVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool TaskVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void TaskVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string TaskVo::getVersionUri() const
{
    return versionUri_;
}

void TaskVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TaskVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TaskVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TaskVo::getBranchUri() const
{
    return branchUri_;
}

void TaskVo::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool TaskVo::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void TaskVo::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string TaskVo::getVersionName() const
{
    return versionName_;
}

void TaskVo::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool TaskVo::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void TaskVo::unsetversionName()
{
    versionNameIsSet_ = false;
}

utility::datetime TaskVo::getCreationDate() const
{
    return creationDate_;
}

void TaskVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TaskVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TaskVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TaskVo::getCreateDateTimestamp() const
{
    return createDateTimestamp_;
}

void TaskVo::setCreateDateTimestamp(int64_t value)
{
    createDateTimestamp_ = value;
    createDateTimestampIsSet_ = true;
}

bool TaskVo::createDateTimestampIsSet() const
{
    return createDateTimestampIsSet_;
}

void TaskVo::unsetcreateDateTimestamp()
{
    createDateTimestampIsSet_ = false;
}

utility::datetime TaskVo::getUpdateTime() const
{
    return updateTime_;
}

void TaskVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t TaskVo::getUpdateTimeTimestamp() const
{
    return updateTimeTimestamp_;
}

void TaskVo::setUpdateTimeTimestamp(int64_t value)
{
    updateTimeTimestamp_ = value;
    updateTimeTimestampIsSet_ = true;
}

bool TaskVo::updateTimeTimestampIsSet() const
{
    return updateTimeTimestampIsSet_;
}

void TaskVo::unsetupdateTimeTimestamp()
{
    updateTimeTimestampIsSet_ = false;
}

utility::datetime TaskVo::getRelationChangeTime() const
{
    return relationChangeTime_;
}

void TaskVo::setRelationChangeTime(const utility::datetime& value)
{
    relationChangeTime_ = value;
    relationChangeTimeIsSet_ = true;
}

bool TaskVo::relationChangeTimeIsSet() const
{
    return relationChangeTimeIsSet_;
}

void TaskVo::unsetrelationChangeTime()
{
    relationChangeTimeIsSet_ = false;
}

int64_t TaskVo::getRelationChangeTimeTimestamp() const
{
    return relationChangeTimeTimestamp_;
}

void TaskVo::setRelationChangeTimeTimestamp(int64_t value)
{
    relationChangeTimeTimestamp_ = value;
    relationChangeTimeTimestampIsSet_ = true;
}

bool TaskVo::relationChangeTimeTimestampIsSet() const
{
    return relationChangeTimeTimestampIsSet_;
}

void TaskVo::unsetrelationChangeTimeTimestamp()
{
    relationChangeTimeTimestampIsSet_ = false;
}

std::string TaskVo::getTestCaseCondition() const
{
    return testCaseCondition_;
}

void TaskVo::setTestCaseCondition(const std::string& value)
{
    testCaseCondition_ = value;
    testCaseConditionIsSet_ = true;
}

bool TaskVo::testCaseConditionIsSet() const
{
    return testCaseConditionIsSet_;
}

void TaskVo::unsettestCaseCondition()
{
    testCaseConditionIsSet_ = false;
}

std::string TaskVo::getUpdatorId() const
{
    return updatorId_;
}

void TaskVo::setUpdatorId(const std::string& value)
{
    updatorId_ = value;
    updatorIdIsSet_ = true;
}

bool TaskVo::updatorIdIsSet() const
{
    return updatorIdIsSet_;
}

void TaskVo::unsetupdatorId()
{
    updatorIdIsSet_ = false;
}

std::string TaskVo::getUpdatorName() const
{
    return updatorName_;
}

void TaskVo::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool TaskVo::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void TaskVo::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

std::string TaskVo::getRelationChangerId() const
{
    return relationChangerId_;
}

void TaskVo::setRelationChangerId(const std::string& value)
{
    relationChangerId_ = value;
    relationChangerIdIsSet_ = true;
}

bool TaskVo::relationChangerIdIsSet() const
{
    return relationChangerIdIsSet_;
}

void TaskVo::unsetrelationChangerId()
{
    relationChangerIdIsSet_ = false;
}

int32_t TaskVo::getServiceType() const
{
    return serviceType_;
}

void TaskVo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TaskVo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TaskVo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string TaskVo::getServiceTypeName() const
{
    return serviceTypeName_;
}

void TaskVo::setServiceTypeName(const std::string& value)
{
    serviceTypeName_ = value;
    serviceTypeNameIsSet_ = true;
}

bool TaskVo::serviceTypeNameIsSet() const
{
    return serviceTypeNameIsSet_;
}

void TaskVo::unsetserviceTypeName()
{
    serviceTypeNameIsSet_ = false;
}

std::vector<std::string>& TaskVo::getTagList()
{
    return tagList_;
}

void TaskVo::setTagList(const std::vector<std::string>& value)
{
    tagList_ = value;
    tagListIsSet_ = true;
}

bool TaskVo::tagListIsSet() const
{
    return tagListIsSet_;
}

void TaskVo::unsettagList()
{
    tagListIsSet_ = false;
}

std::string TaskVo::getModuleId() const
{
    return moduleId_;
}

void TaskVo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool TaskVo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void TaskVo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string TaskVo::getModuleName() const
{
    return moduleName_;
}

void TaskVo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool TaskVo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void TaskVo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string TaskVo::getModulePath() const
{
    return modulePath_;
}

void TaskVo::setModulePath(const std::string& value)
{
    modulePath_ = value;
    modulePathIsSet_ = true;
}

bool TaskVo::modulePathIsSet() const
{
    return modulePathIsSet_;
}

void TaskVo::unsetmodulePath()
{
    modulePathIsSet_ = false;
}

std::string TaskVo::getModulePathName() const
{
    return modulePathName_;
}

void TaskVo::setModulePathName(const std::string& value)
{
    modulePathName_ = value;
    modulePathNameIsSet_ = true;
}

bool TaskVo::modulePathNameIsSet() const
{
    return modulePathNameIsSet_;
}

void TaskVo::unsetmodulePathName()
{
    modulePathNameIsSet_ = false;
}

std::string TaskVo::getReleaseDev() const
{
    return releaseDev_;
}

void TaskVo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TaskVo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TaskVo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string TaskVo::getExtParam() const
{
    return extParam_;
}

void TaskVo::setExtParam(const std::string& value)
{
    extParam_ = value;
    extParamIsSet_ = true;
}

bool TaskVo::extParamIsSet() const
{
    return extParamIsSet_;
}

void TaskVo::unsetextParam()
{
    extParamIsSet_ = false;
}

int32_t TaskVo::getExecuteWay() const
{
    return executeWay_;
}

void TaskVo::setExecuteWay(int32_t value)
{
    executeWay_ = value;
    executeWayIsSet_ = true;
}

bool TaskVo::executeWayIsSet() const
{
    return executeWayIsSet_;
}

void TaskVo::unsetexecuteWay()
{
    executeWayIsSet_ = false;
}

int32_t TaskVo::getExecuteType() const
{
    return executeType_;
}

void TaskVo::setExecuteType(int32_t value)
{
    executeType_ = value;
    executeTypeIsSet_ = true;
}

bool TaskVo::executeTypeIsSet() const
{
    return executeTypeIsSet_;
}

void TaskVo::unsetexecuteType()
{
    executeTypeIsSet_ = false;
}

int32_t TaskVo::getStatusCode() const
{
    return statusCode_;
}

void TaskVo::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool TaskVo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void TaskVo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string TaskVo::getStatusName() const
{
    return statusName_;
}

void TaskVo::setStatusName(const std::string& value)
{
    statusName_ = value;
    statusNameIsSet_ = true;
}

bool TaskVo::statusNameIsSet() const
{
    return statusNameIsSet_;
}

void TaskVo::unsetstatusName()
{
    statusNameIsSet_ = false;
}

int32_t TaskVo::getResultCode() const
{
    return resultCode_;
}

void TaskVo::setResultCode(int32_t value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool TaskVo::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void TaskVo::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string TaskVo::getResultName() const
{
    return resultName_;
}

void TaskVo::setResultName(const std::string& value)
{
    resultName_ = value;
    resultNameIsSet_ = true;
}

bool TaskVo::resultNameIsSet() const
{
    return resultNameIsSet_;
}

void TaskVo::unsetresultName()
{
    resultNameIsSet_ = false;
}

int32_t TaskVo::getExecuteStatusCode() const
{
    return executeStatusCode_;
}

void TaskVo::setExecuteStatusCode(int32_t value)
{
    executeStatusCode_ = value;
    executeStatusCodeIsSet_ = true;
}

bool TaskVo::executeStatusCodeIsSet() const
{
    return executeStatusCodeIsSet_;
}

void TaskVo::unsetexecuteStatusCode()
{
    executeStatusCodeIsSet_ = false;
}

std::string TaskVo::getExecuteStatusName() const
{
    return executeStatusName_;
}

void TaskVo::setExecuteStatusName(const std::string& value)
{
    executeStatusName_ = value;
    executeStatusNameIsSet_ = true;
}

bool TaskVo::executeStatusNameIsSet() const
{
    return executeStatusNameIsSet_;
}

void TaskVo::unsetexecuteStatusName()
{
    executeStatusNameIsSet_ = false;
}

std::string TaskVo::getExecutorId() const
{
    return executorId_;
}

void TaskVo::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool TaskVo::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void TaskVo::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string TaskVo::getExecutorName() const
{
    return executorName_;
}

void TaskVo::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool TaskVo::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void TaskVo::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

utility::datetime TaskVo::getExecuteLatestTime() const
{
    return executeLatestTime_;
}

void TaskVo::setExecuteLatestTime(const utility::datetime& value)
{
    executeLatestTime_ = value;
    executeLatestTimeIsSet_ = true;
}

bool TaskVo::executeLatestTimeIsSet() const
{
    return executeLatestTimeIsSet_;
}

void TaskVo::unsetexecuteLatestTime()
{
    executeLatestTimeIsSet_ = false;
}

int64_t TaskVo::getExecuteLatestTimeTimestamp() const
{
    return executeLatestTimeTimestamp_;
}

void TaskVo::setExecuteLatestTimeTimestamp(int64_t value)
{
    executeLatestTimeTimestamp_ = value;
    executeLatestTimeTimestampIsSet_ = true;
}

bool TaskVo::executeLatestTimeTimestampIsSet() const
{
    return executeLatestTimeTimestampIsSet_;
}

void TaskVo::unsetexecuteLatestTimeTimestamp()
{
    executeLatestTimeTimestampIsSet_ = false;
}

std::string TaskVo::getExecuteDuration() const
{
    return executeDuration_;
}

void TaskVo::setExecuteDuration(const std::string& value)
{
    executeDuration_ = value;
    executeDurationIsSet_ = true;
}

bool TaskVo::executeDurationIsSet() const
{
    return executeDurationIsSet_;
}

void TaskVo::unsetexecuteDuration()
{
    executeDurationIsSet_ = false;
}

int32_t TaskVo::getExecuteTimes() const
{
    return executeTimes_;
}

void TaskVo::setExecuteTimes(int32_t value)
{
    executeTimes_ = value;
    executeTimesIsSet_ = true;
}

bool TaskVo::executeTimesIsSet() const
{
    return executeTimesIsSet_;
}

void TaskVo::unsetexecuteTimes()
{
    executeTimesIsSet_ = false;
}

std::string TaskVo::getProjectUuid() const
{
    return projectUuid_;
}

void TaskVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TaskVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TaskVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

CaseOperationVo TaskVo::getCaseOperationInfo() const
{
    return caseOperationInfo_;
}

void TaskVo::setCaseOperationInfo(const CaseOperationVo& value)
{
    caseOperationInfo_ = value;
    caseOperationInfoIsSet_ = true;
}

bool TaskVo::caseOperationInfoIsSet() const
{
    return caseOperationInfoIsSet_;
}

void TaskVo::unsetcaseOperationInfo()
{
    caseOperationInfoIsSet_ = false;
}

int32_t TaskVo::getAssignCaseNum() const
{
    return assignCaseNum_;
}

void TaskVo::setAssignCaseNum(int32_t value)
{
    assignCaseNum_ = value;
    assignCaseNumIsSet_ = true;
}

bool TaskVo::assignCaseNumIsSet() const
{
    return assignCaseNumIsSet_;
}

void TaskVo::unsetassignCaseNum()
{
    assignCaseNumIsSet_ = false;
}

int32_t TaskVo::getFinishCaseNum() const
{
    return finishCaseNum_;
}

void TaskVo::setFinishCaseNum(int32_t value)
{
    finishCaseNum_ = value;
    finishCaseNumIsSet_ = true;
}

bool TaskVo::finishCaseNumIsSet() const
{
    return finishCaseNumIsSet_;
}

void TaskVo::unsetfinishCaseNum()
{
    finishCaseNumIsSet_ = false;
}

int32_t TaskVo::getAssignDefectNum() const
{
    return assignDefectNum_;
}

void TaskVo::setAssignDefectNum(int32_t value)
{
    assignDefectNum_ = value;
    assignDefectNumIsSet_ = true;
}

bool TaskVo::assignDefectNumIsSet() const
{
    return assignDefectNumIsSet_;
}

void TaskVo::unsetassignDefectNum()
{
    assignDefectNumIsSet_ = false;
}

std::string TaskVo::getTaskAssignMsg() const
{
    return taskAssignMsg_;
}

void TaskVo::setTaskAssignMsg(const std::string& value)
{
    taskAssignMsg_ = value;
    taskAssignMsgIsSet_ = true;
}

bool TaskVo::taskAssignMsgIsSet() const
{
    return taskAssignMsgIsSet_;
}

void TaskVo::unsettaskAssignMsg()
{
    taskAssignMsgIsSet_ = false;
}

std::string TaskVo::getIteratorVersionUri() const
{
    return iteratorVersionUri_;
}

void TaskVo::setIteratorVersionUri(const std::string& value)
{
    iteratorVersionUri_ = value;
    iteratorVersionUriIsSet_ = true;
}

bool TaskVo::iteratorVersionUriIsSet() const
{
    return iteratorVersionUriIsSet_;
}

void TaskVo::unsetiteratorVersionUri()
{
    iteratorVersionUriIsSet_ = false;
}

std::vector<NameAndValueAndCodeVo>& TaskVo::getResultNumberList()
{
    return resultNumberList_;
}

void TaskVo::setResultNumberList(const std::vector<NameAndValueAndCodeVo>& value)
{
    resultNumberList_ = value;
    resultNumberListIsSet_ = true;
}

bool TaskVo::resultNumberListIsSet() const
{
    return resultNumberListIsSet_;
}

void TaskVo::unsetresultNumberList()
{
    resultNumberListIsSet_ = false;
}

utility::datetime TaskVo::getFinishDate() const
{
    return finishDate_;
}

void TaskVo::setFinishDate(const utility::datetime& value)
{
    finishDate_ = value;
    finishDateIsSet_ = true;
}

bool TaskVo::finishDateIsSet() const
{
    return finishDateIsSet_;
}

void TaskVo::unsetfinishDate()
{
    finishDateIsSet_ = false;
}

int64_t TaskVo::getFinishDateTimestamp() const
{
    return finishDateTimestamp_;
}

void TaskVo::setFinishDateTimestamp(int64_t value)
{
    finishDateTimestamp_ = value;
    finishDateTimestampIsSet_ = true;
}

bool TaskVo::finishDateTimestampIsSet() const
{
    return finishDateTimestampIsSet_;
}

void TaskVo::unsetfinishDateTimestamp()
{
    finishDateTimestampIsSet_ = false;
}

utility::datetime TaskVo::getPlanStartDate() const
{
    return planStartDate_;
}

void TaskVo::setPlanStartDate(const utility::datetime& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool TaskVo::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void TaskVo::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t TaskVo::getPlanStartTimestamp() const
{
    return planStartTimestamp_;
}

void TaskVo::setPlanStartTimestamp(int64_t value)
{
    planStartTimestamp_ = value;
    planStartTimestampIsSet_ = true;
}

bool TaskVo::planStartTimestampIsSet() const
{
    return planStartTimestampIsSet_;
}

void TaskVo::unsetplanStartTimestamp()
{
    planStartTimestampIsSet_ = false;
}

utility::datetime TaskVo::getPlanEndDate() const
{
    return planEndDate_;
}

void TaskVo::setPlanEndDate(const utility::datetime& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool TaskVo::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void TaskVo::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int64_t TaskVo::getPlanEndTimestamp() const
{
    return planEndTimestamp_;
}

void TaskVo::setPlanEndTimestamp(int64_t value)
{
    planEndTimestamp_ = value;
    planEndTimestampIsSet_ = true;
}

bool TaskVo::planEndTimestampIsSet() const
{
    return planEndTimestampIsSet_;
}

void TaskVo::unsetplanEndTimestamp()
{
    planEndTimestampIsSet_ = false;
}

int32_t TaskVo::getExpirationStatus() const
{
    return expirationStatus_;
}

void TaskVo::setExpirationStatus(int32_t value)
{
    expirationStatus_ = value;
    expirationStatusIsSet_ = true;
}

bool TaskVo::expirationStatusIsSet() const
{
    return expirationStatusIsSet_;
}

void TaskVo::unsetexpirationStatus()
{
    expirationStatusIsSet_ = false;
}

std::string TaskVo::getExpirationStatusName() const
{
    return expirationStatusName_;
}

void TaskVo::setExpirationStatusName(const std::string& value)
{
    expirationStatusName_ = value;
    expirationStatusNameIsSet_ = true;
}

bool TaskVo::expirationStatusNameIsSet() const
{
    return expirationStatusNameIsSet_;
}

void TaskVo::unsetexpirationStatusName()
{
    expirationStatusNameIsSet_ = false;
}

}
}
}
}
}



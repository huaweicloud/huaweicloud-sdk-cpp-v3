

#include "huaweicloud/cloudtest/v1/model/SubTaskCaseQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SubTaskCaseQuery::SubTaskCaseQuery()
{
    createUser_ = "";
    createUserIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    locationId_ = "";
    locationIdIsSet_ = false;
    more_ = false;
    moreIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pid_ = "";
    pidIsSet_ = false;
    resultsIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    stage_ = 0;
    stageIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    subtaskIdsIsSet_ = false;
    subtaskId_ = "";
    subtaskIdIsSet_ = false;
    suiteType_ = 0;
    suiteTypeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskIdsIsSet_ = false;
    taskTypeId_ = "";
    taskTypeIdIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
}

SubTaskCaseQuery::~SubTaskCaseQuery() = default;

void SubTaskCaseQuery::validate()
{
}

web::json::value SubTaskCaseQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("keyWord")] = ModelBase::toJson(keyWord_);
    }
    if(locationIdIsSet_) {
        val[utility::conversions::to_string_t("location_id")] = ModelBase::toJson(locationId_);
    }
    if(moreIsSet_) {
        val[utility::conversions::to_string_t("more")] = ModelBase::toJson(more_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sortBy")] = ModelBase::toJson(sortBy_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(subtaskIdsIsSet_) {
        val[utility::conversions::to_string_t("subtask_ids")] = ModelBase::toJson(subtaskIds_);
    }
    if(subtaskIdIsSet_) {
        val[utility::conversions::to_string_t("subtask_id")] = ModelBase::toJson(subtaskId_);
    }
    if(suiteTypeIsSet_) {
        val[utility::conversions::to_string_t("suiteType")] = ModelBase::toJson(suiteType_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("task_ids")] = ModelBase::toJson(taskIds_);
    }
    if(taskTypeIdIsSet_) {
        val[utility::conversions::to_string_t("taskTypeId")] = ModelBase::toJson(taskTypeId_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }

    return val;
}
bool SubTaskCaseQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyWord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyWord"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("more"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("more"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sortBy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortBy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtask_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtask_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtaskIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtask_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtask_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suiteType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suiteType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuiteType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskTypeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskTypeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    return ok;
}


std::string SubTaskCaseQuery::getCreateUser() const
{
    return createUser_;
}

void SubTaskCaseQuery::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool SubTaskCaseQuery::createUserIsSet() const
{
    return createUserIsSet_;
}

void SubTaskCaseQuery::unsetcreateUser()
{
    createUserIsSet_ = false;
}

int64_t SubTaskCaseQuery::getEndTime() const
{
    return endTime_;
}

void SubTaskCaseQuery::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SubTaskCaseQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SubTaskCaseQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SubTaskCaseQuery::getKeyWord() const
{
    return keyWord_;
}

void SubTaskCaseQuery::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool SubTaskCaseQuery::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void SubTaskCaseQuery::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string SubTaskCaseQuery::getLocationId() const
{
    return locationId_;
}

void SubTaskCaseQuery::setLocationId(const std::string& value)
{
    locationId_ = value;
    locationIdIsSet_ = true;
}

bool SubTaskCaseQuery::locationIdIsSet() const
{
    return locationIdIsSet_;
}

void SubTaskCaseQuery::unsetlocationId()
{
    locationIdIsSet_ = false;
}

bool SubTaskCaseQuery::isMore() const
{
    return more_;
}

void SubTaskCaseQuery::setMore(bool value)
{
    more_ = value;
    moreIsSet_ = true;
}

bool SubTaskCaseQuery::moreIsSet() const
{
    return moreIsSet_;
}

void SubTaskCaseQuery::unsetmore()
{
    moreIsSet_ = false;
}

int32_t SubTaskCaseQuery::getPageNum() const
{
    return pageNum_;
}

void SubTaskCaseQuery::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool SubTaskCaseQuery::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void SubTaskCaseQuery::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t SubTaskCaseQuery::getPageSize() const
{
    return pageSize_;
}

void SubTaskCaseQuery::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool SubTaskCaseQuery::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void SubTaskCaseQuery::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string SubTaskCaseQuery::getPid() const
{
    return pid_;
}

void SubTaskCaseQuery::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool SubTaskCaseQuery::pidIsSet() const
{
    return pidIsSet_;
}

void SubTaskCaseQuery::unsetpid()
{
    pidIsSet_ = false;
}

std::vector<int32_t>& SubTaskCaseQuery::getResults()
{
    return results_;
}

void SubTaskCaseQuery::setResults(std::vector<int32_t> value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool SubTaskCaseQuery::resultsIsSet() const
{
    return resultsIsSet_;
}

void SubTaskCaseQuery::unsetresults()
{
    resultsIsSet_ = false;
}

std::string SubTaskCaseQuery::getSortBy() const
{
    return sortBy_;
}

void SubTaskCaseQuery::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool SubTaskCaseQuery::sortByIsSet() const
{
    return sortByIsSet_;
}

void SubTaskCaseQuery::unsetsortBy()
{
    sortByIsSet_ = false;
}

int32_t SubTaskCaseQuery::getStage() const
{
    return stage_;
}

void SubTaskCaseQuery::setStage(int32_t value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool SubTaskCaseQuery::stageIsSet() const
{
    return stageIsSet_;
}

void SubTaskCaseQuery::unsetstage()
{
    stageIsSet_ = false;
}

int64_t SubTaskCaseQuery::getStartTime() const
{
    return startTime_;
}

void SubTaskCaseQuery::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SubTaskCaseQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SubTaskCaseQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SubTaskCaseQuery::getState() const
{
    return state_;
}

void SubTaskCaseQuery::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SubTaskCaseQuery::stateIsSet() const
{
    return stateIsSet_;
}

void SubTaskCaseQuery::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<std::string>& SubTaskCaseQuery::getSubtaskIds()
{
    return subtaskIds_;
}

void SubTaskCaseQuery::setSubtaskIds(const std::vector<std::string>& value)
{
    subtaskIds_ = value;
    subtaskIdsIsSet_ = true;
}

bool SubTaskCaseQuery::subtaskIdsIsSet() const
{
    return subtaskIdsIsSet_;
}

void SubTaskCaseQuery::unsetsubtaskIds()
{
    subtaskIdsIsSet_ = false;
}

std::string SubTaskCaseQuery::getSubtaskId() const
{
    return subtaskId_;
}

void SubTaskCaseQuery::setSubtaskId(const std::string& value)
{
    subtaskId_ = value;
    subtaskIdIsSet_ = true;
}

bool SubTaskCaseQuery::subtaskIdIsSet() const
{
    return subtaskIdIsSet_;
}

void SubTaskCaseQuery::unsetsubtaskId()
{
    subtaskIdIsSet_ = false;
}

int32_t SubTaskCaseQuery::getSuiteType() const
{
    return suiteType_;
}

void SubTaskCaseQuery::setSuiteType(int32_t value)
{
    suiteType_ = value;
    suiteTypeIsSet_ = true;
}

bool SubTaskCaseQuery::suiteTypeIsSet() const
{
    return suiteTypeIsSet_;
}

void SubTaskCaseQuery::unsetsuiteType()
{
    suiteTypeIsSet_ = false;
}

std::string SubTaskCaseQuery::getTaskId() const
{
    return taskId_;
}

void SubTaskCaseQuery::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SubTaskCaseQuery::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SubTaskCaseQuery::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::vector<std::string>& SubTaskCaseQuery::getTaskIds()
{
    return taskIds_;
}

void SubTaskCaseQuery::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool SubTaskCaseQuery::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void SubTaskCaseQuery::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

std::string SubTaskCaseQuery::getTaskTypeId() const
{
    return taskTypeId_;
}

void SubTaskCaseQuery::setTaskTypeId(const std::string& value)
{
    taskTypeId_ = value;
    taskTypeIdIsSet_ = true;
}

bool SubTaskCaseQuery::taskTypeIdIsSet() const
{
    return taskTypeIdIsSet_;
}

void SubTaskCaseQuery::unsettaskTypeId()
{
    taskTypeIdIsSet_ = false;
}

std::string SubTaskCaseQuery::getTestServiceId() const
{
    return testServiceId_;
}

void SubTaskCaseQuery::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool SubTaskCaseQuery::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void SubTaskCaseQuery::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

std::string SubTaskCaseQuery::getTestcaseId() const
{
    return testcaseId_;
}

void SubTaskCaseQuery::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool SubTaskCaseQuery::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void SubTaskCaseQuery::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

}
}
}
}
}



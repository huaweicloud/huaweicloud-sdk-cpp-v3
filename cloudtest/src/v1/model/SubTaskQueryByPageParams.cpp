

#include "huaweicloud/cloudtest/v1/model/SubTaskQueryByPageParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SubTaskQueryByPageParams::SubTaskQueryByPageParams()
{
    more_ = false;
    moreIsSet_ = false;
    notSetReleaseDev_ = false;
    notSetReleaseDevIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    parentSubTaskId_ = "";
    parentSubTaskIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    releaseDevIsSet_ = false;
    resultsIsSet_ = false;
    startTimeBegin_ = 0L;
    startTimeBeginIsSet_ = false;
    startTimeEnd_ = 0L;
    startTimeEndIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    statesIsSet_ = false;
    subTaskId_ = "";
    subTaskIdIsSet_ = false;
    suiteType_ = 0;
    suiteTypeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskTypeId_ = "";
    taskTypeIdIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
}

SubTaskQueryByPageParams::~SubTaskQueryByPageParams() = default;

void SubTaskQueryByPageParams::validate()
{
}

web::json::value SubTaskQueryByPageParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(moreIsSet_) {
        val[utility::conversions::to_string_t("more")] = ModelBase::toJson(more_);
    }
    if(notSetReleaseDevIsSet_) {
        val[utility::conversions::to_string_t("notSetReleaseDev")] = ModelBase::toJson(notSetReleaseDev_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(parentSubTaskIdIsSet_) {
        val[utility::conversions::to_string_t("parent_sub_task_id")] = ModelBase::toJson(parentSubTaskId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(startTimeBeginIsSet_) {
        val[utility::conversions::to_string_t("start_time_begin")] = ModelBase::toJson(startTimeBegin_);
    }
    if(startTimeEndIsSet_) {
        val[utility::conversions::to_string_t("start_time_end")] = ModelBase::toJson(startTimeEnd_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(subTaskIdIsSet_) {
        val[utility::conversions::to_string_t("sub_task_id")] = ModelBase::toJson(subTaskId_);
    }
    if(suiteTypeIsSet_) {
        val[utility::conversions::to_string_t("suite_type")] = ModelBase::toJson(suiteType_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskTypeIdIsSet_) {
        val[utility::conversions::to_string_t("task_type_id")] = ModelBase::toJson(taskTypeId_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }

    return val;
}
bool SubTaskQueryByPageParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("more"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("more"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notSetReleaseDev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notSetReleaseDev"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotSetReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_sub_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_sub_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentSubTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time_begin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time_begin"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeBegin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time_end"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suite_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suite_type"));
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
    if(val.has_field(utility::conversions::to_string_t("task_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type_id"));
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
    return ok;
}


bool SubTaskQueryByPageParams::isMore() const
{
    return more_;
}

void SubTaskQueryByPageParams::setMore(bool value)
{
    more_ = value;
    moreIsSet_ = true;
}

bool SubTaskQueryByPageParams::moreIsSet() const
{
    return moreIsSet_;
}

void SubTaskQueryByPageParams::unsetmore()
{
    moreIsSet_ = false;
}

bool SubTaskQueryByPageParams::isNotSetReleaseDev() const
{
    return notSetReleaseDev_;
}

void SubTaskQueryByPageParams::setNotSetReleaseDev(bool value)
{
    notSetReleaseDev_ = value;
    notSetReleaseDevIsSet_ = true;
}

bool SubTaskQueryByPageParams::notSetReleaseDevIsSet() const
{
    return notSetReleaseDevIsSet_;
}

void SubTaskQueryByPageParams::unsetnotSetReleaseDev()
{
    notSetReleaseDevIsSet_ = false;
}

int32_t SubTaskQueryByPageParams::getPageNumber() const
{
    return pageNumber_;
}

void SubTaskQueryByPageParams::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool SubTaskQueryByPageParams::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void SubTaskQueryByPageParams::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t SubTaskQueryByPageParams::getPageSize() const
{
    return pageSize_;
}

void SubTaskQueryByPageParams::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool SubTaskQueryByPageParams::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void SubTaskQueryByPageParams::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getParentSubTaskId() const
{
    return parentSubTaskId_;
}

void SubTaskQueryByPageParams::setParentSubTaskId(const std::string& value)
{
    parentSubTaskId_ = value;
    parentSubTaskIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::parentSubTaskIdIsSet() const
{
    return parentSubTaskIdIsSet_;
}

void SubTaskQueryByPageParams::unsetparentSubTaskId()
{
    parentSubTaskIdIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getPlanId() const
{
    return planId_;
}

void SubTaskQueryByPageParams::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::planIdIsSet() const
{
    return planIdIsSet_;
}

void SubTaskQueryByPageParams::unsetplanId()
{
    planIdIsSet_ = false;
}

std::vector<std::string>& SubTaskQueryByPageParams::getReleaseDev()
{
    return releaseDev_;
}

void SubTaskQueryByPageParams::setReleaseDev(const std::vector<std::string>& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool SubTaskQueryByPageParams::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void SubTaskQueryByPageParams::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::vector<int32_t>& SubTaskQueryByPageParams::getResults()
{
    return results_;
}

void SubTaskQueryByPageParams::setResults(std::vector<int32_t> value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool SubTaskQueryByPageParams::resultsIsSet() const
{
    return resultsIsSet_;
}

void SubTaskQueryByPageParams::unsetresults()
{
    resultsIsSet_ = false;
}

int64_t SubTaskQueryByPageParams::getStartTimeBegin() const
{
    return startTimeBegin_;
}

void SubTaskQueryByPageParams::setStartTimeBegin(int64_t value)
{
    startTimeBegin_ = value;
    startTimeBeginIsSet_ = true;
}

bool SubTaskQueryByPageParams::startTimeBeginIsSet() const
{
    return startTimeBeginIsSet_;
}

void SubTaskQueryByPageParams::unsetstartTimeBegin()
{
    startTimeBeginIsSet_ = false;
}

int64_t SubTaskQueryByPageParams::getStartTimeEnd() const
{
    return startTimeEnd_;
}

void SubTaskQueryByPageParams::setStartTimeEnd(int64_t value)
{
    startTimeEnd_ = value;
    startTimeEndIsSet_ = true;
}

bool SubTaskQueryByPageParams::startTimeEndIsSet() const
{
    return startTimeEndIsSet_;
}

void SubTaskQueryByPageParams::unsetstartTimeEnd()
{
    startTimeEndIsSet_ = false;
}

int32_t SubTaskQueryByPageParams::getState() const
{
    return state_;
}

void SubTaskQueryByPageParams::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SubTaskQueryByPageParams::stateIsSet() const
{
    return stateIsSet_;
}

void SubTaskQueryByPageParams::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<int32_t>& SubTaskQueryByPageParams::getStates()
{
    return states_;
}

void SubTaskQueryByPageParams::setStates(std::vector<int32_t> value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool SubTaskQueryByPageParams::statesIsSet() const
{
    return statesIsSet_;
}

void SubTaskQueryByPageParams::unsetstates()
{
    statesIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getSubTaskId() const
{
    return subTaskId_;
}

void SubTaskQueryByPageParams::setSubTaskId(const std::string& value)
{
    subTaskId_ = value;
    subTaskIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::subTaskIdIsSet() const
{
    return subTaskIdIsSet_;
}

void SubTaskQueryByPageParams::unsetsubTaskId()
{
    subTaskIdIsSet_ = false;
}

int32_t SubTaskQueryByPageParams::getSuiteType() const
{
    return suiteType_;
}

void SubTaskQueryByPageParams::setSuiteType(int32_t value)
{
    suiteType_ = value;
    suiteTypeIsSet_ = true;
}

bool SubTaskQueryByPageParams::suiteTypeIsSet() const
{
    return suiteTypeIsSet_;
}

void SubTaskQueryByPageParams::unsetsuiteType()
{
    suiteTypeIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getTaskId() const
{
    return taskId_;
}

void SubTaskQueryByPageParams::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SubTaskQueryByPageParams::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getTaskTypeId() const
{
    return taskTypeId_;
}

void SubTaskQueryByPageParams::setTaskTypeId(const std::string& value)
{
    taskTypeId_ = value;
    taskTypeIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::taskTypeIdIsSet() const
{
    return taskTypeIdIsSet_;
}

void SubTaskQueryByPageParams::unsettaskTypeId()
{
    taskTypeIdIsSet_ = false;
}

std::string SubTaskQueryByPageParams::getTestServiceId() const
{
    return testServiceId_;
}

void SubTaskQueryByPageParams::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool SubTaskQueryByPageParams::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void SubTaskQueryByPageParams::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

}
}
}
}
}



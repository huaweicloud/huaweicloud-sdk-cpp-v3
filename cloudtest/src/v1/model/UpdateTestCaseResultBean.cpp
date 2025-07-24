

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseResultBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseResultBean::UpdateTestCaseResultBean()
{
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    executeId_ = "";
    executeIdIsSet_ = false;
    resultId_ = "";
    resultIdIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateTestCaseResultBean::~UpdateTestCaseResultBean() = default;

void UpdateTestCaseResultBean::validate()
{
}

web::json::value UpdateTestCaseResultBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(executeIdIsSet_) {
        val[utility::conversions::to_string_t("execute_id")] = ModelBase::toJson(executeId_);
    }
    if(resultIdIsSet_) {
        val[utility::conversions::to_string_t("result_id")] = ModelBase::toJson(resultId_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateTestCaseResultBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    return ok;
}


std::string UpdateTestCaseResultBean::getTestcaseId() const
{
    return testcaseId_;
}

void UpdateTestCaseResultBean::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool UpdateTestCaseResultBean::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void UpdateTestCaseResultBean::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string UpdateTestCaseResultBean::getExecuteId() const
{
    return executeId_;
}

void UpdateTestCaseResultBean::setExecuteId(const std::string& value)
{
    executeId_ = value;
    executeIdIsSet_ = true;
}

bool UpdateTestCaseResultBean::executeIdIsSet() const
{
    return executeIdIsSet_;
}

void UpdateTestCaseResultBean::unsetexecuteId()
{
    executeIdIsSet_ = false;
}

std::string UpdateTestCaseResultBean::getResultId() const
{
    return resultId_;
}

void UpdateTestCaseResultBean::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool UpdateTestCaseResultBean::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void UpdateTestCaseResultBean::unsetresultId()
{
    resultIdIsSet_ = false;
}

int64_t UpdateTestCaseResultBean::getEndTime() const
{
    return endTime_;
}

void UpdateTestCaseResultBean::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateTestCaseResultBean::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateTestCaseResultBean::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t UpdateTestCaseResultBean::getDuration() const
{
    return duration_;
}

void UpdateTestCaseResultBean::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool UpdateTestCaseResultBean::durationIsSet() const
{
    return durationIsSet_;
}

void UpdateTestCaseResultBean::unsetduration()
{
    durationIsSet_ = false;
}

std::string UpdateTestCaseResultBean::getDescription() const
{
    return description_;
}

void UpdateTestCaseResultBean::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateTestCaseResultBean::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateTestCaseResultBean::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



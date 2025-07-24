

#include "huaweicloud/cloudtest/v1/model/TaskAssignCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskAssignCaseVo::TaskAssignCaseVo()
{
    sort_ = 0;
    sortIsSet_ = false;
    caseUri_ = "";
    caseUriIsSet_ = false;
    isAvailable_ = 0;
    isAvailableIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    testCaseNumber_ = "";
    testCaseNumberIsSet_ = false;
}

TaskAssignCaseVo::~TaskAssignCaseVo() = default;

void TaskAssignCaseVo::validate()
{
}

web::json::value TaskAssignCaseVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(isAvailableIsSet_) {
        val[utility::conversions::to_string_t("is_available")] = ModelBase::toJson(isAvailable_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("test_case_name")] = ModelBase::toJson(testCaseName_);
    }
    if(testCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("test_case_number")] = ModelBase::toJson(testCaseNumber_);
    }

    return val;
}
bool TaskAssignCaseVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_available"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNumber(refVal);
        }
    }
    return ok;
}


int32_t TaskAssignCaseVo::getSort() const
{
    return sort_;
}

void TaskAssignCaseVo::setSort(int32_t value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool TaskAssignCaseVo::sortIsSet() const
{
    return sortIsSet_;
}

void TaskAssignCaseVo::unsetsort()
{
    sortIsSet_ = false;
}

std::string TaskAssignCaseVo::getCaseUri() const
{
    return caseUri_;
}

void TaskAssignCaseVo::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool TaskAssignCaseVo::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void TaskAssignCaseVo::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

int32_t TaskAssignCaseVo::getIsAvailable() const
{
    return isAvailable_;
}

void TaskAssignCaseVo::setIsAvailable(int32_t value)
{
    isAvailable_ = value;
    isAvailableIsSet_ = true;
}

bool TaskAssignCaseVo::isAvailableIsSet() const
{
    return isAvailableIsSet_;
}

void TaskAssignCaseVo::unsetisAvailable()
{
    isAvailableIsSet_ = false;
}

std::string TaskAssignCaseVo::getTestCaseName() const
{
    return testCaseName_;
}

void TaskAssignCaseVo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool TaskAssignCaseVo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void TaskAssignCaseVo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

std::string TaskAssignCaseVo::getTestCaseNumber() const
{
    return testCaseNumber_;
}

void TaskAssignCaseVo::setTestCaseNumber(const std::string& value)
{
    testCaseNumber_ = value;
    testCaseNumberIsSet_ = true;
}

bool TaskAssignCaseVo::testCaseNumberIsSet() const
{
    return testCaseNumberIsSet_;
}

void TaskAssignCaseVo::unsettestCaseNumber()
{
    testCaseNumberIsSet_ = false;
}

}
}
}
}
}



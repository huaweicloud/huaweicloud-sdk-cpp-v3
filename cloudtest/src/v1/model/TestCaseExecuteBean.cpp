

#include "huaweicloud/cloudtest/v1/model/TestCaseExecuteBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseExecuteBean::TestCaseExecuteBean()
{
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    executeId_ = "";
    executeIdIsSet_ = false;
    resultId_ = "";
    resultIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
}

TestCaseExecuteBean::~TestCaseExecuteBean() = default;

void TestCaseExecuteBean::validate()
{
}

web::json::value TestCaseExecuteBean::toJson() const
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool TestCaseExecuteBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string TestCaseExecuteBean::getTestcaseId() const
{
    return testcaseId_;
}

void TestCaseExecuteBean::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool TestCaseExecuteBean::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void TestCaseExecuteBean::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string TestCaseExecuteBean::getExecuteId() const
{
    return executeId_;
}

void TestCaseExecuteBean::setExecuteId(const std::string& value)
{
    executeId_ = value;
    executeIdIsSet_ = true;
}

bool TestCaseExecuteBean::executeIdIsSet() const
{
    return executeIdIsSet_;
}

void TestCaseExecuteBean::unsetexecuteId()
{
    executeIdIsSet_ = false;
}

std::string TestCaseExecuteBean::getResultId() const
{
    return resultId_;
}

void TestCaseExecuteBean::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool TestCaseExecuteBean::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void TestCaseExecuteBean::unsetresultId()
{
    resultIdIsSet_ = false;
}

int64_t TestCaseExecuteBean::getStartTime() const
{
    return startTime_;
}

void TestCaseExecuteBean::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TestCaseExecuteBean::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TestCaseExecuteBean::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}



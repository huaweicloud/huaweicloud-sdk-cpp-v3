

#include "huaweicloud/cloudtest/v1/model/TestCaseStepResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseStepResultInfo::TestCaseStepResultInfo()
{
    result_ = "";
    resultIsSet_ = false;
    actualResult_ = "";
    actualResultIsSet_ = false;
    expectResult_ = "";
    expectResultIsSet_ = false;
    testStep_ = "";
    testStepIsSet_ = false;
}

TestCaseStepResultInfo::~TestCaseStepResultInfo() = default;

void TestCaseStepResultInfo::validate()
{
}

web::json::value TestCaseStepResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(actualResultIsSet_) {
        val[utility::conversions::to_string_t("actual_result")] = ModelBase::toJson(actualResult_);
    }
    if(expectResultIsSet_) {
        val[utility::conversions::to_string_t("expect_result")] = ModelBase::toJson(expectResult_);
    }
    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }

    return val;
}
bool TestCaseStepResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_step"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestStep(refVal);
        }
    }
    return ok;
}


std::string TestCaseStepResultInfo::getResult() const
{
    return result_;
}

void TestCaseStepResultInfo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool TestCaseStepResultInfo::resultIsSet() const
{
    return resultIsSet_;
}

void TestCaseStepResultInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string TestCaseStepResultInfo::getActualResult() const
{
    return actualResult_;
}

void TestCaseStepResultInfo::setActualResult(const std::string& value)
{
    actualResult_ = value;
    actualResultIsSet_ = true;
}

bool TestCaseStepResultInfo::actualResultIsSet() const
{
    return actualResultIsSet_;
}

void TestCaseStepResultInfo::unsetactualResult()
{
    actualResultIsSet_ = false;
}

std::string TestCaseStepResultInfo::getExpectResult() const
{
    return expectResult_;
}

void TestCaseStepResultInfo::setExpectResult(const std::string& value)
{
    expectResult_ = value;
    expectResultIsSet_ = true;
}

bool TestCaseStepResultInfo::expectResultIsSet() const
{
    return expectResultIsSet_;
}

void TestCaseStepResultInfo::unsetexpectResult()
{
    expectResultIsSet_ = false;
}

std::string TestCaseStepResultInfo::getTestStep() const
{
    return testStep_;
}

void TestCaseStepResultInfo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool TestCaseStepResultInfo::testStepIsSet() const
{
    return testStepIsSet_;
}

void TestCaseStepResultInfo::unsettestStep()
{
    testStepIsSet_ = false;
}

}
}
}
}
}



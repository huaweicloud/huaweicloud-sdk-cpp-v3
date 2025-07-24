

#include "huaweicloud/cloudtest/v1/model/TestCaseStepInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseStepInfo::TestCaseStepInfo()
{
    testStep_ = "";
    testStepIsSet_ = false;
    expectResult_ = "";
    expectResultIsSet_ = false;
    stepActual_ = "";
    stepActualIsSet_ = false;
    stepResult_ = "";
    stepResultIsSet_ = false;
}

TestCaseStepInfo::~TestCaseStepInfo() = default;

void TestCaseStepInfo::validate()
{
}

web::json::value TestCaseStepInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }
    if(expectResultIsSet_) {
        val[utility::conversions::to_string_t("expect_result")] = ModelBase::toJson(expectResult_);
    }
    if(stepActualIsSet_) {
        val[utility::conversions::to_string_t("step_actual")] = ModelBase::toJson(stepActual_);
    }
    if(stepResultIsSet_) {
        val[utility::conversions::to_string_t("step_result")] = ModelBase::toJson(stepResult_);
    }

    return val;
}
bool TestCaseStepInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_step"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestStep(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("step_actual"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_actual"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepActual(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepResult(refVal);
        }
    }
    return ok;
}


std::string TestCaseStepInfo::getTestStep() const
{
    return testStep_;
}

void TestCaseStepInfo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool TestCaseStepInfo::testStepIsSet() const
{
    return testStepIsSet_;
}

void TestCaseStepInfo::unsettestStep()
{
    testStepIsSet_ = false;
}

std::string TestCaseStepInfo::getExpectResult() const
{
    return expectResult_;
}

void TestCaseStepInfo::setExpectResult(const std::string& value)
{
    expectResult_ = value;
    expectResultIsSet_ = true;
}

bool TestCaseStepInfo::expectResultIsSet() const
{
    return expectResultIsSet_;
}

void TestCaseStepInfo::unsetexpectResult()
{
    expectResultIsSet_ = false;
}

std::string TestCaseStepInfo::getStepActual() const
{
    return stepActual_;
}

void TestCaseStepInfo::setStepActual(const std::string& value)
{
    stepActual_ = value;
    stepActualIsSet_ = true;
}

bool TestCaseStepInfo::stepActualIsSet() const
{
    return stepActualIsSet_;
}

void TestCaseStepInfo::unsetstepActual()
{
    stepActualIsSet_ = false;
}

std::string TestCaseStepInfo::getStepResult() const
{
    return stepResult_;
}

void TestCaseStepInfo::setStepResult(const std::string& value)
{
    stepResult_ = value;
    stepResultIsSet_ = true;
}

bool TestCaseStepInfo::stepResultIsSet() const
{
    return stepResultIsSet_;
}

void TestCaseStepInfo::unsetstepResult()
{
    stepResultIsSet_ = false;
}

}
}
}
}
}



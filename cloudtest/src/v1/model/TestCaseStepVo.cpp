

#include "huaweicloud/cloudtest/v1/model/TestCaseStepVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseStepVo::TestCaseStepVo()
{
    testStep_ = "";
    testStepIsSet_ = false;
    expectResult_ = "";
    expectResultIsSet_ = false;
}

TestCaseStepVo::~TestCaseStepVo() = default;

void TestCaseStepVo::validate()
{
}

web::json::value TestCaseStepVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }
    if(expectResultIsSet_) {
        val[utility::conversions::to_string_t("expect_result")] = ModelBase::toJson(expectResult_);
    }

    return val;
}
bool TestCaseStepVo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TestCaseStepVo::getTestStep() const
{
    return testStep_;
}

void TestCaseStepVo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool TestCaseStepVo::testStepIsSet() const
{
    return testStepIsSet_;
}

void TestCaseStepVo::unsettestStep()
{
    testStepIsSet_ = false;
}

std::string TestCaseStepVo::getExpectResult() const
{
    return expectResult_;
}

void TestCaseStepVo::setExpectResult(const std::string& value)
{
    expectResult_ = value;
    expectResultIsSet_ = true;
}

bool TestCaseStepVo::expectResultIsSet() const
{
    return expectResultIsSet_;
}

void TestCaseStepVo::unsetexpectResult()
{
    expectResultIsSet_ = false;
}

}
}
}
}
}



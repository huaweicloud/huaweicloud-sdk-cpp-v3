

#include "huaweicloud/cloudtest/v1/model/ExternalServiceCaseStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalServiceCaseStep::ExternalServiceCaseStep()
{
    expectResult_ = "";
    expectResultIsSet_ = false;
    testStep_ = "";
    testStepIsSet_ = false;
}

ExternalServiceCaseStep::~ExternalServiceCaseStep() = default;

void ExternalServiceCaseStep::validate()
{
}

web::json::value ExternalServiceCaseStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expectResultIsSet_) {
        val[utility::conversions::to_string_t("expect_result")] = ModelBase::toJson(expectResult_);
    }
    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }

    return val;
}
bool ExternalServiceCaseStep::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ExternalServiceCaseStep::getExpectResult() const
{
    return expectResult_;
}

void ExternalServiceCaseStep::setExpectResult(const std::string& value)
{
    expectResult_ = value;
    expectResultIsSet_ = true;
}

bool ExternalServiceCaseStep::expectResultIsSet() const
{
    return expectResultIsSet_;
}

void ExternalServiceCaseStep::unsetexpectResult()
{
    expectResultIsSet_ = false;
}

std::string ExternalServiceCaseStep::getTestStep() const
{
    return testStep_;
}

void ExternalServiceCaseStep::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool ExternalServiceCaseStep::testStepIsSet() const
{
    return testStepIsSet_;
}

void ExternalServiceCaseStep::unsettestStep()
{
    testStepIsSet_ = false;
}

}
}
}
}
}



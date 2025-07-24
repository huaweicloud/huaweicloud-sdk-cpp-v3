

#include "huaweicloud/cloudtest/v1/model/ResultStepVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultStepVo::ResultStepVo()
{
    result_ = "";
    resultIsSet_ = false;
    testStep_ = "";
    testStepIsSet_ = false;
    expectResult_ = "";
    expectResultIsSet_ = false;
    actualResult_ = "";
    actualResultIsSet_ = false;
    resultName_ = "";
    resultNameIsSet_ = false;
}

ResultStepVo::~ResultStepVo() = default;

void ResultStepVo::validate()
{
}

web::json::value ResultStepVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }
    if(expectResultIsSet_) {
        val[utility::conversions::to_string_t("expect_result")] = ModelBase::toJson(expectResult_);
    }
    if(actualResultIsSet_) {
        val[utility::conversions::to_string_t("actual_result")] = ModelBase::toJson(actualResult_);
    }
    if(resultNameIsSet_) {
        val[utility::conversions::to_string_t("result_name")] = ModelBase::toJson(resultName_);
    }

    return val;
}
bool ResultStepVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("actual_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualResult(refVal);
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
    return ok;
}


std::string ResultStepVo::getResult() const
{
    return result_;
}

void ResultStepVo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ResultStepVo::resultIsSet() const
{
    return resultIsSet_;
}

void ResultStepVo::unsetresult()
{
    resultIsSet_ = false;
}

std::string ResultStepVo::getTestStep() const
{
    return testStep_;
}

void ResultStepVo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool ResultStepVo::testStepIsSet() const
{
    return testStepIsSet_;
}

void ResultStepVo::unsettestStep()
{
    testStepIsSet_ = false;
}

std::string ResultStepVo::getExpectResult() const
{
    return expectResult_;
}

void ResultStepVo::setExpectResult(const std::string& value)
{
    expectResult_ = value;
    expectResultIsSet_ = true;
}

bool ResultStepVo::expectResultIsSet() const
{
    return expectResultIsSet_;
}

void ResultStepVo::unsetexpectResult()
{
    expectResultIsSet_ = false;
}

std::string ResultStepVo::getActualResult() const
{
    return actualResult_;
}

void ResultStepVo::setActualResult(const std::string& value)
{
    actualResult_ = value;
    actualResultIsSet_ = true;
}

bool ResultStepVo::actualResultIsSet() const
{
    return actualResultIsSet_;
}

void ResultStepVo::unsetactualResult()
{
    actualResultIsSet_ = false;
}

std::string ResultStepVo::getResultName() const
{
    return resultName_;
}

void ResultStepVo::setResultName(const std::string& value)
{
    resultName_ = value;
    resultNameIsSet_ = true;
}

bool ResultStepVo::resultNameIsSet() const
{
    return resultNameIsSet_;
}

void ResultStepVo::unsetresultName()
{
    resultNameIsSet_ = false;
}

}
}
}
}
}



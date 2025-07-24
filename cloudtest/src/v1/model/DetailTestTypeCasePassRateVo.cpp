

#include "huaweicloud/cloudtest/v1/model/DetailTestTypeCasePassRateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DetailTestTypeCasePassRateVo::DetailTestTypeCasePassRateVo()
{
    testType_ = 0;
    testTypeIsSet_ = false;
    casePassRate_ = "";
    casePassRateIsSet_ = false;
}

DetailTestTypeCasePassRateVo::~DetailTestTypeCasePassRateVo() = default;

void DetailTestTypeCasePassRateVo::validate()
{
}

web::json::value DetailTestTypeCasePassRateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testTypeIsSet_) {
        val[utility::conversions::to_string_t("test_type")] = ModelBase::toJson(testType_);
    }
    if(casePassRateIsSet_) {
        val[utility::conversions::to_string_t("case_pass_rate")] = ModelBase::toJson(casePassRate_);
    }

    return val;
}
bool DetailTestTypeCasePassRateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassRate(refVal);
        }
    }
    return ok;
}


int32_t DetailTestTypeCasePassRateVo::getTestType() const
{
    return testType_;
}

void DetailTestTypeCasePassRateVo::setTestType(int32_t value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool DetailTestTypeCasePassRateVo::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void DetailTestTypeCasePassRateVo::unsettestType()
{
    testTypeIsSet_ = false;
}

std::string DetailTestTypeCasePassRateVo::getCasePassRate() const
{
    return casePassRate_;
}

void DetailTestTypeCasePassRateVo::setCasePassRate(const std::string& value)
{
    casePassRate_ = value;
    casePassRateIsSet_ = true;
}

bool DetailTestTypeCasePassRateVo::casePassRateIsSet() const
{
    return casePassRateIsSet_;
}

void DetailTestTypeCasePassRateVo::unsetcasePassRate()
{
    casePassRateIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/TestPlanDetail_report_stage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail_report_stage::TestPlanDetail_report_stage()
{
    caseCompleteRate_ = "";
    caseCompleteRateIsSet_ = false;
}

TestPlanDetail_report_stage::~TestPlanDetail_report_stage() = default;

void TestPlanDetail_report_stage::validate()
{
}

web::json::value TestPlanDetail_report_stage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseCompleteRateIsSet_) {
        val[utility::conversions::to_string_t("case_complete_rate")] = ModelBase::toJson(caseCompleteRate_);
    }

    return val;
}
bool TestPlanDetail_report_stage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_complete_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_complete_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseCompleteRate(refVal);
        }
    }
    return ok;
}


std::string TestPlanDetail_report_stage::getCaseCompleteRate() const
{
    return caseCompleteRate_;
}

void TestPlanDetail_report_stage::setCaseCompleteRate(const std::string& value)
{
    caseCompleteRate_ = value;
    caseCompleteRateIsSet_ = true;
}

bool TestPlanDetail_report_stage::caseCompleteRateIsSet() const
{
    return caseCompleteRateIsSet_;
}

void TestPlanDetail_report_stage::unsetcaseCompleteRate()
{
    caseCompleteRateIsSet_ = false;
}

}
}
}
}
}



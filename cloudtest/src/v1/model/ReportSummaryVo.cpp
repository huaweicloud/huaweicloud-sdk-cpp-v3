

#include "huaweicloud/cloudtest/v1/model/ReportSummaryVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ReportSummaryVo::ReportSummaryVo()
{
    caseSuccessRate_ = "";
    caseSuccessRateIsSet_ = false;
    caseCompleteRate_ = "";
    caseCompleteRateIsSet_ = false;
}

ReportSummaryVo::~ReportSummaryVo() = default;

void ReportSummaryVo::validate()
{
}

web::json::value ReportSummaryVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseSuccessRateIsSet_) {
        val[utility::conversions::to_string_t("case_success_rate")] = ModelBase::toJson(caseSuccessRate_);
    }
    if(caseCompleteRateIsSet_) {
        val[utility::conversions::to_string_t("case_complete_rate")] = ModelBase::toJson(caseCompleteRate_);
    }

    return val;
}
bool ReportSummaryVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_success_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseSuccessRate(refVal);
        }
    }
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


std::string ReportSummaryVo::getCaseSuccessRate() const
{
    return caseSuccessRate_;
}

void ReportSummaryVo::setCaseSuccessRate(const std::string& value)
{
    caseSuccessRate_ = value;
    caseSuccessRateIsSet_ = true;
}

bool ReportSummaryVo::caseSuccessRateIsSet() const
{
    return caseSuccessRateIsSet_;
}

void ReportSummaryVo::unsetcaseSuccessRate()
{
    caseSuccessRateIsSet_ = false;
}

std::string ReportSummaryVo::getCaseCompleteRate() const
{
    return caseCompleteRate_;
}

void ReportSummaryVo::setCaseCompleteRate(const std::string& value)
{
    caseCompleteRate_ = value;
    caseCompleteRateIsSet_ = true;
}

bool ReportSummaryVo::caseCompleteRateIsSet() const
{
    return caseCompleteRateIsSet_;
}

void ReportSummaryVo::unsetcaseCompleteRate()
{
    caseCompleteRateIsSet_ = false;
}

}
}
}
}
}



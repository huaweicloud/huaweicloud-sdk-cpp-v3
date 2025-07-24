

#include "huaweicloud/cloudtest/v1/model/CaseAutomationDetailsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseAutomationDetailsVo::CaseAutomationDetailsVo()
{
    caseAutomationRate_ = "";
    caseAutomationRateIsSet_ = false;
    serviceTypeNumberListIsSet_ = false;
}

CaseAutomationDetailsVo::~CaseAutomationDetailsVo() = default;

void CaseAutomationDetailsVo::validate()
{
}

web::json::value CaseAutomationDetailsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseAutomationRateIsSet_) {
        val[utility::conversions::to_string_t("case_automation_rate")] = ModelBase::toJson(caseAutomationRate_);
    }
    if(serviceTypeNumberListIsSet_) {
        val[utility::conversions::to_string_t("service_type_number_list")] = ModelBase::toJson(serviceTypeNumberList_);
    }

    return val;
}
bool CaseAutomationDetailsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_automation_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_automation_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseAutomationRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypeNumberList(refVal);
        }
    }
    return ok;
}


std::string CaseAutomationDetailsVo::getCaseAutomationRate() const
{
    return caseAutomationRate_;
}

void CaseAutomationDetailsVo::setCaseAutomationRate(const std::string& value)
{
    caseAutomationRate_ = value;
    caseAutomationRateIsSet_ = true;
}

bool CaseAutomationDetailsVo::caseAutomationRateIsSet() const
{
    return caseAutomationRateIsSet_;
}

void CaseAutomationDetailsVo::unsetcaseAutomationRate()
{
    caseAutomationRateIsSet_ = false;
}

std::vector<NameAndValueVo>& CaseAutomationDetailsVo::getServiceTypeNumberList()
{
    return serviceTypeNumberList_;
}

void CaseAutomationDetailsVo::setServiceTypeNumberList(const std::vector<NameAndValueVo>& value)
{
    serviceTypeNumberList_ = value;
    serviceTypeNumberListIsSet_ = true;
}

bool CaseAutomationDetailsVo::serviceTypeNumberListIsSet() const
{
    return serviceTypeNumberListIsSet_;
}

void CaseAutomationDetailsVo::unsetserviceTypeNumberList()
{
    serviceTypeNumberListIsSet_ = false;
}

}
}
}
}
}



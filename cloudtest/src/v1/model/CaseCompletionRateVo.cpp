

#include "huaweicloud/cloudtest/v1/model/CaseCompletionRateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseCompletionRateVo::CaseCompletionRateVo()
{
    total_ = 0;
    totalIsSet_ = false;
    completionRate_ = "";
    completionRateIsSet_ = false;
    statusNumberListIsSet_ = false;
}

CaseCompletionRateVo::~CaseCompletionRateVo() = default;

void CaseCompletionRateVo::validate()
{
}

web::json::value CaseCompletionRateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(completionRateIsSet_) {
        val[utility::conversions::to_string_t("completion_rate")] = ModelBase::toJson(completionRate_);
    }
    if(statusNumberListIsSet_) {
        val[utility::conversions::to_string_t("status_number_list")] = ModelBase::toJson(statusNumberList_);
    }

    return val;
}
bool CaseCompletionRateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completion_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completion_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletionRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusNumberList(refVal);
        }
    }
    return ok;
}


int32_t CaseCompletionRateVo::getTotal() const
{
    return total_;
}

void CaseCompletionRateVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CaseCompletionRateVo::totalIsSet() const
{
    return totalIsSet_;
}

void CaseCompletionRateVo::unsettotal()
{
    totalIsSet_ = false;
}

std::string CaseCompletionRateVo::getCompletionRate() const
{
    return completionRate_;
}

void CaseCompletionRateVo::setCompletionRate(const std::string& value)
{
    completionRate_ = value;
    completionRateIsSet_ = true;
}

bool CaseCompletionRateVo::completionRateIsSet() const
{
    return completionRateIsSet_;
}

void CaseCompletionRateVo::unsetcompletionRate()
{
    completionRateIsSet_ = false;
}

std::vector<NameAndValueVo>& CaseCompletionRateVo::getStatusNumberList()
{
    return statusNumberList_;
}

void CaseCompletionRateVo::setStatusNumberList(const std::vector<NameAndValueVo>& value)
{
    statusNumberList_ = value;
    statusNumberListIsSet_ = true;
}

bool CaseCompletionRateVo::statusNumberListIsSet() const
{
    return statusNumberListIsSet_;
}

void CaseCompletionRateVo::unsetstatusNumberList()
{
    statusNumberListIsSet_ = false;
}

}
}
}
}
}



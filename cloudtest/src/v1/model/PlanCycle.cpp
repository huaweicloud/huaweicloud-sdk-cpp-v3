

#include "huaweicloud/cloudtest/v1/model/PlanCycle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PlanCycle::PlanCycle()
{
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

PlanCycle::~PlanCycle() = default;

void PlanCycle::validate()
{
}

web::json::value PlanCycle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }

    return val;
}
bool PlanCycle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    return ok;
}


std::string PlanCycle::getStartDate() const
{
    return startDate_;
}

void PlanCycle::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool PlanCycle::startDateIsSet() const
{
    return startDateIsSet_;
}

void PlanCycle::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string PlanCycle::getEndDate() const
{
    return endDate_;
}

void PlanCycle::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool PlanCycle::endDateIsSet() const
{
    return endDateIsSet_;
}

void PlanCycle::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}



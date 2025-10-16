

#include "huaweicloud/rds/v3/model/JobScheduleDurationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




JobScheduleDurationInfo::JobScheduleDurationInfo()
{
    activeStartDate_ = "";
    activeStartDateIsSet_ = false;
    activeEndDate_ = "";
    activeEndDateIsSet_ = false;
}

JobScheduleDurationInfo::~JobScheduleDurationInfo() = default;

void JobScheduleDurationInfo::validate()
{
}

web::json::value JobScheduleDurationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeStartDateIsSet_) {
        val[utility::conversions::to_string_t("active_start_date")] = ModelBase::toJson(activeStartDate_);
    }
    if(activeEndDateIsSet_) {
        val[utility::conversions::to_string_t("active_end_date")] = ModelBase::toJson(activeEndDate_);
    }

    return val;
}
bool JobScheduleDurationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveEndDate(refVal);
        }
    }
    return ok;
}


std::string JobScheduleDurationInfo::getActiveStartDate() const
{
    return activeStartDate_;
}

void JobScheduleDurationInfo::setActiveStartDate(const std::string& value)
{
    activeStartDate_ = value;
    activeStartDateIsSet_ = true;
}

bool JobScheduleDurationInfo::activeStartDateIsSet() const
{
    return activeStartDateIsSet_;
}

void JobScheduleDurationInfo::unsetactiveStartDate()
{
    activeStartDateIsSet_ = false;
}

std::string JobScheduleDurationInfo::getActiveEndDate() const
{
    return activeEndDate_;
}

void JobScheduleDurationInfo::setActiveEndDate(const std::string& value)
{
    activeEndDate_ = value;
    activeEndDateIsSet_ = true;
}

bool JobScheduleDurationInfo::activeEndDateIsSet() const
{
    return activeEndDateIsSet_;
}

void JobScheduleDurationInfo::unsetactiveEndDate()
{
    activeEndDateIsSet_ = false;
}

}
}
}
}
}



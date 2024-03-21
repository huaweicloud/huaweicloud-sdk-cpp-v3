

#include "huaweicloud/live/v1/model/TimeshiftRequestArgs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




TimeshiftRequestArgs::TimeshiftRequestArgs()
{
    backTime_ = "";
    backTimeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

TimeshiftRequestArgs::~TimeshiftRequestArgs() = default;

void TimeshiftRequestArgs::validate()
{
}

web::json::value TimeshiftRequestArgs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backTimeIsSet_) {
        val[utility::conversions::to_string_t("back_time")] = ModelBase::toJson(backTime_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool TimeshiftRequestArgs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("back_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("back_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string TimeshiftRequestArgs::getBackTime() const
{
    return backTime_;
}

void TimeshiftRequestArgs::setBackTime(const std::string& value)
{
    backTime_ = value;
    backTimeIsSet_ = true;
}

bool TimeshiftRequestArgs::backTimeIsSet() const
{
    return backTimeIsSet_;
}

void TimeshiftRequestArgs::unsetbackTime()
{
    backTimeIsSet_ = false;
}

std::string TimeshiftRequestArgs::getUnit() const
{
    return unit_;
}

void TimeshiftRequestArgs::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool TimeshiftRequestArgs::unitIsSet() const
{
    return unitIsSet_;
}

void TimeshiftRequestArgs::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}



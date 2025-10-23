

#include "huaweicloud/rds/v3/model/RestartPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartPolicy::RestartPolicy()
{
    periodIsSet_ = false;
    utcOffset_ = "";
    utcOffsetIsSet_ = false;
}

RestartPolicy::~RestartPolicy() = default;

void RestartPolicy::validate()
{
}

web::json::value RestartPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(utcOffsetIsSet_) {
        val[utility::conversions::to_string_t("utc_offset")] = ModelBase::toJson(utcOffset_);
    }

    return val;
}
bool RestartPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("utc_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utc_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUtcOffset(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestartPolicy::getPeriod()
{
    return period_;
}

void RestartPolicy::setPeriod(const std::vector<std::string>& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool RestartPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void RestartPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

std::string RestartPolicy::getUtcOffset() const
{
    return utcOffset_;
}

void RestartPolicy::setUtcOffset(const std::string& value)
{
    utcOffset_ = value;
    utcOffsetIsSet_ = true;
}

bool RestartPolicy::utcOffsetIsSet() const
{
    return utcOffsetIsSet_;
}

void RestartPolicy::unsetutcOffset()
{
    utcOffsetIsSet_ = false;
}

}
}
}
}
}



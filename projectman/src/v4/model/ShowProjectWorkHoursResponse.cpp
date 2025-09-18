

#include "huaweicloud/projectman/v4/model/ShowProjectWorkHoursResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectWorkHoursResponse::ShowProjectWorkHoursResponse()
{
    workHoursIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowProjectWorkHoursResponse::~ShowProjectWorkHoursResponse() = default;

void ShowProjectWorkHoursResponse::validate()
{
}

web::json::value ShowProjectWorkHoursResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workHoursIsSet_) {
        val[utility::conversions::to_string_t("work_hours")] = ModelBase::toJson(workHours_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowProjectWorkHoursResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowProjectWorkHoursResponseBody_work_hours> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ShowProjectWorkHoursResponseBody_work_hours>& ShowProjectWorkHoursResponse::getWorkHours()
{
    return workHours_;
}

void ShowProjectWorkHoursResponse::setWorkHours(const std::vector<ShowProjectWorkHoursResponseBody_work_hours>& value)
{
    workHours_ = value;
    workHoursIsSet_ = true;
}

bool ShowProjectWorkHoursResponse::workHoursIsSet() const
{
    return workHoursIsSet_;
}

void ShowProjectWorkHoursResponse::unsetworkHours()
{
    workHoursIsSet_ = false;
}

int32_t ShowProjectWorkHoursResponse::getTotal() const
{
    return total_;
}

void ShowProjectWorkHoursResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowProjectWorkHoursResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowProjectWorkHoursResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



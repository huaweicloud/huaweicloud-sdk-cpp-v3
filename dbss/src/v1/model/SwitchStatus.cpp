

#include "huaweicloud/dbss/v1/model/SwitchStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchStatus::SwitchStatus()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchStatus::~SwitchStatus() = default;

void SwitchStatus::validate()
{
}

web::json::value SwitchStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchStatus::getStatus() const
{
    return status_;
}

void SwitchStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchStatus::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



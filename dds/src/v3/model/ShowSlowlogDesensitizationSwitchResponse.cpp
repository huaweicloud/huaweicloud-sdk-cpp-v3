

#include "huaweicloud/dds/v3/model/ShowSlowlogDesensitizationSwitchResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowSlowlogDesensitizationSwitchResponse::ShowSlowlogDesensitizationSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowSlowlogDesensitizationSwitchResponse::~ShowSlowlogDesensitizationSwitchResponse() = default;

void ShowSlowlogDesensitizationSwitchResponse::validate()
{
}

web::json::value ShowSlowlogDesensitizationSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool ShowSlowlogDesensitizationSwitchResponse::fromJson(const web::json::value& val)
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

std::string ShowSlowlogDesensitizationSwitchResponse::getStatus() const
{
    return status_;
}

void ShowSlowlogDesensitizationSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSlowlogDesensitizationSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSlowlogDesensitizationSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



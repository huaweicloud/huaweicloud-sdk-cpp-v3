

#include "huaweicloud/dbss/v1/model/ShowSensitiveMaskSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowSensitiveMaskSwitchResponse::ShowSensitiveMaskSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowSensitiveMaskSwitchResponse::~ShowSensitiveMaskSwitchResponse() = default;

void ShowSensitiveMaskSwitchResponse::validate()
{
}

web::json::value ShowSensitiveMaskSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowSensitiveMaskSwitchResponse::fromJson(const web::json::value& val)
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


std::string ShowSensitiveMaskSwitchResponse::getStatus() const
{
    return status_;
}

void ShowSensitiveMaskSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSensitiveMaskSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSensitiveMaskSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



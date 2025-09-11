

#include "huaweicloud/dbss/v1/model/SetSensitiveSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveSwitchResponse::SetSensitiveSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetSensitiveSwitchResponse::~SetSensitiveSwitchResponse() = default;

void SetSensitiveSwitchResponse::validate()
{
}

web::json::value SetSensitiveSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetSensitiveSwitchResponse::fromJson(const web::json::value& val)
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


std::string SetSensitiveSwitchResponse::getStatus() const
{
    return status_;
}

void SetSensitiveSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetSensitiveSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetSensitiveSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



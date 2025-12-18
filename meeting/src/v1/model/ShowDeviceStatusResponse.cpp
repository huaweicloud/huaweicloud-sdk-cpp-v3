

#include "huaweicloud/meeting/v1/model/ShowDeviceStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceStatusResponse::ShowDeviceStatusResponse()
{
    bodyIsSet_ = false;
}

ShowDeviceStatusResponse::~ShowDeviceStatusResponse() = default;

void ShowDeviceStatusResponse::validate()
{
}

web::json::value ShowDeviceStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowDeviceStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserStatusDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserStatusDTO>& ShowDeviceStatusResponse::getBody()
{
    return body_;
}

void ShowDeviceStatusResponse::setBody(const std::vector<UserStatusDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDeviceStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDeviceStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



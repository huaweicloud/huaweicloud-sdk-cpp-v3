

#include "huaweicloud/iotda/v5/model/UntagDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UntagDeviceResponse::UntagDeviceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UntagDeviceResponse::~UntagDeviceResponse() = default;

void UntagDeviceResponse::validate()
{
}

web::json::value UntagDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UntagDeviceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UntagDeviceResponse::getBody() const
{
    return body_;
}

void UntagDeviceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UntagDeviceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UntagDeviceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/CloseDeviceTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CloseDeviceTunnelResponse::CloseDeviceTunnelResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CloseDeviceTunnelResponse::~CloseDeviceTunnelResponse() = default;

void CloseDeviceTunnelResponse::validate()
{
}

web::json::value CloseDeviceTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CloseDeviceTunnelResponse::fromJson(const web::json::value& val)
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


std::string CloseDeviceTunnelResponse::getBody() const
{
    return body_;
}

void CloseDeviceTunnelResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CloseDeviceTunnelResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CloseDeviceTunnelResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/DeleteDeviceTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceTunnelResponse::DeleteDeviceTunnelResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteDeviceTunnelResponse::~DeleteDeviceTunnelResponse() = default;

void DeleteDeviceTunnelResponse::validate()
{
}

web::json::value DeleteDeviceTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDeviceTunnelResponse::fromJson(const web::json::value& val)
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


std::string DeleteDeviceTunnelResponse::getBody() const
{
    return body_;
}

void DeleteDeviceTunnelResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDeviceTunnelResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDeviceTunnelResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



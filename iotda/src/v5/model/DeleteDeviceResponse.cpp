

#include "huaweicloud/iotda/v5/model/DeleteDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceResponse::DeleteDeviceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteDeviceResponse::~DeleteDeviceResponse() = default;

void DeleteDeviceResponse::validate()
{
}

web::json::value DeleteDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDeviceResponse::fromJson(const web::json::value& val)
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


std::string DeleteDeviceResponse::getBody() const
{
    return body_;
}

void DeleteDeviceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDeviceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDeviceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/ResetHarmonySoftBusKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetHarmonySoftBusKeyResponse::ResetHarmonySoftBusKeyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ResetHarmonySoftBusKeyResponse::~ResetHarmonySoftBusKeyResponse() = default;

void ResetHarmonySoftBusKeyResponse::validate()
{
}

web::json::value ResetHarmonySoftBusKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetHarmonySoftBusKeyResponse::fromJson(const web::json::value& val)
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


std::string ResetHarmonySoftBusKeyResponse::getBody() const
{
    return body_;
}

void ResetHarmonySoftBusKeyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetHarmonySoftBusKeyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetHarmonySoftBusKeyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



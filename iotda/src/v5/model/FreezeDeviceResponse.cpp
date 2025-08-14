

#include "huaweicloud/iotda/v5/model/FreezeDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FreezeDeviceResponse::FreezeDeviceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

FreezeDeviceResponse::~FreezeDeviceResponse() = default;

void FreezeDeviceResponse::validate()
{
}

web::json::value FreezeDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool FreezeDeviceResponse::fromJson(const web::json::value& val)
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


std::string FreezeDeviceResponse::getBody() const
{
    return body_;
}

void FreezeDeviceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool FreezeDeviceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void FreezeDeviceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



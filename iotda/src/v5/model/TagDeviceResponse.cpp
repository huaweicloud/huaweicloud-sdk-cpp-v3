

#include "huaweicloud/iotda/v5/model/TagDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TagDeviceResponse::TagDeviceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

TagDeviceResponse::~TagDeviceResponse() = default;

void TagDeviceResponse::validate()
{
}

web::json::value TagDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TagDeviceResponse::fromJson(const web::json::value& val)
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


std::string TagDeviceResponse::getBody() const
{
    return body_;
}

void TagDeviceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TagDeviceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void TagDeviceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



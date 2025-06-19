

#include "huaweicloud/cfw/v1/model/EnableIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EnableIpBlacklistResponse::EnableIpBlacklistResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

EnableIpBlacklistResponse::~EnableIpBlacklistResponse() = default;

void EnableIpBlacklistResponse::validate()
{
}

web::json::value EnableIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableIpBlacklistResponse::fromJson(const web::json::value& val)
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


std::string EnableIpBlacklistResponse::getBody() const
{
    return body_;
}

void EnableIpBlacklistResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableIpBlacklistResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableIpBlacklistResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



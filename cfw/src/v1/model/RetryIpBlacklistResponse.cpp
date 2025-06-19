

#include "huaweicloud/cfw/v1/model/RetryIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RetryIpBlacklistResponse::RetryIpBlacklistResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

RetryIpBlacklistResponse::~RetryIpBlacklistResponse() = default;

void RetryIpBlacklistResponse::validate()
{
}

web::json::value RetryIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RetryIpBlacklistResponse::fromJson(const web::json::value& val)
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


std::string RetryIpBlacklistResponse::getBody() const
{
    return body_;
}

void RetryIpBlacklistResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RetryIpBlacklistResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void RetryIpBlacklistResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



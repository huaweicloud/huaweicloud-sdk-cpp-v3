

#include "huaweicloud/rds/v3/model/SetAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoEnlargePolicyResponse::SetAutoEnlargePolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SetAutoEnlargePolicyResponse::~SetAutoEnlargePolicyResponse() = default;

void SetAutoEnlargePolicyResponse::validate()
{
}

web::json::value SetAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
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


std::string SetAutoEnlargePolicyResponse::getBody() const
{
    return body_;
}

void SetAutoEnlargePolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoEnlargePolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoEnlargePolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/smn/v2/model/UpdateNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateNotifyPolicyResponse::UpdateNotifyPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateNotifyPolicyResponse::~UpdateNotifyPolicyResponse() = default;

void UpdateNotifyPolicyResponse::validate()
{
}

web::json::value UpdateNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNotifyPolicyResponse::fromJson(const web::json::value& val)
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


std::string UpdateNotifyPolicyResponse::getBody() const
{
    return body_;
}

void UpdateNotifyPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNotifyPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNotifyPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



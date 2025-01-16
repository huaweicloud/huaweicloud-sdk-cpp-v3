

#include "huaweicloud/smn/v2/model/DeleteNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteNotifyPolicyResponse::DeleteNotifyPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteNotifyPolicyResponse::~DeleteNotifyPolicyResponse() = default;

void DeleteNotifyPolicyResponse::validate()
{
}

web::json::value DeleteNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteNotifyPolicyResponse::fromJson(const web::json::value& val)
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


std::string DeleteNotifyPolicyResponse::getBody() const
{
    return body_;
}

void DeleteNotifyPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteNotifyPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteNotifyPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



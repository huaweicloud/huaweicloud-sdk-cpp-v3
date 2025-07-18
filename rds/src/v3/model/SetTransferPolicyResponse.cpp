

#include "huaweicloud/rds/v3/model/SetTransferPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetTransferPolicyResponse::SetTransferPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SetTransferPolicyResponse::~SetTransferPolicyResponse() = default;

void SetTransferPolicyResponse::validate()
{
}

web::json::value SetTransferPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetTransferPolicyResponse::fromJson(const web::json::value& val)
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


std::string SetTransferPolicyResponse::getBody() const
{
    return body_;
}

void SetTransferPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTransferPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTransferPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



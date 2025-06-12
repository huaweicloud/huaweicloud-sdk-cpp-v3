

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinPolicyRequest::UpdateRecycleBinPolicyRequest()
{
    bodyIsSet_ = false;
}

UpdateRecycleBinPolicyRequest::~UpdateRecycleBinPolicyRequest() = default;

void UpdateRecycleBinPolicyRequest::validate()
{
}

web::json::value UpdateRecycleBinPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecycleBinPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRecycleBinPolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateRecycleBinPolicyReq UpdateRecycleBinPolicyRequest::getBody() const
{
    return body_;
}

void UpdateRecycleBinPolicyRequest::setBody(const UpdateRecycleBinPolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecycleBinPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecycleBinPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



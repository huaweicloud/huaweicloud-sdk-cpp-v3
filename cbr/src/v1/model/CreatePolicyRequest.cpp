

#include "huaweicloud/cbr/v1/model/CreatePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreatePolicyRequest::CreatePolicyRequest()
{
    bodyIsSet_ = false;
}

CreatePolicyRequest::~CreatePolicyRequest() = default;

void CreatePolicyRequest::validate()
{
}

web::json::value CreatePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PolicyCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PolicyCreateReq CreatePolicyRequest::getBody() const
{
    return body_;
}

void CreatePolicyRequest::setBody(const PolicyCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



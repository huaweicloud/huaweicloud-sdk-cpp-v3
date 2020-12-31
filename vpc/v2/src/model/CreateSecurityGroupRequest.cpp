

#include "huaweicloud/vpc/model/CreateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRequest::CreateSecurityGroupRequest()
{
    bodyIsSet_ = false;
}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest() = default;

void CreateSecurityGroupRequest::validate()
{
}

web::json::value CreateSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateSecurityGroupRequestBody CreateSecurityGroupRequest::getBody() const
{
    return body_;
}

void CreateSecurityGroupRequest::setBody(const CreateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/sdrs/v1/model/CreateProtectionGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectionGroupRequest::CreateProtectionGroupRequest()
{
    bodyIsSet_ = false;
}

CreateProtectionGroupRequest::~CreateProtectionGroupRequest() = default;

void CreateProtectionGroupRequest::validate()
{
}

web::json::value CreateProtectionGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateProtectionGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProtectionGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateProtectionGroupRequestBody CreateProtectionGroupRequest::getBody() const
{
    return body_;
}

void CreateProtectionGroupRequest::setBody(const CreateProtectionGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProtectionGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProtectionGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



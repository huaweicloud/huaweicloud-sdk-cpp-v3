

#include "huaweicloud/codehub/v3/model/AddSshKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddSshKeyRequest::AddSshKeyRequest()
{
    bodyIsSet_ = false;
}

AddSshKeyRequest::~AddSshKeyRequest() = default;

void AddSshKeyRequest::validate()
{
}

web::json::value AddSshKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddSshKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddSshKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddSshKeyRequestBody AddSshKeyRequest::getBody() const
{
    return body_;
}

void AddSshKeyRequest::setBody(const AddSshKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddSshKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddSshKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



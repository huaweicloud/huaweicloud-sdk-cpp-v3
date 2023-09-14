

#include "huaweicloud/csms/v1/model/CreateSecretEventRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretEventRequest::CreateSecretEventRequest()
{
    bodyIsSet_ = false;
}

CreateSecretEventRequest::~CreateSecretEventRequest() = default;

void CreateSecretEventRequest::validate()
{
}

web::json::value CreateSecretEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSecretEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSecretEventRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateSecretEventRequestBody CreateSecretEventRequest::getBody() const
{
    return body_;
}

void CreateSecretEventRequest::setBody(const CreateSecretEventRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecretEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecretEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



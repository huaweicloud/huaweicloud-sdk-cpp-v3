

#include "huaweicloud/kms/v2/model/CreatePinRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreatePinRequest::CreatePinRequest()
{
    bodyIsSet_ = false;
}

CreatePinRequest::~CreatePinRequest() = default;

void CreatePinRequest::validate()
{
}

web::json::value CreatePinRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePinRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePinRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePinRequestBody CreatePinRequest::getBody() const
{
    return body_;
}

void CreatePinRequest::setBody(const CreatePinRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePinRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePinRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



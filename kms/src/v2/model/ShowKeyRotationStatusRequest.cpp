

#include "huaweicloud/kms/v2/model/ShowKeyRotationStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyRotationStatusRequest::ShowKeyRotationStatusRequest()
{
    bodyIsSet_ = false;
}

ShowKeyRotationStatusRequest::~ShowKeyRotationStatusRequest() = default;

void ShowKeyRotationStatusRequest::validate()
{
}

web::json::value ShowKeyRotationStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowKeyRotationStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


OperateKeyRequestBody ShowKeyRotationStatusRequest::getBody() const
{
    return body_;
}

void ShowKeyRotationStatusRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowKeyRotationStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowKeyRotationStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



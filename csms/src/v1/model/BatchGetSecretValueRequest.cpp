

#include "huaweicloud/csms/v1/model/BatchGetSecretValueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchGetSecretValueRequest::BatchGetSecretValueRequest()
{
    bodyIsSet_ = false;
}

BatchGetSecretValueRequest::~BatchGetSecretValueRequest() = default;

void BatchGetSecretValueRequest::validate()
{
}

web::json::value BatchGetSecretValueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchGetSecretValueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchGetSecretValueRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchGetSecretValueRequestBody BatchGetSecretValueRequest::getBody() const
{
    return body_;
}

void BatchGetSecretValueRequest::setBody(const BatchGetSecretValueRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchGetSecretValueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchGetSecretValueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



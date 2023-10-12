

#include "huaweicloud/kms/v2/model/CreateKeyStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyStoreRequest::CreateKeyStoreRequest()
{
    bodyIsSet_ = false;
}

CreateKeyStoreRequest::~CreateKeyStoreRequest() = default;

void CreateKeyStoreRequest::validate()
{
}

web::json::value CreateKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateKeyStoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateKeyStoreRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateKeyStoreRequestBody CreateKeyStoreRequest::getBody() const
{
    return body_;
}

void CreateKeyStoreRequest::setBody(const CreateKeyStoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKeyStoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKeyStoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



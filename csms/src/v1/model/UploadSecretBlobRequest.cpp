

#include "huaweicloud/csms/v1/model/UploadSecretBlobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UploadSecretBlobRequest::UploadSecretBlobRequest()
{
    bodyIsSet_ = false;
}

UploadSecretBlobRequest::~UploadSecretBlobRequest() = default;

void UploadSecretBlobRequest::validate()
{
}

web::json::value UploadSecretBlobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UploadSecretBlobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadSecretBlobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UploadSecretBlobRequestBody UploadSecretBlobRequest::getBody() const
{
    return body_;
}

void UploadSecretBlobRequest::setBody(const UploadSecretBlobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadSecretBlobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadSecretBlobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



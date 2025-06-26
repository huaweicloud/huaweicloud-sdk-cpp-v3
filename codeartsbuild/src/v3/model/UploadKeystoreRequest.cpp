

#include "huaweicloud/codeartsbuild/v3/model/UploadKeystoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UploadKeystoreRequest::UploadKeystoreRequest()
{
    bodyIsSet_ = false;
}

UploadKeystoreRequest::~UploadKeystoreRequest() = default;

void UploadKeystoreRequest::validate()
{
}

web::json::value UploadKeystoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadKeystoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadKeystoreRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UploadKeystoreRequestBody UploadKeystoreRequest::getBody() const
{
    return body_;
}

void UploadKeystoreRequest::setBody(const UploadKeystoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadKeystoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadKeystoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



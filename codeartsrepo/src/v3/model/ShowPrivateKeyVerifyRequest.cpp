

#include "huaweicloud/codeartsrepo/v3/model/ShowPrivateKeyVerifyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowPrivateKeyVerifyRequest::ShowPrivateKeyVerifyRequest()
{
    bodyIsSet_ = false;
}

ShowPrivateKeyVerifyRequest::~ShowPrivateKeyVerifyRequest() = default;

void ShowPrivateKeyVerifyRequest::validate()
{
}

web::json::value ShowPrivateKeyVerifyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPrivateKeyVerifyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PrivateKeyVerify refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PrivateKeyVerify ShowPrivateKeyVerifyRequest::getBody() const
{
    return body_;
}

void ShowPrivateKeyVerifyRequest::setBody(const PrivateKeyVerify& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPrivateKeyVerifyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPrivateKeyVerifyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/CheckCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CheckCertificateResponse::CheckCertificateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CheckCertificateResponse::~CheckCertificateResponse() = default;

void CheckCertificateResponse::validate()
{
}

web::json::value CheckCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckCertificateResponse::getBody() const
{
    return body_;
}

void CheckCertificateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckCertificateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckCertificateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



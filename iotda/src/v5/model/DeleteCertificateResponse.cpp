

#include "huaweicloud/iotda/v5/model/DeleteCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteCertificateResponse::DeleteCertificateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteCertificateResponse::~DeleteCertificateResponse() = default;

void DeleteCertificateResponse::validate()
{
}

web::json::value DeleteCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteCertificateResponse::fromJson(const web::json::value& val)
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


std::string DeleteCertificateResponse::getBody() const
{
    return body_;
}

void DeleteCertificateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteCertificateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteCertificateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



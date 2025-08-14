

#include "huaweicloud/identitycenterstore/v1/model/ListSpCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListSpCertificatesResponse::ListSpCertificatesResponse()
{
    bodyIsSet_ = false;
}

ListSpCertificatesResponse::~ListSpCertificatesResponse() = default;

void ListSpCertificatesResponse::validate()
{
}

web::json::value ListSpCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSpCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SpCertificateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<SpCertificateDto>& ListSpCertificatesResponse::getBody()
{
    return body_;
}

void ListSpCertificatesResponse::setBody(const std::vector<SpCertificateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSpCertificatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSpCertificatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



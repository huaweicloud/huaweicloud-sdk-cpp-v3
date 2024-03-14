

#include "huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainMultiCertificatesResponse::UpdateDomainMultiCertificatesResponse()
{
    httpsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDomainMultiCertificatesResponse::~UpdateDomainMultiCertificatesResponse() = default;

void UpdateDomainMultiCertificatesResponse::validate()
{
}

web::json::value UpdateDomainMultiCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            UpdateDomainMultiCertificatesResponseBodyContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


UpdateDomainMultiCertificatesResponseBodyContent UpdateDomainMultiCertificatesResponse::getHttps() const
{
    return https_;
}

void UpdateDomainMultiCertificatesResponse::setHttps(const UpdateDomainMultiCertificatesResponseBodyContent& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::httpsIsSet() const
{
    return httpsIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsethttps()
{
    httpsIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDomainMultiCertificatesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



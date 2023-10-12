

#include "huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainMultiCertificatesResponse::UpdateDomainMultiCertificatesResponse()
{
    httpsIsSet_ = false;
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

}
}
}
}
}



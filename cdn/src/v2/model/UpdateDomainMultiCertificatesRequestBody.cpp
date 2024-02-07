

#include "huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateDomainMultiCertificatesRequestBody::UpdateDomainMultiCertificatesRequestBody()
{
    httpsIsSet_ = false;
}

UpdateDomainMultiCertificatesRequestBody::~UpdateDomainMultiCertificatesRequestBody() = default;

void UpdateDomainMultiCertificatesRequestBody::validate()
{
}

web::json::value UpdateDomainMultiCertificatesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            UpdateDomainMultiCertificatesRequestBodyContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    return ok;
}


UpdateDomainMultiCertificatesRequestBodyContent UpdateDomainMultiCertificatesRequestBody::getHttps() const
{
    return https_;
}

void UpdateDomainMultiCertificatesRequestBody::setHttps(const UpdateDomainMultiCertificatesRequestBodyContent& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBody::httpsIsSet() const
{
    return httpsIsSet_;
}

void UpdateDomainMultiCertificatesRequestBody::unsethttps()
{
    httpsIsSet_ = false;
}

}
}
}
}
}



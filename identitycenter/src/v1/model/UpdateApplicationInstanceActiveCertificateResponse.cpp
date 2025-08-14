

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceActiveCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceActiveCertificateResponse::UpdateApplicationInstanceActiveCertificateResponse()
{
    applicationInstanceCertificateIsSet_ = false;
}

UpdateApplicationInstanceActiveCertificateResponse::~UpdateApplicationInstanceActiveCertificateResponse() = default;

void UpdateApplicationInstanceActiveCertificateResponse::validate()
{
}

web::json::value UpdateApplicationInstanceActiveCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstanceCertificateIsSet_) {
        val[utility::conversions::to_string_t("application_instance_certificate")] = ModelBase::toJson(applicationInstanceCertificate_);
    }

    return val;
}
bool UpdateApplicationInstanceActiveCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_instance_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_certificate"));
        if(!fieldValue.is_null())
        {
            CertificateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceCertificate(refVal);
        }
    }
    return ok;
}


CertificateDto UpdateApplicationInstanceActiveCertificateResponse::getApplicationInstanceCertificate() const
{
    return applicationInstanceCertificate_;
}

void UpdateApplicationInstanceActiveCertificateResponse::setApplicationInstanceCertificate(const CertificateDto& value)
{
    applicationInstanceCertificate_ = value;
    applicationInstanceCertificateIsSet_ = true;
}

bool UpdateApplicationInstanceActiveCertificateResponse::applicationInstanceCertificateIsSet() const
{
    return applicationInstanceCertificateIsSet_;
}

void UpdateApplicationInstanceActiveCertificateResponse::unsetapplicationInstanceCertificate()
{
    applicationInstanceCertificateIsSet_ = false;
}

}
}
}
}
}



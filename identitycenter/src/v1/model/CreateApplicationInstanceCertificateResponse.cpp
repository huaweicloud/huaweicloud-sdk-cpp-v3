

#include "huaweicloud/identitycenter/v1/model/CreateApplicationInstanceCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationInstanceCertificateResponse::CreateApplicationInstanceCertificateResponse()
{
    applicationInstanceCertificateIsSet_ = false;
}

CreateApplicationInstanceCertificateResponse::~CreateApplicationInstanceCertificateResponse() = default;

void CreateApplicationInstanceCertificateResponse::validate()
{
}

web::json::value CreateApplicationInstanceCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstanceCertificateIsSet_) {
        val[utility::conversions::to_string_t("application_instance_certificate")] = ModelBase::toJson(applicationInstanceCertificate_);
    }

    return val;
}
bool CreateApplicationInstanceCertificateResponse::fromJson(const web::json::value& val)
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


CertificateDto CreateApplicationInstanceCertificateResponse::getApplicationInstanceCertificate() const
{
    return applicationInstanceCertificate_;
}

void CreateApplicationInstanceCertificateResponse::setApplicationInstanceCertificate(const CertificateDto& value)
{
    applicationInstanceCertificate_ = value;
    applicationInstanceCertificateIsSet_ = true;
}

bool CreateApplicationInstanceCertificateResponse::applicationInstanceCertificateIsSet() const
{
    return applicationInstanceCertificateIsSet_;
}

void CreateApplicationInstanceCertificateResponse::unsetapplicationInstanceCertificate()
{
    applicationInstanceCertificateIsSet_ = false;
}

}
}
}
}
}



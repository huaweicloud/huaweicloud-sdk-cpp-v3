

#include "huaweicloud/identitycenterstore/v1/model/ListExternalIdPCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListExternalIdPCertificatesResponse::ListExternalIdPCertificatesResponse()
{
    idpCertificatesIsSet_ = false;
}

ListExternalIdPCertificatesResponse::~ListExternalIdPCertificatesResponse() = default;

void ListExternalIdPCertificatesResponse::validate()
{
}

web::json::value ListExternalIdPCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idpCertificatesIsSet_) {
        val[utility::conversions::to_string_t("idp_certificates")] = ModelBase::toJson(idpCertificates_);
    }

    return val;
}
bool ListExternalIdPCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idp_certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<IdpCertificate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpCertificates(refVal);
        }
    }
    return ok;
}


std::vector<IdpCertificate>& ListExternalIdPCertificatesResponse::getIdpCertificates()
{
    return idpCertificates_;
}

void ListExternalIdPCertificatesResponse::setIdpCertificates(const std::vector<IdpCertificate>& value)
{
    idpCertificates_ = value;
    idpCertificatesIsSet_ = true;
}

bool ListExternalIdPCertificatesResponse::idpCertificatesIsSet() const
{
    return idpCertificatesIsSet_;
}

void ListExternalIdPCertificatesResponse::unsetidpCertificates()
{
    idpCertificatesIsSet_ = false;
}

}
}
}
}
}



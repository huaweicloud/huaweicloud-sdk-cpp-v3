

#include "huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ImportExternalIdPCertificateResponse::ImportExternalIdPCertificateResponse()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

ImportExternalIdPCertificateResponse::~ImportExternalIdPCertificateResponse() = default;

void ImportExternalIdPCertificateResponse::validate()
{
}

web::json::value ImportExternalIdPCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool ImportExternalIdPCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    return ok;
}


std::string ImportExternalIdPCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void ImportExternalIdPCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool ImportExternalIdPCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void ImportExternalIdPCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/identitycenterstore/v1/model/IdpCertificateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IdpCertificateBody::IdpCertificateBody()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

IdpCertificateBody::~IdpCertificateBody() = default;

void IdpCertificateBody::validate()
{
}

web::json::value IdpCertificateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IdpCertificateBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string IdpCertificateBody::getCertificateId() const
{
    return certificateId_;
}

void IdpCertificateBody::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool IdpCertificateBody::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void IdpCertificateBody::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string IdpCertificateBody::getStatus() const
{
    return status_;
}

void IdpCertificateBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IdpCertificateBody::statusIsSet() const
{
    return statusIsSet_;
}

void IdpCertificateBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



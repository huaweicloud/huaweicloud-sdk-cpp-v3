

#include "huaweicloud/aad/v2/model/CertInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




CertInfo::CertInfo()
{
    certName_ = "";
    certNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    applyDomain_ = "";
    applyDomainIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    expireStatus_ = 0;
    expireStatusIsSet_ = false;
}

CertInfo::~CertInfo() = default;

void CertInfo::validate()
{
}

web::json::value CertInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(applyDomainIsSet_) {
        val[utility::conversions::to_string_t("apply_domain")] = ModelBase::toJson(applyDomain_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(expireStatusIsSet_) {
        val[utility::conversions::to_string_t("expire_status")] = ModelBase::toJson(expireStatus_);
    }

    return val;
}
bool CertInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireStatus(refVal);
        }
    }
    return ok;
}


std::string CertInfo::getCertName() const
{
    return certName_;
}

void CertInfo::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool CertInfo::certNameIsSet() const
{
    return certNameIsSet_;
}

void CertInfo::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string CertInfo::getId() const
{
    return id_;
}

void CertInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CertInfo::idIsSet() const
{
    return idIsSet_;
}

void CertInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CertInfo::getApplyDomain() const
{
    return applyDomain_;
}

void CertInfo::setApplyDomain(const std::string& value)
{
    applyDomain_ = value;
    applyDomainIsSet_ = true;
}

bool CertInfo::applyDomainIsSet() const
{
    return applyDomainIsSet_;
}

void CertInfo::unsetapplyDomain()
{
    applyDomainIsSet_ = false;
}

int64_t CertInfo::getExpireTime() const
{
    return expireTime_;
}

void CertInfo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CertInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CertInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int32_t CertInfo::getExpireStatus() const
{
    return expireStatus_;
}

void CertInfo::setExpireStatus(int32_t value)
{
    expireStatus_ = value;
    expireStatusIsSet_ = true;
}

bool CertInfo::expireStatusIsSet() const
{
    return expireStatusIsSet_;
}

void CertInfo::unsetexpireStatus()
{
    expireStatusIsSet_ = false;
}

}
}
}
}
}



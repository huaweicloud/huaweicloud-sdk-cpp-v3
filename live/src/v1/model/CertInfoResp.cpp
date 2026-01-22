

#include "huaweicloud/live/v1/model/CertInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CertInfoResp::CertInfoResp()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    certType_ = 0;
    certTypeIsSet_ = false;
    gmCertType_ = 0;
    gmCertTypeIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
}

CertInfoResp::~CertInfoResp() = default;

void CertInfoResp::validate()
{
}

web::json::value CertInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(certTypeIsSet_) {
        val[utility::conversions::to_string_t("cert_type")] = ModelBase::toJson(certType_);
    }
    if(gmCertTypeIsSet_) {
        val[utility::conversions::to_string_t("gm_cert_type")] = ModelBase::toJson(gmCertType_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }

    return val;
}
bool CertInfoResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gm_cert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gm_cert_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGmCertType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    return ok;
}


std::string CertInfoResp::getPlayDomain() const
{
    return playDomain_;
}

void CertInfoResp::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool CertInfoResp::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void CertInfoResp::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string CertInfoResp::getProjectId() const
{
    return projectId_;
}

void CertInfoResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CertInfoResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CertInfoResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CertInfoResp::getTenantName() const
{
    return tenantName_;
}

void CertInfoResp::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CertInfoResp::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CertInfoResp::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CertInfoResp::getStartTime() const
{
    return startTime_;
}

void CertInfoResp::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CertInfoResp::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CertInfoResp::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CertInfoResp::getExpireTime() const
{
    return expireTime_;
}

void CertInfoResp::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CertInfoResp::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CertInfoResp::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int32_t CertInfoResp::getCertType() const
{
    return certType_;
}

void CertInfoResp::setCertType(int32_t value)
{
    certType_ = value;
    certTypeIsSet_ = true;
}

bool CertInfoResp::certTypeIsSet() const
{
    return certTypeIsSet_;
}

void CertInfoResp::unsetcertType()
{
    certTypeIsSet_ = false;
}

int32_t CertInfoResp::getGmCertType() const
{
    return gmCertType_;
}

void CertInfoResp::setGmCertType(int32_t value)
{
    gmCertType_ = value;
    gmCertTypeIsSet_ = true;
}

bool CertInfoResp::gmCertTypeIsSet() const
{
    return gmCertTypeIsSet_;
}

void CertInfoResp::unsetgmCertType()
{
    gmCertTypeIsSet_ = false;
}

std::string CertInfoResp::getSource() const
{
    return source_;
}

void CertInfoResp::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CertInfoResp::sourceIsSet() const
{
    return sourceIsSet_;
}

void CertInfoResp::unsetsource()
{
    sourceIsSet_ = false;
}

std::string CertInfoResp::getCertName() const
{
    return certName_;
}

void CertInfoResp::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool CertInfoResp::certNameIsSet() const
{
    return certNameIsSet_;
}

void CertInfoResp::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string CertInfoResp::getCertId() const
{
    return certId_;
}

void CertInfoResp::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool CertInfoResp::certIdIsSet() const
{
    return certIdIsSet_;
}

void CertInfoResp::unsetcertId()
{
    certIdIsSet_ = false;
}

}
}
}
}
}



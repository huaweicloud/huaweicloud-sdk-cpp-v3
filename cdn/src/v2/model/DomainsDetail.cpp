

#include "huaweicloud/cdn/v2/model/DomainsDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DomainsDetail::DomainsDetail()
{
    id_ = "";
    idIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    domainStatus_ = "";
    domainStatusIsSet_ = false;
    cname_ = "";
    cnameIsSet_ = false;
    sourcesIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    disabled_ = 0;
    disabledIsSet_ = false;
    locked_ = 0;
    lockedIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
}

DomainsDetail::~DomainsDetail() = default;

void DomainsDetail::validate()
{
}

web::json::value DomainsDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(domainStatusIsSet_) {
        val[utility::conversions::to_string_t("domain_status")] = ModelBase::toJson(domainStatus_);
    }
    if(cnameIsSet_) {
        val[utility::conversions::to_string_t("cname")] = ModelBase::toJson(cname_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }

    return val;
}
bool DomainsDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourcesDomainConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    return ok;
}


std::string DomainsDetail::getId() const
{
    return id_;
}

void DomainsDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainsDetail::idIsSet() const
{
    return idIsSet_;
}

void DomainsDetail::unsetid()
{
    idIsSet_ = false;
}

std::string DomainsDetail::getDomainName() const
{
    return domainName_;
}

void DomainsDetail::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainsDetail::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainsDetail::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainsDetail::getBusinessType() const
{
    return businessType_;
}

void DomainsDetail::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool DomainsDetail::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void DomainsDetail::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string DomainsDetail::getDomainStatus() const
{
    return domainStatus_;
}

void DomainsDetail::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool DomainsDetail::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void DomainsDetail::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

std::string DomainsDetail::getCname() const
{
    return cname_;
}

void DomainsDetail::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool DomainsDetail::cnameIsSet() const
{
    return cnameIsSet_;
}

void DomainsDetail::unsetcname()
{
    cnameIsSet_ = false;
}

std::vector<SourcesDomainConfig>& DomainsDetail::getSources()
{
    return sources_;
}

void DomainsDetail::setSources(const std::vector<SourcesDomainConfig>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool DomainsDetail::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void DomainsDetail::unsetsources()
{
    sourcesIsSet_ = false;
}

int32_t DomainsDetail::getHttpsStatus() const
{
    return httpsStatus_;
}

void DomainsDetail::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool DomainsDetail::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void DomainsDetail::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

int64_t DomainsDetail::getCreateTime() const
{
    return createTime_;
}

void DomainsDetail::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DomainsDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DomainsDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t DomainsDetail::getUpdateTime() const
{
    return updateTime_;
}

void DomainsDetail::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DomainsDetail::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DomainsDetail::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t DomainsDetail::getDisabled() const
{
    return disabled_;
}

void DomainsDetail::setDisabled(int32_t value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool DomainsDetail::disabledIsSet() const
{
    return disabledIsSet_;
}

void DomainsDetail::unsetdisabled()
{
    disabledIsSet_ = false;
}

int32_t DomainsDetail::getLocked() const
{
    return locked_;
}

void DomainsDetail::setLocked(int32_t value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool DomainsDetail::lockedIsSet() const
{
    return lockedIsSet_;
}

void DomainsDetail::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string DomainsDetail::getServiceArea() const
{
    return serviceArea_;
}

void DomainsDetail::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool DomainsDetail::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void DomainsDetail::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

}
}
}
}
}



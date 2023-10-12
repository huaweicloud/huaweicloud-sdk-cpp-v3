

#include "huaweicloud/cdn/v1/model/DomainsWithPort.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DomainsWithPort::DomainsWithPort()
{
    id_ = "";
    idIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    userDomainId_ = "";
    userDomainIdIsSet_ = false;
    domainStatus_ = "";
    domainStatusIsSet_ = false;
    cname_ = "";
    cnameIsSet_ = false;
    sourcesIsSet_ = false;
    domainOriginHostIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    modifyTime_ = 0L;
    modifyTimeIsSet_ = false;
    disabled_ = 0;
    disabledIsSet_ = false;
    locked_ = 0;
    lockedIsSet_ = false;
    autoRefreshPreheat_ = 0;
    autoRefreshPreheatIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    rangeStatus_ = "";
    rangeStatusIsSet_ = false;
    followStatus_ = "";
    followStatusIsSet_ = false;
    originStatus_ = "";
    originStatusIsSet_ = false;
    bannedReason_ = "";
    bannedReasonIsSet_ = false;
    lockedReason_ = "";
    lockedReasonIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

DomainsWithPort::~DomainsWithPort() = default;

void DomainsWithPort::validate()
{
}

web::json::value DomainsWithPort::toJson() const
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
    if(userDomainIdIsSet_) {
        val[utility::conversions::to_string_t("user_domain_id")] = ModelBase::toJson(userDomainId_);
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
    if(domainOriginHostIsSet_) {
        val[utility::conversions::to_string_t("domain_origin_host")] = ModelBase::toJson(domainOriginHost_);
    }
    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(modifyTimeIsSet_) {
        val[utility::conversions::to_string_t("modify_time")] = ModelBase::toJson(modifyTime_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(autoRefreshPreheatIsSet_) {
        val[utility::conversions::to_string_t("auto_refresh_preheat")] = ModelBase::toJson(autoRefreshPreheat_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(rangeStatusIsSet_) {
        val[utility::conversions::to_string_t("range_status")] = ModelBase::toJson(rangeStatus_);
    }
    if(followStatusIsSet_) {
        val[utility::conversions::to_string_t("follow_status")] = ModelBase::toJson(followStatus_);
    }
    if(originStatusIsSet_) {
        val[utility::conversions::to_string_t("origin_status")] = ModelBase::toJson(originStatus_);
    }
    if(bannedReasonIsSet_) {
        val[utility::conversions::to_string_t("banned_reason")] = ModelBase::toJson(bannedReason_);
    }
    if(lockedReasonIsSet_) {
        val[utility::conversions::to_string_t("locked_reason")] = ModelBase::toJson(lockedReason_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool DomainsWithPort::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDomainId(refVal);
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
            std::vector<SourceWithPort> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_origin_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_origin_host"));
        if(!fieldValue.is_null())
        {
            DomainOriginHost refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainOriginHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_refresh_preheat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_refresh_preheat"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRefreshPreheat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("range_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("follow_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollowStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("banned_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("banned_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBannedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string DomainsWithPort::getId() const
{
    return id_;
}

void DomainsWithPort::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainsWithPort::idIsSet() const
{
    return idIsSet_;
}

void DomainsWithPort::unsetid()
{
    idIsSet_ = false;
}

std::string DomainsWithPort::getDomainName() const
{
    return domainName_;
}

void DomainsWithPort::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainsWithPort::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainsWithPort::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainsWithPort::getBusinessType() const
{
    return businessType_;
}

void DomainsWithPort::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool DomainsWithPort::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void DomainsWithPort::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string DomainsWithPort::getUserDomainId() const
{
    return userDomainId_;
}

void DomainsWithPort::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool DomainsWithPort::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void DomainsWithPort::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

std::string DomainsWithPort::getDomainStatus() const
{
    return domainStatus_;
}

void DomainsWithPort::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool DomainsWithPort::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void DomainsWithPort::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

std::string DomainsWithPort::getCname() const
{
    return cname_;
}

void DomainsWithPort::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool DomainsWithPort::cnameIsSet() const
{
    return cnameIsSet_;
}

void DomainsWithPort::unsetcname()
{
    cnameIsSet_ = false;
}

std::vector<SourceWithPort>& DomainsWithPort::getSources()
{
    return sources_;
}

void DomainsWithPort::setSources(const std::vector<SourceWithPort>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool DomainsWithPort::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void DomainsWithPort::unsetsources()
{
    sourcesIsSet_ = false;
}

DomainOriginHost DomainsWithPort::getDomainOriginHost() const
{
    return domainOriginHost_;
}

void DomainsWithPort::setDomainOriginHost(const DomainOriginHost& value)
{
    domainOriginHost_ = value;
    domainOriginHostIsSet_ = true;
}

bool DomainsWithPort::domainOriginHostIsSet() const
{
    return domainOriginHostIsSet_;
}

void DomainsWithPort::unsetdomainOriginHost()
{
    domainOriginHostIsSet_ = false;
}

int32_t DomainsWithPort::getHttpsStatus() const
{
    return httpsStatus_;
}

void DomainsWithPort::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool DomainsWithPort::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void DomainsWithPort::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

int64_t DomainsWithPort::getCreateTime() const
{
    return createTime_;
}

void DomainsWithPort::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DomainsWithPort::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DomainsWithPort::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t DomainsWithPort::getModifyTime() const
{
    return modifyTime_;
}

void DomainsWithPort::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool DomainsWithPort::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void DomainsWithPort::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

int32_t DomainsWithPort::getDisabled() const
{
    return disabled_;
}

void DomainsWithPort::setDisabled(int32_t value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool DomainsWithPort::disabledIsSet() const
{
    return disabledIsSet_;
}

void DomainsWithPort::unsetdisabled()
{
    disabledIsSet_ = false;
}

int32_t DomainsWithPort::getLocked() const
{
    return locked_;
}

void DomainsWithPort::setLocked(int32_t value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool DomainsWithPort::lockedIsSet() const
{
    return lockedIsSet_;
}

void DomainsWithPort::unsetlocked()
{
    lockedIsSet_ = false;
}

int32_t DomainsWithPort::getAutoRefreshPreheat() const
{
    return autoRefreshPreheat_;
}

void DomainsWithPort::setAutoRefreshPreheat(int32_t value)
{
    autoRefreshPreheat_ = value;
    autoRefreshPreheatIsSet_ = true;
}

bool DomainsWithPort::autoRefreshPreheatIsSet() const
{
    return autoRefreshPreheatIsSet_;
}

void DomainsWithPort::unsetautoRefreshPreheat()
{
    autoRefreshPreheatIsSet_ = false;
}

std::string DomainsWithPort::getServiceArea() const
{
    return serviceArea_;
}

void DomainsWithPort::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool DomainsWithPort::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void DomainsWithPort::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string DomainsWithPort::getRangeStatus() const
{
    return rangeStatus_;
}

void DomainsWithPort::setRangeStatus(const std::string& value)
{
    rangeStatus_ = value;
    rangeStatusIsSet_ = true;
}

bool DomainsWithPort::rangeStatusIsSet() const
{
    return rangeStatusIsSet_;
}

void DomainsWithPort::unsetrangeStatus()
{
    rangeStatusIsSet_ = false;
}

std::string DomainsWithPort::getFollowStatus() const
{
    return followStatus_;
}

void DomainsWithPort::setFollowStatus(const std::string& value)
{
    followStatus_ = value;
    followStatusIsSet_ = true;
}

bool DomainsWithPort::followStatusIsSet() const
{
    return followStatusIsSet_;
}

void DomainsWithPort::unsetfollowStatus()
{
    followStatusIsSet_ = false;
}

std::string DomainsWithPort::getOriginStatus() const
{
    return originStatus_;
}

void DomainsWithPort::setOriginStatus(const std::string& value)
{
    originStatus_ = value;
    originStatusIsSet_ = true;
}

bool DomainsWithPort::originStatusIsSet() const
{
    return originStatusIsSet_;
}

void DomainsWithPort::unsetoriginStatus()
{
    originStatusIsSet_ = false;
}

std::string DomainsWithPort::getBannedReason() const
{
    return bannedReason_;
}

void DomainsWithPort::setBannedReason(const std::string& value)
{
    bannedReason_ = value;
    bannedReasonIsSet_ = true;
}

bool DomainsWithPort::bannedReasonIsSet() const
{
    return bannedReasonIsSet_;
}

void DomainsWithPort::unsetbannedReason()
{
    bannedReasonIsSet_ = false;
}

std::string DomainsWithPort::getLockedReason() const
{
    return lockedReason_;
}

void DomainsWithPort::setLockedReason(const std::string& value)
{
    lockedReason_ = value;
    lockedReasonIsSet_ = true;
}

bool DomainsWithPort::lockedReasonIsSet() const
{
    return lockedReasonIsSet_;
}

void DomainsWithPort::unsetlockedReason()
{
    lockedReasonIsSet_ = false;
}

std::string DomainsWithPort::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DomainsWithPort::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DomainsWithPort::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DomainsWithPort::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}



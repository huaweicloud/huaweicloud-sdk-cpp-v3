

#include "huaweicloud/cdn/v2/model/Domains.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Domains::Domains()
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
    tagsIsSet_ = false;
}

Domains::~Domains() = default;

void Domains::validate()
{
}

web::json::value Domains::toJson() const
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool Domains::fromJson(const web::json::value& val)
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
            std::vector<Sources> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<EpResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string Domains::getId() const
{
    return id_;
}

void Domains::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Domains::idIsSet() const
{
    return idIsSet_;
}

void Domains::unsetid()
{
    idIsSet_ = false;
}

std::string Domains::getDomainName() const
{
    return domainName_;
}

void Domains::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool Domains::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void Domains::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string Domains::getBusinessType() const
{
    return businessType_;
}

void Domains::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool Domains::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void Domains::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string Domains::getDomainStatus() const
{
    return domainStatus_;
}

void Domains::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool Domains::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void Domains::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

std::string Domains::getCname() const
{
    return cname_;
}

void Domains::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool Domains::cnameIsSet() const
{
    return cnameIsSet_;
}

void Domains::unsetcname()
{
    cnameIsSet_ = false;
}

std::vector<Sources>& Domains::getSources()
{
    return sources_;
}

void Domains::setSources(const std::vector<Sources>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool Domains::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void Domains::unsetsources()
{
    sourcesIsSet_ = false;
}

DomainOriginHost Domains::getDomainOriginHost() const
{
    return domainOriginHost_;
}

void Domains::setDomainOriginHost(const DomainOriginHost& value)
{
    domainOriginHost_ = value;
    domainOriginHostIsSet_ = true;
}

bool Domains::domainOriginHostIsSet() const
{
    return domainOriginHostIsSet_;
}

void Domains::unsetdomainOriginHost()
{
    domainOriginHostIsSet_ = false;
}

int32_t Domains::getHttpsStatus() const
{
    return httpsStatus_;
}

void Domains::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool Domains::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void Domains::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

int64_t Domains::getCreateTime() const
{
    return createTime_;
}

void Domains::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Domains::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Domains::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t Domains::getModifyTime() const
{
    return modifyTime_;
}

void Domains::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool Domains::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void Domains::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

int32_t Domains::getDisabled() const
{
    return disabled_;
}

void Domains::setDisabled(int32_t value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool Domains::disabledIsSet() const
{
    return disabledIsSet_;
}

void Domains::unsetdisabled()
{
    disabledIsSet_ = false;
}

int32_t Domains::getLocked() const
{
    return locked_;
}

void Domains::setLocked(int32_t value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool Domains::lockedIsSet() const
{
    return lockedIsSet_;
}

void Domains::unsetlocked()
{
    lockedIsSet_ = false;
}

int32_t Domains::getAutoRefreshPreheat() const
{
    return autoRefreshPreheat_;
}

void Domains::setAutoRefreshPreheat(int32_t value)
{
    autoRefreshPreheat_ = value;
    autoRefreshPreheatIsSet_ = true;
}

bool Domains::autoRefreshPreheatIsSet() const
{
    return autoRefreshPreheatIsSet_;
}

void Domains::unsetautoRefreshPreheat()
{
    autoRefreshPreheatIsSet_ = false;
}

std::string Domains::getServiceArea() const
{
    return serviceArea_;
}

void Domains::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool Domains::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void Domains::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string Domains::getRangeStatus() const
{
    return rangeStatus_;
}

void Domains::setRangeStatus(const std::string& value)
{
    rangeStatus_ = value;
    rangeStatusIsSet_ = true;
}

bool Domains::rangeStatusIsSet() const
{
    return rangeStatusIsSet_;
}

void Domains::unsetrangeStatus()
{
    rangeStatusIsSet_ = false;
}

std::string Domains::getFollowStatus() const
{
    return followStatus_;
}

void Domains::setFollowStatus(const std::string& value)
{
    followStatus_ = value;
    followStatusIsSet_ = true;
}

bool Domains::followStatusIsSet() const
{
    return followStatusIsSet_;
}

void Domains::unsetfollowStatus()
{
    followStatusIsSet_ = false;
}

std::string Domains::getOriginStatus() const
{
    return originStatus_;
}

void Domains::setOriginStatus(const std::string& value)
{
    originStatus_ = value;
    originStatusIsSet_ = true;
}

bool Domains::originStatusIsSet() const
{
    return originStatusIsSet_;
}

void Domains::unsetoriginStatus()
{
    originStatusIsSet_ = false;
}

std::string Domains::getBannedReason() const
{
    return bannedReason_;
}

void Domains::setBannedReason(const std::string& value)
{
    bannedReason_ = value;
    bannedReasonIsSet_ = true;
}

bool Domains::bannedReasonIsSet() const
{
    return bannedReasonIsSet_;
}

void Domains::unsetbannedReason()
{
    bannedReasonIsSet_ = false;
}

std::string Domains::getLockedReason() const
{
    return lockedReason_;
}

void Domains::setLockedReason(const std::string& value)
{
    lockedReason_ = value;
    lockedReasonIsSet_ = true;
}

bool Domains::lockedReasonIsSet() const
{
    return lockedReasonIsSet_;
}

void Domains::unsetlockedReason()
{
    lockedReasonIsSet_ = false;
}

std::string Domains::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Domains::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Domains::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Domains::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<EpResourceTag>& Domains::getTags()
{
    return tags_;
}

void Domains::setTags(const std::vector<EpResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Domains::tagsIsSet() const
{
    return tagsIsSet_;
}

void Domains::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}



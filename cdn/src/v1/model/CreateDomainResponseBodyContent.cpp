

#include "huaweicloud/cdn/v1/model/CreateDomainResponseBodyContent.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateDomainResponseBodyContent::CreateDomainResponseBodyContent()
{
    id_ = "";
    idIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
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
    rangeStatus_ = "";
    rangeStatusIsSet_ = false;
    followStatus_ = "";
    followStatusIsSet_ = false;
    originStatus_ = "";
    originStatusIsSet_ = false;
    autoRefreshPreheat_ = 0;
    autoRefreshPreheatIsSet_ = false;
}

CreateDomainResponseBodyContent::~CreateDomainResponseBodyContent() = default;

void CreateDomainResponseBodyContent::validate()
{
}

web::json::value CreateDomainResponseBodyContent::toJson() const
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
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
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
    if(rangeStatusIsSet_) {
        val[utility::conversions::to_string_t("range_status")] = ModelBase::toJson(rangeStatus_);
    }
    if(followStatusIsSet_) {
        val[utility::conversions::to_string_t("follow_status")] = ModelBase::toJson(followStatus_);
    }
    if(originStatusIsSet_) {
        val[utility::conversions::to_string_t("origin_status")] = ModelBase::toJson(originStatus_);
    }
    if(autoRefreshPreheatIsSet_) {
        val[utility::conversions::to_string_t("auto_refresh_preheat")] = ModelBase::toJson(autoRefreshPreheat_);
    }

    return val;
}

bool CreateDomainResponseBodyContent::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_refresh_preheat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_refresh_preheat"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRefreshPreheat(refVal);
        }
    }
    return ok;
}

std::string CreateDomainResponseBodyContent::getId() const
{
    return id_;
}

void CreateDomainResponseBodyContent::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDomainResponseBodyContent::idIsSet() const
{
    return idIsSet_;
}

void CreateDomainResponseBodyContent::unsetid()
{
    idIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getDomainName() const
{
    return domainName_;
}

void CreateDomainResponseBodyContent::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateDomainResponseBodyContent::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateDomainResponseBodyContent::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getBusinessType() const
{
    return businessType_;
}

void CreateDomainResponseBodyContent::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool CreateDomainResponseBodyContent::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void CreateDomainResponseBodyContent::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getServiceArea() const
{
    return serviceArea_;
}

void CreateDomainResponseBodyContent::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool CreateDomainResponseBodyContent::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void CreateDomainResponseBodyContent::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getUserDomainId() const
{
    return userDomainId_;
}

void CreateDomainResponseBodyContent::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool CreateDomainResponseBodyContent::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void CreateDomainResponseBodyContent::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getDomainStatus() const
{
    return domainStatus_;
}

void CreateDomainResponseBodyContent::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool CreateDomainResponseBodyContent::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void CreateDomainResponseBodyContent::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getCname() const
{
    return cname_;
}

void CreateDomainResponseBodyContent::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool CreateDomainResponseBodyContent::cnameIsSet() const
{
    return cnameIsSet_;
}

void CreateDomainResponseBodyContent::unsetcname()
{
    cnameIsSet_ = false;
}

std::vector<Sources>& CreateDomainResponseBodyContent::getSources()
{
    return sources_;
}

void CreateDomainResponseBodyContent::setSources(const std::vector<Sources>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool CreateDomainResponseBodyContent::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void CreateDomainResponseBodyContent::unsetsources()
{
    sourcesIsSet_ = false;
}

DomainOriginHost CreateDomainResponseBodyContent::getDomainOriginHost() const
{
    return domainOriginHost_;
}

void CreateDomainResponseBodyContent::setDomainOriginHost(const DomainOriginHost& value)
{
    domainOriginHost_ = value;
    domainOriginHostIsSet_ = true;
}

bool CreateDomainResponseBodyContent::domainOriginHostIsSet() const
{
    return domainOriginHostIsSet_;
}

void CreateDomainResponseBodyContent::unsetdomainOriginHost()
{
    domainOriginHostIsSet_ = false;
}

int32_t CreateDomainResponseBodyContent::getHttpsStatus() const
{
    return httpsStatus_;
}

void CreateDomainResponseBodyContent::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool CreateDomainResponseBodyContent::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void CreateDomainResponseBodyContent::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

int64_t CreateDomainResponseBodyContent::getCreateTime() const
{
    return createTime_;
}

void CreateDomainResponseBodyContent::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDomainResponseBodyContent::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDomainResponseBodyContent::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t CreateDomainResponseBodyContent::getModifyTime() const
{
    return modifyTime_;
}

void CreateDomainResponseBodyContent::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool CreateDomainResponseBodyContent::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void CreateDomainResponseBodyContent::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

int32_t CreateDomainResponseBodyContent::getDisabled() const
{
    return disabled_;
}

void CreateDomainResponseBodyContent::setDisabled(int32_t value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool CreateDomainResponseBodyContent::disabledIsSet() const
{
    return disabledIsSet_;
}

void CreateDomainResponseBodyContent::unsetdisabled()
{
    disabledIsSet_ = false;
}

int32_t CreateDomainResponseBodyContent::getLocked() const
{
    return locked_;
}

void CreateDomainResponseBodyContent::setLocked(int32_t value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool CreateDomainResponseBodyContent::lockedIsSet() const
{
    return lockedIsSet_;
}

void CreateDomainResponseBodyContent::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getRangeStatus() const
{
    return rangeStatus_;
}

void CreateDomainResponseBodyContent::setRangeStatus(const std::string& value)
{
    rangeStatus_ = value;
    rangeStatusIsSet_ = true;
}

bool CreateDomainResponseBodyContent::rangeStatusIsSet() const
{
    return rangeStatusIsSet_;
}

void CreateDomainResponseBodyContent::unsetrangeStatus()
{
    rangeStatusIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getFollowStatus() const
{
    return followStatus_;
}

void CreateDomainResponseBodyContent::setFollowStatus(const std::string& value)
{
    followStatus_ = value;
    followStatusIsSet_ = true;
}

bool CreateDomainResponseBodyContent::followStatusIsSet() const
{
    return followStatusIsSet_;
}

void CreateDomainResponseBodyContent::unsetfollowStatus()
{
    followStatusIsSet_ = false;
}

std::string CreateDomainResponseBodyContent::getOriginStatus() const
{
    return originStatus_;
}

void CreateDomainResponseBodyContent::setOriginStatus(const std::string& value)
{
    originStatus_ = value;
    originStatusIsSet_ = true;
}

bool CreateDomainResponseBodyContent::originStatusIsSet() const
{
    return originStatusIsSet_;
}

void CreateDomainResponseBodyContent::unsetoriginStatus()
{
    originStatusIsSet_ = false;
}

int32_t CreateDomainResponseBodyContent::getAutoRefreshPreheat() const
{
    return autoRefreshPreheat_;
}

void CreateDomainResponseBodyContent::setAutoRefreshPreheat(int32_t value)
{
    autoRefreshPreheat_ = value;
    autoRefreshPreheatIsSet_ = true;
}

bool CreateDomainResponseBodyContent::autoRefreshPreheatIsSet() const
{
    return autoRefreshPreheatIsSet_;
}

void CreateDomainResponseBodyContent::unsetautoRefreshPreheat()
{
    autoRefreshPreheatIsSet_ = false;
}

}
}
}
}
}



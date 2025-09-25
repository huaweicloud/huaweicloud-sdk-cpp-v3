

#include "huaweicloud/codeartspipeline/v2/model/PublisherVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublisherVO::PublisherVO()
{
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    logoUrl_ = "";
    logoUrlIsSet_ = false;
    website_ = "";
    websiteIsSet_ = false;
    supportUrl_ = "";
    supportUrlIsSet_ = false;
    sourceUrl_ = "";
    sourceUrlIsSet_ = false;
    enName_ = "";
    enNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authStatus_ = "";
    authStatusIsSet_ = false;
    isDelete_ = 0;
    isDeleteIsSet_ = false;
    lastUpdateUserName_ = "";
    lastUpdateUserNameIsSet_ = false;
    lastUpdateUserId_ = "";
    lastUpdateUserIdIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
}

PublisherVO::~PublisherVO() = default;

void PublisherVO::validate()
{
}

web::json::value PublisherVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(logoUrlIsSet_) {
        val[utility::conversions::to_string_t("logo_url")] = ModelBase::toJson(logoUrl_);
    }
    if(websiteIsSet_) {
        val[utility::conversions::to_string_t("website")] = ModelBase::toJson(website_);
    }
    if(supportUrlIsSet_) {
        val[utility::conversions::to_string_t("support_url")] = ModelBase::toJson(supportUrl_);
    }
    if(sourceUrlIsSet_) {
        val[utility::conversions::to_string_t("source_url")] = ModelBase::toJson(sourceUrl_);
    }
    if(enNameIsSet_) {
        val[utility::conversions::to_string_t("en_name")] = ModelBase::toJson(enName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authStatusIsSet_) {
        val[utility::conversions::to_string_t("auth_status")] = ModelBase::toJson(authStatus_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(lastUpdateUserNameIsSet_) {
        val[utility::conversions::to_string_t("last_update_user_name")] = ModelBase::toJson(lastUpdateUserName_);
    }
    if(lastUpdateUserIdIsSet_) {
        val[utility::conversions::to_string_t("last_update_user_id")] = ModelBase::toJson(lastUpdateUserId_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }

    return val;
}
bool PublisherVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logo_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logo_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("website"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("website"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    return ok;
}


std::string PublisherVO::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void PublisherVO::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool PublisherVO::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void PublisherVO::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

std::string PublisherVO::getUserId() const
{
    return userId_;
}

void PublisherVO::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool PublisherVO::userIdIsSet() const
{
    return userIdIsSet_;
}

void PublisherVO::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string PublisherVO::getTenantId() const
{
    return tenantId_;
}

void PublisherVO::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool PublisherVO::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void PublisherVO::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string PublisherVO::getDescription() const
{
    return description_;
}

void PublisherVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublisherVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublisherVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublisherVO::getLogoUrl() const
{
    return logoUrl_;
}

void PublisherVO::setLogoUrl(const std::string& value)
{
    logoUrl_ = value;
    logoUrlIsSet_ = true;
}

bool PublisherVO::logoUrlIsSet() const
{
    return logoUrlIsSet_;
}

void PublisherVO::unsetlogoUrl()
{
    logoUrlIsSet_ = false;
}

std::string PublisherVO::getWebsite() const
{
    return website_;
}

void PublisherVO::setWebsite(const std::string& value)
{
    website_ = value;
    websiteIsSet_ = true;
}

bool PublisherVO::websiteIsSet() const
{
    return websiteIsSet_;
}

void PublisherVO::unsetwebsite()
{
    websiteIsSet_ = false;
}

std::string PublisherVO::getSupportUrl() const
{
    return supportUrl_;
}

void PublisherVO::setSupportUrl(const std::string& value)
{
    supportUrl_ = value;
    supportUrlIsSet_ = true;
}

bool PublisherVO::supportUrlIsSet() const
{
    return supportUrlIsSet_;
}

void PublisherVO::unsetsupportUrl()
{
    supportUrlIsSet_ = false;
}

std::string PublisherVO::getSourceUrl() const
{
    return sourceUrl_;
}

void PublisherVO::setSourceUrl(const std::string& value)
{
    sourceUrl_ = value;
    sourceUrlIsSet_ = true;
}

bool PublisherVO::sourceUrlIsSet() const
{
    return sourceUrlIsSet_;
}

void PublisherVO::unsetsourceUrl()
{
    sourceUrlIsSet_ = false;
}

std::string PublisherVO::getEnName() const
{
    return enName_;
}

void PublisherVO::setEnName(const std::string& value)
{
    enName_ = value;
    enNameIsSet_ = true;
}

bool PublisherVO::enNameIsSet() const
{
    return enNameIsSet_;
}

void PublisherVO::unsetenName()
{
    enNameIsSet_ = false;
}

std::string PublisherVO::getName() const
{
    return name_;
}

void PublisherVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PublisherVO::nameIsSet() const
{
    return nameIsSet_;
}

void PublisherVO::unsetname()
{
    nameIsSet_ = false;
}

std::string PublisherVO::getAuthStatus() const
{
    return authStatus_;
}

void PublisherVO::setAuthStatus(const std::string& value)
{
    authStatus_ = value;
    authStatusIsSet_ = true;
}

bool PublisherVO::authStatusIsSet() const
{
    return authStatusIsSet_;
}

void PublisherVO::unsetauthStatus()
{
    authStatusIsSet_ = false;
}

int32_t PublisherVO::getIsDelete() const
{
    return isDelete_;
}

void PublisherVO::setIsDelete(int32_t value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool PublisherVO::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void PublisherVO::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

std::string PublisherVO::getLastUpdateUserName() const
{
    return lastUpdateUserName_;
}

void PublisherVO::setLastUpdateUserName(const std::string& value)
{
    lastUpdateUserName_ = value;
    lastUpdateUserNameIsSet_ = true;
}

bool PublisherVO::lastUpdateUserNameIsSet() const
{
    return lastUpdateUserNameIsSet_;
}

void PublisherVO::unsetlastUpdateUserName()
{
    lastUpdateUserNameIsSet_ = false;
}

std::string PublisherVO::getLastUpdateUserId() const
{
    return lastUpdateUserId_;
}

void PublisherVO::setLastUpdateUserId(const std::string& value)
{
    lastUpdateUserId_ = value;
    lastUpdateUserIdIsSet_ = true;
}

bool PublisherVO::lastUpdateUserIdIsSet() const
{
    return lastUpdateUserIdIsSet_;
}

void PublisherVO::unsetlastUpdateUserId()
{
    lastUpdateUserIdIsSet_ = false;
}

std::string PublisherVO::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void PublisherVO::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool PublisherVO::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void PublisherVO::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

}
}
}
}
}



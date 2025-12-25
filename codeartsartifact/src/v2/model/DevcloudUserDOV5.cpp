

#include "huaweicloud/codeartsartifact/v2/model/DevcloudUserDOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DevcloudUserDOV5::DevcloudUserDOV5()
{
    status_ = "";
    statusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    createdUserId_ = "";
    createdUserIdIsSet_ = false;
    createdUserName_ = "";
    createdUserNameIsSet_ = false;
    modifiedUserId_ = "";
    modifiedUserIdIsSet_ = false;
    modifiedUserName_ = "";
    modifiedUserNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
    repoUserName_ = "";
    repoUserNameIsSet_ = false;
    repoNumber_ = 0;
    repoNumberIsSet_ = false;
    innerRepoUserName_ = "";
    innerRepoUserNameIsSet_ = false;
}

DevcloudUserDOV5::~DevcloudUserDOV5() = default;

void DevcloudUserDOV5::validate()
{
}

web::json::value DevcloudUserDOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(createdUserIdIsSet_) {
        val[utility::conversions::to_string_t("created_user_id")] = ModelBase::toJson(createdUserId_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("created_user_name")] = ModelBase::toJson(createdUserName_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modified_user_id")] = ModelBase::toJson(modifiedUserId_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modified_user_name")] = ModelBase::toJson(modifiedUserName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(repoUserNameIsSet_) {
        val[utility::conversions::to_string_t("repo_user_name")] = ModelBase::toJson(repoUserName_);
    }
    if(repoNumberIsSet_) {
        val[utility::conversions::to_string_t("repo_number")] = ModelBase::toJson(repoNumber_);
    }
    if(innerRepoUserNameIsSet_) {
        val[utility::conversions::to_string_t("inner_repo_user_name")] = ModelBase::toJson(innerRepoUserName_);
    }

    return val;
}
bool DevcloudUserDOV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inner_repo_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inner_repo_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerRepoUserName(refVal);
        }
    }
    return ok;
}


std::string DevcloudUserDOV5::getStatus() const
{
    return status_;
}

void DevcloudUserDOV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DevcloudUserDOV5::statusIsSet() const
{
    return statusIsSet_;
}

void DevcloudUserDOV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DevcloudUserDOV5::getDomainId() const
{
    return domainId_;
}

void DevcloudUserDOV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DevcloudUserDOV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DevcloudUserDOV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DevcloudUserDOV5::getRegion() const
{
    return region_;
}

void DevcloudUserDOV5::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DevcloudUserDOV5::regionIsSet() const
{
    return regionIsSet_;
}

void DevcloudUserDOV5::unsetregion()
{
    regionIsSet_ = false;
}

std::string DevcloudUserDOV5::getCreatedTime() const
{
    return createdTime_;
}

void DevcloudUserDOV5::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool DevcloudUserDOV5::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void DevcloudUserDOV5::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string DevcloudUserDOV5::getModifiedTime() const
{
    return modifiedTime_;
}

void DevcloudUserDOV5::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool DevcloudUserDOV5::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void DevcloudUserDOV5::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string DevcloudUserDOV5::getCreatedUserId() const
{
    return createdUserId_;
}

void DevcloudUserDOV5::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool DevcloudUserDOV5::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void DevcloudUserDOV5::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string DevcloudUserDOV5::getCreatedUserName() const
{
    return createdUserName_;
}

void DevcloudUserDOV5::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool DevcloudUserDOV5::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void DevcloudUserDOV5::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string DevcloudUserDOV5::getModifiedUserId() const
{
    return modifiedUserId_;
}

void DevcloudUserDOV5::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool DevcloudUserDOV5::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void DevcloudUserDOV5::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string DevcloudUserDOV5::getModifiedUserName() const
{
    return modifiedUserName_;
}

void DevcloudUserDOV5::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool DevcloudUserDOV5::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void DevcloudUserDOV5::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string DevcloudUserDOV5::getUserId() const
{
    return userId_;
}

void DevcloudUserDOV5::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DevcloudUserDOV5::userIdIsSet() const
{
    return userIdIsSet_;
}

void DevcloudUserDOV5::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string DevcloudUserDOV5::getUserName() const
{
    return userName_;
}

void DevcloudUserDOV5::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DevcloudUserDOV5::userNameIsSet() const
{
    return userNameIsSet_;
}

void DevcloudUserDOV5::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DevcloudUserDOV5::getUserType() const
{
    return userType_;
}

void DevcloudUserDOV5::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool DevcloudUserDOV5::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void DevcloudUserDOV5::unsetuserType()
{
    userTypeIsSet_ = false;
}

std::string DevcloudUserDOV5::getEnabled() const
{
    return enabled_;
}

void DevcloudUserDOV5::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool DevcloudUserDOV5::enabledIsSet() const
{
    return enabledIsSet_;
}

void DevcloudUserDOV5::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string DevcloudUserDOV5::getRepoUserName() const
{
    return repoUserName_;
}

void DevcloudUserDOV5::setRepoUserName(const std::string& value)
{
    repoUserName_ = value;
    repoUserNameIsSet_ = true;
}

bool DevcloudUserDOV5::repoUserNameIsSet() const
{
    return repoUserNameIsSet_;
}

void DevcloudUserDOV5::unsetrepoUserName()
{
    repoUserNameIsSet_ = false;
}

int32_t DevcloudUserDOV5::getRepoNumber() const
{
    return repoNumber_;
}

void DevcloudUserDOV5::setRepoNumber(int32_t value)
{
    repoNumber_ = value;
    repoNumberIsSet_ = true;
}

bool DevcloudUserDOV5::repoNumberIsSet() const
{
    return repoNumberIsSet_;
}

void DevcloudUserDOV5::unsetrepoNumber()
{
    repoNumberIsSet_ = false;
}

std::string DevcloudUserDOV5::getInnerRepoUserName() const
{
    return innerRepoUserName_;
}

void DevcloudUserDOV5::setInnerRepoUserName(const std::string& value)
{
    innerRepoUserName_ = value;
    innerRepoUserNameIsSet_ = true;
}

bool DevcloudUserDOV5::innerRepoUserNameIsSet() const
{
    return innerRepoUserNameIsSet_;
}

void DevcloudUserDOV5::unsetinnerRepoUserName()
{
    innerRepoUserNameIsSet_ = false;
}

}
}
}
}
}



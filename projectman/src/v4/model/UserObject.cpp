

#include "huaweicloud/projectman/v4/model/UserObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UserObject::UserObject()
{
    watcher_ = "";
    watcherIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userNumId_ = "";
    userNumIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    opinion_ = "";
    opinionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    ccbId_ = "";
    ccbIdIsSet_ = false;
    hasRemoved_ = "";
    hasRemovedIsSet_ = false;
}

UserObject::~UserObject() = default;

void UserObject::validate()
{
}

web::json::value UserObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watcherIsSet_) {
        val[utility::conversions::to_string_t("watcher")] = ModelBase::toJson(watcher_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(opinionIsSet_) {
        val[utility::conversions::to_string_t("opinion")] = ModelBase::toJson(opinion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(ccbIdIsSet_) {
        val[utility::conversions::to_string_t("ccbId")] = ModelBase::toJson(ccbId_);
    }
    if(hasRemovedIsSet_) {
        val[utility::conversions::to_string_t("has_removed")] = ModelBase::toJson(hasRemoved_);
    }

    return val;
}
bool UserObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("watcher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watcher"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatcher(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("opinion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_removed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_removed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasRemoved(refVal);
        }
    }
    return ok;
}


std::string UserObject::getWatcher() const
{
    return watcher_;
}

void UserObject::setWatcher(const std::string& value)
{
    watcher_ = value;
    watcherIsSet_ = true;
}

bool UserObject::watcherIsSet() const
{
    return watcherIsSet_;
}

void UserObject::unsetwatcher()
{
    watcherIsSet_ = false;
}

std::string UserObject::getUserId() const
{
    return userId_;
}

void UserObject::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserObject::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserObject::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UserObject::getUserNumId() const
{
    return userNumId_;
}

void UserObject::setUserNumId(const std::string& value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool UserObject::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void UserObject::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string UserObject::getUserName() const
{
    return userName_;
}

void UserObject::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserObject::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserObject::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string UserObject::getDomainId() const
{
    return domainId_;
}

void UserObject::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UserObject::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UserObject::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UserObject::getDomainName() const
{
    return domainName_;
}

void UserObject::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UserObject::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UserObject::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UserObject::getNickName() const
{
    return nickName_;
}

void UserObject::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UserObject::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UserObject::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string UserObject::getRoleId() const
{
    return roleId_;
}

void UserObject::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UserObject::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UserObject::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string UserObject::getRoleName() const
{
    return roleName_;
}

void UserObject::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool UserObject::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void UserObject::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string UserObject::getImageId() const
{
    return imageId_;
}

void UserObject::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool UserObject::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void UserObject::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string UserObject::getRegion() const
{
    return region_;
}

void UserObject::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UserObject::regionIsSet() const
{
    return regionIsSet_;
}

void UserObject::unsetregion()
{
    regionIsSet_ = false;
}

std::string UserObject::getOpinion() const
{
    return opinion_;
}

void UserObject::setOpinion(const std::string& value)
{
    opinion_ = value;
    opinionIsSet_ = true;
}

bool UserObject::opinionIsSet() const
{
    return opinionIsSet_;
}

void UserObject::unsetopinion()
{
    opinionIsSet_ = false;
}

std::string UserObject::getDescription() const
{
    return description_;
}

void UserObject::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UserObject::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UserObject::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UserObject::getOwner() const
{
    return owner_;
}

void UserObject::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UserObject::ownerIsSet() const
{
    return ownerIsSet_;
}

void UserObject::unsetowner()
{
    ownerIsSet_ = false;
}

std::string UserObject::getCcbId() const
{
    return ccbId_;
}

void UserObject::setCcbId(const std::string& value)
{
    ccbId_ = value;
    ccbIdIsSet_ = true;
}

bool UserObject::ccbIdIsSet() const
{
    return ccbIdIsSet_;
}

void UserObject::unsetccbId()
{
    ccbIdIsSet_ = false;
}

std::string UserObject::getHasRemoved() const
{
    return hasRemoved_;
}

void UserObject::setHasRemoved(const std::string& value)
{
    hasRemoved_ = value;
    hasRemovedIsSet_ = true;
}

bool UserObject::hasRemovedIsSet() const
{
    return hasRemovedIsSet_;
}

void UserObject::unsethasRemoved()
{
    hasRemovedIsSet_ = false;
}

}
}
}
}
}



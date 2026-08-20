

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_assignee.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_assignee::ProcessInstanceResponse_result_assignee()
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

ProcessInstanceResponse_result_assignee::~ProcessInstanceResponse_result_assignee() = default;

void ProcessInstanceResponse_result_assignee::validate()
{
}

web::json::value ProcessInstanceResponse_result_assignee::toJson() const
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
bool ProcessInstanceResponse_result_assignee::fromJson(const web::json::value& val)
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


std::string ProcessInstanceResponse_result_assignee::getWatcher() const
{
    return watcher_;
}

void ProcessInstanceResponse_result_assignee::setWatcher(const std::string& value)
{
    watcher_ = value;
    watcherIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::watcherIsSet() const
{
    return watcherIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetwatcher()
{
    watcherIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getUserId() const
{
    return userId_;
}

void ProcessInstanceResponse_result_assignee::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::userIdIsSet() const
{
    return userIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getUserNumId() const
{
    return userNumId_;
}

void ProcessInstanceResponse_result_assignee::setUserNumId(const std::string& value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getUserName() const
{
    return userName_;
}

void ProcessInstanceResponse_result_assignee::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::userNameIsSet() const
{
    return userNameIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result_assignee::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getDomainName() const
{
    return domainName_;
}

void ProcessInstanceResponse_result_assignee::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getNickName() const
{
    return nickName_;
}

void ProcessInstanceResponse_result_assignee::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getRoleId() const
{
    return roleId_;
}

void ProcessInstanceResponse_result_assignee::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getRoleName() const
{
    return roleName_;
}

void ProcessInstanceResponse_result_assignee::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getImageId() const
{
    return imageId_;
}

void ProcessInstanceResponse_result_assignee::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getRegion() const
{
    return region_;
}

void ProcessInstanceResponse_result_assignee::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::regionIsSet() const
{
    return regionIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getOpinion() const
{
    return opinion_;
}

void ProcessInstanceResponse_result_assignee::setOpinion(const std::string& value)
{
    opinion_ = value;
    opinionIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::opinionIsSet() const
{
    return opinionIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetopinion()
{
    opinionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getDescription() const
{
    return description_;
}

void ProcessInstanceResponse_result_assignee::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getOwner() const
{
    return owner_;
}

void ProcessInstanceResponse_result_assignee::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::ownerIsSet() const
{
    return ownerIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getCcbId() const
{
    return ccbId_;
}

void ProcessInstanceResponse_result_assignee::setCcbId(const std::string& value)
{
    ccbId_ = value;
    ccbIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::ccbIdIsSet() const
{
    return ccbIdIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsetccbId()
{
    ccbIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_assignee::getHasRemoved() const
{
    return hasRemoved_;
}

void ProcessInstanceResponse_result_assignee::setHasRemoved(const std::string& value)
{
    hasRemoved_ = value;
    hasRemovedIsSet_ = true;
}

bool ProcessInstanceResponse_result_assignee::hasRemovedIsSet() const
{
    return hasRemovedIsSet_;
}

void ProcessInstanceResponse_result_assignee::unsethasRemoved()
{
    hasRemovedIsSet_ = false;
}

}
}
}
}
}



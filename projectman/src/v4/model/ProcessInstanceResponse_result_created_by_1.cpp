

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_created_by_1.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_created_by_1::ProcessInstanceResponse_result_created_by_1()
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

ProcessInstanceResponse_result_created_by_1::~ProcessInstanceResponse_result_created_by_1() = default;

void ProcessInstanceResponse_result_created_by_1::validate()
{
}

web::json::value ProcessInstanceResponse_result_created_by_1::toJson() const
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
bool ProcessInstanceResponse_result_created_by_1::fromJson(const web::json::value& val)
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


std::string ProcessInstanceResponse_result_created_by_1::getWatcher() const
{
    return watcher_;
}

void ProcessInstanceResponse_result_created_by_1::setWatcher(const std::string& value)
{
    watcher_ = value;
    watcherIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::watcherIsSet() const
{
    return watcherIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetwatcher()
{
    watcherIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getUserId() const
{
    return userId_;
}

void ProcessInstanceResponse_result_created_by_1::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::userIdIsSet() const
{
    return userIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getUserNumId() const
{
    return userNumId_;
}

void ProcessInstanceResponse_result_created_by_1::setUserNumId(const std::string& value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getUserName() const
{
    return userName_;
}

void ProcessInstanceResponse_result_created_by_1::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::userNameIsSet() const
{
    return userNameIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result_created_by_1::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getDomainName() const
{
    return domainName_;
}

void ProcessInstanceResponse_result_created_by_1::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getNickName() const
{
    return nickName_;
}

void ProcessInstanceResponse_result_created_by_1::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getRoleId() const
{
    return roleId_;
}

void ProcessInstanceResponse_result_created_by_1::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getRoleName() const
{
    return roleName_;
}

void ProcessInstanceResponse_result_created_by_1::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getImageId() const
{
    return imageId_;
}

void ProcessInstanceResponse_result_created_by_1::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getRegion() const
{
    return region_;
}

void ProcessInstanceResponse_result_created_by_1::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::regionIsSet() const
{
    return regionIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getOpinion() const
{
    return opinion_;
}

void ProcessInstanceResponse_result_created_by_1::setOpinion(const std::string& value)
{
    opinion_ = value;
    opinionIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::opinionIsSet() const
{
    return opinionIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetopinion()
{
    opinionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getDescription() const
{
    return description_;
}

void ProcessInstanceResponse_result_created_by_1::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getOwner() const
{
    return owner_;
}

void ProcessInstanceResponse_result_created_by_1::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::ownerIsSet() const
{
    return ownerIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getCcbId() const
{
    return ccbId_;
}

void ProcessInstanceResponse_result_created_by_1::setCcbId(const std::string& value)
{
    ccbId_ = value;
    ccbIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::ccbIdIsSet() const
{
    return ccbIdIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsetccbId()
{
    ccbIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_created_by_1::getHasRemoved() const
{
    return hasRemoved_;
}

void ProcessInstanceResponse_result_created_by_1::setHasRemoved(const std::string& value)
{
    hasRemoved_ = value;
    hasRemovedIsSet_ = true;
}

bool ProcessInstanceResponse_result_created_by_1::hasRemovedIsSet() const
{
    return hasRemovedIsSet_;
}

void ProcessInstanceResponse_result_created_by_1::unsethasRemoved()
{
    hasRemovedIsSet_ = false;
}

}
}
}
}
}



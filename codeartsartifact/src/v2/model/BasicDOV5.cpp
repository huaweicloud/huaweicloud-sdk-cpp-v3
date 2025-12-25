

#include "huaweicloud/codeartsartifact/v2/model/BasicDOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BasicDOV5::BasicDOV5()
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
}

BasicDOV5::~BasicDOV5() = default;

void BasicDOV5::validate()
{
}

web::json::value BasicDOV5::toJson() const
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

    return val;
}
bool BasicDOV5::fromJson(const web::json::value& val)
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
    return ok;
}


std::string BasicDOV5::getStatus() const
{
    return status_;
}

void BasicDOV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BasicDOV5::statusIsSet() const
{
    return statusIsSet_;
}

void BasicDOV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BasicDOV5::getDomainId() const
{
    return domainId_;
}

void BasicDOV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool BasicDOV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void BasicDOV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string BasicDOV5::getRegion() const
{
    return region_;
}

void BasicDOV5::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool BasicDOV5::regionIsSet() const
{
    return regionIsSet_;
}

void BasicDOV5::unsetregion()
{
    regionIsSet_ = false;
}

std::string BasicDOV5::getCreatedTime() const
{
    return createdTime_;
}

void BasicDOV5::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool BasicDOV5::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void BasicDOV5::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string BasicDOV5::getModifiedTime() const
{
    return modifiedTime_;
}

void BasicDOV5::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool BasicDOV5::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void BasicDOV5::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string BasicDOV5::getCreatedUserId() const
{
    return createdUserId_;
}

void BasicDOV5::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool BasicDOV5::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void BasicDOV5::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string BasicDOV5::getCreatedUserName() const
{
    return createdUserName_;
}

void BasicDOV5::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool BasicDOV5::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void BasicDOV5::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string BasicDOV5::getModifiedUserId() const
{
    return modifiedUserId_;
}

void BasicDOV5::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool BasicDOV5::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void BasicDOV5::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string BasicDOV5::getModifiedUserName() const
{
    return modifiedUserName_;
}

void BasicDOV5::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool BasicDOV5::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void BasicDOV5::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

}
}
}
}
}



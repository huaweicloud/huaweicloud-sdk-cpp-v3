

#include "huaweicloud/codehub/v4/model/PushRuleDevelopersDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




PushRuleDevelopersDto::PushRuleDevelopersDto()
{
    idIsSet_ = false;
    userIdIsSet_ = false;
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

PushRuleDevelopersDto::~PushRuleDevelopersDto() = default;

void PushRuleDevelopersDto::validate()
{
}

web::json::value PushRuleDevelopersDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool PushRuleDevelopersDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    return ok;
}


Object PushRuleDevelopersDto::getId() const
{
    return id_;
}

void PushRuleDevelopersDto::setId(const Object& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PushRuleDevelopersDto::idIsSet() const
{
    return idIsSet_;
}

void PushRuleDevelopersDto::unsetid()
{
    idIsSet_ = false;
}

Object PushRuleDevelopersDto::getUserId() const
{
    return userId_;
}

void PushRuleDevelopersDto::setUserId(const Object& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool PushRuleDevelopersDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void PushRuleDevelopersDto::unsetuserId()
{
    userIdIsSet_ = false;
}

Object PushRuleDevelopersDto::getUserName() const
{
    return userName_;
}

void PushRuleDevelopersDto::setUserName(const Object& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool PushRuleDevelopersDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void PushRuleDevelopersDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string PushRuleDevelopersDto::getNickName() const
{
    return nickName_;
}

void PushRuleDevelopersDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool PushRuleDevelopersDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void PushRuleDevelopersDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string PushRuleDevelopersDto::getTenantName() const
{
    return tenantName_;
}

void PushRuleDevelopersDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool PushRuleDevelopersDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void PushRuleDevelopersDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}



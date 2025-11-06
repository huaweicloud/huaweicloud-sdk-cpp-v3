

#include "huaweicloud/codeartsrepo/v4/model/RepositoryUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryUserDto::RepositoryUserDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

RepositoryUserDto::~RepositoryUserDto() = default;

void RepositoryUserDto::validate()
{
}

web::json::value RepositoryUserDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool RepositoryUserDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarUrl(refVal);
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


int32_t RepositoryUserDto::getId() const
{
    return id_;
}

void RepositoryUserDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryUserDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryUserDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryUserDto::getName() const
{
    return name_;
}

void RepositoryUserDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryUserDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryUserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryUserDto::getUsername() const
{
    return username_;
}

void RepositoryUserDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RepositoryUserDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void RepositoryUserDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RepositoryUserDto::getState() const
{
    return state_;
}

void RepositoryUserDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RepositoryUserDto::stateIsSet() const
{
    return stateIsSet_;
}

void RepositoryUserDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string RepositoryUserDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void RepositoryUserDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool RepositoryUserDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void RepositoryUserDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string RepositoryUserDto::getNickName() const
{
    return nickName_;
}

void RepositoryUserDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool RepositoryUserDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void RepositoryUserDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string RepositoryUserDto::getTenantName() const
{
    return tenantName_;
}

void RepositoryUserDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool RepositoryUserDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void RepositoryUserDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}



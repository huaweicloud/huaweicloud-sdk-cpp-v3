

#include "huaweicloud/codeartsrepo/v4/model/UserBasicExternalDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UserBasicExternalDto::UserBasicExternalDto()
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
    webUrl_ = "";
    webUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

UserBasicExternalDto::~UserBasicExternalDto() = default;

void UserBasicExternalDto::validate()
{
}

web::json::value UserBasicExternalDto::toJson() const
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
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool UserBasicExternalDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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


int32_t UserBasicExternalDto::getId() const
{
    return id_;
}

void UserBasicExternalDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserBasicExternalDto::idIsSet() const
{
    return idIsSet_;
}

void UserBasicExternalDto::unsetid()
{
    idIsSet_ = false;
}

std::string UserBasicExternalDto::getName() const
{
    return name_;
}

void UserBasicExternalDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserBasicExternalDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserBasicExternalDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UserBasicExternalDto::getUsername() const
{
    return username_;
}

void UserBasicExternalDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UserBasicExternalDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void UserBasicExternalDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string UserBasicExternalDto::getState() const
{
    return state_;
}

void UserBasicExternalDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UserBasicExternalDto::stateIsSet() const
{
    return stateIsSet_;
}

void UserBasicExternalDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string UserBasicExternalDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void UserBasicExternalDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool UserBasicExternalDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void UserBasicExternalDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string UserBasicExternalDto::getWebUrl() const
{
    return webUrl_;
}

void UserBasicExternalDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool UserBasicExternalDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void UserBasicExternalDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string UserBasicExternalDto::getNickName() const
{
    return nickName_;
}

void UserBasicExternalDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UserBasicExternalDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UserBasicExternalDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string UserBasicExternalDto::getTenantName() const
{
    return tenantName_;
}

void UserBasicExternalDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool UserBasicExternalDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void UserBasicExternalDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}



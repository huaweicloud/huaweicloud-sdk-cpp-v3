

#include "huaweicloud/codehub/v3/model/UserBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




UserBasicDto::UserBasicDto()
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
    avatarPath_ = "";
    avatarPathIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

UserBasicDto::~UserBasicDto() = default;

void UserBasicDto::validate()
{
}

web::json::value UserBasicDto::toJson() const
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
    if(avatarPathIsSet_) {
        val[utility::conversions::to_string_t("avatar_path")] = ModelBase::toJson(avatarPath_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
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
bool UserBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("avatar_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
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


int32_t UserBasicDto::getId() const
{
    return id_;
}

void UserBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserBasicDto::idIsSet() const
{
    return idIsSet_;
}

void UserBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string UserBasicDto::getName() const
{
    return name_;
}

void UserBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UserBasicDto::getUsername() const
{
    return username_;
}

void UserBasicDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UserBasicDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void UserBasicDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string UserBasicDto::getState() const
{
    return state_;
}

void UserBasicDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UserBasicDto::stateIsSet() const
{
    return stateIsSet_;
}

void UserBasicDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string UserBasicDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void UserBasicDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool UserBasicDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void UserBasicDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string UserBasicDto::getAvatarPath() const
{
    return avatarPath_;
}

void UserBasicDto::setAvatarPath(const std::string& value)
{
    avatarPath_ = value;
    avatarPathIsSet_ = true;
}

bool UserBasicDto::avatarPathIsSet() const
{
    return avatarPathIsSet_;
}

void UserBasicDto::unsetavatarPath()
{
    avatarPathIsSet_ = false;
}

std::string UserBasicDto::getEmail() const
{
    return email_;
}

void UserBasicDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool UserBasicDto::emailIsSet() const
{
    return emailIsSet_;
}

void UserBasicDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string UserBasicDto::getNameCn() const
{
    return nameCn_;
}

void UserBasicDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool UserBasicDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void UserBasicDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string UserBasicDto::getWebUrl() const
{
    return webUrl_;
}

void UserBasicDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool UserBasicDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void UserBasicDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string UserBasicDto::getNickName() const
{
    return nickName_;
}

void UserBasicDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UserBasicDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UserBasicDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string UserBasicDto::getTenantName() const
{
    return tenantName_;
}

void UserBasicDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool UserBasicDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void UserBasicDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}



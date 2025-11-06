

#include "huaweicloud/codeartsrepo/v4/model/RepositoryEventAuthorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryEventAuthorDto::RepositoryEventAuthorDto()
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
    nameCn_ = "";
    nameCnIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

RepositoryEventAuthorDto::~RepositoryEventAuthorDto() = default;

void RepositoryEventAuthorDto::validate()
{
}

web::json::value RepositoryEventAuthorDto::toJson() const
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
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool RepositoryEventAuthorDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
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


int32_t RepositoryEventAuthorDto::getId() const
{
    return id_;
}

void RepositoryEventAuthorDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryEventAuthorDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryEventAuthorDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getName() const
{
    return name_;
}

void RepositoryEventAuthorDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryEventAuthorDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryEventAuthorDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getUsername() const
{
    return username_;
}

void RepositoryEventAuthorDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RepositoryEventAuthorDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void RepositoryEventAuthorDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getState() const
{
    return state_;
}

void RepositoryEventAuthorDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RepositoryEventAuthorDto::stateIsSet() const
{
    return stateIsSet_;
}

void RepositoryEventAuthorDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void RepositoryEventAuthorDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool RepositoryEventAuthorDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void RepositoryEventAuthorDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getNameCn() const
{
    return nameCn_;
}

void RepositoryEventAuthorDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool RepositoryEventAuthorDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void RepositoryEventAuthorDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getNickName() const
{
    return nickName_;
}

void RepositoryEventAuthorDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool RepositoryEventAuthorDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void RepositoryEventAuthorDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string RepositoryEventAuthorDto::getTenantName() const
{
    return tenantName_;
}

void RepositoryEventAuthorDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool RepositoryEventAuthorDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void RepositoryEventAuthorDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}



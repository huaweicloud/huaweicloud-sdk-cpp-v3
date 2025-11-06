

#include "huaweicloud/codeartsrepo/v3/model/Author.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




Author::Author()
{
    id_ = 0.0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
}

Author::~Author() = default;

void Author::validate()
{
}

web::json::value Author::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }

    return val;
}
bool Author::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            double refVal;
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    return ok;
}


double Author::getId() const
{
    return id_;
}

void Author::setId(double value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Author::idIsSet() const
{
    return idIsSet_;
}

void Author::unsetid()
{
    idIsSet_ = false;
}

std::string Author::getName() const
{
    return name_;
}

void Author::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Author::nameIsSet() const
{
    return nameIsSet_;
}

void Author::unsetname()
{
    nameIsSet_ = false;
}

std::string Author::getState() const
{
    return state_;
}

void Author::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool Author::stateIsSet() const
{
    return stateIsSet_;
}

void Author::unsetstate()
{
    stateIsSet_ = false;
}

std::string Author::getUsername() const
{
    return username_;
}

void Author::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool Author::usernameIsSet() const
{
    return usernameIsSet_;
}

void Author::unsetusername()
{
    usernameIsSet_ = false;
}

std::string Author::getNameCn() const
{
    return nameCn_;
}

void Author::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool Author::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void Author::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string Author::getAvatarUrl() const
{
    return avatarUrl_;
}

void Author::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool Author::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void Author::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string Author::getEmail() const
{
    return email_;
}

void Author::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool Author::emailIsSet() const
{
    return emailIsSet_;
}

void Author::unsetemail()
{
    emailIsSet_ = false;
}

}
}
}
}
}



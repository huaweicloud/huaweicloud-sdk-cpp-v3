

#include "huaweicloud/codeartsrepo/v3/model/ApprovalUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ApprovalUserDto::ApprovalUserDto()
{
    id_ = 0;
    idIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

ApprovalUserDto::~ApprovalUserDto() = default;

void ApprovalUserDto::validate()
{
}

web::json::value ApprovalUserDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool ApprovalUserDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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
    return ok;
}


int32_t ApprovalUserDto::getId() const
{
    return id_;
}

void ApprovalUserDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApprovalUserDto::idIsSet() const
{
    return idIsSet_;
}

void ApprovalUserDto::unsetid()
{
    idIsSet_ = false;
}

std::string ApprovalUserDto::getUsername() const
{
    return username_;
}

void ApprovalUserDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ApprovalUserDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void ApprovalUserDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ApprovalUserDto::getName() const
{
    return name_;
}

void ApprovalUserDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApprovalUserDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApprovalUserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ApprovalUserDto::getNickName() const
{
    return nickName_;
}

void ApprovalUserDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ApprovalUserDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ApprovalUserDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ApprovalUserDto::getState() const
{
    return state_;
}

void ApprovalUserDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ApprovalUserDto::stateIsSet() const
{
    return stateIsSet_;
}

void ApprovalUserDto::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}



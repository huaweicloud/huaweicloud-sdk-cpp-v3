

#include "huaweicloud/projectman/v4/model/WorkitemUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkitemUser::WorkitemUser()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

WorkitemUser::~WorkitemUser() = default;

void WorkitemUser::validate()
{
}

web::json::value WorkitemUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool WorkitemUser::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}


std::string WorkitemUser::getId() const
{
    return id_;
}

void WorkitemUser::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkitemUser::idIsSet() const
{
    return idIsSet_;
}

void WorkitemUser::unsetid()
{
    idIsSet_ = false;
}

std::string WorkitemUser::getName() const
{
    return name_;
}

void WorkitemUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkitemUser::nameIsSet() const
{
    return nameIsSet_;
}

void WorkitemUser::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkitemUser::getNickName() const
{
    return nickName_;
}

void WorkitemUser::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool WorkitemUser::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void WorkitemUser::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cts/v3/model/BaseUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




BaseUser::BaseUser()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

BaseUser::~BaseUser() = default;

void BaseUser::validate()
{
}

web::json::value BaseUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool BaseUser::fromJson(const web::json::value& val)
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
    return ok;
}


std::string BaseUser::getId() const
{
    return id_;
}

void BaseUser::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BaseUser::idIsSet() const
{
    return idIsSet_;
}

void BaseUser::unsetid()
{
    idIsSet_ = false;
}

std::string BaseUser::getName() const
{
    return name_;
}

void BaseUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BaseUser::nameIsSet() const
{
    return nameIsSet_;
}

void BaseUser::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



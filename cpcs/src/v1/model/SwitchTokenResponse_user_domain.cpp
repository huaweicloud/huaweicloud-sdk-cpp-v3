

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_user_domain.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_user_domain::SwitchTokenResponse_user_domain()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

SwitchTokenResponse_user_domain::~SwitchTokenResponse_user_domain() = default;

void SwitchTokenResponse_user_domain::validate()
{
}

web::json::value SwitchTokenResponse_user_domain::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SwitchTokenResponse_user_domain::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string SwitchTokenResponse_user_domain::getName() const
{
    return name_;
}

void SwitchTokenResponse_user_domain::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SwitchTokenResponse_user_domain::nameIsSet() const
{
    return nameIsSet_;
}

void SwitchTokenResponse_user_domain::unsetname()
{
    nameIsSet_ = false;
}

std::string SwitchTokenResponse_user_domain::getId() const
{
    return id_;
}

void SwitchTokenResponse_user_domain::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchTokenResponse_user_domain::idIsSet() const
{
    return idIsSet_;
}

void SwitchTokenResponse_user_domain::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



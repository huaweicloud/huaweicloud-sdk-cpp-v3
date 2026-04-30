

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_roles.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_token_roles::SwitchTokenResponse_token_roles()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

SwitchTokenResponse_token_roles::~SwitchTokenResponse_token_roles() = default;

void SwitchTokenResponse_token_roles::validate()
{
}

web::json::value SwitchTokenResponse_token_roles::toJson() const
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
bool SwitchTokenResponse_token_roles::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string SwitchTokenResponse_token_roles::getName() const
{
    return name_;
}

void SwitchTokenResponse_token_roles::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SwitchTokenResponse_token_roles::nameIsSet() const
{
    return nameIsSet_;
}

void SwitchTokenResponse_token_roles::unsetname()
{
    nameIsSet_ = false;
}

int32_t SwitchTokenResponse_token_roles::getId() const
{
    return id_;
}

void SwitchTokenResponse_token_roles::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchTokenResponse_token_roles::idIsSet() const
{
    return idIsSet_;
}

void SwitchTokenResponse_token_roles::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/StatusAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusAttribute::StatusAttribute()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

StatusAttribute::~StatusAttribute() = default;

void StatusAttribute::validate()
{
}

web::json::value StatusAttribute::toJson() const
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
bool StatusAttribute::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t StatusAttribute::getId() const
{
    return id_;
}

void StatusAttribute::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatusAttribute::idIsSet() const
{
    return idIsSet_;
}

void StatusAttribute::unsetid()
{
    idIsSet_ = false;
}

std::string StatusAttribute::getName() const
{
    return name_;
}

void StatusAttribute::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StatusAttribute::nameIsSet() const
{
    return nameIsSet_;
}

void StatusAttribute::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



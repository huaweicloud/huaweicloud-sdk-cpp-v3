

#include "huaweicloud/projectman/v4/model/StatusVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusVo::StatusVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

StatusVo::~StatusVo() = default;

void StatusVo::validate()
{
}

web::json::value StatusVo::toJson() const
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
bool StatusVo::fromJson(const web::json::value& val)
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


std::string StatusVo::getId() const
{
    return id_;
}

void StatusVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatusVo::idIsSet() const
{
    return idIsSet_;
}

void StatusVo::unsetid()
{
    idIsSet_ = false;
}

std::string StatusVo::getName() const
{
    return name_;
}

void StatusVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StatusVo::nameIsSet() const
{
    return nameIsSet_;
}

void StatusVo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



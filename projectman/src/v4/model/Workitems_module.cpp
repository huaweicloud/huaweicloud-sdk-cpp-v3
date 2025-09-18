

#include "huaweicloud/projectman/v4/model/Workitems_module.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Workitems_module::Workitems_module()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

Workitems_module::~Workitems_module() = default;

void Workitems_module::validate()
{
}

web::json::value Workitems_module::toJson() const
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
bool Workitems_module::fromJson(const web::json::value& val)
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


std::string Workitems_module::getId() const
{
    return id_;
}

void Workitems_module::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Workitems_module::idIsSet() const
{
    return idIsSet_;
}

void Workitems_module::unsetid()
{
    idIsSet_ = false;
}

std::string Workitems_module::getName() const
{
    return name_;
}

void Workitems_module::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Workitems_module::nameIsSet() const
{
    return nameIsSet_;
}

void Workitems_module::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



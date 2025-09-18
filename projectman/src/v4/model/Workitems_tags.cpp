

#include "huaweicloud/projectman/v4/model/Workitems_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Workitems_tags::Workitems_tags()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

Workitems_tags::~Workitems_tags() = default;

void Workitems_tags::validate()
{
}

web::json::value Workitems_tags::toJson() const
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
bool Workitems_tags::fromJson(const web::json::value& val)
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


std::string Workitems_tags::getId() const
{
    return id_;
}

void Workitems_tags::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Workitems_tags::idIsSet() const
{
    return idIsSet_;
}

void Workitems_tags::unsetid()
{
    idIsSet_ = false;
}

std::string Workitems_tags::getName() const
{
    return name_;
}

void Workitems_tags::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Workitems_tags::nameIsSet() const
{
    return nameIsSet_;
}

void Workitems_tags::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



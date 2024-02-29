

#include "huaweicloud/cfw/v1/model/IdObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IdObject::IdObject()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IdObject::~IdObject() = default;

void IdObject::validate()
{
}

web::json::value IdObject::toJson() const
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
bool IdObject::fromJson(const web::json::value& val)
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


std::string IdObject::getId() const
{
    return id_;
}

void IdObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IdObject::idIsSet() const
{
    return idIsSet_;
}

void IdObject::unsetid()
{
    idIsSet_ = false;
}

std::string IdObject::getName() const
{
    return name_;
}

void IdObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IdObject::nameIsSet() const
{
    return nameIsSet_;
}

void IdObject::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



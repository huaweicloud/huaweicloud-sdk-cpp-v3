

#include "huaweicloud/cfw/v1/model/AddressItemId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressItemId::AddressItemId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AddressItemId::~AddressItemId() = default;

void AddressItemId::validate()
{
}

web::json::value AddressItemId::toJson() const
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
bool AddressItemId::fromJson(const web::json::value& val)
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


std::string AddressItemId::getId() const
{
    return id_;
}

void AddressItemId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddressItemId::idIsSet() const
{
    return idIsSet_;
}

void AddressItemId::unsetid()
{
    idIsSet_ = false;
}

std::string AddressItemId::getName() const
{
    return name_;
}

void AddressItemId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressItemId::nameIsSet() const
{
    return nameIsSet_;
}

void AddressItemId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



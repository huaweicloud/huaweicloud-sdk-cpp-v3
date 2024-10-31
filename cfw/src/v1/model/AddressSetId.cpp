

#include "huaweicloud/cfw/v1/model/AddressSetId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressSetId::AddressSetId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AddressSetId::~AddressSetId() = default;

void AddressSetId::validate()
{
}

web::json::value AddressSetId::toJson() const
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
bool AddressSetId::fromJson(const web::json::value& val)
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


std::string AddressSetId::getId() const
{
    return id_;
}

void AddressSetId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddressSetId::idIsSet() const
{
    return idIsSet_;
}

void AddressSetId::unsetid()
{
    idIsSet_ = false;
}

std::string AddressSetId::getName() const
{
    return name_;
}

void AddressSetId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressSetId::nameIsSet() const
{
    return nameIsSet_;
}

void AddressSetId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



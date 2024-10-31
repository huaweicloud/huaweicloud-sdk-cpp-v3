

#include "huaweicloud/cfw/v1/model/AddressItemIdWithoutName.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressItemIdWithoutName::AddressItemIdWithoutName()
{
    id_ = "";
    idIsSet_ = false;
}

AddressItemIdWithoutName::~AddressItemIdWithoutName() = default;

void AddressItemIdWithoutName::validate()
{
}

web::json::value AddressItemIdWithoutName::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool AddressItemIdWithoutName::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AddressItemIdWithoutName::getId() const
{
    return id_;
}

void AddressItemIdWithoutName::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddressItemIdWithoutName::idIsSet() const
{
    return idIsSet_;
}

void AddressItemIdWithoutName::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



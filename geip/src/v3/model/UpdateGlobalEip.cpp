

#include "huaweicloud/geip/v3/model/UpdateGlobalEip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEip::UpdateGlobalEip()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateGlobalEip::~UpdateGlobalEip() = default;

void UpdateGlobalEip::validate()
{
}

web::json::value UpdateGlobalEip::toJson() const
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
bool UpdateGlobalEip::fromJson(const web::json::value& val)
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


std::string UpdateGlobalEip::getId() const
{
    return id_;
}

void UpdateGlobalEip::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateGlobalEip::idIsSet() const
{
    return idIsSet_;
}

void UpdateGlobalEip::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateGlobalEip::getName() const
{
    return name_;
}

void UpdateGlobalEip::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateGlobalEip::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateGlobalEip::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



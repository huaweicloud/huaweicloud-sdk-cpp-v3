

#include "huaweicloud/geip/v3/model/CreateGlobalEip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEip::CreateGlobalEip()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateGlobalEip::~CreateGlobalEip() = default;

void CreateGlobalEip::validate()
{
}

web::json::value CreateGlobalEip::toJson() const
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
bool CreateGlobalEip::fromJson(const web::json::value& val)
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


std::string CreateGlobalEip::getId() const
{
    return id_;
}

void CreateGlobalEip::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateGlobalEip::idIsSet() const
{
    return idIsSet_;
}

void CreateGlobalEip::unsetid()
{
    idIsSet_ = false;
}

std::string CreateGlobalEip::getName() const
{
    return name_;
}

void CreateGlobalEip::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGlobalEip::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGlobalEip::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



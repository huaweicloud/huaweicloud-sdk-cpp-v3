

#include "huaweicloud/cfw/v1/model/DomainSetId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DomainSetId::DomainSetId()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DomainSetId::~DomainSetId() = default;

void DomainSetId::validate()
{
}

web::json::value DomainSetId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DomainSetId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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


std::string DomainSetId::getName() const
{
    return name_;
}

void DomainSetId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DomainSetId::nameIsSet() const
{
    return nameIsSet_;
}

void DomainSetId::unsetname()
{
    nameIsSet_ = false;
}

std::string DomainSetId::getId() const
{
    return id_;
}

void DomainSetId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainSetId::idIsSet() const
{
    return idIsSet_;
}

void DomainSetId::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



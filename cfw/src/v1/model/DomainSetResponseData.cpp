

#include "huaweicloud/cfw/v1/model/DomainSetResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DomainSetResponseData::DomainSetResponseData()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

DomainSetResponseData::~DomainSetResponseData() = default;

void DomainSetResponseData::validate()
{
}

web::json::value DomainSetResponseData::toJson() const
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
bool DomainSetResponseData::fromJson(const web::json::value& val)
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


std::string DomainSetResponseData::getId() const
{
    return id_;
}

void DomainSetResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainSetResponseData::idIsSet() const
{
    return idIsSet_;
}

void DomainSetResponseData::unsetid()
{
    idIsSet_ = false;
}

std::string DomainSetResponseData::getName() const
{
    return name_;
}

void DomainSetResponseData::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DomainSetResponseData::nameIsSet() const
{
    return nameIsSet_;
}

void DomainSetResponseData::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



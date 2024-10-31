

#include "huaweicloud/cfw/v1/model/ServiceSetId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceSetId::ServiceSetId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ServiceSetId::~ServiceSetId() = default;

void ServiceSetId::validate()
{
}

web::json::value ServiceSetId::toJson() const
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
bool ServiceSetId::fromJson(const web::json::value& val)
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


std::string ServiceSetId::getId() const
{
    return id_;
}

void ServiceSetId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceSetId::idIsSet() const
{
    return idIsSet_;
}

void ServiceSetId::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceSetId::getName() const
{
    return name_;
}

void ServiceSetId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceSetId::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceSetId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



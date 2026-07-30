

#include "huaweicloud/modelarts/v1/model/ServiceIdName.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceIdName::ServiceIdName()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ServiceIdName::~ServiceIdName() = default;

void ServiceIdName::validate()
{
}

web::json::value ServiceIdName::toJson() const
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
bool ServiceIdName::fromJson(const web::json::value& val)
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


std::string ServiceIdName::getId() const
{
    return id_;
}

void ServiceIdName::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceIdName::idIsSet() const
{
    return idIsSet_;
}

void ServiceIdName::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceIdName::getName() const
{
    return name_;
}

void ServiceIdName::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceIdName::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceIdName::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}



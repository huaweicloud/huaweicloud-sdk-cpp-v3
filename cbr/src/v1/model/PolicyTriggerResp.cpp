

#include "huaweicloud/cbr/v1/model/PolicyTriggerResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyTriggerResp::PolicyTriggerResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PolicyTriggerResp::~PolicyTriggerResp() = default;

void PolicyTriggerResp::validate()
{
}

web::json::value PolicyTriggerResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PolicyTriggerResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            PolicyTriggerPropertiesResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string PolicyTriggerResp::getId() const
{
    return id_;
}

void PolicyTriggerResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PolicyTriggerResp::idIsSet() const
{
    return idIsSet_;
}

void PolicyTriggerResp::unsetid()
{
    idIsSet_ = false;
}

std::string PolicyTriggerResp::getName() const
{
    return name_;
}

void PolicyTriggerResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PolicyTriggerResp::nameIsSet() const
{
    return nameIsSet_;
}

void PolicyTriggerResp::unsetname()
{
    nameIsSet_ = false;
}

PolicyTriggerPropertiesResp PolicyTriggerResp::getProperties() const
{
    return properties_;
}

void PolicyTriggerResp::setProperties(const PolicyTriggerPropertiesResp& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool PolicyTriggerResp::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void PolicyTriggerResp::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string PolicyTriggerResp::getType() const
{
    return type_;
}

void PolicyTriggerResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PolicyTriggerResp::typeIsSet() const
{
    return typeIsSet_;
}

void PolicyTriggerResp::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



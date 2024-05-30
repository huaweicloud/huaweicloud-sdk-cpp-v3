

#include "huaweicloud/organizations/v1/model/PolicySummaryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




PolicySummaryDto::PolicySummaryDto()
{
    isBuiltin_ = false;
    isBuiltinIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PolicySummaryDto::~PolicySummaryDto() = default;

void PolicySummaryDto::validate()
{
}

web::json::value PolicySummaryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isBuiltinIsSet_) {
        val[utility::conversions::to_string_t("is_builtin")] = ModelBase::toJson(isBuiltin_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PolicySummaryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_builtin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_builtin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBuiltin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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


bool PolicySummaryDto::isIsBuiltin() const
{
    return isBuiltin_;
}

void PolicySummaryDto::setIsBuiltin(bool value)
{
    isBuiltin_ = value;
    isBuiltinIsSet_ = true;
}

bool PolicySummaryDto::isBuiltinIsSet() const
{
    return isBuiltinIsSet_;
}

void PolicySummaryDto::unsetisBuiltin()
{
    isBuiltinIsSet_ = false;
}

std::string PolicySummaryDto::getDescription() const
{
    return description_;
}

void PolicySummaryDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PolicySummaryDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PolicySummaryDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PolicySummaryDto::getId() const
{
    return id_;
}

void PolicySummaryDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PolicySummaryDto::idIsSet() const
{
    return idIsSet_;
}

void PolicySummaryDto::unsetid()
{
    idIsSet_ = false;
}

std::string PolicySummaryDto::getUrn() const
{
    return urn_;
}

void PolicySummaryDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool PolicySummaryDto::urnIsSet() const
{
    return urnIsSet_;
}

void PolicySummaryDto::unseturn()
{
    urnIsSet_ = false;
}

std::string PolicySummaryDto::getName() const
{
    return name_;
}

void PolicySummaryDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PolicySummaryDto::nameIsSet() const
{
    return nameIsSet_;
}

void PolicySummaryDto::unsetname()
{
    nameIsSet_ = false;
}

std::string PolicySummaryDto::getType() const
{
    return type_;
}

void PolicySummaryDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PolicySummaryDto::typeIsSet() const
{
    return typeIsSet_;
}

void PolicySummaryDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



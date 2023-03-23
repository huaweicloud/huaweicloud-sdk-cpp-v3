

#include "huaweicloud/eps/v1/model/EnterpriseProject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




EnterpriseProject::EnterpriseProject()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

EnterpriseProject::~EnterpriseProject() = default;

void EnterpriseProject::validate()
{
}

web::json::value EnterpriseProject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool EnterpriseProject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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


std::string EnterpriseProject::getName() const
{
    return name_;
}

void EnterpriseProject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnterpriseProject::nameIsSet() const
{
    return nameIsSet_;
}

void EnterpriseProject::unsetname()
{
    nameIsSet_ = false;
}

std::string EnterpriseProject::getDescription() const
{
    return description_;
}

void EnterpriseProject::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnterpriseProject::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnterpriseProject::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnterpriseProject::getType() const
{
    return type_;
}

void EnterpriseProject::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EnterpriseProject::typeIsSet() const
{
    return typeIsSet_;
}

void EnterpriseProject::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



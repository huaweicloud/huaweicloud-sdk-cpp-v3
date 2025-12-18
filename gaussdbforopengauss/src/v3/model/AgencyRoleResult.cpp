

#include "huaweicloud/gaussdbforopengauss/v3/model/AgencyRoleResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AgencyRoleResult::AgencyRoleResult()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AgencyRoleResult::~AgencyRoleResult() = default;

void AgencyRoleResult::validate()
{
}

web::json::value AgencyRoleResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AgencyRoleResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AgencyRoleResult::getName() const
{
    return name_;
}

void AgencyRoleResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AgencyRoleResult::nameIsSet() const
{
    return nameIsSet_;
}

void AgencyRoleResult::unsetname()
{
    nameIsSet_ = false;
}

std::string AgencyRoleResult::getDescription() const
{
    return description_;
}

void AgencyRoleResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AgencyRoleResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AgencyRoleResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



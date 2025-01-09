

#include "huaweicloud/drs/v5/model/AgencyRole.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AgencyRole::AgencyRole()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AgencyRole::~AgencyRole() = default;

void AgencyRole::validate()
{
}

web::json::value AgencyRole::toJson() const
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
bool AgencyRole::fromJson(const web::json::value& val)
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


std::string AgencyRole::getName() const
{
    return name_;
}

void AgencyRole::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AgencyRole::nameIsSet() const
{
    return nameIsSet_;
}

void AgencyRole::unsetname()
{
    nameIsSet_ = false;
}

std::string AgencyRole::getDescription() const
{
    return description_;
}

void AgencyRole::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AgencyRole::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AgencyRole::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



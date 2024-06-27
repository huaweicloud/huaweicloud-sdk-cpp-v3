

#include "huaweicloud/cfw/v1/model/UpdateDomainSetInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDomainSetInfoDto::UpdateDomainSetInfoDto()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateDomainSetInfoDto::~UpdateDomainSetInfoDto() = default;

void UpdateDomainSetInfoDto::validate()
{
}

web::json::value UpdateDomainSetInfoDto::toJson() const
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
bool UpdateDomainSetInfoDto::fromJson(const web::json::value& val)
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


std::string UpdateDomainSetInfoDto::getName() const
{
    return name_;
}

void UpdateDomainSetInfoDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDomainSetInfoDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDomainSetInfoDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDomainSetInfoDto::getDescription() const
{
    return description_;
}

void UpdateDomainSetInfoDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDomainSetInfoDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDomainSetInfoDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



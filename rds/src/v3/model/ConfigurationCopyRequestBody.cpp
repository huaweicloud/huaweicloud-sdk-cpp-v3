

#include "huaweicloud/rds/v3/model/ConfigurationCopyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ConfigurationCopyRequestBody::ConfigurationCopyRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ConfigurationCopyRequestBody::~ConfigurationCopyRequestBody() = default;

void ConfigurationCopyRequestBody::validate()
{
}

web::json::value ConfigurationCopyRequestBody::toJson() const
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

bool ConfigurationCopyRequestBody::fromJson(const web::json::value& val)
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

std::string ConfigurationCopyRequestBody::getName() const
{
    return name_;
}

void ConfigurationCopyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationCopyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationCopyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationCopyRequestBody::getDescription() const
{
    return description_;
}

void ConfigurationCopyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationCopyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationCopyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



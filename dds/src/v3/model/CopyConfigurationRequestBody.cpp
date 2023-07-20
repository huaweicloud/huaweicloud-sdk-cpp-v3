

#include "huaweicloud/dds/v3/model/CopyConfigurationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CopyConfigurationRequestBody::CopyConfigurationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CopyConfigurationRequestBody::~CopyConfigurationRequestBody() = default;

void CopyConfigurationRequestBody::validate()
{
}

web::json::value CopyConfigurationRequestBody::toJson() const
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

bool CopyConfigurationRequestBody::fromJson(const web::json::value& val)
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

std::string CopyConfigurationRequestBody::getName() const
{
    return name_;
}

void CopyConfigurationRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyConfigurationRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CopyConfigurationRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyConfigurationRequestBody::getDescription() const
{
    return description_;
}

void CopyConfigurationRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyConfigurationRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyConfigurationRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



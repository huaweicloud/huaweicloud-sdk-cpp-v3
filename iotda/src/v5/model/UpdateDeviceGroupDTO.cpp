

#include "huaweicloud/iotda/v5/model/UpdateDeviceGroupDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceGroupDTO::UpdateDeviceGroupDTO()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateDeviceGroupDTO::~UpdateDeviceGroupDTO() = default;

void UpdateDeviceGroupDTO::validate()
{
}

web::json::value UpdateDeviceGroupDTO::toJson() const
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
bool UpdateDeviceGroupDTO::fromJson(const web::json::value& val)
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


std::string UpdateDeviceGroupDTO::getName() const
{
    return name_;
}

void UpdateDeviceGroupDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDeviceGroupDTO::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDeviceGroupDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDeviceGroupDTO::getDescription() const
{
    return description_;
}

void UpdateDeviceGroupDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDeviceGroupDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDeviceGroupDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



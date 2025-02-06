

#include "huaweicloud/identitycenter/v1/model/InstanceAccessControlAttributeConfigurationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




InstanceAccessControlAttributeConfigurationDto::InstanceAccessControlAttributeConfigurationDto()
{
    accessControlAttributesIsSet_ = false;
}

InstanceAccessControlAttributeConfigurationDto::~InstanceAccessControlAttributeConfigurationDto() = default;

void InstanceAccessControlAttributeConfigurationDto::validate()
{
}

web::json::value InstanceAccessControlAttributeConfigurationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAttributesIsSet_) {
        val[utility::conversions::to_string_t("access_control_attributes")] = ModelBase::toJson(accessControlAttributes_);
    }

    return val;
}
bool InstanceAccessControlAttributeConfigurationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_control_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_control_attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessControlAttributeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAttributes(refVal);
        }
    }
    return ok;
}


std::vector<AccessControlAttributeDto>& InstanceAccessControlAttributeConfigurationDto::getAccessControlAttributes()
{
    return accessControlAttributes_;
}

void InstanceAccessControlAttributeConfigurationDto::setAccessControlAttributes(const std::vector<AccessControlAttributeDto>& value)
{
    accessControlAttributes_ = value;
    accessControlAttributesIsSet_ = true;
}

bool InstanceAccessControlAttributeConfigurationDto::accessControlAttributesIsSet() const
{
    return accessControlAttributesIsSet_;
}

void InstanceAccessControlAttributeConfigurationDto::unsetaccessControlAttributes()
{
    accessControlAttributesIsSet_ = false;
}

}
}
}
}
}



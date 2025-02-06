

#include "huaweicloud/identitycenter/v1/model/UpdateInstanceAccessControlAttributeConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateInstanceAccessControlAttributeConfigurationReqBody::UpdateInstanceAccessControlAttributeConfigurationReqBody()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
}

UpdateInstanceAccessControlAttributeConfigurationReqBody::~UpdateInstanceAccessControlAttributeConfigurationReqBody() = default;

void UpdateInstanceAccessControlAttributeConfigurationReqBody::validate()
{
}

web::json::value UpdateInstanceAccessControlAttributeConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceAccessControlAttributeConfigurationIsSet_) {
        val[utility::conversions::to_string_t("instance_access_control_attribute_configuration")] = ModelBase::toJson(instanceAccessControlAttributeConfiguration_);
    }

    return val;
}
bool UpdateInstanceAccessControlAttributeConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_access_control_attribute_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_access_control_attribute_configuration"));
        if(!fieldValue.is_null())
        {
            InstanceAccessControlAttributeConfigurationDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceAccessControlAttributeConfiguration(refVal);
        }
    }
    return ok;
}


InstanceAccessControlAttributeConfigurationDto UpdateInstanceAccessControlAttributeConfigurationReqBody::getInstanceAccessControlAttributeConfiguration() const
{
    return instanceAccessControlAttributeConfiguration_;
}

void UpdateInstanceAccessControlAttributeConfigurationReqBody::setInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfigurationDto& value)
{
    instanceAccessControlAttributeConfiguration_ = value;
    instanceAccessControlAttributeConfigurationIsSet_ = true;
}

bool UpdateInstanceAccessControlAttributeConfigurationReqBody::instanceAccessControlAttributeConfigurationIsSet() const
{
    return instanceAccessControlAttributeConfigurationIsSet_;
}

void UpdateInstanceAccessControlAttributeConfigurationReqBody::unsetinstanceAccessControlAttributeConfiguration()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
}

}
}
}
}
}



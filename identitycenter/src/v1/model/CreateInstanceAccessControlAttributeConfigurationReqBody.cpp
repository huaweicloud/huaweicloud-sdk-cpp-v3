

#include "huaweicloud/identitycenter/v1/model/CreateInstanceAccessControlAttributeConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateInstanceAccessControlAttributeConfigurationReqBody::CreateInstanceAccessControlAttributeConfigurationReqBody()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
}

CreateInstanceAccessControlAttributeConfigurationReqBody::~CreateInstanceAccessControlAttributeConfigurationReqBody() = default;

void CreateInstanceAccessControlAttributeConfigurationReqBody::validate()
{
}

web::json::value CreateInstanceAccessControlAttributeConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceAccessControlAttributeConfigurationIsSet_) {
        val[utility::conversions::to_string_t("instance_access_control_attribute_configuration")] = ModelBase::toJson(instanceAccessControlAttributeConfiguration_);
    }

    return val;
}
bool CreateInstanceAccessControlAttributeConfigurationReqBody::fromJson(const web::json::value& val)
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


InstanceAccessControlAttributeConfigurationDto CreateInstanceAccessControlAttributeConfigurationReqBody::getInstanceAccessControlAttributeConfiguration() const
{
    return instanceAccessControlAttributeConfiguration_;
}

void CreateInstanceAccessControlAttributeConfigurationReqBody::setInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfigurationDto& value)
{
    instanceAccessControlAttributeConfiguration_ = value;
    instanceAccessControlAttributeConfigurationIsSet_ = true;
}

bool CreateInstanceAccessControlAttributeConfigurationReqBody::instanceAccessControlAttributeConfigurationIsSet() const
{
    return instanceAccessControlAttributeConfigurationIsSet_;
}

void CreateInstanceAccessControlAttributeConfigurationReqBody::unsetinstanceAccessControlAttributeConfiguration()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
}

}
}
}
}
}



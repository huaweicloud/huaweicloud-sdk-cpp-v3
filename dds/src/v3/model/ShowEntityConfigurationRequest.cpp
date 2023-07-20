

#include "huaweicloud/dds/v3/model/ShowEntityConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowEntityConfigurationRequest::ShowEntityConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    entityId_ = "";
    entityIdIsSet_ = false;
}

ShowEntityConfigurationRequest::~ShowEntityConfigurationRequest() = default;

void ShowEntityConfigurationRequest::validate()
{
}

web::json::value ShowEntityConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }

    return val;
}

bool ShowEntityConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    return ok;
}

std::string ShowEntityConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowEntityConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowEntityConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowEntityConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowEntityConfigurationRequest::getEntityId() const
{
    return entityId_;
}

void ShowEntityConfigurationRequest::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool ShowEntityConfigurationRequest::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void ShowEntityConfigurationRequest::unsetentityId()
{
    entityIdIsSet_ = false;
}

}
}
}
}
}



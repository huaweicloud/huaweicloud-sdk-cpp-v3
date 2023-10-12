

#include "huaweicloud/dds/v3/model/ApplicableInstancesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ApplicableInstancesInfo::ApplicableInstancesInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    entitiesIsSet_ = false;
}

ApplicableInstancesInfo::~ApplicableInstancesInfo() = default;

void ApplicableInstancesInfo::validate()
{
}

web::json::value ApplicableInstancesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }

    return val;
}
bool ApplicableInstancesInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            std::vector<EntityInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    return ok;
}


std::string ApplicableInstancesInfo::getInstanceId() const
{
    return instanceId_;
}

void ApplicableInstancesInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ApplicableInstancesInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ApplicableInstancesInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ApplicableInstancesInfo::getInstanceName() const
{
    return instanceName_;
}

void ApplicableInstancesInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ApplicableInstancesInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ApplicableInstancesInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<EntityInfo>& ApplicableInstancesInfo::getEntities()
{
    return entities_;
}

void ApplicableInstancesInfo::setEntities(const std::vector<EntityInfo>& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ApplicableInstancesInfo::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ApplicableInstancesInfo::unsetentities()
{
    entitiesIsSet_ = false;
}

}
}
}
}
}



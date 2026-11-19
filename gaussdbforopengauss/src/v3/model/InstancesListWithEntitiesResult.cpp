

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesListWithEntitiesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesListWithEntitiesResult::InstancesListWithEntitiesResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    entitiesIsSet_ = false;
}

InstancesListWithEntitiesResult::~InstancesListWithEntitiesResult() = default;

void InstancesListWithEntitiesResult::validate()
{
}

web::json::value InstancesListWithEntitiesResult::toJson() const
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
bool InstancesListWithEntitiesResult::fromJson(const web::json::value& val)
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
            std::vector<EntityResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    return ok;
}


std::string InstancesListWithEntitiesResult::getInstanceId() const
{
    return instanceId_;
}

void InstancesListWithEntitiesResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstancesListWithEntitiesResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstancesListWithEntitiesResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstancesListWithEntitiesResult::getInstanceName() const
{
    return instanceName_;
}

void InstancesListWithEntitiesResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstancesListWithEntitiesResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstancesListWithEntitiesResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<EntityResult>& InstancesListWithEntitiesResult::getEntities()
{
    return entities_;
}

void InstancesListWithEntitiesResult::setEntities(const std::vector<EntityResult>& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool InstancesListWithEntitiesResult::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void InstancesListWithEntitiesResult::unsetentities()
{
    entitiesIsSet_ = false;
}

}
}
}
}
}



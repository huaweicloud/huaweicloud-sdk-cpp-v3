

#include "huaweicloud/rds/v3/model/Instance_dr_relation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Instance_dr_relation::Instance_dr_relation()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    masterInstanceIsSet_ = false;
    slaveInstancesIsSet_ = false;
}

Instance_dr_relation::~Instance_dr_relation() = default;

void Instance_dr_relation::validate()
{
}

web::json::value Instance_dr_relation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(masterInstanceIsSet_) {
        val[utility::conversions::to_string_t("master_instance")] = ModelBase::toJson(masterInstance_);
    }
    if(slaveInstancesIsSet_) {
        val[utility::conversions::to_string_t("slave_instances")] = ModelBase::toJson(slaveInstances_);
    }

    return val;
}

bool Instance_dr_relation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("master_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance"));
        if(!fieldValue.is_null())
        {
            Master_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<Slave_instance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveInstances(refVal);
        }
    }
    return ok;
}

std::string Instance_dr_relation::getInstanceId() const
{
    return instanceId_;
}

void Instance_dr_relation::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Instance_dr_relation::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Instance_dr_relation::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

Master_instance Instance_dr_relation::getMasterInstance() const
{
    return masterInstance_;
}

void Instance_dr_relation::setMasterInstance(const Master_instance& value)
{
    masterInstance_ = value;
    masterInstanceIsSet_ = true;
}

bool Instance_dr_relation::masterInstanceIsSet() const
{
    return masterInstanceIsSet_;
}

void Instance_dr_relation::unsetmasterInstance()
{
    masterInstanceIsSet_ = false;
}

std::vector<Slave_instance>& Instance_dr_relation::getSlaveInstances()
{
    return slaveInstances_;
}

void Instance_dr_relation::setSlaveInstances(const std::vector<Slave_instance>& value)
{
    slaveInstances_ = value;
    slaveInstancesIsSet_ = true;
}

bool Instance_dr_relation::slaveInstancesIsSet() const
{
    return slaveInstancesIsSet_;
}

void Instance_dr_relation::unsetslaveInstances()
{
    slaveInstancesIsSet_ = false;
}

}
}
}
}
}



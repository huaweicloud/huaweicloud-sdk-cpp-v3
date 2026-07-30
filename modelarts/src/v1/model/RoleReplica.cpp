

#include "huaweicloud/modelarts/v1/model/RoleReplica.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RoleReplica::RoleReplica()
{
    name_ = "";
    nameIsSet_ = false;
    maxReplicas_ = 0;
    maxReplicasIsSet_ = false;
    minReplicas_ = 0;
    minReplicasIsSet_ = false;
}

RoleReplica::~RoleReplica() = default;

void RoleReplica::validate()
{
}

web::json::value RoleReplica::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(maxReplicasIsSet_) {
        val[utility::conversions::to_string_t("max_replicas")] = ModelBase::toJson(maxReplicas_);
    }
    if(minReplicasIsSet_) {
        val[utility::conversions::to_string_t("min_replicas")] = ModelBase::toJson(minReplicas_);
    }

    return val;
}
bool RoleReplica::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("max_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReplicas(refVal);
        }
    }
    return ok;
}


std::string RoleReplica::getName() const
{
    return name_;
}

void RoleReplica::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RoleReplica::nameIsSet() const
{
    return nameIsSet_;
}

void RoleReplica::unsetname()
{
    nameIsSet_ = false;
}

int32_t RoleReplica::getMaxReplicas() const
{
    return maxReplicas_;
}

void RoleReplica::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool RoleReplica::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void RoleReplica::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

int32_t RoleReplica::getMinReplicas() const
{
    return minReplicas_;
}

void RoleReplica::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool RoleReplica::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void RoleReplica::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

}
}
}
}
}



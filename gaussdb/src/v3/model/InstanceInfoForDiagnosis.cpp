

#include "huaweicloud/gaussdb/v3/model/InstanceInfoForDiagnosis.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceInfoForDiagnosis::InstanceInfoForDiagnosis()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    masterNodeId_ = "";
    masterNodeIdIsSet_ = false;
}

InstanceInfoForDiagnosis::~InstanceInfoForDiagnosis() = default;

void InstanceInfoForDiagnosis::validate()
{
}

web::json::value InstanceInfoForDiagnosis::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(masterNodeIdIsSet_) {
        val[utility::conversions::to_string_t("master_node_id")] = ModelBase::toJson(masterNodeId_);
    }

    return val;
}
bool InstanceInfoForDiagnosis::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("master_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterNodeId(refVal);
        }
    }
    return ok;
}


std::string InstanceInfoForDiagnosis::getInstanceId() const
{
    return instanceId_;
}

void InstanceInfoForDiagnosis::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceInfoForDiagnosis::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceInfoForDiagnosis::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceInfoForDiagnosis::getMasterNodeId() const
{
    return masterNodeId_;
}

void InstanceInfoForDiagnosis::setMasterNodeId(const std::string& value)
{
    masterNodeId_ = value;
    masterNodeIdIsSet_ = true;
}

bool InstanceInfoForDiagnosis::masterNodeIdIsSet() const
{
    return masterNodeIdIsSet_;
}

void InstanceInfoForDiagnosis::unsetmasterNodeId()
{
    masterNodeIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdb/v3/model/UpdateServerlessComputeAbilityPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessComputeAbilityPolicy::UpdateServerlessComputeAbilityPolicy()
{
    minVcpus_ = 0;
    minVcpusIsSet_ = false;
    maxVcpus_ = 0;
    maxVcpusIsSet_ = false;
    needUpdateNodesComputeAbility_ = false;
    needUpdateNodesComputeAbilityIsSet_ = false;
    scaleOutSwitch_ = false;
    scaleOutSwitchIsSet_ = false;
    maxReadonlyNodeCount_ = 0;
    maxReadonlyNodeCountIsSet_ = false;
    minReadonlyNodeCount_ = 0;
    minReadonlyNodeCountIsSet_ = false;
}

UpdateServerlessComputeAbilityPolicy::~UpdateServerlessComputeAbilityPolicy() = default;

void UpdateServerlessComputeAbilityPolicy::validate()
{
}

web::json::value UpdateServerlessComputeAbilityPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minVcpusIsSet_) {
        val[utility::conversions::to_string_t("min_vcpus")] = ModelBase::toJson(minVcpus_);
    }
    if(maxVcpusIsSet_) {
        val[utility::conversions::to_string_t("max_vcpus")] = ModelBase::toJson(maxVcpus_);
    }
    if(needUpdateNodesComputeAbilityIsSet_) {
        val[utility::conversions::to_string_t("need_update_nodes_compute_ability")] = ModelBase::toJson(needUpdateNodesComputeAbility_);
    }
    if(scaleOutSwitchIsSet_) {
        val[utility::conversions::to_string_t("scale_out_switch")] = ModelBase::toJson(scaleOutSwitch_);
    }
    if(maxReadonlyNodeCountIsSet_) {
        val[utility::conversions::to_string_t("max_readonly_node_count")] = ModelBase::toJson(maxReadonlyNodeCount_);
    }
    if(minReadonlyNodeCountIsSet_) {
        val[utility::conversions::to_string_t("min_readonly_node_count")] = ModelBase::toJson(minReadonlyNodeCount_);
    }

    return val;
}
bool UpdateServerlessComputeAbilityPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_update_nodes_compute_ability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_update_nodes_compute_ability"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedUpdateNodesComputeAbility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scale_out_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scale_out_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleOutSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_readonly_node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_readonly_node_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReadonlyNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_readonly_node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_readonly_node_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReadonlyNodeCount(refVal);
        }
    }
    return ok;
}


int32_t UpdateServerlessComputeAbilityPolicy::getMinVcpus() const
{
    return minVcpus_;
}

void UpdateServerlessComputeAbilityPolicy::setMinVcpus(int32_t value)
{
    minVcpus_ = value;
    minVcpusIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::minVcpusIsSet() const
{
    return minVcpusIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetminVcpus()
{
    minVcpusIsSet_ = false;
}

int32_t UpdateServerlessComputeAbilityPolicy::getMaxVcpus() const
{
    return maxVcpus_;
}

void UpdateServerlessComputeAbilityPolicy::setMaxVcpus(int32_t value)
{
    maxVcpus_ = value;
    maxVcpusIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::maxVcpusIsSet() const
{
    return maxVcpusIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetmaxVcpus()
{
    maxVcpusIsSet_ = false;
}

bool UpdateServerlessComputeAbilityPolicy::isNeedUpdateNodesComputeAbility() const
{
    return needUpdateNodesComputeAbility_;
}

void UpdateServerlessComputeAbilityPolicy::setNeedUpdateNodesComputeAbility(bool value)
{
    needUpdateNodesComputeAbility_ = value;
    needUpdateNodesComputeAbilityIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::needUpdateNodesComputeAbilityIsSet() const
{
    return needUpdateNodesComputeAbilityIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetneedUpdateNodesComputeAbility()
{
    needUpdateNodesComputeAbilityIsSet_ = false;
}

bool UpdateServerlessComputeAbilityPolicy::isScaleOutSwitch() const
{
    return scaleOutSwitch_;
}

void UpdateServerlessComputeAbilityPolicy::setScaleOutSwitch(bool value)
{
    scaleOutSwitch_ = value;
    scaleOutSwitchIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::scaleOutSwitchIsSet() const
{
    return scaleOutSwitchIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetscaleOutSwitch()
{
    scaleOutSwitchIsSet_ = false;
}

int32_t UpdateServerlessComputeAbilityPolicy::getMaxReadonlyNodeCount() const
{
    return maxReadonlyNodeCount_;
}

void UpdateServerlessComputeAbilityPolicy::setMaxReadonlyNodeCount(int32_t value)
{
    maxReadonlyNodeCount_ = value;
    maxReadonlyNodeCountIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::maxReadonlyNodeCountIsSet() const
{
    return maxReadonlyNodeCountIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetmaxReadonlyNodeCount()
{
    maxReadonlyNodeCountIsSet_ = false;
}

int32_t UpdateServerlessComputeAbilityPolicy::getMinReadonlyNodeCount() const
{
    return minReadonlyNodeCount_;
}

void UpdateServerlessComputeAbilityPolicy::setMinReadonlyNodeCount(int32_t value)
{
    minReadonlyNodeCount_ = value;
    minReadonlyNodeCountIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicy::minReadonlyNodeCountIsSet() const
{
    return minReadonlyNodeCountIsSet_;
}

void UpdateServerlessComputeAbilityPolicy::unsetminReadonlyNodeCount()
{
    minReadonlyNodeCountIsSet_ = false;
}

}
}
}
}
}



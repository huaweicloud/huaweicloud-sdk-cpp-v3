

#include "huaweicloud/gaussdb/v3/model/UpdateDynamicServerlessPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDynamicServerlessPolicyRequestBody::UpdateDynamicServerlessPolicyRequestBody()
{
    minVcpus_ = "";
    minVcpusIsSet_ = false;
    maxVcpus_ = "";
    maxVcpusIsSet_ = false;
    needUpdateNodesComputeAbility_ = false;
    needUpdateNodesComputeAbilityIsSet_ = false;
}

UpdateDynamicServerlessPolicyRequestBody::~UpdateDynamicServerlessPolicyRequestBody() = default;

void UpdateDynamicServerlessPolicyRequestBody::validate()
{
}

web::json::value UpdateDynamicServerlessPolicyRequestBody::toJson() const
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

    return val;
}
bool UpdateDynamicServerlessPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    return ok;
}


std::string UpdateDynamicServerlessPolicyRequestBody::getMinVcpus() const
{
    return minVcpus_;
}

void UpdateDynamicServerlessPolicyRequestBody::setMinVcpus(const std::string& value)
{
    minVcpus_ = value;
    minVcpusIsSet_ = true;
}

bool UpdateDynamicServerlessPolicyRequestBody::minVcpusIsSet() const
{
    return minVcpusIsSet_;
}

void UpdateDynamicServerlessPolicyRequestBody::unsetminVcpus()
{
    minVcpusIsSet_ = false;
}

std::string UpdateDynamicServerlessPolicyRequestBody::getMaxVcpus() const
{
    return maxVcpus_;
}

void UpdateDynamicServerlessPolicyRequestBody::setMaxVcpus(const std::string& value)
{
    maxVcpus_ = value;
    maxVcpusIsSet_ = true;
}

bool UpdateDynamicServerlessPolicyRequestBody::maxVcpusIsSet() const
{
    return maxVcpusIsSet_;
}

void UpdateDynamicServerlessPolicyRequestBody::unsetmaxVcpus()
{
    maxVcpusIsSet_ = false;
}

bool UpdateDynamicServerlessPolicyRequestBody::isNeedUpdateNodesComputeAbility() const
{
    return needUpdateNodesComputeAbility_;
}

void UpdateDynamicServerlessPolicyRequestBody::setNeedUpdateNodesComputeAbility(bool value)
{
    needUpdateNodesComputeAbility_ = value;
    needUpdateNodesComputeAbilityIsSet_ = true;
}

bool UpdateDynamicServerlessPolicyRequestBody::needUpdateNodesComputeAbilityIsSet() const
{
    return needUpdateNodesComputeAbilityIsSet_;
}

void UpdateDynamicServerlessPolicyRequestBody::unsetneedUpdateNodesComputeAbility()
{
    needUpdateNodesComputeAbilityIsSet_ = false;
}

}
}
}
}
}



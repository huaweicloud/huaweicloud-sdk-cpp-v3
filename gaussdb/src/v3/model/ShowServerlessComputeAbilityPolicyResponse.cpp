

#include "huaweicloud/gaussdb/v3/model/ShowServerlessComputeAbilityPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowServerlessComputeAbilityPolicyResponse::ShowServerlessComputeAbilityPolicyResponse()
{
    currentVcpus_ = "";
    currentVcpusIsSet_ = false;
    minVcpus_ = "";
    minVcpusIsSet_ = false;
    maxVcpus_ = "";
    maxVcpusIsSet_ = false;
    scaleOutSwitch_ = false;
    scaleOutSwitchIsSet_ = false;
    maxReadonlyNodeCount_ = 0;
    maxReadonlyNodeCountIsSet_ = false;
    minReadonlyNodeCount_ = 0;
    minReadonlyNodeCountIsSet_ = false;
}

ShowServerlessComputeAbilityPolicyResponse::~ShowServerlessComputeAbilityPolicyResponse() = default;

void ShowServerlessComputeAbilityPolicyResponse::validate()
{
}

web::json::value ShowServerlessComputeAbilityPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVcpusIsSet_) {
        val[utility::conversions::to_string_t("current_vcpus")] = ModelBase::toJson(currentVcpus_);
    }
    if(minVcpusIsSet_) {
        val[utility::conversions::to_string_t("min_vcpus")] = ModelBase::toJson(minVcpus_);
    }
    if(maxVcpusIsSet_) {
        val[utility::conversions::to_string_t("max_vcpus")] = ModelBase::toJson(maxVcpus_);
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
bool ShowServerlessComputeAbilityPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVcpus(refVal);
        }
    }
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


std::string ShowServerlessComputeAbilityPolicyResponse::getCurrentVcpus() const
{
    return currentVcpus_;
}

void ShowServerlessComputeAbilityPolicyResponse::setCurrentVcpus(const std::string& value)
{
    currentVcpus_ = value;
    currentVcpusIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::currentVcpusIsSet() const
{
    return currentVcpusIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetcurrentVcpus()
{
    currentVcpusIsSet_ = false;
}

std::string ShowServerlessComputeAbilityPolicyResponse::getMinVcpus() const
{
    return minVcpus_;
}

void ShowServerlessComputeAbilityPolicyResponse::setMinVcpus(const std::string& value)
{
    minVcpus_ = value;
    minVcpusIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::minVcpusIsSet() const
{
    return minVcpusIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetminVcpus()
{
    minVcpusIsSet_ = false;
}

std::string ShowServerlessComputeAbilityPolicyResponse::getMaxVcpus() const
{
    return maxVcpus_;
}

void ShowServerlessComputeAbilityPolicyResponse::setMaxVcpus(const std::string& value)
{
    maxVcpus_ = value;
    maxVcpusIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::maxVcpusIsSet() const
{
    return maxVcpusIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetmaxVcpus()
{
    maxVcpusIsSet_ = false;
}

bool ShowServerlessComputeAbilityPolicyResponse::isScaleOutSwitch() const
{
    return scaleOutSwitch_;
}

void ShowServerlessComputeAbilityPolicyResponse::setScaleOutSwitch(bool value)
{
    scaleOutSwitch_ = value;
    scaleOutSwitchIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::scaleOutSwitchIsSet() const
{
    return scaleOutSwitchIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetscaleOutSwitch()
{
    scaleOutSwitchIsSet_ = false;
}

int32_t ShowServerlessComputeAbilityPolicyResponse::getMaxReadonlyNodeCount() const
{
    return maxReadonlyNodeCount_;
}

void ShowServerlessComputeAbilityPolicyResponse::setMaxReadonlyNodeCount(int32_t value)
{
    maxReadonlyNodeCount_ = value;
    maxReadonlyNodeCountIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::maxReadonlyNodeCountIsSet() const
{
    return maxReadonlyNodeCountIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetmaxReadonlyNodeCount()
{
    maxReadonlyNodeCountIsSet_ = false;
}

int32_t ShowServerlessComputeAbilityPolicyResponse::getMinReadonlyNodeCount() const
{
    return minReadonlyNodeCount_;
}

void ShowServerlessComputeAbilityPolicyResponse::setMinReadonlyNodeCount(int32_t value)
{
    minReadonlyNodeCount_ = value;
    minReadonlyNodeCountIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyResponse::minReadonlyNodeCountIsSet() const
{
    return minReadonlyNodeCountIsSet_;
}

void ShowServerlessComputeAbilityPolicyResponse::unsetminReadonlyNodeCount()
{
    minReadonlyNodeCountIsSet_ = false;
}

}
}
}
}
}



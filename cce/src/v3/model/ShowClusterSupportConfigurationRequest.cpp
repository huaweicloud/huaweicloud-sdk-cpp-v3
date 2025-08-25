

#include "huaweicloud/cce/v3/model/ShowClusterSupportConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterSupportConfigurationRequest::ShowClusterSupportConfigurationRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    networkMode_ = "";
    networkModeIsSet_ = false;
}

ShowClusterSupportConfigurationRequest::~ShowClusterSupportConfigurationRequest() = default;

void ShowClusterSupportConfigurationRequest::validate()
{
}

web::json::value ShowClusterSupportConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(clusterVersionIsSet_) {
        val[utility::conversions::to_string_t("cluster_version")] = ModelBase::toJson(clusterVersion_);
    }
    if(networkModeIsSet_) {
        val[utility::conversions::to_string_t("network_mode")] = ModelBase::toJson(networkMode_);
    }

    return val;
}
bool ShowClusterSupportConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkMode(refVal);
        }
    }
    return ok;
}


std::string ShowClusterSupportConfigurationRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterSupportConfigurationRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterSupportConfigurationRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterSupportConfigurationRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowClusterSupportConfigurationRequest::getClusterType() const
{
    return clusterType_;
}

void ShowClusterSupportConfigurationRequest::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool ShowClusterSupportConfigurationRequest::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void ShowClusterSupportConfigurationRequest::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string ShowClusterSupportConfigurationRequest::getClusterVersion() const
{
    return clusterVersion_;
}

void ShowClusterSupportConfigurationRequest::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool ShowClusterSupportConfigurationRequest::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void ShowClusterSupportConfigurationRequest::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string ShowClusterSupportConfigurationRequest::getNetworkMode() const
{
    return networkMode_;
}

void ShowClusterSupportConfigurationRequest::setNetworkMode(const std::string& value)
{
    networkMode_ = value;
    networkModeIsSet_ = true;
}

bool ShowClusterSupportConfigurationRequest::networkModeIsSet() const
{
    return networkModeIsSet_;
}

void ShowClusterSupportConfigurationRequest::unsetnetworkMode()
{
    networkModeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cce/v3/model/GetClusterSupportConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterSupportConfigurationRequest::GetClusterSupportConfigurationRequest()
{
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    clusterID_ = "";
    clusterIDIsSet_ = false;
    networkMode_ = "";
    networkModeIsSet_ = false;
}

GetClusterSupportConfigurationRequest::~GetClusterSupportConfigurationRequest() = default;

void GetClusterSupportConfigurationRequest::validate()
{
}

web::json::value GetClusterSupportConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("clusterType")] = ModelBase::toJson(clusterType_);
    }
    if(clusterVersionIsSet_) {
        val[utility::conversions::to_string_t("clusterVersion")] = ModelBase::toJson(clusterVersion_);
    }
    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(networkModeIsSet_) {
        val[utility::conversions::to_string_t("networkMode")] = ModelBase::toJson(networkMode_);
    }

    return val;
}
bool GetClusterSupportConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networkMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkMode(refVal);
        }
    }
    return ok;
}


std::string GetClusterSupportConfigurationRequest::getClusterType() const
{
    return clusterType_;
}

void GetClusterSupportConfigurationRequest::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool GetClusterSupportConfigurationRequest::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void GetClusterSupportConfigurationRequest::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string GetClusterSupportConfigurationRequest::getClusterVersion() const
{
    return clusterVersion_;
}

void GetClusterSupportConfigurationRequest::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool GetClusterSupportConfigurationRequest::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void GetClusterSupportConfigurationRequest::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string GetClusterSupportConfigurationRequest::getClusterID() const
{
    return clusterID_;
}

void GetClusterSupportConfigurationRequest::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool GetClusterSupportConfigurationRequest::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void GetClusterSupportConfigurationRequest::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string GetClusterSupportConfigurationRequest::getNetworkMode() const
{
    return networkMode_;
}

void GetClusterSupportConfigurationRequest::setNetworkMode(const std::string& value)
{
    networkMode_ = value;
    networkModeIsSet_ = true;
}

bool GetClusterSupportConfigurationRequest::networkModeIsSet() const
{
    return networkModeIsSet_;
}

void GetClusterSupportConfigurationRequest::unsetnetworkMode()
{
    networkModeIsSet_ = false;
}

}
}
}
}
}



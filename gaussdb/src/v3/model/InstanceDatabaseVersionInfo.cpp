

#include "huaweicloud/gaussdb/v3/model/InstanceDatabaseVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceDatabaseVersionInfo::InstanceDatabaseVersionInfo()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    currentKernelVersion_ = "";
    currentKernelVersionIsSet_ = false;
    latestVersion_ = "";
    latestVersionIsSet_ = false;
    latestKernelVersion_ = "";
    latestKernelVersionIsSet_ = false;
}

InstanceDatabaseVersionInfo::~InstanceDatabaseVersionInfo() = default;

void InstanceDatabaseVersionInfo::validate()
{
}

web::json::value InstanceDatabaseVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(currentKernelVersionIsSet_) {
        val[utility::conversions::to_string_t("current_kernel_version")] = ModelBase::toJson(currentKernelVersion_);
    }
    if(latestVersionIsSet_) {
        val[utility::conversions::to_string_t("latest_version")] = ModelBase::toJson(latestVersion_);
    }
    if(latestKernelVersionIsSet_) {
        val[utility::conversions::to_string_t("latest_kernel_version")] = ModelBase::toJson(latestKernelVersion_);
    }

    return val;
}
bool InstanceDatabaseVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentKernelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestKernelVersion(refVal);
        }
    }
    return ok;
}


std::string InstanceDatabaseVersionInfo::getCurrentVersion() const
{
    return currentVersion_;
}

void InstanceDatabaseVersionInfo::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool InstanceDatabaseVersionInfo::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void InstanceDatabaseVersionInfo::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string InstanceDatabaseVersionInfo::getCurrentKernelVersion() const
{
    return currentKernelVersion_;
}

void InstanceDatabaseVersionInfo::setCurrentKernelVersion(const std::string& value)
{
    currentKernelVersion_ = value;
    currentKernelVersionIsSet_ = true;
}

bool InstanceDatabaseVersionInfo::currentKernelVersionIsSet() const
{
    return currentKernelVersionIsSet_;
}

void InstanceDatabaseVersionInfo::unsetcurrentKernelVersion()
{
    currentKernelVersionIsSet_ = false;
}

std::string InstanceDatabaseVersionInfo::getLatestVersion() const
{
    return latestVersion_;
}

void InstanceDatabaseVersionInfo::setLatestVersion(const std::string& value)
{
    latestVersion_ = value;
    latestVersionIsSet_ = true;
}

bool InstanceDatabaseVersionInfo::latestVersionIsSet() const
{
    return latestVersionIsSet_;
}

void InstanceDatabaseVersionInfo::unsetlatestVersion()
{
    latestVersionIsSet_ = false;
}

std::string InstanceDatabaseVersionInfo::getLatestKernelVersion() const
{
    return latestKernelVersion_;
}

void InstanceDatabaseVersionInfo::setLatestKernelVersion(const std::string& value)
{
    latestKernelVersion_ = value;
    latestKernelVersionIsSet_ = true;
}

bool InstanceDatabaseVersionInfo::latestKernelVersionIsSet() const
{
    return latestKernelVersionIsSet_;
}

void InstanceDatabaseVersionInfo::unsetlatestKernelVersion()
{
    latestKernelVersionIsSet_ = false;
}

}
}
}
}
}



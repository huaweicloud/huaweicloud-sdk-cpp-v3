

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesResult::InstancesResult()
{
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    dataVolumeSize_ = 0.0;
    dataVolumeSizeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
}

InstancesResult::~InstancesResult() = default;

void InstancesResult::validate()
{
}

web::json::value InstancesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(dataVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("data_volume_size")] = ModelBase::toJson(dataVolumeSize_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }

    return val;
}
bool InstancesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volume_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    return ok;
}


std::string InstancesResult::getInstanceName() const
{
    return instanceName_;
}

void InstancesResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstancesResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstancesResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string InstancesResult::getInstanceId() const
{
    return instanceId_;
}

void InstancesResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstancesResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstancesResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstancesResult::getVolumeType() const
{
    return volumeType_;
}

void InstancesResult::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool InstancesResult::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void InstancesResult::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

double InstancesResult::getDataVolumeSize() const
{
    return dataVolumeSize_;
}

void InstancesResult::setDataVolumeSize(double value)
{
    dataVolumeSize_ = value;
    dataVolumeSizeIsSet_ = true;
}

bool InstancesResult::dataVolumeSizeIsSet() const
{
    return dataVolumeSizeIsSet_;
}

void InstancesResult::unsetdataVolumeSize()
{
    dataVolumeSizeIsSet_ = false;
}

std::string InstancesResult::getVersion() const
{
    return version_;
}

void InstancesResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstancesResult::versionIsSet() const
{
    return versionIsSet_;
}

void InstancesResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string InstancesResult::getMode() const
{
    return mode_;
}

void InstancesResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool InstancesResult::modeIsSet() const
{
    return modeIsSet_;
}

void InstancesResult::unsetmode()
{
    modeIsSet_ = false;
}

std::string InstancesResult::getInstanceMode() const
{
    return instanceMode_;
}

void InstancesResult::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool InstancesResult::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void InstancesResult::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/modelarts/v1/model/SpecResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SpecResponse::SpecResponse()
{
    resourceIsSet_ = false;
    volumesIsSet_ = false;
    logExportPathIsSet_ = false;
    schedulePolicyIsSet_ = false;
    customMetricsIsSet_ = false;
    outputModelIsSet_ = false;
    assetModelIsSet_ = false;
}

SpecResponse::~SpecResponse() = default;

void SpecResponse::validate()
{
}

web::json::value SpecResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }
    if(logExportPathIsSet_) {
        val[utility::conversions::to_string_t("log_export_path")] = ModelBase::toJson(logExportPath_);
    }
    if(schedulePolicyIsSet_) {
        val[utility::conversions::to_string_t("schedule_policy")] = ModelBase::toJson(schedulePolicy_);
    }
    if(customMetricsIsSet_) {
        val[utility::conversions::to_string_t("custom_metrics")] = ModelBase::toJson(customMetrics_);
    }
    if(outputModelIsSet_) {
        val[utility::conversions::to_string_t("output_model")] = ModelBase::toJson(outputModel_);
    }
    if(assetModelIsSet_) {
        val[utility::conversions::to_string_t("asset_model")] = ModelBase::toJson(assetModel_);
    }

    return val;
}
bool SpecResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            Resource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<JobVolumeResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_export_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_export_path"));
        if(!fieldValue.is_null())
        {
            LogExportPathResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogExportPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_policy"));
        if(!fieldValue.is_null())
        {
            SchedulePolicyResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedulePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomMetrics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_model"));
        if(!fieldValue.is_null())
        {
            OutputModelResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_model"));
        if(!fieldValue.is_null())
        {
            AssetModelResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetModel(refVal);
        }
    }
    return ok;
}


Resource SpecResponse::getResource() const
{
    return resource_;
}

void SpecResponse::setResource(const Resource& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool SpecResponse::resourceIsSet() const
{
    return resourceIsSet_;
}

void SpecResponse::unsetresource()
{
    resourceIsSet_ = false;
}

std::vector<JobVolumeResp>& SpecResponse::getVolumes()
{
    return volumes_;
}

void SpecResponse::setVolumes(const std::vector<JobVolumeResp>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool SpecResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void SpecResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

LogExportPathResp SpecResponse::getLogExportPath() const
{
    return logExportPath_;
}

void SpecResponse::setLogExportPath(const LogExportPathResp& value)
{
    logExportPath_ = value;
    logExportPathIsSet_ = true;
}

bool SpecResponse::logExportPathIsSet() const
{
    return logExportPathIsSet_;
}

void SpecResponse::unsetlogExportPath()
{
    logExportPathIsSet_ = false;
}

SchedulePolicyResp SpecResponse::getSchedulePolicy() const
{
    return schedulePolicy_;
}

void SpecResponse::setSchedulePolicy(const SchedulePolicyResp& value)
{
    schedulePolicy_ = value;
    schedulePolicyIsSet_ = true;
}

bool SpecResponse::schedulePolicyIsSet() const
{
    return schedulePolicyIsSet_;
}

void SpecResponse::unsetschedulePolicy()
{
    schedulePolicyIsSet_ = false;
}

std::vector<CustomMetrics>& SpecResponse::getCustomMetrics()
{
    return customMetrics_;
}

void SpecResponse::setCustomMetrics(const std::vector<CustomMetrics>& value)
{
    customMetrics_ = value;
    customMetricsIsSet_ = true;
}

bool SpecResponse::customMetricsIsSet() const
{
    return customMetricsIsSet_;
}

void SpecResponse::unsetcustomMetrics()
{
    customMetricsIsSet_ = false;
}

OutputModelResp SpecResponse::getOutputModel() const
{
    return outputModel_;
}

void SpecResponse::setOutputModel(const OutputModelResp& value)
{
    outputModel_ = value;
    outputModelIsSet_ = true;
}

bool SpecResponse::outputModelIsSet() const
{
    return outputModelIsSet_;
}

void SpecResponse::unsetoutputModel()
{
    outputModelIsSet_ = false;
}

AssetModelResp SpecResponse::getAssetModel() const
{
    return assetModel_;
}

void SpecResponse::setAssetModel(const AssetModelResp& value)
{
    assetModel_ = value;
    assetModelIsSet_ = true;
}

bool SpecResponse::assetModelIsSet() const
{
    return assetModelIsSet_;
}

void SpecResponse::unsetassetModel()
{
    assetModelIsSet_ = false;
}

}
}
}
}
}



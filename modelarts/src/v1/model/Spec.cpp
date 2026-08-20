

#include "huaweicloud/modelarts/v1/model/Spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Spec::Spec()
{
    resourceIsSet_ = false;
    volumesIsSet_ = false;
    logExportPathIsSet_ = false;
    autoStopIsSet_ = false;
    retentionIsSet_ = false;
    schedulePolicyIsSet_ = false;
    logExportConfigIsSet_ = false;
    notificationIsSet_ = false;
    customMetricsIsSet_ = false;
    outputModelIsSet_ = false;
    assetModelIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    reservedTimeIsSet_ = false;
}

Spec::~Spec() = default;

void Spec::validate()
{
}

web::json::value Spec::toJson() const
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
    if(autoStopIsSet_) {
        val[utility::conversions::to_string_t("auto_stop")] = ModelBase::toJson(autoStop_);
    }
    if(retentionIsSet_) {
        val[utility::conversions::to_string_t("retention")] = ModelBase::toJson(retention_);
    }
    if(schedulePolicyIsSet_) {
        val[utility::conversions::to_string_t("schedule_policy")] = ModelBase::toJson(schedulePolicy_);
    }
    if(logExportConfigIsSet_) {
        val[utility::conversions::to_string_t("log_export_config")] = ModelBase::toJson(logExportConfig_);
    }
    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
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
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(reservedTimeIsSet_) {
        val[utility::conversions::to_string_t("reserved_time")] = ModelBase::toJson(reservedTime_);
    }

    return val;
}
bool Spec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            SpecResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<SpecVolumes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_export_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_export_path"));
        if(!fieldValue.is_null())
        {
            LogExportPath refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogExportPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_stop"));
        if(!fieldValue.is_null())
        {
            AutoStop refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoStop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention"));
        if(!fieldValue.is_null())
        {
            RetentionPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetention(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_policy"));
        if(!fieldValue.is_null())
        {
            SchedulePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedulePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_export_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_export_config"));
        if(!fieldValue.is_null())
        {
            LogExportConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogExportConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification"));
        if(!fieldValue.is_null())
        {
            Notification refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotification(refVal);
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
            OutputModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_model"));
        if(!fieldValue.is_null())
        {
            AssetModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_time"));
        if(!fieldValue.is_null())
        {
            ReserveTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedTime(refVal);
        }
    }
    return ok;
}


SpecResource Spec::getResource() const
{
    return resource_;
}

void Spec::setResource(const SpecResource& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool Spec::resourceIsSet() const
{
    return resourceIsSet_;
}

void Spec::unsetresource()
{
    resourceIsSet_ = false;
}

std::vector<SpecVolumes>& Spec::getVolumes()
{
    return volumes_;
}

void Spec::setVolumes(const std::vector<SpecVolumes>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool Spec::volumesIsSet() const
{
    return volumesIsSet_;
}

void Spec::unsetvolumes()
{
    volumesIsSet_ = false;
}

LogExportPath Spec::getLogExportPath() const
{
    return logExportPath_;
}

void Spec::setLogExportPath(const LogExportPath& value)
{
    logExportPath_ = value;
    logExportPathIsSet_ = true;
}

bool Spec::logExportPathIsSet() const
{
    return logExportPathIsSet_;
}

void Spec::unsetlogExportPath()
{
    logExportPathIsSet_ = false;
}

AutoStop Spec::getAutoStop() const
{
    return autoStop_;
}

void Spec::setAutoStop(const AutoStop& value)
{
    autoStop_ = value;
    autoStopIsSet_ = true;
}

bool Spec::autoStopIsSet() const
{
    return autoStopIsSet_;
}

void Spec::unsetautoStop()
{
    autoStopIsSet_ = false;
}

RetentionPolicy Spec::getRetention() const
{
    return retention_;
}

void Spec::setRetention(const RetentionPolicy& value)
{
    retention_ = value;
    retentionIsSet_ = true;
}

bool Spec::retentionIsSet() const
{
    return retentionIsSet_;
}

void Spec::unsetretention()
{
    retentionIsSet_ = false;
}

SchedulePolicy Spec::getSchedulePolicy() const
{
    return schedulePolicy_;
}

void Spec::setSchedulePolicy(const SchedulePolicy& value)
{
    schedulePolicy_ = value;
    schedulePolicyIsSet_ = true;
}

bool Spec::schedulePolicyIsSet() const
{
    return schedulePolicyIsSet_;
}

void Spec::unsetschedulePolicy()
{
    schedulePolicyIsSet_ = false;
}

LogExportConfig Spec::getLogExportConfig() const
{
    return logExportConfig_;
}

void Spec::setLogExportConfig(const LogExportConfig& value)
{
    logExportConfig_ = value;
    logExportConfigIsSet_ = true;
}

bool Spec::logExportConfigIsSet() const
{
    return logExportConfigIsSet_;
}

void Spec::unsetlogExportConfig()
{
    logExportConfigIsSet_ = false;
}

Notification Spec::getNotification() const
{
    return notification_;
}

void Spec::setNotification(const Notification& value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool Spec::notificationIsSet() const
{
    return notificationIsSet_;
}

void Spec::unsetnotification()
{
    notificationIsSet_ = false;
}

std::vector<CustomMetrics>& Spec::getCustomMetrics()
{
    return customMetrics_;
}

void Spec::setCustomMetrics(const std::vector<CustomMetrics>& value)
{
    customMetrics_ = value;
    customMetricsIsSet_ = true;
}

bool Spec::customMetricsIsSet() const
{
    return customMetricsIsSet_;
}

void Spec::unsetcustomMetrics()
{
    customMetricsIsSet_ = false;
}

OutputModel Spec::getOutputModel() const
{
    return outputModel_;
}

void Spec::setOutputModel(const OutputModel& value)
{
    outputModel_ = value;
    outputModelIsSet_ = true;
}

bool Spec::outputModelIsSet() const
{
    return outputModelIsSet_;
}

void Spec::unsetoutputModel()
{
    outputModelIsSet_ = false;
}

AssetModel Spec::getAssetModel() const
{
    return assetModel_;
}

void Spec::setAssetModel(const AssetModel& value)
{
    assetModel_ = value;
    assetModelIsSet_ = true;
}

bool Spec::assetModelIsSet() const
{
    return assetModelIsSet_;
}

void Spec::unsetassetModel()
{
    assetModelIsSet_ = false;
}

std::string Spec::getAssetId() const
{
    return assetId_;
}

void Spec::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool Spec::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void Spec::unsetassetId()
{
    assetIdIsSet_ = false;
}

ReserveTime Spec::getReservedTime() const
{
    return reservedTime_;
}

void Spec::setReservedTime(const ReserveTime& value)
{
    reservedTime_ = value;
    reservedTimeIsSet_ = true;
}

bool Spec::reservedTimeIsSet() const
{
    return reservedTimeIsSet_;
}

void Spec::unsetreservedTime()
{
    reservedTimeIsSet_ = false;
}

}
}
}
}
}



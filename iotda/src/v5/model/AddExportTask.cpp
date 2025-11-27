

#include "huaweicloud/iotda/v5/model/AddExportTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddExportTask::AddExportTask()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceConditionIsSet_ = false;
    exportFormat_ = "";
    exportFormatIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

AddExportTask::~AddExportTask() = default;

void AddExportTask::validate()
{
}

web::json::value AddExportTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceConditionIsSet_) {
        val[utility::conversions::to_string_t("resource_condition")] = ModelBase::toJson(resourceCondition_);
    }
    if(exportFormatIsSet_) {
        val[utility::conversions::to_string_t("export_format")] = ModelBase::toJson(exportFormat_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AddExportTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_condition"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string AddExportTask::getResourceType() const
{
    return resourceType_;
}

void AddExportTask::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool AddExportTask::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void AddExportTask::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

Object AddExportTask::getResourceCondition() const
{
    return resourceCondition_;
}

void AddExportTask::setResourceCondition(const Object& value)
{
    resourceCondition_ = value;
    resourceConditionIsSet_ = true;
}

bool AddExportTask::resourceConditionIsSet() const
{
    return resourceConditionIsSet_;
}

void AddExportTask::unsetresourceCondition()
{
    resourceConditionIsSet_ = false;
}

std::string AddExportTask::getExportFormat() const
{
    return exportFormat_;
}

void AddExportTask::setExportFormat(const std::string& value)
{
    exportFormat_ = value;
    exportFormatIsSet_ = true;
}

bool AddExportTask::exportFormatIsSet() const
{
    return exportFormatIsSet_;
}

void AddExportTask::unsetexportFormat()
{
    exportFormatIsSet_ = false;
}

std::string AddExportTask::getAppType() const
{
    return appType_;
}

void AddExportTask::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool AddExportTask::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void AddExportTask::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string AddExportTask::getAppId() const
{
    return appId_;
}

void AddExportTask::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddExportTask::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddExportTask::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}



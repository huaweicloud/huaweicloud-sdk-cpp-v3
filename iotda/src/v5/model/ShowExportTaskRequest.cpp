

#include "huaweicloud/iotda/v5/model/ShowExportTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowExportTaskRequest::ShowExportTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    exportTaskId_ = "";
    exportTaskIdIsSet_ = false;
}

ShowExportTaskRequest::~ShowExportTaskRequest() = default;

void ShowExportTaskRequest::validate()
{
}

web::json::value ShowExportTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(exportTaskIdIsSet_) {
        val[utility::conversions::to_string_t("export_task_id")] = ModelBase::toJson(exportTaskId_);
    }

    return val;
}
bool ShowExportTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportTaskId(refVal);
        }
    }
    return ok;
}


std::string ShowExportTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowExportTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowExportTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowExportTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowExportTaskRequest::getExportTaskId() const
{
    return exportTaskId_;
}

void ShowExportTaskRequest::setExportTaskId(const std::string& value)
{
    exportTaskId_ = value;
    exportTaskIdIsSet_ = true;
}

bool ShowExportTaskRequest::exportTaskIdIsSet() const
{
    return exportTaskIdIsSet_;
}

void ShowExportTaskRequest::unsetexportTaskId()
{
    exportTaskIdIsSet_ = false;
}

}
}
}
}
}



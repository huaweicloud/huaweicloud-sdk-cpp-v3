

#include "huaweicloud/iotda/v5/model/DeleteExportTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteExportTaskRequest::DeleteExportTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    exportTaskId_ = "";
    exportTaskIdIsSet_ = false;
}

DeleteExportTaskRequest::~DeleteExportTaskRequest() = default;

void DeleteExportTaskRequest::validate()
{
}

web::json::value DeleteExportTaskRequest::toJson() const
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
bool DeleteExportTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteExportTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteExportTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteExportTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteExportTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteExportTaskRequest::getExportTaskId() const
{
    return exportTaskId_;
}

void DeleteExportTaskRequest::setExportTaskId(const std::string& value)
{
    exportTaskId_ = value;
    exportTaskIdIsSet_ = true;
}

bool DeleteExportTaskRequest::exportTaskIdIsSet() const
{
    return exportTaskIdIsSet_;
}

void DeleteExportTaskRequest::unsetexportTaskId()
{
    exportTaskIdIsSet_ = false;
}

}
}
}
}
}



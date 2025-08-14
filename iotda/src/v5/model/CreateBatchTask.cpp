

#include "huaweicloud/iotda/v5/model/CreateBatchTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateBatchTask::CreateBatchTask()
{
    appId_ = "";
    appIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    taskMode_ = "";
    taskModeIsSet_ = false;
    taskExtInfoIsSet_ = false;
    targetsIsSet_ = false;
    targetsFilterIsSet_ = false;
    documentIsSet_ = false;
    taskPolicyIsSet_ = false;
    documentSource_ = "";
    documentSourceIsSet_ = false;
}

CreateBatchTask::~CreateBatchTask() = default;

void CreateBatchTask::validate()
{
}

web::json::value CreateBatchTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(taskModeIsSet_) {
        val[utility::conversions::to_string_t("task_mode")] = ModelBase::toJson(taskMode_);
    }
    if(taskExtInfoIsSet_) {
        val[utility::conversions::to_string_t("task_ext_info")] = ModelBase::toJson(taskExtInfo_);
    }
    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }
    if(targetsFilterIsSet_) {
        val[utility::conversions::to_string_t("targets_filter")] = ModelBase::toJson(targetsFilter_);
    }
    if(documentIsSet_) {
        val[utility::conversions::to_string_t("document")] = ModelBase::toJson(document_);
    }
    if(taskPolicyIsSet_) {
        val[utility::conversions::to_string_t("task_policy")] = ModelBase::toJson(taskPolicy_);
    }
    if(documentSourceIsSet_) {
        val[utility::conversions::to_string_t("document_source")] = ModelBase::toJson(documentSource_);
    }

    return val;
}
bool CreateBatchTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ext_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ext_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskExtInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targets_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets_filter"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetsFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocument(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_policy"));
        if(!fieldValue.is_null())
        {
            TaskPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentSource(refVal);
        }
    }
    return ok;
}


std::string CreateBatchTask::getAppId() const
{
    return appId_;
}

void CreateBatchTask::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateBatchTask::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateBatchTask::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateBatchTask::getTaskName() const
{
    return taskName_;
}

void CreateBatchTask::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateBatchTask::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateBatchTask::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string CreateBatchTask::getTaskType() const
{
    return taskType_;
}

void CreateBatchTask::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool CreateBatchTask::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void CreateBatchTask::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string CreateBatchTask::getTaskMode() const
{
    return taskMode_;
}

void CreateBatchTask::setTaskMode(const std::string& value)
{
    taskMode_ = value;
    taskModeIsSet_ = true;
}

bool CreateBatchTask::taskModeIsSet() const
{
    return taskModeIsSet_;
}

void CreateBatchTask::unsettaskMode()
{
    taskModeIsSet_ = false;
}

Object CreateBatchTask::getTaskExtInfo() const
{
    return taskExtInfo_;
}

void CreateBatchTask::setTaskExtInfo(const Object& value)
{
    taskExtInfo_ = value;
    taskExtInfoIsSet_ = true;
}

bool CreateBatchTask::taskExtInfoIsSet() const
{
    return taskExtInfoIsSet_;
}

void CreateBatchTask::unsettaskExtInfo()
{
    taskExtInfoIsSet_ = false;
}

std::vector<std::string>& CreateBatchTask::getTargets()
{
    return targets_;
}

void CreateBatchTask::setTargets(const std::vector<std::string>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool CreateBatchTask::targetsIsSet() const
{
    return targetsIsSet_;
}

void CreateBatchTask::unsettargets()
{
    targetsIsSet_ = false;
}

std::map<std::string, Object>& CreateBatchTask::getTargetsFilter()
{
    return targetsFilter_;
}

void CreateBatchTask::setTargetsFilter(const std::map<std::string, Object>& value)
{
    targetsFilter_ = value;
    targetsFilterIsSet_ = true;
}

bool CreateBatchTask::targetsFilterIsSet() const
{
    return targetsFilterIsSet_;
}

void CreateBatchTask::unsettargetsFilter()
{
    targetsFilterIsSet_ = false;
}

Object CreateBatchTask::getDocument() const
{
    return document_;
}

void CreateBatchTask::setDocument(const Object& value)
{
    document_ = value;
    documentIsSet_ = true;
}

bool CreateBatchTask::documentIsSet() const
{
    return documentIsSet_;
}

void CreateBatchTask::unsetdocument()
{
    documentIsSet_ = false;
}

TaskPolicy CreateBatchTask::getTaskPolicy() const
{
    return taskPolicy_;
}

void CreateBatchTask::setTaskPolicy(const TaskPolicy& value)
{
    taskPolicy_ = value;
    taskPolicyIsSet_ = true;
}

bool CreateBatchTask::taskPolicyIsSet() const
{
    return taskPolicyIsSet_;
}

void CreateBatchTask::unsettaskPolicy()
{
    taskPolicyIsSet_ = false;
}

std::string CreateBatchTask::getDocumentSource() const
{
    return documentSource_;
}

void CreateBatchTask::setDocumentSource(const std::string& value)
{
    documentSource_ = value;
    documentSourceIsSet_ = true;
}

bool CreateBatchTask::documentSourceIsSet() const
{
    return documentSourceIsSet_;
}

void CreateBatchTask::unsetdocumentSource()
{
    documentSourceIsSet_ = false;
}

}
}
}
}
}



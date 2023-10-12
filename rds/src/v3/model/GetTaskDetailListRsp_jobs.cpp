

#include "huaweicloud/rds/v3/model/GetTaskDetailListRsp_jobs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetTaskDetailListRsp_jobs::GetTaskDetailListRsp_jobs()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    ended_ = "";
    endedIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    taskDetail_ = "";
    taskDetailIsSet_ = false;
    instanceIsSet_ = false;
    entitiesIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

GetTaskDetailListRsp_jobs::~GetTaskDetailListRsp_jobs() = default;

void GetTaskDetailListRsp_jobs::validate()
{
}

web::json::value GetTaskDetailListRsp_jobs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(endedIsSet_) {
        val[utility::conversions::to_string_t("ended")] = ModelBase::toJson(ended_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(taskDetailIsSet_) {
        val[utility::conversions::to_string_t("task_detail")] = ModelBase::toJson(taskDetail_);
    }
    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool GetTaskDetailListRsp_jobs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ended"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            GetTaskDetailListRsp_jobs_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string GetTaskDetailListRsp_jobs::getId() const
{
    return id_;
}

void GetTaskDetailListRsp_jobs::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::idIsSet() const
{
    return idIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetid()
{
    idIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getName() const
{
    return name_;
}

void GetTaskDetailListRsp_jobs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::nameIsSet() const
{
    return nameIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetname()
{
    nameIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getStatus() const
{
    return status_;
}

void GetTaskDetailListRsp_jobs::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::statusIsSet() const
{
    return statusIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getCreated() const
{
    return created_;
}

void GetTaskDetailListRsp_jobs::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::createdIsSet() const
{
    return createdIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetcreated()
{
    createdIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getEnded() const
{
    return ended_;
}

void GetTaskDetailListRsp_jobs::setEnded(const std::string& value)
{
    ended_ = value;
    endedIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::endedIsSet() const
{
    return endedIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetended()
{
    endedIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getProcess() const
{
    return process_;
}

void GetTaskDetailListRsp_jobs::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::processIsSet() const
{
    return processIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetprocess()
{
    processIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getTaskDetail() const
{
    return taskDetail_;
}

void GetTaskDetailListRsp_jobs::setTaskDetail(const std::string& value)
{
    taskDetail_ = value;
    taskDetailIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::taskDetailIsSet() const
{
    return taskDetailIsSet_;
}

void GetTaskDetailListRsp_jobs::unsettaskDetail()
{
    taskDetailIsSet_ = false;
}

GetTaskDetailListRsp_jobs_instance GetTaskDetailListRsp_jobs::getInstance() const
{
    return instance_;
}

void GetTaskDetailListRsp_jobs::setInstance(const GetTaskDetailListRsp_jobs_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::instanceIsSet() const
{
    return instanceIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetinstance()
{
    instanceIsSet_ = false;
}

Object GetTaskDetailListRsp_jobs::getEntities() const
{
    return entities_;
}

void GetTaskDetailListRsp_jobs::setEntities(const Object& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs::getFailReason() const
{
    return failReason_;
}

void GetTaskDetailListRsp_jobs::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void GetTaskDetailListRsp_jobs::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/GetJobInfoResponseBody_job.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetJobInfoResponseBody_job::GetJobInfoResponseBody_job()
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
    instanceIsSet_ = false;
    entitiesIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

GetJobInfoResponseBody_job::~GetJobInfoResponseBody_job() = default;

void GetJobInfoResponseBody_job::validate()
{
}

web::json::value GetJobInfoResponseBody_job::toJson() const
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
bool GetJobInfoResponseBody_job::fromJson(const web::json::value& val)
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


std::string GetJobInfoResponseBody_job::getId() const
{
    return id_;
}

void GetJobInfoResponseBody_job::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetJobInfoResponseBody_job::idIsSet() const
{
    return idIsSet_;
}

void GetJobInfoResponseBody_job::unsetid()
{
    idIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getName() const
{
    return name_;
}

void GetJobInfoResponseBody_job::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetJobInfoResponseBody_job::nameIsSet() const
{
    return nameIsSet_;
}

void GetJobInfoResponseBody_job::unsetname()
{
    nameIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getStatus() const
{
    return status_;
}

void GetJobInfoResponseBody_job::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetJobInfoResponseBody_job::statusIsSet() const
{
    return statusIsSet_;
}

void GetJobInfoResponseBody_job::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getCreated() const
{
    return created_;
}

void GetJobInfoResponseBody_job::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool GetJobInfoResponseBody_job::createdIsSet() const
{
    return createdIsSet_;
}

void GetJobInfoResponseBody_job::unsetcreated()
{
    createdIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getEnded() const
{
    return ended_;
}

void GetJobInfoResponseBody_job::setEnded(const std::string& value)
{
    ended_ = value;
    endedIsSet_ = true;
}

bool GetJobInfoResponseBody_job::endedIsSet() const
{
    return endedIsSet_;
}

void GetJobInfoResponseBody_job::unsetended()
{
    endedIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getProcess() const
{
    return process_;
}

void GetJobInfoResponseBody_job::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool GetJobInfoResponseBody_job::processIsSet() const
{
    return processIsSet_;
}

void GetJobInfoResponseBody_job::unsetprocess()
{
    processIsSet_ = false;
}

GetTaskDetailListRsp_jobs_instance GetJobInfoResponseBody_job::getInstance() const
{
    return instance_;
}

void GetJobInfoResponseBody_job::setInstance(const GetTaskDetailListRsp_jobs_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool GetJobInfoResponseBody_job::instanceIsSet() const
{
    return instanceIsSet_;
}

void GetJobInfoResponseBody_job::unsetinstance()
{
    instanceIsSet_ = false;
}

Object GetJobInfoResponseBody_job::getEntities() const
{
    return entities_;
}

void GetJobInfoResponseBody_job::setEntities(const Object& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool GetJobInfoResponseBody_job::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void GetJobInfoResponseBody_job::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string GetJobInfoResponseBody_job::getFailReason() const
{
    return failReason_;
}

void GetJobInfoResponseBody_job::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool GetJobInfoResponseBody_job::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void GetJobInfoResponseBody_job::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}



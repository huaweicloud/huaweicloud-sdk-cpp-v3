

#include "huaweicloud/gaussdb/v3/model/GetJobInfoDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GetJobInfoDetail::GetJobInfoDetail()
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

GetJobInfoDetail::~GetJobInfoDetail() = default;

void GetJobInfoDetail::validate()
{
}

web::json::value GetJobInfoDetail::toJson() const
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

bool GetJobInfoDetail::fromJson(const web::json::value& val)
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
            GetJobInstanceInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            GetJobEntitiesInfoDetail refVal;
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

std::string GetJobInfoDetail::getId() const
{
    return id_;
}

void GetJobInfoDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetJobInfoDetail::idIsSet() const
{
    return idIsSet_;
}

void GetJobInfoDetail::unsetid()
{
    idIsSet_ = false;
}

std::string GetJobInfoDetail::getName() const
{
    return name_;
}

void GetJobInfoDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetJobInfoDetail::nameIsSet() const
{
    return nameIsSet_;
}

void GetJobInfoDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string GetJobInfoDetail::getStatus() const
{
    return status_;
}

void GetJobInfoDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetJobInfoDetail::statusIsSet() const
{
    return statusIsSet_;
}

void GetJobInfoDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GetJobInfoDetail::getCreated() const
{
    return created_;
}

void GetJobInfoDetail::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool GetJobInfoDetail::createdIsSet() const
{
    return createdIsSet_;
}

void GetJobInfoDetail::unsetcreated()
{
    createdIsSet_ = false;
}

std::string GetJobInfoDetail::getEnded() const
{
    return ended_;
}

void GetJobInfoDetail::setEnded(const std::string& value)
{
    ended_ = value;
    endedIsSet_ = true;
}

bool GetJobInfoDetail::endedIsSet() const
{
    return endedIsSet_;
}

void GetJobInfoDetail::unsetended()
{
    endedIsSet_ = false;
}

std::string GetJobInfoDetail::getProcess() const
{
    return process_;
}

void GetJobInfoDetail::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool GetJobInfoDetail::processIsSet() const
{
    return processIsSet_;
}

void GetJobInfoDetail::unsetprocess()
{
    processIsSet_ = false;
}

GetJobInstanceInfoDetail GetJobInfoDetail::getInstance() const
{
    return instance_;
}

void GetJobInfoDetail::setInstance(const GetJobInstanceInfoDetail& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool GetJobInfoDetail::instanceIsSet() const
{
    return instanceIsSet_;
}

void GetJobInfoDetail::unsetinstance()
{
    instanceIsSet_ = false;
}

GetJobEntitiesInfoDetail GetJobInfoDetail::getEntities() const
{
    return entities_;
}

void GetJobInfoDetail::setEntities(const GetJobEntitiesInfoDetail& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool GetJobInfoDetail::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void GetJobInfoDetail::unsetentities()
{
    entitiesIsSet_ = false;
}

std::string GetJobInfoDetail::getFailReason() const
{
    return failReason_;
}

void GetJobInfoDetail::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool GetJobInfoDetail::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void GetJobInfoDetail::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdb/v3/model/ChQueryActionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChQueryActionInfo::ChQueryActionInfo()
{
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
}

ChQueryActionInfo::~ChQueryActionInfo() = default;

void ChQueryActionInfo::validate()
{
}

web::json::value ChQueryActionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ChQueryActionInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string ChQueryActionInfo::getId() const
{
    return id_;
}

void ChQueryActionInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChQueryActionInfo::idIsSet() const
{
    return idIsSet_;
}

void ChQueryActionInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ChQueryActionInfo::getAction() const
{
    return action_;
}

void ChQueryActionInfo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ChQueryActionInfo::actionIsSet() const
{
    return actionIsSet_;
}

void ChQueryActionInfo::unsetaction()
{
    actionIsSet_ = false;
}

std::string ChQueryActionInfo::getObjectId() const
{
    return objectId_;
}

void ChQueryActionInfo::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ChQueryActionInfo::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ChQueryActionInfo::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ChQueryActionInfo::getType() const
{
    return type_;
}

void ChQueryActionInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ChQueryActionInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ChQueryActionInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ChQueryActionInfo::getJobId() const
{
    return jobId_;
}

void ChQueryActionInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChQueryActionInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChQueryActionInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ChQueryActionInfo::getStatus() const
{
    return status_;
}

void ChQueryActionInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChQueryActionInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ChQueryActionInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ChQueryActionInfo::getCreatedAt() const
{
    return createdAt_;
}

void ChQueryActionInfo::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ChQueryActionInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ChQueryActionInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t ChQueryActionInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void ChQueryActionInfo::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ChQueryActionInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ChQueryActionInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/gaussdbforopengauss/v3/model/RecordInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RecordInfoResponse::RecordInfoResponse()
{
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    entityId_ = "";
    entityIdIsSet_ = false;
    entityType_ = "";
    entityTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    extendedInfoIsSet_ = false;
}

RecordInfoResponse::~RecordInfoResponse() = default;

void RecordInfoResponse::validate()
{
}

web::json::value RecordInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(entityTypeIsSet_) {
        val[utility::conversions::to_string_t("entity_type")] = ModelBase::toJson(entityType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(extendedInfoIsSet_) {
        val[utility::conversions::to_string_t("extended_info")] = ModelBase::toJson(extendedInfo_);
    }

    return val;
}
bool RecordInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extended_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extended_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendedInfo(refVal);
        }
    }
    return ok;
}


std::string RecordInfoResponse::getId() const
{
    return id_;
}

void RecordInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecordInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void RecordInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string RecordInfoResponse::getAction() const
{
    return action_;
}

void RecordInfoResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RecordInfoResponse::actionIsSet() const
{
    return actionIsSet_;
}

void RecordInfoResponse::unsetaction()
{
    actionIsSet_ = false;
}

std::string RecordInfoResponse::getStatus() const
{
    return status_;
}

void RecordInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RecordInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RecordInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RecordInfoResponse::getMessage() const
{
    return message_;
}

void RecordInfoResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RecordInfoResponse::messageIsSet() const
{
    return messageIsSet_;
}

void RecordInfoResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string RecordInfoResponse::getEntityId() const
{
    return entityId_;
}

void RecordInfoResponse::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool RecordInfoResponse::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void RecordInfoResponse::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string RecordInfoResponse::getEntityType() const
{
    return entityType_;
}

void RecordInfoResponse::setEntityType(const std::string& value)
{
    entityType_ = value;
    entityTypeIsSet_ = true;
}

bool RecordInfoResponse::entityTypeIsSet() const
{
    return entityTypeIsSet_;
}

void RecordInfoResponse::unsetentityType()
{
    entityTypeIsSet_ = false;
}

std::string RecordInfoResponse::getJobId() const
{
    return jobId_;
}

void RecordInfoResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RecordInfoResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RecordInfoResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RecordInfoResponse::getInstanceId() const
{
    return instanceId_;
}

void RecordInfoResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RecordInfoResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RecordInfoResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RecordInfoResponse::getCreatedAt() const
{
    return createdAt_;
}

void RecordInfoResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecordInfoResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecordInfoResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecordInfoResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void RecordInfoResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RecordInfoResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RecordInfoResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

Object RecordInfoResponse::getExtendedInfo() const
{
    return extendedInfo_;
}

void RecordInfoResponse::setExtendedInfo(const Object& value)
{
    extendedInfo_ = value;
    extendedInfoIsSet_ = true;
}

bool RecordInfoResponse::extendedInfoIsSet() const
{
    return extendedInfoIsSet_;
}

void RecordInfoResponse::unsetextendedInfo()
{
    extendedInfoIsSet_ = false;
}

}
}
}
}
}



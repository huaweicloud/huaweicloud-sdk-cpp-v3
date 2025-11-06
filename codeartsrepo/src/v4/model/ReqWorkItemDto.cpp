

#include "huaweicloud/codeartsrepo/v4/model/ReqWorkItemDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ReqWorkItemDto::ReqWorkItemDto()
{
    id_ = "";
    idIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    trackerIsSet_ = false;
    statusIsSet_ = false;
    priorityIsSet_ = false;
}

ReqWorkItemDto::~ReqWorkItemDto() = default;

void ReqWorkItemDto::validate()
{
}

web::json::value ReqWorkItemDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool ReqWorkItemDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            ReqWorkItemBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ReqWorkItemBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            ReqWorkItemBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


std::string ReqWorkItemDto::getId() const
{
    return id_;
}

void ReqWorkItemDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReqWorkItemDto::idIsSet() const
{
    return idIsSet_;
}

void ReqWorkItemDto::unsetid()
{
    idIsSet_ = false;
}

std::string ReqWorkItemDto::getSubject() const
{
    return subject_;
}

void ReqWorkItemDto::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ReqWorkItemDto::subjectIsSet() const
{
    return subjectIsSet_;
}

void ReqWorkItemDto::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ReqWorkItemDto::getSequence() const
{
    return sequence_;
}

void ReqWorkItemDto::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ReqWorkItemDto::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ReqWorkItemDto::unsetsequence()
{
    sequenceIsSet_ = false;
}

ReqWorkItemBasicDto ReqWorkItemDto::getTracker() const
{
    return tracker_;
}

void ReqWorkItemDto::setTracker(const ReqWorkItemBasicDto& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool ReqWorkItemDto::trackerIsSet() const
{
    return trackerIsSet_;
}

void ReqWorkItemDto::unsettracker()
{
    trackerIsSet_ = false;
}

ReqWorkItemBasicDto ReqWorkItemDto::getStatus() const
{
    return status_;
}

void ReqWorkItemDto::setStatus(const ReqWorkItemBasicDto& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReqWorkItemDto::statusIsSet() const
{
    return statusIsSet_;
}

void ReqWorkItemDto::unsetstatus()
{
    statusIsSet_ = false;
}

ReqWorkItemBasicDto ReqWorkItemDto::getPriority() const
{
    return priority_;
}

void ReqWorkItemDto::setPriority(const ReqWorkItemBasicDto& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ReqWorkItemDto::priorityIsSet() const
{
    return priorityIsSet_;
}

void ReqWorkItemDto::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}



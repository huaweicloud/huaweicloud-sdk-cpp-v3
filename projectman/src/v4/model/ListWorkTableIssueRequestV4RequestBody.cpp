

#include "huaweicloud/projectman/v4/model/ListWorkTableIssueRequestV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkTableIssueRequestV4RequestBody::ListWorkTableIssueRequestV4RequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    createdOn_ = "";
    createdOnIsSet_ = false;
    updatedOn_ = "";
    updatedOnIsSet_ = false;
    closedOn_ = "";
    closedOnIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    developerId_ = "";
    developerIdIsSet_ = false;
    priorityId_ = "";
    priorityIdIsSet_ = false;
}

ListWorkTableIssueRequestV4RequestBody::~ListWorkTableIssueRequestV4RequestBody() = default;

void ListWorkTableIssueRequestV4RequestBody::validate()
{
}

web::json::value ListWorkTableIssueRequestV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("created_on")] = ModelBase::toJson(createdOn_);
    }
    if(updatedOnIsSet_) {
        val[utility::conversions::to_string_t("updated_on")] = ModelBase::toJson(updatedOn_);
    }
    if(closedOnIsSet_) {
        val[utility::conversions::to_string_t("closed_on")] = ModelBase::toJson(closedOn_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(developerIdIsSet_) {
        val[utility::conversions::to_string_t("developer_id")] = ModelBase::toJson(developerId_);
    }
    if(priorityIdIsSet_) {
        val[utility::conversions::to_string_t("priority_id")] = ModelBase::toJson(priorityId_);
    }

    return val;
}
bool ListWorkTableIssueRequestV4RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloperId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityId(refVal);
        }
    }
    return ok;
}


int32_t ListWorkTableIssueRequestV4RequestBody::getOffset() const
{
    return offset_;
}

void ListWorkTableIssueRequestV4RequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWorkTableIssueRequestV4RequestBody::getLimit() const
{
    return limit_;
}

void ListWorkTableIssueRequestV4RequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getSubject() const
{
    return subject_;
}

void ListWorkTableIssueRequestV4RequestBody::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::subjectIsSet() const
{
    return subjectIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getCreatedOn() const
{
    return createdOn_;
}

void ListWorkTableIssueRequestV4RequestBody::setCreatedOn(const std::string& value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getUpdatedOn() const
{
    return updatedOn_;
}

void ListWorkTableIssueRequestV4RequestBody::setUpdatedOn(const std::string& value)
{
    updatedOn_ = value;
    updatedOnIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::updatedOnIsSet() const
{
    return updatedOnIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetupdatedOn()
{
    updatedOnIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getClosedOn() const
{
    return closedOn_;
}

void ListWorkTableIssueRequestV4RequestBody::setClosedOn(const std::string& value)
{
    closedOn_ = value;
    closedOnIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::closedOnIsSet() const
{
    return closedOnIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetclosedOn()
{
    closedOnIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getStartDate() const
{
    return startDate_;
}

void ListWorkTableIssueRequestV4RequestBody::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getDueDate() const
{
    return dueDate_;
}

void ListWorkTableIssueRequestV4RequestBody::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetdueDate()
{
    dueDateIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getTrackerId() const
{
    return trackerId_;
}

void ListWorkTableIssueRequestV4RequestBody::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getStatusId() const
{
    return statusId_;
}

void ListWorkTableIssueRequestV4RequestBody::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getAuthorId() const
{
    return authorId_;
}

void ListWorkTableIssueRequestV4RequestBody::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getDeveloperId() const
{
    return developerId_;
}

void ListWorkTableIssueRequestV4RequestBody::setDeveloperId(const std::string& value)
{
    developerId_ = value;
    developerIdIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::developerIdIsSet() const
{
    return developerIdIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetdeveloperId()
{
    developerIdIsSet_ = false;
}

std::string ListWorkTableIssueRequestV4RequestBody::getPriorityId() const
{
    return priorityId_;
}

void ListWorkTableIssueRequestV4RequestBody::setPriorityId(const std::string& value)
{
    priorityId_ = value;
    priorityIdIsSet_ = true;
}

bool ListWorkTableIssueRequestV4RequestBody::priorityIdIsSet() const
{
    return priorityIdIsSet_;
}

void ListWorkTableIssueRequestV4RequestBody::unsetpriorityId()
{
    priorityIdIsSet_ = false;
}

}
}
}
}
}



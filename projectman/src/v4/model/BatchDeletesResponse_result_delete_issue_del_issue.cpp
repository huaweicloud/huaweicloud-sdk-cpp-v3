

#include "huaweicloud/projectman/v4/model/BatchDeletesResponse_result_delete_issue_del_issue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeletesResponse_result_delete_issue_del_issue::BatchDeletesResponse_result_delete_issue_del_issue()
{
    id_ = 0;
    idIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    expectedWorkHours_ = 0;
    expectedWorkHoursIsSet_ = false;
    actualWorkHours_ = 0;
    actualWorkHoursIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    isArchived_ = false;
    isArchivedIsSet_ = false;
}

BatchDeletesResponse_result_delete_issue_del_issue::~BatchDeletesResponse_result_delete_issue_del_issue() = default;

void BatchDeletesResponse_result_delete_issue_del_issue::validate()
{
}

web::json::value BatchDeletesResponse_result_delete_issue_del_issue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(doneRatioIsSet_) {
        val[utility::conversions::to_string_t("done_ratio")] = ModelBase::toJson(doneRatio_);
    }
    if(expectedWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("expected_work_hours")] = ModelBase::toJson(expectedWorkHours_);
    }
    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(isArchivedIsSet_) {
        val[utility::conversions::to_string_t("is_archived")] = ModelBase::toJson(isArchived_);
    }

    return val;
}
bool BatchDeletesResponse_result_delete_issue_del_issue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("done_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("done_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDoneRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expected_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected_work_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_work_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsArchived(refVal);
        }
    }
    return ok;
}


int32_t BatchDeletesResponse_result_delete_issue_del_issue::getId() const
{
    return id_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::idIsSet() const
{
    return idIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetid()
{
    idIsSet_ = false;
}

int32_t BatchDeletesResponse_result_delete_issue_del_issue::getTrackerId() const
{
    return trackerId_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string BatchDeletesResponse_result_delete_issue_del_issue::getSubject() const
{
    return subject_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::subjectIsSet() const
{
    return subjectIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetsubject()
{
    subjectIsSet_ = false;
}

int32_t BatchDeletesResponse_result_delete_issue_del_issue::getStatusId() const
{
    return statusId_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetstatusId()
{
    statusIdIsSet_ = false;
}

int32_t BatchDeletesResponse_result_delete_issue_del_issue::getDoneRatio() const
{
    return doneRatio_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

int32_t BatchDeletesResponse_result_delete_issue_del_issue::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setExpectedWorkHours(int32_t value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t BatchDeletesResponse_result_delete_issue_del_issue::getActualWorkHours() const
{
    return actualWorkHours_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setActualWorkHours(int32_t value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::isDeleted() const
{
    return deleted_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::deletedIsSet() const
{
    return deletedIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetdeleted()
{
    deletedIsSet_ = false;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::isIsArchived() const
{
    return isArchived_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::setIsArchived(bool value)
{
    isArchived_ = value;
    isArchivedIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue_del_issue::isArchivedIsSet() const
{
    return isArchivedIsSet_;
}

void BatchDeletesResponse_result_delete_issue_del_issue::unsetisArchived()
{
    isArchivedIsSet_ = false;
}

}
}
}
}
}



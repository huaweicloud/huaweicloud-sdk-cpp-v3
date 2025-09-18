

#include "huaweicloud/projectman/v4/model/WorkitemStatusRecords.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkitemStatusRecords::WorkitemStatusRecords()
{
    workItemRecordId_ = "";
    workItemRecordIdIsSet_ = false;
    workItemId_ = "";
    workItemIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    workItemStatusesIsSet_ = false;
}

WorkitemStatusRecords::~WorkitemStatusRecords() = default;

void WorkitemStatusRecords::validate()
{
}

web::json::value WorkitemStatusRecords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workItemRecordIdIsSet_) {
        val[utility::conversions::to_string_t("work_item_record_id")] = ModelBase::toJson(workItemRecordId_);
    }
    if(workItemIdIsSet_) {
        val[utility::conversions::to_string_t("work_item_id")] = ModelBase::toJson(workItemId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(workItemStatusesIsSet_) {
        val[utility::conversions::to_string_t("work_item_statuses")] = ModelBase::toJson(workItemStatuses_);
    }

    return val;
}
bool WorkitemStatusRecords::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_item_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_item_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_statuses"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkitemStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemStatuses(refVal);
        }
    }
    return ok;
}


std::string WorkitemStatusRecords::getWorkItemRecordId() const
{
    return workItemRecordId_;
}

void WorkitemStatusRecords::setWorkItemRecordId(const std::string& value)
{
    workItemRecordId_ = value;
    workItemRecordIdIsSet_ = true;
}

bool WorkitemStatusRecords::workItemRecordIdIsSet() const
{
    return workItemRecordIdIsSet_;
}

void WorkitemStatusRecords::unsetworkItemRecordId()
{
    workItemRecordIdIsSet_ = false;
}

std::string WorkitemStatusRecords::getWorkItemId() const
{
    return workItemId_;
}

void WorkitemStatusRecords::setWorkItemId(const std::string& value)
{
    workItemId_ = value;
    workItemIdIsSet_ = true;
}

bool WorkitemStatusRecords::workItemIdIsSet() const
{
    return workItemIdIsSet_;
}

void WorkitemStatusRecords::unsetworkItemId()
{
    workItemIdIsSet_ = false;
}

std::string WorkitemStatusRecords::getProjectId() const
{
    return projectId_;
}

void WorkitemStatusRecords::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool WorkitemStatusRecords::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void WorkitemStatusRecords::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<WorkitemStatus>& WorkitemStatusRecords::getWorkItemStatuses()
{
    return workItemStatuses_;
}

void WorkitemStatusRecords::setWorkItemStatuses(const std::vector<WorkitemStatus>& value)
{
    workItemStatuses_ = value;
    workItemStatusesIsSet_ = true;
}

bool WorkitemStatusRecords::workItemStatusesIsSet() const
{
    return workItemStatusesIsSet_;
}

void WorkitemStatusRecords::unsetworkItemStatuses()
{
    workItemStatusesIsSet_ = false;
}

}
}
}
}
}



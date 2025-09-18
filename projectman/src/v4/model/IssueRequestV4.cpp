

#include "huaweicloud/projectman/v4/model/IssueRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueRequestV4::IssueRequestV4()
{
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedId_ = 0;
    assignedIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    developerId_ = 0;
    developerIdIsSet_ = false;
    domainId_ = 0;
    domainIdIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    expectedWorkHours_ = 0.0;
    expectedWorkHoursIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    moduleId_ = 0;
    moduleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentIssueId_ = 0;
    parentIssueIdIsSet_ = false;
    priorityId_ = 0;
    priorityIdIsSet_ = false;
    severityId_ = 0;
    severityIdIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    newCustomFieldsIsSet_ = false;
}

IssueRequestV4::~IssueRequestV4() = default;

void IssueRequestV4::validate()
{
}

web::json::value IssueRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(assignedIdIsSet_) {
        val[utility::conversions::to_string_t("assigned_id")] = ModelBase::toJson(assignedId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(developerIdIsSet_) {
        val[utility::conversions::to_string_t("developer_id")] = ModelBase::toJson(developerId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(doneRatioIsSet_) {
        val[utility::conversions::to_string_t("done_ratio")] = ModelBase::toJson(doneRatio_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(expectedWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("expected_work_hours")] = ModelBase::toJson(expectedWorkHours_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIssueIdIsSet_) {
        val[utility::conversions::to_string_t("parent_issue_id")] = ModelBase::toJson(parentIssueId_);
    }
    if(priorityIdIsSet_) {
        val[utility::conversions::to_string_t("priority_id")] = ModelBase::toJson(priorityId_);
    }
    if(severityIdIsSet_) {
        val[utility::conversions::to_string_t("severity_id")] = ModelBase::toJson(severityId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(newCustomFieldsIsSet_) {
        val[utility::conversions::to_string_t("new_custom_fields")] = ModelBase::toJson(newCustomFields_);
    }

    return val;
}
bool IssueRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("actual_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_work_hours"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloperId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expected_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected_work_hours"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<NewCustomField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewCustomFields(refVal);
        }
    }
    return ok;
}


double IssueRequestV4::getActualWorkHours() const
{
    return actualWorkHours_;
}

void IssueRequestV4::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool IssueRequestV4::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void IssueRequestV4::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

int32_t IssueRequestV4::getAssignedId() const
{
    return assignedId_;
}

void IssueRequestV4::setAssignedId(int32_t value)
{
    assignedId_ = value;
    assignedIdIsSet_ = true;
}

bool IssueRequestV4::assignedIdIsSet() const
{
    return assignedIdIsSet_;
}

void IssueRequestV4::unsetassignedId()
{
    assignedIdIsSet_ = false;
}

std::string IssueRequestV4::getBeginTime() const
{
    return beginTime_;
}

void IssueRequestV4::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool IssueRequestV4::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void IssueRequestV4::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string IssueRequestV4::getDescription() const
{
    return description_;
}

void IssueRequestV4::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueRequestV4::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueRequestV4::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t IssueRequestV4::getDeveloperId() const
{
    return developerId_;
}

void IssueRequestV4::setDeveloperId(int32_t value)
{
    developerId_ = value;
    developerIdIsSet_ = true;
}

bool IssueRequestV4::developerIdIsSet() const
{
    return developerIdIsSet_;
}

void IssueRequestV4::unsetdeveloperId()
{
    developerIdIsSet_ = false;
}

int32_t IssueRequestV4::getDomainId() const
{
    return domainId_;
}

void IssueRequestV4::setDomainId(int32_t value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool IssueRequestV4::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void IssueRequestV4::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t IssueRequestV4::getDoneRatio() const
{
    return doneRatio_;
}

void IssueRequestV4::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool IssueRequestV4::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void IssueRequestV4::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string IssueRequestV4::getEndTime() const
{
    return endTime_;
}

void IssueRequestV4::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool IssueRequestV4::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void IssueRequestV4::unsetendTime()
{
    endTimeIsSet_ = false;
}

double IssueRequestV4::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void IssueRequestV4::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool IssueRequestV4::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void IssueRequestV4::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t IssueRequestV4::getIterationId() const
{
    return iterationId_;
}

void IssueRequestV4::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool IssueRequestV4::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void IssueRequestV4::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

int32_t IssueRequestV4::getModuleId() const
{
    return moduleId_;
}

void IssueRequestV4::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool IssueRequestV4::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void IssueRequestV4::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string IssueRequestV4::getName() const
{
    return name_;
}

void IssueRequestV4::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueRequestV4::nameIsSet() const
{
    return nameIsSet_;
}

void IssueRequestV4::unsetname()
{
    nameIsSet_ = false;
}

int32_t IssueRequestV4::getParentIssueId() const
{
    return parentIssueId_;
}

void IssueRequestV4::setParentIssueId(int32_t value)
{
    parentIssueId_ = value;
    parentIssueIdIsSet_ = true;
}

bool IssueRequestV4::parentIssueIdIsSet() const
{
    return parentIssueIdIsSet_;
}

void IssueRequestV4::unsetparentIssueId()
{
    parentIssueIdIsSet_ = false;
}

int32_t IssueRequestV4::getPriorityId() const
{
    return priorityId_;
}

void IssueRequestV4::setPriorityId(int32_t value)
{
    priorityId_ = value;
    priorityIdIsSet_ = true;
}

bool IssueRequestV4::priorityIdIsSet() const
{
    return priorityIdIsSet_;
}

void IssueRequestV4::unsetpriorityId()
{
    priorityIdIsSet_ = false;
}

int32_t IssueRequestV4::getSeverityId() const
{
    return severityId_;
}

void IssueRequestV4::setSeverityId(int32_t value)
{
    severityId_ = value;
    severityIdIsSet_ = true;
}

bool IssueRequestV4::severityIdIsSet() const
{
    return severityIdIsSet_;
}

void IssueRequestV4::unsetseverityId()
{
    severityIdIsSet_ = false;
}

int32_t IssueRequestV4::getStatusId() const
{
    return statusId_;
}

void IssueRequestV4::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool IssueRequestV4::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void IssueRequestV4::unsetstatusId()
{
    statusIdIsSet_ = false;
}

int32_t IssueRequestV4::getTrackerId() const
{
    return trackerId_;
}

void IssueRequestV4::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool IssueRequestV4::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void IssueRequestV4::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::vector<NewCustomField>& IssueRequestV4::getNewCustomFields()
{
    return newCustomFields_;
}

void IssueRequestV4::setNewCustomFields(const std::vector<NewCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool IssueRequestV4::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void IssueRequestV4::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

}
}
}
}
}



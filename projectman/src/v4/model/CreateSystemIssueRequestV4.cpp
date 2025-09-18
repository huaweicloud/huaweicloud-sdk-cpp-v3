

#include "huaweicloud/projectman/v4/model/CreateSystemIssueRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSystemIssueRequestV4::CreateSystemIssueRequestV4()
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
    creatorIsSet_ = false;
    customFieldsIsSet_ = false;
}

CreateSystemIssueRequestV4::~CreateSystemIssueRequestV4() = default;

void CreateSystemIssueRequestV4::validate()
{
}

web::json::value CreateSystemIssueRequestV4::toJson() const
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
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }

    return val;
}
bool CreateSystemIssueRequestV4::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            Creator refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<ScrumCustomField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    return ok;
}


double CreateSystemIssueRequestV4::getActualWorkHours() const
{
    return actualWorkHours_;
}

void CreateSystemIssueRequestV4::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool CreateSystemIssueRequestV4::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void CreateSystemIssueRequestV4::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getAssignedId() const
{
    return assignedId_;
}

void CreateSystemIssueRequestV4::setAssignedId(int32_t value)
{
    assignedId_ = value;
    assignedIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::assignedIdIsSet() const
{
    return assignedIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetassignedId()
{
    assignedIdIsSet_ = false;
}

std::string CreateSystemIssueRequestV4::getBeginTime() const
{
    return beginTime_;
}

void CreateSystemIssueRequestV4::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool CreateSystemIssueRequestV4::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void CreateSystemIssueRequestV4::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string CreateSystemIssueRequestV4::getDescription() const
{
    return description_;
}

void CreateSystemIssueRequestV4::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSystemIssueRequestV4::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSystemIssueRequestV4::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getDeveloperId() const
{
    return developerId_;
}

void CreateSystemIssueRequestV4::setDeveloperId(int32_t value)
{
    developerId_ = value;
    developerIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::developerIdIsSet() const
{
    return developerIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetdeveloperId()
{
    developerIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getDomainId() const
{
    return domainId_;
}

void CreateSystemIssueRequestV4::setDomainId(int32_t value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getDoneRatio() const
{
    return doneRatio_;
}

void CreateSystemIssueRequestV4::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool CreateSystemIssueRequestV4::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void CreateSystemIssueRequestV4::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string CreateSystemIssueRequestV4::getEndTime() const
{
    return endTime_;
}

void CreateSystemIssueRequestV4::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateSystemIssueRequestV4::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateSystemIssueRequestV4::unsetendTime()
{
    endTimeIsSet_ = false;
}

double CreateSystemIssueRequestV4::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void CreateSystemIssueRequestV4::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool CreateSystemIssueRequestV4::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void CreateSystemIssueRequestV4::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getIterationId() const
{
    return iterationId_;
}

void CreateSystemIssueRequestV4::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getModuleId() const
{
    return moduleId_;
}

void CreateSystemIssueRequestV4::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string CreateSystemIssueRequestV4::getName() const
{
    return name_;
}

void CreateSystemIssueRequestV4::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSystemIssueRequestV4::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSystemIssueRequestV4::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getParentIssueId() const
{
    return parentIssueId_;
}

void CreateSystemIssueRequestV4::setParentIssueId(int32_t value)
{
    parentIssueId_ = value;
    parentIssueIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::parentIssueIdIsSet() const
{
    return parentIssueIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetparentIssueId()
{
    parentIssueIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getPriorityId() const
{
    return priorityId_;
}

void CreateSystemIssueRequestV4::setPriorityId(int32_t value)
{
    priorityId_ = value;
    priorityIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::priorityIdIsSet() const
{
    return priorityIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetpriorityId()
{
    priorityIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getSeverityId() const
{
    return severityId_;
}

void CreateSystemIssueRequestV4::setSeverityId(int32_t value)
{
    severityId_ = value;
    severityIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::severityIdIsSet() const
{
    return severityIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetseverityId()
{
    severityIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getStatusId() const
{
    return statusId_;
}

void CreateSystemIssueRequestV4::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void CreateSystemIssueRequestV4::unsetstatusId()
{
    statusIdIsSet_ = false;
}

int32_t CreateSystemIssueRequestV4::getTrackerId() const
{
    return trackerId_;
}

void CreateSystemIssueRequestV4::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool CreateSystemIssueRequestV4::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void CreateSystemIssueRequestV4::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::vector<NewCustomField>& CreateSystemIssueRequestV4::getNewCustomFields()
{
    return newCustomFields_;
}

void CreateSystemIssueRequestV4::setNewCustomFields(const std::vector<NewCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool CreateSystemIssueRequestV4::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void CreateSystemIssueRequestV4::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

Creator CreateSystemIssueRequestV4::getCreator() const
{
    return creator_;
}

void CreateSystemIssueRequestV4::setCreator(const Creator& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreateSystemIssueRequestV4::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreateSystemIssueRequestV4::unsetcreator()
{
    creatorIsSet_ = false;
}

std::vector<ScrumCustomField>& CreateSystemIssueRequestV4::getCustomFields()
{
    return customFields_;
}

void CreateSystemIssueRequestV4::setCustomFields(const std::vector<ScrumCustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool CreateSystemIssueRequestV4::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void CreateSystemIssueRequestV4::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

}
}
}
}
}



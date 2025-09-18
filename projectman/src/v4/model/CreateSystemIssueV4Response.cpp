

#include "huaweicloud/projectman/v4/model/CreateSystemIssueV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSystemIssueV4Response::CreateSystemIssueV4Response()
{
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedCcUserIsSet_ = false;
    assignedUserIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    creatorIsSet_ = false;
    customFieldsIsSet_ = false;
    newCustomFieldsIsSet_ = false;
    developerIsSet_ = false;
    domainIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    expectedWorkHours_ = 0.0;
    expectedWorkHoursIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    projectIsSet_ = false;
    iterationIsSet_ = false;
    moduleIsSet_ = false;
    parentIssueIsSet_ = false;
    priorityIsSet_ = false;
    severityIsSet_ = false;
    statusIsSet_ = false;
    trackerIsSet_ = false;
}

CreateSystemIssueV4Response::~CreateSystemIssueV4Response() = default;

void CreateSystemIssueV4Response::validate()
{
}

web::json::value CreateSystemIssueV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(assignedCcUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc_user")] = ModelBase::toJson(assignedCcUser_);
    }
    if(assignedUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_user")] = ModelBase::toJson(assignedUser_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }
    if(newCustomFieldsIsSet_) {
        val[utility::conversions::to_string_t("new_custom_fields")] = ModelBase::toJson(newCustomFields_);
    }
    if(developerIsSet_) {
        val[utility::conversions::to_string_t("developer")] = ModelBase::toJson(developer_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(iterationIsSet_) {
        val[utility::conversions::to_string_t("iteration")] = ModelBase::toJson(iteration_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(parentIssueIsSet_) {
        val[utility::conversions::to_string_t("parent_issue")] = ModelBase::toJson(parentIssue_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }

    return val;
}
bool CreateSystemIssueV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assigned_cc_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc_user"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueUser> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCcUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_user"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("developer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            CreateIssueResponseV4_domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            IssueProjectResponseV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_iteration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_module refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_issue"));
        if(!fieldValue.is_null())
        {
            CreateIssueResponseV4_parent_issue refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_priority refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_severity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            CreateIssueResponseV4_tracker refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
        }
    }
    return ok;
}


double CreateSystemIssueV4Response::getActualWorkHours() const
{
    return actualWorkHours_;
}

void CreateSystemIssueV4Response::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool CreateSystemIssueV4Response::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void CreateSystemIssueV4Response::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

std::vector<IssueUser>& CreateSystemIssueV4Response::getAssignedCcUser()
{
    return assignedCcUser_;
}

void CreateSystemIssueV4Response::setAssignedCcUser(const std::vector<IssueUser>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool CreateSystemIssueV4Response::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void CreateSystemIssueV4Response::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

IssueUser CreateSystemIssueV4Response::getAssignedUser() const
{
    return assignedUser_;
}

void CreateSystemIssueV4Response::setAssignedUser(const IssueUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool CreateSystemIssueV4Response::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void CreateSystemIssueV4Response::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

std::string CreateSystemIssueV4Response::getBeginTime() const
{
    return beginTime_;
}

void CreateSystemIssueV4Response::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool CreateSystemIssueV4Response::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void CreateSystemIssueV4Response::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

IssueUser CreateSystemIssueV4Response::getCreator() const
{
    return creator_;
}

void CreateSystemIssueV4Response::setCreator(const IssueUser& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreateSystemIssueV4Response::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreateSystemIssueV4Response::unsetcreator()
{
    creatorIsSet_ = false;
}

std::vector<CustomField>& CreateSystemIssueV4Response::getCustomFields()
{
    return customFields_;
}

void CreateSystemIssueV4Response::setCustomFields(const std::vector<CustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool CreateSystemIssueV4Response::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void CreateSystemIssueV4Response::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<NewCustomField>& CreateSystemIssueV4Response::getNewCustomFields()
{
    return newCustomFields_;
}

void CreateSystemIssueV4Response::setNewCustomFields(const std::vector<NewCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool CreateSystemIssueV4Response::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void CreateSystemIssueV4Response::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

IssueUser CreateSystemIssueV4Response::getDeveloper() const
{
    return developer_;
}

void CreateSystemIssueV4Response::setDeveloper(const IssueUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool CreateSystemIssueV4Response::developerIsSet() const
{
    return developerIsSet_;
}

void CreateSystemIssueV4Response::unsetdeveloper()
{
    developerIsSet_ = false;
}

CreateIssueResponseV4_domain CreateSystemIssueV4Response::getDomain() const
{
    return domain_;
}

void CreateSystemIssueV4Response::setDomain(const CreateIssueResponseV4_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateSystemIssueV4Response::domainIsSet() const
{
    return domainIsSet_;
}

void CreateSystemIssueV4Response::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t CreateSystemIssueV4Response::getDoneRatio() const
{
    return doneRatio_;
}

void CreateSystemIssueV4Response::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool CreateSystemIssueV4Response::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void CreateSystemIssueV4Response::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string CreateSystemIssueV4Response::getEndTime() const
{
    return endTime_;
}

void CreateSystemIssueV4Response::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateSystemIssueV4Response::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateSystemIssueV4Response::unsetendTime()
{
    endTimeIsSet_ = false;
}

double CreateSystemIssueV4Response::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void CreateSystemIssueV4Response::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool CreateSystemIssueV4Response::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void CreateSystemIssueV4Response::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t CreateSystemIssueV4Response::getId() const
{
    return id_;
}

void CreateSystemIssueV4Response::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateSystemIssueV4Response::idIsSet() const
{
    return idIsSet_;
}

void CreateSystemIssueV4Response::unsetid()
{
    idIsSet_ = false;
}

IssueProjectResponseV4 CreateSystemIssueV4Response::getProject() const
{
    return project_;
}

void CreateSystemIssueV4Response::setProject(const IssueProjectResponseV4& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool CreateSystemIssueV4Response::projectIsSet() const
{
    return projectIsSet_;
}

void CreateSystemIssueV4Response::unsetproject()
{
    projectIsSet_ = false;
}

IssueItemSfV4_iteration CreateSystemIssueV4Response::getIteration() const
{
    return iteration_;
}

void CreateSystemIssueV4Response::setIteration(const IssueItemSfV4_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool CreateSystemIssueV4Response::iterationIsSet() const
{
    return iterationIsSet_;
}

void CreateSystemIssueV4Response::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueItemSfV4_module CreateSystemIssueV4Response::getModule() const
{
    return module_;
}

void CreateSystemIssueV4Response::setModule(const IssueItemSfV4_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool CreateSystemIssueV4Response::moduleIsSet() const
{
    return moduleIsSet_;
}

void CreateSystemIssueV4Response::unsetmodule()
{
    moduleIsSet_ = false;
}

CreateIssueResponseV4_parent_issue CreateSystemIssueV4Response::getParentIssue() const
{
    return parentIssue_;
}

void CreateSystemIssueV4Response::setParentIssue(const CreateIssueResponseV4_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool CreateSystemIssueV4Response::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void CreateSystemIssueV4Response::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

IssueItemSfV4_priority CreateSystemIssueV4Response::getPriority() const
{
    return priority_;
}

void CreateSystemIssueV4Response::setPriority(const IssueItemSfV4_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CreateSystemIssueV4Response::priorityIsSet() const
{
    return priorityIsSet_;
}

void CreateSystemIssueV4Response::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueItemSfV4_severity CreateSystemIssueV4Response::getSeverity() const
{
    return severity_;
}

void CreateSystemIssueV4Response::setSeverity(const IssueItemSfV4_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CreateSystemIssueV4Response::severityIsSet() const
{
    return severityIsSet_;
}

void CreateSystemIssueV4Response::unsetseverity()
{
    severityIsSet_ = false;
}

IssueItemSfV4_status CreateSystemIssueV4Response::getStatus() const
{
    return status_;
}

void CreateSystemIssueV4Response::setStatus(const IssueItemSfV4_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateSystemIssueV4Response::statusIsSet() const
{
    return statusIsSet_;
}

void CreateSystemIssueV4Response::unsetstatus()
{
    statusIsSet_ = false;
}

CreateIssueResponseV4_tracker CreateSystemIssueV4Response::getTracker() const
{
    return tracker_;
}

void CreateSystemIssueV4Response::setTracker(const CreateIssueResponseV4_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool CreateSystemIssueV4Response::trackerIsSet() const
{
    return trackerIsSet_;
}

void CreateSystemIssueV4Response::unsettracker()
{
    trackerIsSet_ = false;
}

}
}
}
}
}



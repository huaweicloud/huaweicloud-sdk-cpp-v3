

#include "huaweicloud/projectman/v4/model/IssueNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueNew::IssueNew()
{
    updatedOn_ = "";
    updatedOnIsSet_ = false;
    storyPointIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    projectIsSet_ = false;
    isParent_ = false;
    isParentIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    findReleaseDev_ = "";
    findReleaseDevIsSet_ = false;
    trackerIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    assignedToIsSet_ = false;
    statusAttributeIsSet_ = false;
    severityIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    authorIsSet_ = false;
    moduleIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    expectedWorkHours_ = 0;
    expectedWorkHoursIsSet_ = false;
    priorityIsSet_ = false;
    actualWorkHours_ = 0;
    actualWorkHoursIsSet_ = false;
    isWatcher_ = false;
    isWatcherIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    fixedVersionIsSet_ = false;
    isArchived_ = false;
    isArchivedIsSet_ = false;
    createdOn_ = "";
    createdOnIsSet_ = false;
    domainIsSet_ = false;
    developerIsSet_ = false;
    closederIsSet_ = false;
    position_ = "";
    positionIsSet_ = false;
    closedFlag_ = 0;
    closedFlagIsSet_ = false;
    assignedCcUser_ = "";
    assignedCcUserIsSet_ = false;
    customValueNewIsSet_ = false;
    statusIsSet_ = false;
}

IssueNew::~IssueNew() = default;

void IssueNew::validate()
{
}

web::json::value IssueNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updatedOnIsSet_) {
        val[utility::conversions::to_string_t("updated_on")] = ModelBase::toJson(updatedOn_);
    }
    if(storyPointIsSet_) {
        val[utility::conversions::to_string_t("story_point")] = ModelBase::toJson(storyPoint_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(isParentIsSet_) {
        val[utility::conversions::to_string_t("isParent")] = ModelBase::toJson(isParent_);
    }
    if(doneRatioIsSet_) {
        val[utility::conversions::to_string_t("done_ratio")] = ModelBase::toJson(doneRatio_);
    }
    if(findReleaseDevIsSet_) {
        val[utility::conversions::to_string_t("findReleaseDev")] = ModelBase::toJson(findReleaseDev_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(assignedToIsSet_) {
        val[utility::conversions::to_string_t("assigned_to")] = ModelBase::toJson(assignedTo_);
    }
    if(statusAttributeIsSet_) {
        val[utility::conversions::to_string_t("status_attribute")] = ModelBase::toJson(statusAttribute_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("releaseDev")] = ModelBase::toJson(releaseDev_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(expectedWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("expected_work_hours")] = ModelBase::toJson(expectedWorkHours_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(isWatcherIsSet_) {
        val[utility::conversions::to_string_t("is_watcher")] = ModelBase::toJson(isWatcher_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(fixedVersionIsSet_) {
        val[utility::conversions::to_string_t("fixed_version")] = ModelBase::toJson(fixedVersion_);
    }
    if(isArchivedIsSet_) {
        val[utility::conversions::to_string_t("is_archived")] = ModelBase::toJson(isArchived_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("created_on")] = ModelBase::toJson(createdOn_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(developerIsSet_) {
        val[utility::conversions::to_string_t("developer")] = ModelBase::toJson(developer_);
    }
    if(closederIsSet_) {
        val[utility::conversions::to_string_t("closeder")] = ModelBase::toJson(closeder_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(closedFlagIsSet_) {
        val[utility::conversions::to_string_t("closed_flag")] = ModelBase::toJson(closedFlag_);
    }
    if(assignedCcUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc_user")] = ModelBase::toJson(assignedCcUser_);
    }
    if(customValueNewIsSet_) {
        val[utility::conversions::to_string_t("custom_value_new")] = ModelBase::toJson(customValueNew_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IssueNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("updated_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("story_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point"));
        if(!fieldValue.is_null())
        {
            StoryPoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPoint(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            Project refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isParent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isParent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsParent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("findReleaseDev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("findReleaseDev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFindReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            Tracker refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_to"));
        if(!fieldValue.is_null())
        {
            IssueNew_assigned_to refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_attribute"));
        if(!fieldValue.is_null())
        {
            StatusAttributeVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusAttribute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            Severity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("releaseDev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("releaseDev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            IssueNew_author refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expected_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected_work_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            Priority refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_watcher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_watcher"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWatcher(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fixed_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_version"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closeder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closeder"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_cc_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCcUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_value_new"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_value_new"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomValueNew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string IssueNew::getUpdatedOn() const
{
    return updatedOn_;
}

void IssueNew::setUpdatedOn(const std::string& value)
{
    updatedOn_ = value;
    updatedOnIsSet_ = true;
}

bool IssueNew::updatedOnIsSet() const
{
    return updatedOnIsSet_;
}

void IssueNew::unsetupdatedOn()
{
    updatedOnIsSet_ = false;
}

StoryPoint IssueNew::getStoryPoint() const
{
    return storyPoint_;
}

void IssueNew::setStoryPoint(const StoryPoint& value)
{
    storyPoint_ = value;
    storyPointIsSet_ = true;
}

bool IssueNew::storyPointIsSet() const
{
    return storyPointIsSet_;
}

void IssueNew::unsetstoryPoint()
{
    storyPointIsSet_ = false;
}

std::string IssueNew::getSubject() const
{
    return subject_;
}

void IssueNew::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool IssueNew::subjectIsSet() const
{
    return subjectIsSet_;
}

void IssueNew::unsetsubject()
{
    subjectIsSet_ = false;
}

Project IssueNew::getProject() const
{
    return project_;
}

void IssueNew::setProject(const Project& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool IssueNew::projectIsSet() const
{
    return projectIsSet_;
}

void IssueNew::unsetproject()
{
    projectIsSet_ = false;
}

bool IssueNew::isIsParent() const
{
    return isParent_;
}

void IssueNew::setIsParent(bool value)
{
    isParent_ = value;
    isParentIsSet_ = true;
}

bool IssueNew::isParentIsSet() const
{
    return isParentIsSet_;
}

void IssueNew::unsetisParent()
{
    isParentIsSet_ = false;
}

int32_t IssueNew::getDoneRatio() const
{
    return doneRatio_;
}

void IssueNew::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool IssueNew::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void IssueNew::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string IssueNew::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void IssueNew::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool IssueNew::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void IssueNew::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

Tracker IssueNew::getTracker() const
{
    return tracker_;
}

void IssueNew::setTracker(const Tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool IssueNew::trackerIsSet() const
{
    return trackerIsSet_;
}

void IssueNew::unsettracker()
{
    trackerIsSet_ = false;
}

int32_t IssueNew::getId() const
{
    return id_;
}

void IssueNew::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueNew::idIsSet() const
{
    return idIsSet_;
}

void IssueNew::unsetid()
{
    idIsSet_ = false;
}

std::string IssueNew::getStartDate() const
{
    return startDate_;
}

void IssueNew::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool IssueNew::startDateIsSet() const
{
    return startDateIsSet_;
}

void IssueNew::unsetstartDate()
{
    startDateIsSet_ = false;
}

IssueNew_assigned_to IssueNew::getAssignedTo() const
{
    return assignedTo_;
}

void IssueNew::setAssignedTo(const IssueNew_assigned_to& value)
{
    assignedTo_ = value;
    assignedToIsSet_ = true;
}

bool IssueNew::assignedToIsSet() const
{
    return assignedToIsSet_;
}

void IssueNew::unsetassignedTo()
{
    assignedToIsSet_ = false;
}

StatusAttributeVO IssueNew::getStatusAttribute() const
{
    return statusAttribute_;
}

void IssueNew::setStatusAttribute(const StatusAttributeVO& value)
{
    statusAttribute_ = value;
    statusAttributeIsSet_ = true;
}

bool IssueNew::statusAttributeIsSet() const
{
    return statusAttributeIsSet_;
}

void IssueNew::unsetstatusAttribute()
{
    statusAttributeIsSet_ = false;
}

Severity IssueNew::getSeverity() const
{
    return severity_;
}

void IssueNew::setSeverity(const Severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool IssueNew::severityIsSet() const
{
    return severityIsSet_;
}

void IssueNew::unsetseverity()
{
    severityIsSet_ = false;
}

std::string IssueNew::getReleaseDev() const
{
    return releaseDev_;
}

void IssueNew::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool IssueNew::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void IssueNew::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

IssueNew_author IssueNew::getAuthor() const
{
    return author_;
}

void IssueNew::setAuthor(const IssueNew_author& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool IssueNew::authorIsSet() const
{
    return authorIsSet_;
}

void IssueNew::unsetauthor()
{
    authorIsSet_ = false;
}

Object IssueNew::getModule() const
{
    return module_;
}

void IssueNew::setModule(const Object& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool IssueNew::moduleIsSet() const
{
    return moduleIsSet_;
}

void IssueNew::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string IssueNew::getDueDate() const
{
    return dueDate_;
}

void IssueNew::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool IssueNew::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void IssueNew::unsetdueDate()
{
    dueDateIsSet_ = false;
}

int32_t IssueNew::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void IssueNew::setExpectedWorkHours(int32_t value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool IssueNew::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void IssueNew::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

Priority IssueNew::getPriority() const
{
    return priority_;
}

void IssueNew::setPriority(const Priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueNew::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueNew::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t IssueNew::getActualWorkHours() const
{
    return actualWorkHours_;
}

void IssueNew::setActualWorkHours(int32_t value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool IssueNew::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void IssueNew::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

bool IssueNew::isIsWatcher() const
{
    return isWatcher_;
}

void IssueNew::setIsWatcher(bool value)
{
    isWatcher_ = value;
    isWatcherIsSet_ = true;
}

bool IssueNew::isWatcherIsSet() const
{
    return isWatcherIsSet_;
}

void IssueNew::unsetisWatcher()
{
    isWatcherIsSet_ = false;
}

bool IssueNew::isDeleted() const
{
    return deleted_;
}

void IssueNew::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool IssueNew::deletedIsSet() const
{
    return deletedIsSet_;
}

void IssueNew::unsetdeleted()
{
    deletedIsSet_ = false;
}

Object IssueNew::getFixedVersion() const
{
    return fixedVersion_;
}

void IssueNew::setFixedVersion(const Object& value)
{
    fixedVersion_ = value;
    fixedVersionIsSet_ = true;
}

bool IssueNew::fixedVersionIsSet() const
{
    return fixedVersionIsSet_;
}

void IssueNew::unsetfixedVersion()
{
    fixedVersionIsSet_ = false;
}

bool IssueNew::isIsArchived() const
{
    return isArchived_;
}

void IssueNew::setIsArchived(bool value)
{
    isArchived_ = value;
    isArchivedIsSet_ = true;
}

bool IssueNew::isArchivedIsSet() const
{
    return isArchivedIsSet_;
}

void IssueNew::unsetisArchived()
{
    isArchivedIsSet_ = false;
}

std::string IssueNew::getCreatedOn() const
{
    return createdOn_;
}

void IssueNew::setCreatedOn(const std::string& value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool IssueNew::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void IssueNew::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

Object IssueNew::getDomain() const
{
    return domain_;
}

void IssueNew::setDomain(const Object& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool IssueNew::domainIsSet() const
{
    return domainIsSet_;
}

void IssueNew::unsetdomain()
{
    domainIsSet_ = false;
}

Object IssueNew::getDeveloper() const
{
    return developer_;
}

void IssueNew::setDeveloper(const Object& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool IssueNew::developerIsSet() const
{
    return developerIsSet_;
}

void IssueNew::unsetdeveloper()
{
    developerIsSet_ = false;
}

Object IssueNew::getCloseder() const
{
    return closeder_;
}

void IssueNew::setCloseder(const Object& value)
{
    closeder_ = value;
    closederIsSet_ = true;
}

bool IssueNew::closederIsSet() const
{
    return closederIsSet_;
}

void IssueNew::unsetcloseder()
{
    closederIsSet_ = false;
}

std::string IssueNew::getPosition() const
{
    return position_;
}

void IssueNew::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool IssueNew::positionIsSet() const
{
    return positionIsSet_;
}

void IssueNew::unsetposition()
{
    positionIsSet_ = false;
}

int32_t IssueNew::getClosedFlag() const
{
    return closedFlag_;
}

void IssueNew::setClosedFlag(int32_t value)
{
    closedFlag_ = value;
    closedFlagIsSet_ = true;
}

bool IssueNew::closedFlagIsSet() const
{
    return closedFlagIsSet_;
}

void IssueNew::unsetclosedFlag()
{
    closedFlagIsSet_ = false;
}

std::string IssueNew::getAssignedCcUser() const
{
    return assignedCcUser_;
}

void IssueNew::setAssignedCcUser(const std::string& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool IssueNew::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void IssueNew::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

Object IssueNew::getCustomValueNew() const
{
    return customValueNew_;
}

void IssueNew::setCustomValueNew(const Object& value)
{
    customValueNew_ = value;
    customValueNewIsSet_ = true;
}

bool IssueNew::customValueNewIsSet() const
{
    return customValueNewIsSet_;
}

void IssueNew::unsetcustomValueNew()
{
    customValueNewIsSet_ = false;
}

Status IssueNew::getStatus() const
{
    return status_;
}

void IssueNew::setStatus(const Status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueNew::statusIsSet() const
{
    return statusIsSet_;
}

void IssueNew::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



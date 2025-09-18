

#include "huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_issue_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkTableIssuseListResponseBody_issue_list::WorkTableIssuseListResponseBody_issue_list()
{
    id_ = 0;
    idIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    parentIssueId_ = 0;
    parentIssueIdIsSet_ = false;
    parentIssueIsSet_ = false;
    projectIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    findReleaseDev_ = "";
    findReleaseDevIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    expectedWorkHours_ = 0.0;
    expectedWorkHoursIsSet_ = false;
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    trackerIsSet_ = false;
    orderIsSet_ = false;
    severityIsSet_ = false;
    priorityIsSet_ = false;
    domainIsSet_ = false;
    position_ = 0.0;
    positionIsSet_ = false;
    moduleIsSet_ = false;
    assignedToIsSet_ = false;
    authorIsSet_ = false;
    developerIsSet_ = false;
    closederIsSet_ = false;
    statusIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    isWatcher_ = false;
    isWatcherIsSet_ = false;
    closedFlag_ = 0;
    closedFlagIsSet_ = false;
    createdOn_ = "";
    createdOnIsSet_ = false;
    updatedOn_ = "";
    updatedOnIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
}

WorkTableIssuseListResponseBody_issue_list::~WorkTableIssuseListResponseBody_issue_list() = default;

void WorkTableIssuseListResponseBody_issue_list::validate()
{
}

web::json::value WorkTableIssuseListResponseBody_issue_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(parentIssueIdIsSet_) {
        val[utility::conversions::to_string_t("parent_issue_id")] = ModelBase::toJson(parentIssueId_);
    }
    if(parentIssueIsSet_) {
        val[utility::conversions::to_string_t("parent_issue")] = ModelBase::toJson(parentIssue_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(findReleaseDevIsSet_) {
        val[utility::conversions::to_string_t("find_release_dev")] = ModelBase::toJson(findReleaseDev_);
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
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(assignedToIsSet_) {
        val[utility::conversions::to_string_t("assigned_to")] = ModelBase::toJson(assignedTo_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(developerIsSet_) {
        val[utility::conversions::to_string_t("developer")] = ModelBase::toJson(developer_);
    }
    if(closederIsSet_) {
        val[utility::conversions::to_string_t("closeder")] = ModelBase::toJson(closeder_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(isWatcherIsSet_) {
        val[utility::conversions::to_string_t("is_watcher")] = ModelBase::toJson(isWatcher_);
    }
    if(closedFlagIsSet_) {
        val[utility::conversions::to_string_t("closed_flag")] = ModelBase::toJson(closedFlag_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("created_on")] = ModelBase::toJson(createdOn_);
    }
    if(updatedOnIsSet_) {
        val[utility::conversions::to_string_t("updated_on")] = ModelBase::toJson(updatedOn_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }

    return val;
}
bool WorkTableIssuseListResponseBody_issue_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_issue"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_parent_issue refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_project refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("find_release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("find_release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFindReleaseDev(refVal);
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
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_work_hours"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_tracker refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_order refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_severity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_priority refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_module refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_to"));
        if(!fieldValue.is_null())
        {
            SimpleUserIn refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            SimpleUserIn refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer"));
        if(!fieldValue.is_null())
        {
            SimpleUserIn refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closeder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closeder"));
        if(!fieldValue.is_null())
        {
            SimpleUserIn refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            WorkTableIssuseListResponseBody_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_watcher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_watcher"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWatcher(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    return ok;
}


int32_t WorkTableIssuseListResponseBody_issue_list::getId() const
{
    return id_;
}

void WorkTableIssuseListResponseBody_issue_list::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::idIsSet() const
{
    return idIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetid()
{
    idIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getSubject() const
{
    return subject_;
}

void WorkTableIssuseListResponseBody_issue_list::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::subjectIsSet() const
{
    return subjectIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetsubject()
{
    subjectIsSet_ = false;
}

int32_t WorkTableIssuseListResponseBody_issue_list::getParentIssueId() const
{
    return parentIssueId_;
}

void WorkTableIssuseListResponseBody_issue_list::setParentIssueId(int32_t value)
{
    parentIssueId_ = value;
    parentIssueIdIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::parentIssueIdIsSet() const
{
    return parentIssueIdIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetparentIssueId()
{
    parentIssueIdIsSet_ = false;
}

WorkTableIssuseListResponseBody_parent_issue WorkTableIssuseListResponseBody_issue_list::getParentIssue() const
{
    return parentIssue_;
}

void WorkTableIssuseListResponseBody_issue_list::setParentIssue(const WorkTableIssuseListResponseBody_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

WorkTableIssuseListResponseBody_project WorkTableIssuseListResponseBody_issue_list::getProject() const
{
    return project_;
}

void WorkTableIssuseListResponseBody_issue_list::setProject(const WorkTableIssuseListResponseBody_project& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::projectIsSet() const
{
    return projectIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetproject()
{
    projectIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getReleaseDev() const
{
    return releaseDev_;
}

void WorkTableIssuseListResponseBody_issue_list::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void WorkTableIssuseListResponseBody_issue_list::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

int32_t WorkTableIssuseListResponseBody_issue_list::getDoneRatio() const
{
    return doneRatio_;
}

void WorkTableIssuseListResponseBody_issue_list::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

double WorkTableIssuseListResponseBody_issue_list::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void WorkTableIssuseListResponseBody_issue_list::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

double WorkTableIssuseListResponseBody_issue_list::getActualWorkHours() const
{
    return actualWorkHours_;
}

void WorkTableIssuseListResponseBody_issue_list::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

WorkTableIssuseListResponseBody_tracker WorkTableIssuseListResponseBody_issue_list::getTracker() const
{
    return tracker_;
}

void WorkTableIssuseListResponseBody_issue_list::setTracker(const WorkTableIssuseListResponseBody_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::trackerIsSet() const
{
    return trackerIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsettracker()
{
    trackerIsSet_ = false;
}

WorkTableIssuseListResponseBody_order WorkTableIssuseListResponseBody_issue_list::getOrder() const
{
    return order_;
}

void WorkTableIssuseListResponseBody_issue_list::setOrder(const WorkTableIssuseListResponseBody_order& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::orderIsSet() const
{
    return orderIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetorder()
{
    orderIsSet_ = false;
}

WorkTableIssuseListResponseBody_severity WorkTableIssuseListResponseBody_issue_list::getSeverity() const
{
    return severity_;
}

void WorkTableIssuseListResponseBody_issue_list::setSeverity(const WorkTableIssuseListResponseBody_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::severityIsSet() const
{
    return severityIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetseverity()
{
    severityIsSet_ = false;
}

WorkTableIssuseListResponseBody_priority WorkTableIssuseListResponseBody_issue_list::getPriority() const
{
    return priority_;
}

void WorkTableIssuseListResponseBody_issue_list::setPriority(const WorkTableIssuseListResponseBody_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::priorityIsSet() const
{
    return priorityIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetpriority()
{
    priorityIsSet_ = false;
}

WorkTableIssuseListResponseBody_domain WorkTableIssuseListResponseBody_issue_list::getDomain() const
{
    return domain_;
}

void WorkTableIssuseListResponseBody_issue_list::setDomain(const WorkTableIssuseListResponseBody_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::domainIsSet() const
{
    return domainIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetdomain()
{
    domainIsSet_ = false;
}

double WorkTableIssuseListResponseBody_issue_list::getPosition() const
{
    return position_;
}

void WorkTableIssuseListResponseBody_issue_list::setPosition(double value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::positionIsSet() const
{
    return positionIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetposition()
{
    positionIsSet_ = false;
}

WorkTableIssuseListResponseBody_module WorkTableIssuseListResponseBody_issue_list::getModule() const
{
    return module_;
}

void WorkTableIssuseListResponseBody_issue_list::setModule(const WorkTableIssuseListResponseBody_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::moduleIsSet() const
{
    return moduleIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetmodule()
{
    moduleIsSet_ = false;
}

SimpleUserIn WorkTableIssuseListResponseBody_issue_list::getAssignedTo() const
{
    return assignedTo_;
}

void WorkTableIssuseListResponseBody_issue_list::setAssignedTo(const SimpleUserIn& value)
{
    assignedTo_ = value;
    assignedToIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::assignedToIsSet() const
{
    return assignedToIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetassignedTo()
{
    assignedToIsSet_ = false;
}

SimpleUserIn WorkTableIssuseListResponseBody_issue_list::getAuthor() const
{
    return author_;
}

void WorkTableIssuseListResponseBody_issue_list::setAuthor(const SimpleUserIn& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::authorIsSet() const
{
    return authorIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetauthor()
{
    authorIsSet_ = false;
}

SimpleUserIn WorkTableIssuseListResponseBody_issue_list::getDeveloper() const
{
    return developer_;
}

void WorkTableIssuseListResponseBody_issue_list::setDeveloper(const SimpleUserIn& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::developerIsSet() const
{
    return developerIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetdeveloper()
{
    developerIsSet_ = false;
}

SimpleUserIn WorkTableIssuseListResponseBody_issue_list::getCloseder() const
{
    return closeder_;
}

void WorkTableIssuseListResponseBody_issue_list::setCloseder(const SimpleUserIn& value)
{
    closeder_ = value;
    closederIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::closederIsSet() const
{
    return closederIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetcloseder()
{
    closederIsSet_ = false;
}

WorkTableIssuseListResponseBody_status WorkTableIssuseListResponseBody_issue_list::getStatus() const
{
    return status_;
}

void WorkTableIssuseListResponseBody_issue_list::setStatus(const WorkTableIssuseListResponseBody_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::statusIsSet() const
{
    return statusIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetstatus()
{
    statusIsSet_ = false;
}

bool WorkTableIssuseListResponseBody_issue_list::isDeleted() const
{
    return deleted_;
}

void WorkTableIssuseListResponseBody_issue_list::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::deletedIsSet() const
{
    return deletedIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetdeleted()
{
    deletedIsSet_ = false;
}

bool WorkTableIssuseListResponseBody_issue_list::isIsWatcher() const
{
    return isWatcher_;
}

void WorkTableIssuseListResponseBody_issue_list::setIsWatcher(bool value)
{
    isWatcher_ = value;
    isWatcherIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::isWatcherIsSet() const
{
    return isWatcherIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetisWatcher()
{
    isWatcherIsSet_ = false;
}

int32_t WorkTableIssuseListResponseBody_issue_list::getClosedFlag() const
{
    return closedFlag_;
}

void WorkTableIssuseListResponseBody_issue_list::setClosedFlag(int32_t value)
{
    closedFlag_ = value;
    closedFlagIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::closedFlagIsSet() const
{
    return closedFlagIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetclosedFlag()
{
    closedFlagIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getCreatedOn() const
{
    return createdOn_;
}

void WorkTableIssuseListResponseBody_issue_list::setCreatedOn(const std::string& value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getUpdatedOn() const
{
    return updatedOn_;
}

void WorkTableIssuseListResponseBody_issue_list::setUpdatedOn(const std::string& value)
{
    updatedOn_ = value;
    updatedOnIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::updatedOnIsSet() const
{
    return updatedOnIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetupdatedOn()
{
    updatedOnIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_issue_list::getDueDate() const
{
    return dueDate_;
}

void WorkTableIssuseListResponseBody_issue_list::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_issue_list::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void WorkTableIssuseListResponseBody_issue_list::unsetdueDate()
{
    dueDateIsSet_ = false;
}

}
}
}
}
}



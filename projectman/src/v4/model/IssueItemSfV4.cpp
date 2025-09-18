

#include "huaweicloud/projectman/v4/model/IssueItemSfV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueItemSfV4::IssueItemSfV4()
{
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedUserIsSet_ = false;
    authorIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    closedTime_ = 0L;
    closedTimeIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    customFeildsIsSet_ = false;
    developerIsSet_ = false;
    discoverVersion_ = "";
    discoverVersionIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    doneRatio_ = 0;
    doneRatioIsSet_ = false;
    expectedWorkHours_ = 0.0;
    expectedWorkHoursIsSet_ = false;
    order_ = 0;
    orderIsSet_ = false;
    parentIssueId_ = 0;
    parentIssueIdIsSet_ = false;
    releaseVersion_ = "";
    releaseVersionIsSet_ = false;
    rootIssueId_ = 0;
    rootIssueIdIsSet_ = false;
    storyPointIsSet_ = false;
    domainIsSet_ = false;
    iterationIsSet_ = false;
    moduleIsSet_ = false;
    priorityIsSet_ = false;
    severityIsSet_ = false;
    statusIsSet_ = false;
    trackerIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
}

IssueItemSfV4::~IssueItemSfV4() = default;

void IssueItemSfV4::validate()
{
}

web::json::value IssueItemSfV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(assignedUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_user")] = ModelBase::toJson(assignedUser_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(customFeildsIsSet_) {
        val[utility::conversions::to_string_t("custom_feilds")] = ModelBase::toJson(customFeilds_);
    }
    if(developerIsSet_) {
        val[utility::conversions::to_string_t("developer")] = ModelBase::toJson(developer_);
    }
    if(discoverVersionIsSet_) {
        val[utility::conversions::to_string_t("discover_version")] = ModelBase::toJson(discoverVersion_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(doneRatioIsSet_) {
        val[utility::conversions::to_string_t("done_ratio")] = ModelBase::toJson(doneRatio_);
    }
    if(expectedWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("expected_work_hours")] = ModelBase::toJson(expectedWorkHours_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(parentIssueIdIsSet_) {
        val[utility::conversions::to_string_t("parent_issue_id")] = ModelBase::toJson(parentIssueId_);
    }
    if(releaseVersionIsSet_) {
        val[utility::conversions::to_string_t("release_version")] = ModelBase::toJson(releaseVersion_);
    }
    if(rootIssueIdIsSet_) {
        val[utility::conversions::to_string_t("root_issue_id")] = ModelBase::toJson(rootIssueId_);
    }
    if(storyPointIsSet_) {
        val[utility::conversions::to_string_t("story_point")] = ModelBase::toJson(storyPoint_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(iterationIsSet_) {
        val[utility::conversions::to_string_t("iteration")] = ModelBase::toJson(iteration_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
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
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }

    return val;
}
bool IssueItemSfV4::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assigned_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_user"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_feilds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_feilds"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomFeildRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFeilds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("discover_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discover_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscoverVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("story_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_story_point refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            IssueItemSfV4_domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
            IssueItemSfV4_tracker refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    return ok;
}


double IssueItemSfV4::getActualWorkHours() const
{
    return actualWorkHours_;
}

void IssueItemSfV4::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool IssueItemSfV4::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void IssueItemSfV4::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

IssueUser IssueItemSfV4::getAssignedUser() const
{
    return assignedUser_;
}

void IssueItemSfV4::setAssignedUser(const IssueUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool IssueItemSfV4::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void IssueItemSfV4::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

IssueUser IssueItemSfV4::getAuthor() const
{
    return author_;
}

void IssueItemSfV4::setAuthor(const IssueUser& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool IssueItemSfV4::authorIsSet() const
{
    return authorIsSet_;
}

void IssueItemSfV4::unsetauthor()
{
    authorIsSet_ = false;
}

int64_t IssueItemSfV4::getBeginTime() const
{
    return beginTime_;
}

void IssueItemSfV4::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool IssueItemSfV4::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void IssueItemSfV4::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t IssueItemSfV4::getClosedTime() const
{
    return closedTime_;
}

void IssueItemSfV4::setClosedTime(int64_t value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool IssueItemSfV4::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void IssueItemSfV4::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

int64_t IssueItemSfV4::getCreatedTime() const
{
    return createdTime_;
}

void IssueItemSfV4::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool IssueItemSfV4::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void IssueItemSfV4::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::vector<CustomFeildRecord>& IssueItemSfV4::getCustomFeilds()
{
    return customFeilds_;
}

void IssueItemSfV4::setCustomFeilds(const std::vector<CustomFeildRecord>& value)
{
    customFeilds_ = value;
    customFeildsIsSet_ = true;
}

bool IssueItemSfV4::customFeildsIsSet() const
{
    return customFeildsIsSet_;
}

void IssueItemSfV4::unsetcustomFeilds()
{
    customFeildsIsSet_ = false;
}

IssueUser IssueItemSfV4::getDeveloper() const
{
    return developer_;
}

void IssueItemSfV4::setDeveloper(const IssueUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool IssueItemSfV4::developerIsSet() const
{
    return developerIsSet_;
}

void IssueItemSfV4::unsetdeveloper()
{
    developerIsSet_ = false;
}

std::string IssueItemSfV4::getDiscoverVersion() const
{
    return discoverVersion_;
}

void IssueItemSfV4::setDiscoverVersion(const std::string& value)
{
    discoverVersion_ = value;
    discoverVersionIsSet_ = true;
}

bool IssueItemSfV4::discoverVersionIsSet() const
{
    return discoverVersionIsSet_;
}

void IssueItemSfV4::unsetdiscoverVersion()
{
    discoverVersionIsSet_ = false;
}

int64_t IssueItemSfV4::getEndTime() const
{
    return endTime_;
}

void IssueItemSfV4::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool IssueItemSfV4::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void IssueItemSfV4::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t IssueItemSfV4::getDoneRatio() const
{
    return doneRatio_;
}

void IssueItemSfV4::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool IssueItemSfV4::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void IssueItemSfV4::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

double IssueItemSfV4::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void IssueItemSfV4::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool IssueItemSfV4::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void IssueItemSfV4::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t IssueItemSfV4::getOrder() const
{
    return order_;
}

void IssueItemSfV4::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool IssueItemSfV4::orderIsSet() const
{
    return orderIsSet_;
}

void IssueItemSfV4::unsetorder()
{
    orderIsSet_ = false;
}

int32_t IssueItemSfV4::getParentIssueId() const
{
    return parentIssueId_;
}

void IssueItemSfV4::setParentIssueId(int32_t value)
{
    parentIssueId_ = value;
    parentIssueIdIsSet_ = true;
}

bool IssueItemSfV4::parentIssueIdIsSet() const
{
    return parentIssueIdIsSet_;
}

void IssueItemSfV4::unsetparentIssueId()
{
    parentIssueIdIsSet_ = false;
}

std::string IssueItemSfV4::getReleaseVersion() const
{
    return releaseVersion_;
}

void IssueItemSfV4::setReleaseVersion(const std::string& value)
{
    releaseVersion_ = value;
    releaseVersionIsSet_ = true;
}

bool IssueItemSfV4::releaseVersionIsSet() const
{
    return releaseVersionIsSet_;
}

void IssueItemSfV4::unsetreleaseVersion()
{
    releaseVersionIsSet_ = false;
}

int32_t IssueItemSfV4::getRootIssueId() const
{
    return rootIssueId_;
}

void IssueItemSfV4::setRootIssueId(int32_t value)
{
    rootIssueId_ = value;
    rootIssueIdIsSet_ = true;
}

bool IssueItemSfV4::rootIssueIdIsSet() const
{
    return rootIssueIdIsSet_;
}

void IssueItemSfV4::unsetrootIssueId()
{
    rootIssueIdIsSet_ = false;
}

IssueItemSfV4_story_point IssueItemSfV4::getStoryPoint() const
{
    return storyPoint_;
}

void IssueItemSfV4::setStoryPoint(const IssueItemSfV4_story_point& value)
{
    storyPoint_ = value;
    storyPointIsSet_ = true;
}

bool IssueItemSfV4::storyPointIsSet() const
{
    return storyPointIsSet_;
}

void IssueItemSfV4::unsetstoryPoint()
{
    storyPointIsSet_ = false;
}

IssueItemSfV4_domain IssueItemSfV4::getDomain() const
{
    return domain_;
}

void IssueItemSfV4::setDomain(const IssueItemSfV4_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool IssueItemSfV4::domainIsSet() const
{
    return domainIsSet_;
}

void IssueItemSfV4::unsetdomain()
{
    domainIsSet_ = false;
}

IssueItemSfV4_iteration IssueItemSfV4::getIteration() const
{
    return iteration_;
}

void IssueItemSfV4::setIteration(const IssueItemSfV4_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool IssueItemSfV4::iterationIsSet() const
{
    return iterationIsSet_;
}

void IssueItemSfV4::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueItemSfV4_module IssueItemSfV4::getModule() const
{
    return module_;
}

void IssueItemSfV4::setModule(const IssueItemSfV4_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool IssueItemSfV4::moduleIsSet() const
{
    return moduleIsSet_;
}

void IssueItemSfV4::unsetmodule()
{
    moduleIsSet_ = false;
}

IssueItemSfV4_priority IssueItemSfV4::getPriority() const
{
    return priority_;
}

void IssueItemSfV4::setPriority(const IssueItemSfV4_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueItemSfV4::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueItemSfV4::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueItemSfV4_severity IssueItemSfV4::getSeverity() const
{
    return severity_;
}

void IssueItemSfV4::setSeverity(const IssueItemSfV4_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool IssueItemSfV4::severityIsSet() const
{
    return severityIsSet_;
}

void IssueItemSfV4::unsetseverity()
{
    severityIsSet_ = false;
}

IssueItemSfV4_status IssueItemSfV4::getStatus() const
{
    return status_;
}

void IssueItemSfV4::setStatus(const IssueItemSfV4_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueItemSfV4::statusIsSet() const
{
    return statusIsSet_;
}

void IssueItemSfV4::unsetstatus()
{
    statusIsSet_ = false;
}

IssueItemSfV4_tracker IssueItemSfV4::getTracker() const
{
    return tracker_;
}

void IssueItemSfV4::setTracker(const IssueItemSfV4_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool IssueItemSfV4::trackerIsSet() const
{
    return trackerIsSet_;
}

void IssueItemSfV4::unsettracker()
{
    trackerIsSet_ = false;
}

std::string IssueItemSfV4::getSubject() const
{
    return subject_;
}

void IssueItemSfV4::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool IssueItemSfV4::subjectIsSet() const
{
    return subjectIsSet_;
}

void IssueItemSfV4::unsetsubject()
{
    subjectIsSet_ = false;
}

int64_t IssueItemSfV4::getUpdatedTime() const
{
    return updatedTime_;
}

void IssueItemSfV4::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool IssueItemSfV4::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void IssueItemSfV4::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/IssueDetailResponseV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailResponseV2::IssueDetailResponseV2()
{
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedCcUserIsSet_ = false;
    assignedToIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    createdOn_ = "";
    createdOnIsSet_ = false;
    authorIsSet_ = false;
    customFieldsIsSet_ = false;
    customValueNewIsSet_ = false;
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
    storyPointIsSet_ = false;
    moduleIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    parentIssueIsSet_ = false;
    priorityIsSet_ = false;
    severityIsSet_ = false;
    statusIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    findReleaseDev_ = "";
    findReleaseDevIsSet_ = false;
    envIsSet_ = false;
    trackerIsSet_ = false;
    updatedOn_ = "";
    updatedOnIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    accessoriesListIsSet_ = false;
    innerText_ = "";
    innerTextIsSet_ = false;
}

IssueDetailResponseV2::~IssueDetailResponseV2() = default;

void IssueDetailResponseV2::validate()
{
}

web::json::value IssueDetailResponseV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actualWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("actual_work_hours")] = ModelBase::toJson(actualWorkHours_);
    }
    if(assignedCcUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc_user")] = ModelBase::toJson(assignedCcUser_);
    }
    if(assignedToIsSet_) {
        val[utility::conversions::to_string_t("assigned_to")] = ModelBase::toJson(assignedTo_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("created_on")] = ModelBase::toJson(createdOn_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }
    if(customValueNewIsSet_) {
        val[utility::conversions::to_string_t("custom_value_new")] = ModelBase::toJson(customValueNew_);
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
    if(storyPointIsSet_) {
        val[utility::conversions::to_string_t("story_point")] = ModelBase::toJson(storyPoint_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
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
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(findReleaseDevIsSet_) {
        val[utility::conversions::to_string_t("find_release_dev")] = ModelBase::toJson(findReleaseDev_);
    }
    if(envIsSet_) {
        val[utility::conversions::to_string_t("env")] = ModelBase::toJson(env_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(updatedOnIsSet_) {
        val[utility::conversions::to_string_t("updated_on")] = ModelBase::toJson(updatedOn_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(accessoriesListIsSet_) {
        val[utility::conversions::to_string_t("accessories_list")] = ModelBase::toJson(accessoriesList_);
    }
    if(innerTextIsSet_) {
        val[utility::conversions::to_string_t("inner_text")] = ModelBase::toJson(innerText_);
    }

    return val;
}
bool IssueDetailResponseV2::fromJson(const web::json::value& val)
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
            std::vector<UserVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCcUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_to"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedTo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomFieldV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_value_new"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_value_new"));
        if(!fieldValue.is_null())
        {
            IssueDetailCustomFieldV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomValueNew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_domain refVal;
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
            ProjectVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_iteration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("story_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_story_point refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_module refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_issue"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_parent_issue refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_priority refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_severity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_env refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2_tracker refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("accessories_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessories_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueAccessoryV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessoriesList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inner_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inner_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerText(refVal);
        }
    }
    return ok;
}


double IssueDetailResponseV2::getActualWorkHours() const
{
    return actualWorkHours_;
}

void IssueDetailResponseV2::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool IssueDetailResponseV2::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void IssueDetailResponseV2::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

std::vector<UserVO>& IssueDetailResponseV2::getAssignedCcUser()
{
    return assignedCcUser_;
}

void IssueDetailResponseV2::setAssignedCcUser(const std::vector<UserVO>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool IssueDetailResponseV2::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void IssueDetailResponseV2::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

UserVO IssueDetailResponseV2::getAssignedTo() const
{
    return assignedTo_;
}

void IssueDetailResponseV2::setAssignedTo(const UserVO& value)
{
    assignedTo_ = value;
    assignedToIsSet_ = true;
}

bool IssueDetailResponseV2::assignedToIsSet() const
{
    return assignedToIsSet_;
}

void IssueDetailResponseV2::unsetassignedTo()
{
    assignedToIsSet_ = false;
}

std::string IssueDetailResponseV2::getStartDate() const
{
    return startDate_;
}

void IssueDetailResponseV2::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool IssueDetailResponseV2::startDateIsSet() const
{
    return startDateIsSet_;
}

void IssueDetailResponseV2::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string IssueDetailResponseV2::getCreatedOn() const
{
    return createdOn_;
}

void IssueDetailResponseV2::setCreatedOn(const std::string& value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool IssueDetailResponseV2::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void IssueDetailResponseV2::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

UserVO IssueDetailResponseV2::getAuthor() const
{
    return author_;
}

void IssueDetailResponseV2::setAuthor(const UserVO& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool IssueDetailResponseV2::authorIsSet() const
{
    return authorIsSet_;
}

void IssueDetailResponseV2::unsetauthor()
{
    authorIsSet_ = false;
}

std::vector<CustomFieldV2>& IssueDetailResponseV2::getCustomFields()
{
    return customFields_;
}

void IssueDetailResponseV2::setCustomFields(const std::vector<CustomFieldV2>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool IssueDetailResponseV2::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void IssueDetailResponseV2::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

IssueDetailCustomFieldV2 IssueDetailResponseV2::getCustomValueNew() const
{
    return customValueNew_;
}

void IssueDetailResponseV2::setCustomValueNew(const IssueDetailCustomFieldV2& value)
{
    customValueNew_ = value;
    customValueNewIsSet_ = true;
}

bool IssueDetailResponseV2::customValueNewIsSet() const
{
    return customValueNewIsSet_;
}

void IssueDetailResponseV2::unsetcustomValueNew()
{
    customValueNewIsSet_ = false;
}

UserVO IssueDetailResponseV2::getDeveloper() const
{
    return developer_;
}

void IssueDetailResponseV2::setDeveloper(const UserVO& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool IssueDetailResponseV2::developerIsSet() const
{
    return developerIsSet_;
}

void IssueDetailResponseV2::unsetdeveloper()
{
    developerIsSet_ = false;
}

IssueDetailResponseV2_domain IssueDetailResponseV2::getDomain() const
{
    return domain_;
}

void IssueDetailResponseV2::setDomain(const IssueDetailResponseV2_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool IssueDetailResponseV2::domainIsSet() const
{
    return domainIsSet_;
}

void IssueDetailResponseV2::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t IssueDetailResponseV2::getDoneRatio() const
{
    return doneRatio_;
}

void IssueDetailResponseV2::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool IssueDetailResponseV2::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void IssueDetailResponseV2::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string IssueDetailResponseV2::getEndTime() const
{
    return endTime_;
}

void IssueDetailResponseV2::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool IssueDetailResponseV2::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void IssueDetailResponseV2::unsetendTime()
{
    endTimeIsSet_ = false;
}

double IssueDetailResponseV2::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void IssueDetailResponseV2::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool IssueDetailResponseV2::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void IssueDetailResponseV2::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t IssueDetailResponseV2::getId() const
{
    return id_;
}

void IssueDetailResponseV2::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueDetailResponseV2::idIsSet() const
{
    return idIsSet_;
}

void IssueDetailResponseV2::unsetid()
{
    idIsSet_ = false;
}

ProjectVO IssueDetailResponseV2::getProject() const
{
    return project_;
}

void IssueDetailResponseV2::setProject(const ProjectVO& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool IssueDetailResponseV2::projectIsSet() const
{
    return projectIsSet_;
}

void IssueDetailResponseV2::unsetproject()
{
    projectIsSet_ = false;
}

IssueDetailResponseV2_iteration IssueDetailResponseV2::getIteration() const
{
    return iteration_;
}

void IssueDetailResponseV2::setIteration(const IssueDetailResponseV2_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool IssueDetailResponseV2::iterationIsSet() const
{
    return iterationIsSet_;
}

void IssueDetailResponseV2::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueDetailResponseV2_story_point IssueDetailResponseV2::getStoryPoint() const
{
    return storyPoint_;
}

void IssueDetailResponseV2::setStoryPoint(const IssueDetailResponseV2_story_point& value)
{
    storyPoint_ = value;
    storyPointIsSet_ = true;
}

bool IssueDetailResponseV2::storyPointIsSet() const
{
    return storyPointIsSet_;
}

void IssueDetailResponseV2::unsetstoryPoint()
{
    storyPointIsSet_ = false;
}

IssueDetailResponseV2_module IssueDetailResponseV2::getModule() const
{
    return module_;
}

void IssueDetailResponseV2::setModule(const IssueDetailResponseV2_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool IssueDetailResponseV2::moduleIsSet() const
{
    return moduleIsSet_;
}

void IssueDetailResponseV2::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string IssueDetailResponseV2::getSubject() const
{
    return subject_;
}

void IssueDetailResponseV2::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool IssueDetailResponseV2::subjectIsSet() const
{
    return subjectIsSet_;
}

void IssueDetailResponseV2::unsetsubject()
{
    subjectIsSet_ = false;
}

IssueDetailResponseV2_parent_issue IssueDetailResponseV2::getParentIssue() const
{
    return parentIssue_;
}

void IssueDetailResponseV2::setParentIssue(const IssueDetailResponseV2_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool IssueDetailResponseV2::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void IssueDetailResponseV2::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

IssueDetailResponseV2_priority IssueDetailResponseV2::getPriority() const
{
    return priority_;
}

void IssueDetailResponseV2::setPriority(const IssueDetailResponseV2_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueDetailResponseV2::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueDetailResponseV2::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueDetailResponseV2_severity IssueDetailResponseV2::getSeverity() const
{
    return severity_;
}

void IssueDetailResponseV2::setSeverity(const IssueDetailResponseV2_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool IssueDetailResponseV2::severityIsSet() const
{
    return severityIsSet_;
}

void IssueDetailResponseV2::unsetseverity()
{
    severityIsSet_ = false;
}

IssueDetailResponseV2_status IssueDetailResponseV2::getStatus() const
{
    return status_;
}

void IssueDetailResponseV2::setStatus(const IssueDetailResponseV2_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueDetailResponseV2::statusIsSet() const
{
    return statusIsSet_;
}

void IssueDetailResponseV2::unsetstatus()
{
    statusIsSet_ = false;
}

std::string IssueDetailResponseV2::getReleaseDev() const
{
    return releaseDev_;
}

void IssueDetailResponseV2::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool IssueDetailResponseV2::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void IssueDetailResponseV2::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string IssueDetailResponseV2::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void IssueDetailResponseV2::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool IssueDetailResponseV2::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void IssueDetailResponseV2::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

IssueDetailResponseV2_env IssueDetailResponseV2::getEnv() const
{
    return env_;
}

void IssueDetailResponseV2::setEnv(const IssueDetailResponseV2_env& value)
{
    env_ = value;
    envIsSet_ = true;
}

bool IssueDetailResponseV2::envIsSet() const
{
    return envIsSet_;
}

void IssueDetailResponseV2::unsetenv()
{
    envIsSet_ = false;
}

IssueDetailResponseV2_tracker IssueDetailResponseV2::getTracker() const
{
    return tracker_;
}

void IssueDetailResponseV2::setTracker(const IssueDetailResponseV2_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool IssueDetailResponseV2::trackerIsSet() const
{
    return trackerIsSet_;
}

void IssueDetailResponseV2::unsettracker()
{
    trackerIsSet_ = false;
}

std::string IssueDetailResponseV2::getUpdatedOn() const
{
    return updatedOn_;
}

void IssueDetailResponseV2::setUpdatedOn(const std::string& value)
{
    updatedOn_ = value;
    updatedOnIsSet_ = true;
}

bool IssueDetailResponseV2::updatedOnIsSet() const
{
    return updatedOnIsSet_;
}

void IssueDetailResponseV2::unsetupdatedOn()
{
    updatedOnIsSet_ = false;
}

std::string IssueDetailResponseV2::getClosedTime() const
{
    return closedTime_;
}

void IssueDetailResponseV2::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool IssueDetailResponseV2::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void IssueDetailResponseV2::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string IssueDetailResponseV2::getDescription() const
{
    return description_;
}

void IssueDetailResponseV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueDetailResponseV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueDetailResponseV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<IssueAccessoryV2>& IssueDetailResponseV2::getAccessoriesList()
{
    return accessoriesList_;
}

void IssueDetailResponseV2::setAccessoriesList(const std::vector<IssueAccessoryV2>& value)
{
    accessoriesList_ = value;
    accessoriesListIsSet_ = true;
}

bool IssueDetailResponseV2::accessoriesListIsSet() const
{
    return accessoriesListIsSet_;
}

void IssueDetailResponseV2::unsetaccessoriesList()
{
    accessoriesListIsSet_ = false;
}

std::string IssueDetailResponseV2::getInnerText() const
{
    return innerText_;
}

void IssueDetailResponseV2::setInnerText(const std::string& value)
{
    innerText_ = value;
    innerTextIsSet_ = true;
}

bool IssueDetailResponseV2::innerTextIsSet() const
{
    return innerTextIsSet_;
}

void IssueDetailResponseV2::unsetinnerText()
{
    innerTextIsSet_ = false;
}

}
}
}
}
}



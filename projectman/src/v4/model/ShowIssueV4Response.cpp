

#include "huaweicloud/projectman/v4/model/ShowIssueV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueV4Response::ShowIssueV4Response()
{
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedCcUserIsSet_ = false;
    assignedUserIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
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
    storyPointIsSet_ = false;
    moduleIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
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
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    orderIsSet_ = false;
    accessoriesIsSet_ = false;
}

ShowIssueV4Response::~ShowIssueV4Response() = default;

void ShowIssueV4Response::validate()
{
}

web::json::value ShowIssueV4Response::toJson() const
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
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
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
    if(storyPointIsSet_) {
        val[utility::conversions::to_string_t("story_point")] = ModelBase::toJson(storyPoint_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(accessoriesIsSet_) {
        val[utility::conversions::to_string_t("accessories")] = ModelBase::toJson(accessories_);
    }

    return val;
}
bool ShowIssueV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
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
            std::vector<IssueDetailCustomField> refVal;
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
            IssueItemSfV4_domain refVal;
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
    if(val.has_field(utility::conversions::to_string_t("story_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV4_story_point refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPoint(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
            IssueDetailResponseV4_env refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnv(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            IssueOrder refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessories"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueAccessory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessories(refVal);
        }
    }
    return ok;
}


double ShowIssueV4Response::getActualWorkHours() const
{
    return actualWorkHours_;
}

void ShowIssueV4Response::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool ShowIssueV4Response::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void ShowIssueV4Response::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

std::vector<IssueUser>& ShowIssueV4Response::getAssignedCcUser()
{
    return assignedCcUser_;
}

void ShowIssueV4Response::setAssignedCcUser(const std::vector<IssueUser>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool ShowIssueV4Response::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void ShowIssueV4Response::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

IssueUser ShowIssueV4Response::getAssignedUser() const
{
    return assignedUser_;
}

void ShowIssueV4Response::setAssignedUser(const IssueUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool ShowIssueV4Response::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void ShowIssueV4Response::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

std::string ShowIssueV4Response::getBeginTime() const
{
    return beginTime_;
}

void ShowIssueV4Response::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowIssueV4Response::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowIssueV4Response::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowIssueV4Response::getCreatedTime() const
{
    return createdTime_;
}

void ShowIssueV4Response::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowIssueV4Response::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowIssueV4Response::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

IssueUser ShowIssueV4Response::getCreator() const
{
    return creator_;
}

void ShowIssueV4Response::setCreator(const IssueUser& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowIssueV4Response::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowIssueV4Response::unsetcreator()
{
    creatorIsSet_ = false;
}

std::vector<CustomField>& ShowIssueV4Response::getCustomFields()
{
    return customFields_;
}

void ShowIssueV4Response::setCustomFields(const std::vector<CustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool ShowIssueV4Response::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void ShowIssueV4Response::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<IssueDetailCustomField>& ShowIssueV4Response::getNewCustomFields()
{
    return newCustomFields_;
}

void ShowIssueV4Response::setNewCustomFields(const std::vector<IssueDetailCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool ShowIssueV4Response::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void ShowIssueV4Response::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

IssueUser ShowIssueV4Response::getDeveloper() const
{
    return developer_;
}

void ShowIssueV4Response::setDeveloper(const IssueUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool ShowIssueV4Response::developerIsSet() const
{
    return developerIsSet_;
}

void ShowIssueV4Response::unsetdeveloper()
{
    developerIsSet_ = false;
}

IssueItemSfV4_domain ShowIssueV4Response::getDomain() const
{
    return domain_;
}

void ShowIssueV4Response::setDomain(const IssueItemSfV4_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowIssueV4Response::domainIsSet() const
{
    return domainIsSet_;
}

void ShowIssueV4Response::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t ShowIssueV4Response::getDoneRatio() const
{
    return doneRatio_;
}

void ShowIssueV4Response::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool ShowIssueV4Response::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void ShowIssueV4Response::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string ShowIssueV4Response::getEndTime() const
{
    return endTime_;
}

void ShowIssueV4Response::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowIssueV4Response::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowIssueV4Response::unsetendTime()
{
    endTimeIsSet_ = false;
}

double ShowIssueV4Response::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void ShowIssueV4Response::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool ShowIssueV4Response::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void ShowIssueV4Response::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t ShowIssueV4Response::getId() const
{
    return id_;
}

void ShowIssueV4Response::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowIssueV4Response::idIsSet() const
{
    return idIsSet_;
}

void ShowIssueV4Response::unsetid()
{
    idIsSet_ = false;
}

IssueProjectResponseV4 ShowIssueV4Response::getProject() const
{
    return project_;
}

void ShowIssueV4Response::setProject(const IssueProjectResponseV4& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool ShowIssueV4Response::projectIsSet() const
{
    return projectIsSet_;
}

void ShowIssueV4Response::unsetproject()
{
    projectIsSet_ = false;
}

IssueItemSfV4_iteration ShowIssueV4Response::getIteration() const
{
    return iteration_;
}

void ShowIssueV4Response::setIteration(const IssueItemSfV4_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool ShowIssueV4Response::iterationIsSet() const
{
    return iterationIsSet_;
}

void ShowIssueV4Response::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueDetailResponseV4_story_point ShowIssueV4Response::getStoryPoint() const
{
    return storyPoint_;
}

void ShowIssueV4Response::setStoryPoint(const IssueDetailResponseV4_story_point& value)
{
    storyPoint_ = value;
    storyPointIsSet_ = true;
}

bool ShowIssueV4Response::storyPointIsSet() const
{
    return storyPointIsSet_;
}

void ShowIssueV4Response::unsetstoryPoint()
{
    storyPointIsSet_ = false;
}

IssueItemSfV4_module ShowIssueV4Response::getModule() const
{
    return module_;
}

void ShowIssueV4Response::setModule(const IssueItemSfV4_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool ShowIssueV4Response::moduleIsSet() const
{
    return moduleIsSet_;
}

void ShowIssueV4Response::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string ShowIssueV4Response::getName() const
{
    return name_;
}

void ShowIssueV4Response::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowIssueV4Response::nameIsSet() const
{
    return nameIsSet_;
}

void ShowIssueV4Response::unsetname()
{
    nameIsSet_ = false;
}

CreateIssueResponseV4_parent_issue ShowIssueV4Response::getParentIssue() const
{
    return parentIssue_;
}

void ShowIssueV4Response::setParentIssue(const CreateIssueResponseV4_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool ShowIssueV4Response::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void ShowIssueV4Response::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

IssueItemSfV4_priority ShowIssueV4Response::getPriority() const
{
    return priority_;
}

void ShowIssueV4Response::setPriority(const IssueItemSfV4_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ShowIssueV4Response::priorityIsSet() const
{
    return priorityIsSet_;
}

void ShowIssueV4Response::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueItemSfV4_severity ShowIssueV4Response::getSeverity() const
{
    return severity_;
}

void ShowIssueV4Response::setSeverity(const IssueItemSfV4_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ShowIssueV4Response::severityIsSet() const
{
    return severityIsSet_;
}

void ShowIssueV4Response::unsetseverity()
{
    severityIsSet_ = false;
}

IssueItemSfV4_status ShowIssueV4Response::getStatus() const
{
    return status_;
}

void ShowIssueV4Response::setStatus(const IssueItemSfV4_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIssueV4Response::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIssueV4Response::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIssueV4Response::getReleaseDev() const
{
    return releaseDev_;
}

void ShowIssueV4Response::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool ShowIssueV4Response::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void ShowIssueV4Response::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string ShowIssueV4Response::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void ShowIssueV4Response::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool ShowIssueV4Response::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void ShowIssueV4Response::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

IssueDetailResponseV4_env ShowIssueV4Response::getEnv() const
{
    return env_;
}

void ShowIssueV4Response::setEnv(const IssueDetailResponseV4_env& value)
{
    env_ = value;
    envIsSet_ = true;
}

bool ShowIssueV4Response::envIsSet() const
{
    return envIsSet_;
}

void ShowIssueV4Response::unsetenv()
{
    envIsSet_ = false;
}

CreateIssueResponseV4_tracker ShowIssueV4Response::getTracker() const
{
    return tracker_;
}

void ShowIssueV4Response::setTracker(const CreateIssueResponseV4_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool ShowIssueV4Response::trackerIsSet() const
{
    return trackerIsSet_;
}

void ShowIssueV4Response::unsettracker()
{
    trackerIsSet_ = false;
}

std::string ShowIssueV4Response::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowIssueV4Response::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowIssueV4Response::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowIssueV4Response::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ShowIssueV4Response::getClosedTime() const
{
    return closedTime_;
}

void ShowIssueV4Response::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ShowIssueV4Response::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ShowIssueV4Response::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ShowIssueV4Response::getDescription() const
{
    return description_;
}

void ShowIssueV4Response::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowIssueV4Response::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowIssueV4Response::unsetdescription()
{
    descriptionIsSet_ = false;
}

IssueOrder ShowIssueV4Response::getOrder() const
{
    return order_;
}

void ShowIssueV4Response::setOrder(const IssueOrder& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowIssueV4Response::orderIsSet() const
{
    return orderIsSet_;
}

void ShowIssueV4Response::unsetorder()
{
    orderIsSet_ = false;
}

std::vector<IssueAccessory>& ShowIssueV4Response::getAccessories()
{
    return accessories_;
}

void ShowIssueV4Response::setAccessories(const std::vector<IssueAccessory>& value)
{
    accessories_ = value;
    accessoriesIsSet_ = true;
}

bool ShowIssueV4Response::accessoriesIsSet() const
{
    return accessoriesIsSet_;
}

void ShowIssueV4Response::unsetaccessories()
{
    accessoriesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/UpdateIssueV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIssueV4Response::UpdateIssueV4Response()
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
    moduleIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentIssueIsSet_ = false;
    priorityIsSet_ = false;
    orderIsSet_ = false;
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
}

UpdateIssueV4Response::~UpdateIssueV4Response() = default;

void UpdateIssueV4Response::validate()
{
}

web::json::value UpdateIssueV4Response::toJson() const
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
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
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

    return val;
}
bool UpdateIssueV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            IssueResponseV4_order refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    return ok;
}


double UpdateIssueV4Response::getActualWorkHours() const
{
    return actualWorkHours_;
}

void UpdateIssueV4Response::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool UpdateIssueV4Response::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void UpdateIssueV4Response::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

std::vector<IssueUser>& UpdateIssueV4Response::getAssignedCcUser()
{
    return assignedCcUser_;
}

void UpdateIssueV4Response::setAssignedCcUser(const std::vector<IssueUser>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool UpdateIssueV4Response::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void UpdateIssueV4Response::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

IssueUser UpdateIssueV4Response::getAssignedUser() const
{
    return assignedUser_;
}

void UpdateIssueV4Response::setAssignedUser(const IssueUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool UpdateIssueV4Response::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void UpdateIssueV4Response::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

std::string UpdateIssueV4Response::getBeginTime() const
{
    return beginTime_;
}

void UpdateIssueV4Response::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool UpdateIssueV4Response::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void UpdateIssueV4Response::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string UpdateIssueV4Response::getCreatedTime() const
{
    return createdTime_;
}

void UpdateIssueV4Response::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool UpdateIssueV4Response::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void UpdateIssueV4Response::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

IssueUser UpdateIssueV4Response::getCreator() const
{
    return creator_;
}

void UpdateIssueV4Response::setCreator(const IssueUser& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool UpdateIssueV4Response::creatorIsSet() const
{
    return creatorIsSet_;
}

void UpdateIssueV4Response::unsetcreator()
{
    creatorIsSet_ = false;
}

std::vector<CustomField>& UpdateIssueV4Response::getCustomFields()
{
    return customFields_;
}

void UpdateIssueV4Response::setCustomFields(const std::vector<CustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool UpdateIssueV4Response::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void UpdateIssueV4Response::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<NewCustomField>& UpdateIssueV4Response::getNewCustomFields()
{
    return newCustomFields_;
}

void UpdateIssueV4Response::setNewCustomFields(const std::vector<NewCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool UpdateIssueV4Response::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void UpdateIssueV4Response::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

IssueUser UpdateIssueV4Response::getDeveloper() const
{
    return developer_;
}

void UpdateIssueV4Response::setDeveloper(const IssueUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool UpdateIssueV4Response::developerIsSet() const
{
    return developerIsSet_;
}

void UpdateIssueV4Response::unsetdeveloper()
{
    developerIsSet_ = false;
}

IssueItemSfV4_domain UpdateIssueV4Response::getDomain() const
{
    return domain_;
}

void UpdateIssueV4Response::setDomain(const IssueItemSfV4_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UpdateIssueV4Response::domainIsSet() const
{
    return domainIsSet_;
}

void UpdateIssueV4Response::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t UpdateIssueV4Response::getDoneRatio() const
{
    return doneRatio_;
}

void UpdateIssueV4Response::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool UpdateIssueV4Response::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void UpdateIssueV4Response::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string UpdateIssueV4Response::getEndTime() const
{
    return endTime_;
}

void UpdateIssueV4Response::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateIssueV4Response::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateIssueV4Response::unsetendTime()
{
    endTimeIsSet_ = false;
}

double UpdateIssueV4Response::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void UpdateIssueV4Response::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool UpdateIssueV4Response::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void UpdateIssueV4Response::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t UpdateIssueV4Response::getId() const
{
    return id_;
}

void UpdateIssueV4Response::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateIssueV4Response::idIsSet() const
{
    return idIsSet_;
}

void UpdateIssueV4Response::unsetid()
{
    idIsSet_ = false;
}

IssueProjectResponseV4 UpdateIssueV4Response::getProject() const
{
    return project_;
}

void UpdateIssueV4Response::setProject(const IssueProjectResponseV4& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool UpdateIssueV4Response::projectIsSet() const
{
    return projectIsSet_;
}

void UpdateIssueV4Response::unsetproject()
{
    projectIsSet_ = false;
}

IssueItemSfV4_iteration UpdateIssueV4Response::getIteration() const
{
    return iteration_;
}

void UpdateIssueV4Response::setIteration(const IssueItemSfV4_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool UpdateIssueV4Response::iterationIsSet() const
{
    return iterationIsSet_;
}

void UpdateIssueV4Response::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueItemSfV4_module UpdateIssueV4Response::getModule() const
{
    return module_;
}

void UpdateIssueV4Response::setModule(const IssueItemSfV4_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool UpdateIssueV4Response::moduleIsSet() const
{
    return moduleIsSet_;
}

void UpdateIssueV4Response::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string UpdateIssueV4Response::getName() const
{
    return name_;
}

void UpdateIssueV4Response::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateIssueV4Response::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateIssueV4Response::unsetname()
{
    nameIsSet_ = false;
}

CreateIssueResponseV4_parent_issue UpdateIssueV4Response::getParentIssue() const
{
    return parentIssue_;
}

void UpdateIssueV4Response::setParentIssue(const CreateIssueResponseV4_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool UpdateIssueV4Response::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void UpdateIssueV4Response::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

IssueItemSfV4_priority UpdateIssueV4Response::getPriority() const
{
    return priority_;
}

void UpdateIssueV4Response::setPriority(const IssueItemSfV4_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool UpdateIssueV4Response::priorityIsSet() const
{
    return priorityIsSet_;
}

void UpdateIssueV4Response::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueResponseV4_order UpdateIssueV4Response::getOrder() const
{
    return order_;
}

void UpdateIssueV4Response::setOrder(const IssueResponseV4_order& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool UpdateIssueV4Response::orderIsSet() const
{
    return orderIsSet_;
}

void UpdateIssueV4Response::unsetorder()
{
    orderIsSet_ = false;
}

IssueItemSfV4_severity UpdateIssueV4Response::getSeverity() const
{
    return severity_;
}

void UpdateIssueV4Response::setSeverity(const IssueItemSfV4_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool UpdateIssueV4Response::severityIsSet() const
{
    return severityIsSet_;
}

void UpdateIssueV4Response::unsetseverity()
{
    severityIsSet_ = false;
}

IssueItemSfV4_status UpdateIssueV4Response::getStatus() const
{
    return status_;
}

void UpdateIssueV4Response::setStatus(const IssueItemSfV4_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIssueV4Response::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIssueV4Response::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateIssueV4Response::getReleaseDev() const
{
    return releaseDev_;
}

void UpdateIssueV4Response::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool UpdateIssueV4Response::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void UpdateIssueV4Response::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string UpdateIssueV4Response::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void UpdateIssueV4Response::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool UpdateIssueV4Response::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void UpdateIssueV4Response::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

IssueDetailResponseV4_env UpdateIssueV4Response::getEnv() const
{
    return env_;
}

void UpdateIssueV4Response::setEnv(const IssueDetailResponseV4_env& value)
{
    env_ = value;
    envIsSet_ = true;
}

bool UpdateIssueV4Response::envIsSet() const
{
    return envIsSet_;
}

void UpdateIssueV4Response::unsetenv()
{
    envIsSet_ = false;
}

CreateIssueResponseV4_tracker UpdateIssueV4Response::getTracker() const
{
    return tracker_;
}

void UpdateIssueV4Response::setTracker(const CreateIssueResponseV4_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool UpdateIssueV4Response::trackerIsSet() const
{
    return trackerIsSet_;
}

void UpdateIssueV4Response::unsettracker()
{
    trackerIsSet_ = false;
}

std::string UpdateIssueV4Response::getUpdatedTime() const
{
    return updatedTime_;
}

void UpdateIssueV4Response::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool UpdateIssueV4Response::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void UpdateIssueV4Response::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string UpdateIssueV4Response::getClosedTime() const
{
    return closedTime_;
}

void UpdateIssueV4Response::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool UpdateIssueV4Response::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void UpdateIssueV4Response::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

}
}
}
}
}



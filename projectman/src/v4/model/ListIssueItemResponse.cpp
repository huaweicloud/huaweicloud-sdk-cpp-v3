

#include "huaweicloud/projectman/v4/model/ListIssueItemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueItemResponse::ListIssueItemResponse()
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
    deleted_ = false;
    deletedIsSet_ = false;
}

ListIssueItemResponse::~ListIssueItemResponse() = default;

void ListIssueItemResponse::validate()
{
}

web::json::value ListIssueItemResponse::toJson() const
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
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }

    return val;
}
bool ListIssueItemResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    return ok;
}


double ListIssueItemResponse::getActualWorkHours() const
{
    return actualWorkHours_;
}

void ListIssueItemResponse::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool ListIssueItemResponse::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void ListIssueItemResponse::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

std::vector<IssueUser>& ListIssueItemResponse::getAssignedCcUser()
{
    return assignedCcUser_;
}

void ListIssueItemResponse::setAssignedCcUser(const std::vector<IssueUser>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool ListIssueItemResponse::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void ListIssueItemResponse::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

IssueUser ListIssueItemResponse::getAssignedUser() const
{
    return assignedUser_;
}

void ListIssueItemResponse::setAssignedUser(const IssueUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool ListIssueItemResponse::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void ListIssueItemResponse::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

std::string ListIssueItemResponse::getBeginTime() const
{
    return beginTime_;
}

void ListIssueItemResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListIssueItemResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListIssueItemResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListIssueItemResponse::getCreatedTime() const
{
    return createdTime_;
}

void ListIssueItemResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ListIssueItemResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ListIssueItemResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

IssueUser ListIssueItemResponse::getCreator() const
{
    return creator_;
}

void ListIssueItemResponse::setCreator(const IssueUser& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListIssueItemResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListIssueItemResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::vector<CustomField>& ListIssueItemResponse::getCustomFields()
{
    return customFields_;
}

void ListIssueItemResponse::setCustomFields(const std::vector<CustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool ListIssueItemResponse::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void ListIssueItemResponse::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<NewCustomField>& ListIssueItemResponse::getNewCustomFields()
{
    return newCustomFields_;
}

void ListIssueItemResponse::setNewCustomFields(const std::vector<NewCustomField>& value)
{
    newCustomFields_ = value;
    newCustomFieldsIsSet_ = true;
}

bool ListIssueItemResponse::newCustomFieldsIsSet() const
{
    return newCustomFieldsIsSet_;
}

void ListIssueItemResponse::unsetnewCustomFields()
{
    newCustomFieldsIsSet_ = false;
}

IssueUser ListIssueItemResponse::getDeveloper() const
{
    return developer_;
}

void ListIssueItemResponse::setDeveloper(const IssueUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool ListIssueItemResponse::developerIsSet() const
{
    return developerIsSet_;
}

void ListIssueItemResponse::unsetdeveloper()
{
    developerIsSet_ = false;
}

IssueItemSfV4_domain ListIssueItemResponse::getDomain() const
{
    return domain_;
}

void ListIssueItemResponse::setDomain(const IssueItemSfV4_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListIssueItemResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ListIssueItemResponse::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t ListIssueItemResponse::getDoneRatio() const
{
    return doneRatio_;
}

void ListIssueItemResponse::setDoneRatio(int32_t value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool ListIssueItemResponse::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void ListIssueItemResponse::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string ListIssueItemResponse::getEndTime() const
{
    return endTime_;
}

void ListIssueItemResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListIssueItemResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListIssueItemResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

double ListIssueItemResponse::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void ListIssueItemResponse::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool ListIssueItemResponse::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void ListIssueItemResponse::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

int32_t ListIssueItemResponse::getId() const
{
    return id_;
}

void ListIssueItemResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListIssueItemResponse::idIsSet() const
{
    return idIsSet_;
}

void ListIssueItemResponse::unsetid()
{
    idIsSet_ = false;
}

IssueProjectResponseV4 ListIssueItemResponse::getProject() const
{
    return project_;
}

void ListIssueItemResponse::setProject(const IssueProjectResponseV4& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool ListIssueItemResponse::projectIsSet() const
{
    return projectIsSet_;
}

void ListIssueItemResponse::unsetproject()
{
    projectIsSet_ = false;
}

IssueItemSfV4_iteration ListIssueItemResponse::getIteration() const
{
    return iteration_;
}

void ListIssueItemResponse::setIteration(const IssueItemSfV4_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool ListIssueItemResponse::iterationIsSet() const
{
    return iterationIsSet_;
}

void ListIssueItemResponse::unsetiteration()
{
    iterationIsSet_ = false;
}

IssueItemSfV4_module ListIssueItemResponse::getModule() const
{
    return module_;
}

void ListIssueItemResponse::setModule(const IssueItemSfV4_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool ListIssueItemResponse::moduleIsSet() const
{
    return moduleIsSet_;
}

void ListIssueItemResponse::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string ListIssueItemResponse::getName() const
{
    return name_;
}

void ListIssueItemResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListIssueItemResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ListIssueItemResponse::unsetname()
{
    nameIsSet_ = false;
}

CreateIssueResponseV4_parent_issue ListIssueItemResponse::getParentIssue() const
{
    return parentIssue_;
}

void ListIssueItemResponse::setParentIssue(const CreateIssueResponseV4_parent_issue& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool ListIssueItemResponse::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void ListIssueItemResponse::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

IssueItemSfV4_priority ListIssueItemResponse::getPriority() const
{
    return priority_;
}

void ListIssueItemResponse::setPriority(const IssueItemSfV4_priority& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ListIssueItemResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void ListIssueItemResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

IssueResponseV4_order ListIssueItemResponse::getOrder() const
{
    return order_;
}

void ListIssueItemResponse::setOrder(const IssueResponseV4_order& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListIssueItemResponse::orderIsSet() const
{
    return orderIsSet_;
}

void ListIssueItemResponse::unsetorder()
{
    orderIsSet_ = false;
}

IssueItemSfV4_severity ListIssueItemResponse::getSeverity() const
{
    return severity_;
}

void ListIssueItemResponse::setSeverity(const IssueItemSfV4_severity& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ListIssueItemResponse::severityIsSet() const
{
    return severityIsSet_;
}

void ListIssueItemResponse::unsetseverity()
{
    severityIsSet_ = false;
}

IssueItemSfV4_status ListIssueItemResponse::getStatus() const
{
    return status_;
}

void ListIssueItemResponse::setStatus(const IssueItemSfV4_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIssueItemResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIssueItemResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIssueItemResponse::getReleaseDev() const
{
    return releaseDev_;
}

void ListIssueItemResponse::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool ListIssueItemResponse::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void ListIssueItemResponse::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string ListIssueItemResponse::getFindReleaseDev() const
{
    return findReleaseDev_;
}

void ListIssueItemResponse::setFindReleaseDev(const std::string& value)
{
    findReleaseDev_ = value;
    findReleaseDevIsSet_ = true;
}

bool ListIssueItemResponse::findReleaseDevIsSet() const
{
    return findReleaseDevIsSet_;
}

void ListIssueItemResponse::unsetfindReleaseDev()
{
    findReleaseDevIsSet_ = false;
}

IssueDetailResponseV4_env ListIssueItemResponse::getEnv() const
{
    return env_;
}

void ListIssueItemResponse::setEnv(const IssueDetailResponseV4_env& value)
{
    env_ = value;
    envIsSet_ = true;
}

bool ListIssueItemResponse::envIsSet() const
{
    return envIsSet_;
}

void ListIssueItemResponse::unsetenv()
{
    envIsSet_ = false;
}

CreateIssueResponseV4_tracker ListIssueItemResponse::getTracker() const
{
    return tracker_;
}

void ListIssueItemResponse::setTracker(const CreateIssueResponseV4_tracker& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool ListIssueItemResponse::trackerIsSet() const
{
    return trackerIsSet_;
}

void ListIssueItemResponse::unsettracker()
{
    trackerIsSet_ = false;
}

std::string ListIssueItemResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ListIssueItemResponse::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ListIssueItemResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ListIssueItemResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ListIssueItemResponse::getClosedTime() const
{
    return closedTime_;
}

void ListIssueItemResponse::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ListIssueItemResponse::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ListIssueItemResponse::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

bool ListIssueItemResponse::isDeleted() const
{
    return deleted_;
}

void ListIssueItemResponse::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool ListIssueItemResponse::deletedIsSet() const
{
    return deletedIsSet_;
}

void ListIssueItemResponse::unsetdeleted()
{
    deletedIsSet_ = false;
}

}
}
}
}
}



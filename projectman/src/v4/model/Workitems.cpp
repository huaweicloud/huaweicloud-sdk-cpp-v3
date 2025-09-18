

#include "huaweicloud/projectman/v4/model/Workitems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Workitems::Workitems()
{
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    actualWorkHours_ = 0.0;
    actualWorkHoursIsSet_ = false;
    assignedUserIsSet_ = false;
    authorIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    tagsIsSet_ = false;
    developerIsSet_ = false;
    assignedCcUserIsSet_ = false;
    discoverVersion_ = "";
    discoverVersionIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    doneRatio_ = "";
    doneRatioIsSet_ = false;
    expectedWorkHours_ = 0.0;
    expectedWorkHoursIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    parentWorkItemId_ = "";
    parentWorkItemIdIsSet_ = false;
    releaseVersion_ = "";
    releaseVersionIsSet_ = false;
    storyPoint_ = "";
    storyPointIsSet_ = false;
    domainIsSet_ = false;
    iterationIsSet_ = false;
    moduleIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    statusIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    important_ = "";
    importantIsSet_ = false;
    customFieldsIsSet_ = false;
}

Workitems::~Workitems() = default;

void Workitems::validate()
{
}

web::json::value Workitems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
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
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(developerIsSet_) {
        val[utility::conversions::to_string_t("developer")] = ModelBase::toJson(developer_);
    }
    if(assignedCcUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc_user")] = ModelBase::toJson(assignedCcUser_);
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
    if(parentWorkItemIdIsSet_) {
        val[utility::conversions::to_string_t("parent_work_item_id")] = ModelBase::toJson(parentWorkItemId_);
    }
    if(releaseVersionIsSet_) {
        val[utility::conversions::to_string_t("release_version")] = ModelBase::toJson(releaseVersion_);
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
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(importantIsSet_) {
        val[utility::conversions::to_string_t("important")] = ModelBase::toJson(important_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }

    return val;
}
bool Workitems::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
            WorkitemUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            WorkitemUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Workitems_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer"));
        if(!fieldValue.is_null())
        {
            WorkitemUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_cc_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc_user"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkitemUser> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCcUser(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("done_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("done_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_work_item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_work_item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentWorkItemId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("story_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            Workitems_domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration"));
        if(!fieldValue.is_null())
        {
            Workitems_iteration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            Workitems_module refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Workitems_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("important"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("important"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportant(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkitemCustomField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    return ok;
}


std::string Workitems::getId() const
{
    return id_;
}

void Workitems::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Workitems::idIsSet() const
{
    return idIsSet_;
}

void Workitems::unsetid()
{
    idIsSet_ = false;
}

std::string Workitems::getDescription() const
{
    return description_;
}

void Workitems::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Workitems::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Workitems::unsetdescription()
{
    descriptionIsSet_ = false;
}

double Workitems::getActualWorkHours() const
{
    return actualWorkHours_;
}

void Workitems::setActualWorkHours(double value)
{
    actualWorkHours_ = value;
    actualWorkHoursIsSet_ = true;
}

bool Workitems::actualWorkHoursIsSet() const
{
    return actualWorkHoursIsSet_;
}

void Workitems::unsetactualWorkHours()
{
    actualWorkHoursIsSet_ = false;
}

WorkitemUser Workitems::getAssignedUser() const
{
    return assignedUser_;
}

void Workitems::setAssignedUser(const WorkitemUser& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool Workitems::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void Workitems::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

WorkitemUser Workitems::getAuthor() const
{
    return author_;
}

void Workitems::setAuthor(const WorkitemUser& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool Workitems::authorIsSet() const
{
    return authorIsSet_;
}

void Workitems::unsetauthor()
{
    authorIsSet_ = false;
}

std::string Workitems::getBeginTime() const
{
    return beginTime_;
}

void Workitems::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool Workitems::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void Workitems::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string Workitems::getCreatedTime() const
{
    return createdTime_;
}

void Workitems::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool Workitems::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void Workitems::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::vector<Workitems_tags>& Workitems::getTags()
{
    return tags_;
}

void Workitems::setTags(const std::vector<Workitems_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Workitems::tagsIsSet() const
{
    return tagsIsSet_;
}

void Workitems::unsettags()
{
    tagsIsSet_ = false;
}

WorkitemUser Workitems::getDeveloper() const
{
    return developer_;
}

void Workitems::setDeveloper(const WorkitemUser& value)
{
    developer_ = value;
    developerIsSet_ = true;
}

bool Workitems::developerIsSet() const
{
    return developerIsSet_;
}

void Workitems::unsetdeveloper()
{
    developerIsSet_ = false;
}

std::vector<WorkitemUser>& Workitems::getAssignedCcUser()
{
    return assignedCcUser_;
}

void Workitems::setAssignedCcUser(const std::vector<WorkitemUser>& value)
{
    assignedCcUser_ = value;
    assignedCcUserIsSet_ = true;
}

bool Workitems::assignedCcUserIsSet() const
{
    return assignedCcUserIsSet_;
}

void Workitems::unsetassignedCcUser()
{
    assignedCcUserIsSet_ = false;
}

std::string Workitems::getDiscoverVersion() const
{
    return discoverVersion_;
}

void Workitems::setDiscoverVersion(const std::string& value)
{
    discoverVersion_ = value;
    discoverVersionIsSet_ = true;
}

bool Workitems::discoverVersionIsSet() const
{
    return discoverVersionIsSet_;
}

void Workitems::unsetdiscoverVersion()
{
    discoverVersionIsSet_ = false;
}

std::string Workitems::getEndTime() const
{
    return endTime_;
}

void Workitems::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Workitems::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Workitems::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string Workitems::getDoneRatio() const
{
    return doneRatio_;
}

void Workitems::setDoneRatio(const std::string& value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool Workitems::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void Workitems::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

double Workitems::getExpectedWorkHours() const
{
    return expectedWorkHours_;
}

void Workitems::setExpectedWorkHours(double value)
{
    expectedWorkHours_ = value;
    expectedWorkHoursIsSet_ = true;
}

bool Workitems::expectedWorkHoursIsSet() const
{
    return expectedWorkHoursIsSet_;
}

void Workitems::unsetexpectedWorkHours()
{
    expectedWorkHoursIsSet_ = false;
}

std::string Workitems::getOrder() const
{
    return order_;
}

void Workitems::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool Workitems::orderIsSet() const
{
    return orderIsSet_;
}

void Workitems::unsetorder()
{
    orderIsSet_ = false;
}

std::string Workitems::getParentWorkItemId() const
{
    return parentWorkItemId_;
}

void Workitems::setParentWorkItemId(const std::string& value)
{
    parentWorkItemId_ = value;
    parentWorkItemIdIsSet_ = true;
}

bool Workitems::parentWorkItemIdIsSet() const
{
    return parentWorkItemIdIsSet_;
}

void Workitems::unsetparentWorkItemId()
{
    parentWorkItemIdIsSet_ = false;
}

std::string Workitems::getReleaseVersion() const
{
    return releaseVersion_;
}

void Workitems::setReleaseVersion(const std::string& value)
{
    releaseVersion_ = value;
    releaseVersionIsSet_ = true;
}

bool Workitems::releaseVersionIsSet() const
{
    return releaseVersionIsSet_;
}

void Workitems::unsetreleaseVersion()
{
    releaseVersionIsSet_ = false;
}

std::string Workitems::getStoryPoint() const
{
    return storyPoint_;
}

void Workitems::setStoryPoint(const std::string& value)
{
    storyPoint_ = value;
    storyPointIsSet_ = true;
}

bool Workitems::storyPointIsSet() const
{
    return storyPointIsSet_;
}

void Workitems::unsetstoryPoint()
{
    storyPointIsSet_ = false;
}

Workitems_domain Workitems::getDomain() const
{
    return domain_;
}

void Workitems::setDomain(const Workitems_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool Workitems::domainIsSet() const
{
    return domainIsSet_;
}

void Workitems::unsetdomain()
{
    domainIsSet_ = false;
}

Workitems_iteration Workitems::getIteration() const
{
    return iteration_;
}

void Workitems::setIteration(const Workitems_iteration& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool Workitems::iterationIsSet() const
{
    return iterationIsSet_;
}

void Workitems::unsetiteration()
{
    iterationIsSet_ = false;
}

Workitems_module Workitems::getModule() const
{
    return module_;
}

void Workitems::setModule(const Workitems_module& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool Workitems::moduleIsSet() const
{
    return moduleIsSet_;
}

void Workitems::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string Workitems::getPriority() const
{
    return priority_;
}

void Workitems::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool Workitems::priorityIsSet() const
{
    return priorityIsSet_;
}

void Workitems::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string Workitems::getSeverity() const
{
    return severity_;
}

void Workitems::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool Workitems::severityIsSet() const
{
    return severityIsSet_;
}

void Workitems::unsetseverity()
{
    severityIsSet_ = false;
}

Workitems_status Workitems::getStatus() const
{
    return status_;
}

void Workitems::setStatus(const Workitems_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Workitems::statusIsSet() const
{
    return statusIsSet_;
}

void Workitems::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Workitems::getSubject() const
{
    return subject_;
}

void Workitems::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool Workitems::subjectIsSet() const
{
    return subjectIsSet_;
}

void Workitems::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string Workitems::getUpdatedTime() const
{
    return updatedTime_;
}

void Workitems::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool Workitems::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void Workitems::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string Workitems::getSequence() const
{
    return sequence_;
}

void Workitems::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool Workitems::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void Workitems::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string Workitems::getImportant() const
{
    return important_;
}

void Workitems::setImportant(const std::string& value)
{
    important_ = value;
    importantIsSet_ = true;
}

bool Workitems::importantIsSet() const
{
    return importantIsSet_;
}

void Workitems::unsetimportant()
{
    importantIsSet_ = false;
}

std::vector<WorkitemCustomField>& Workitems::getCustomFields()
{
    return customFields_;
}

void Workitems::setCustomFields(const std::vector<WorkitemCustomField>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool Workitems::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void Workitems::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

}
}
}
}
}



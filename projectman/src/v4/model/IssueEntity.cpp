

#include "huaweicloud/projectman/v4/model/IssueEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueEntity::IssueEntity()
{
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    assigneeIsSet_ = false;
    createdByIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedByIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    closeTime_ = "";
    closeTimeIsSet_ = false;
    workload_ = "";
    workloadIsSet_ = false;
    workloadSum_ = "";
    workloadSumIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    suspended_ = false;
    suspendedIsSet_ = false;
    statusModifiedTime_ = "";
    statusModifiedTimeIsSet_ = false;
    labelsIsSet_ = false;
    customFieldsIsSet_ = false;
    childrenIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    ir2feature_ = "";
    ir2featureIsSet_ = false;
    needBreak_ = "";
    needBreakIsSet_ = false;
    breakStatus_ = "";
    breakStatusIsSet_ = false;
    baseline_ = "";
    baselineIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    relatedNetworkSecurity_ = "";
    relatedNetworkSecurityIsSet_ = false;
    collaboratives_ = "";
    collaborativesIsSet_ = false;
    businessDomain_ = "";
    businessDomainIsSet_ = false;
    planPi_ = "";
    planPiIsSet_ = false;
    changeStatus_ = "";
    changeStatusIsSet_ = false;
    noBreakReason_ = "";
    noBreakReasonIsSet_ = false;
    submittedBy_ = "";
    submittedByIsSet_ = false;
    ir2rr_ = "";
    ir2rrIsSet_ = false;
}

IssueEntity::~IssueEntity() = default;

void IssueEntity::validate()
{
}

web::json::value IssueEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(closeTimeIsSet_) {
        val[utility::conversions::to_string_t("close_time")] = ModelBase::toJson(closeTime_);
    }
    if(workloadIsSet_) {
        val[utility::conversions::to_string_t("workload")] = ModelBase::toJson(workload_);
    }
    if(workloadSumIsSet_) {
        val[utility::conversions::to_string_t("workload_sum")] = ModelBase::toJson(workloadSum_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }
    if(suspendedIsSet_) {
        val[utility::conversions::to_string_t("suspended")] = ModelBase::toJson(suspended_);
    }
    if(statusModifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("status_modified_time")] = ModelBase::toJson(statusModifiedTime_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(ir2featureIsSet_) {
        val[utility::conversions::to_string_t("ir2feature")] = ModelBase::toJson(ir2feature_);
    }
    if(needBreakIsSet_) {
        val[utility::conversions::to_string_t("need_break")] = ModelBase::toJson(needBreak_);
    }
    if(breakStatusIsSet_) {
        val[utility::conversions::to_string_t("break_status")] = ModelBase::toJson(breakStatus_);
    }
    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(relatedNetworkSecurityIsSet_) {
        val[utility::conversions::to_string_t("related_network_security")] = ModelBase::toJson(relatedNetworkSecurity_);
    }
    if(collaborativesIsSet_) {
        val[utility::conversions::to_string_t("collaboratives")] = ModelBase::toJson(collaboratives_);
    }
    if(businessDomainIsSet_) {
        val[utility::conversions::to_string_t("business_domain")] = ModelBase::toJson(businessDomain_);
    }
    if(planPiIsSet_) {
        val[utility::conversions::to_string_t("plan_pi")] = ModelBase::toJson(planPi_);
    }
    if(changeStatusIsSet_) {
        val[utility::conversions::to_string_t("change_status")] = ModelBase::toJson(changeStatus_);
    }
    if(noBreakReasonIsSet_) {
        val[utility::conversions::to_string_t("no_break_reason")] = ModelBase::toJson(noBreakReason_);
    }
    if(submittedByIsSet_) {
        val[utility::conversions::to_string_t("submitted_by")] = ModelBase::toJson(submittedBy_);
    }
    if(ir2rrIsSet_) {
        val[utility::conversions::to_string_t("ir2rr")] = ModelBase::toJson(ir2rr_);
    }

    return val;
}
bool IssueEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workload"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkload(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workload_sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload_sum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkloadSum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suspended"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suspended"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuspended(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldCodeValuePair> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ir2feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ir2feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIr2feature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_break"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_break"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedBreak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("break_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("break_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBreakStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseline(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("related_network_security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_network_security"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedNetworkSecurity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collaboratives"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collaboratives"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollaboratives(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_pi"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanPi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_break_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_break_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoBreakReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submitted_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submitted_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmittedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ir2rr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ir2rr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIr2rr(refVal);
        }
    }
    return ok;
}


std::string IssueEntity::getId() const
{
    return id_;
}

void IssueEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueEntity::idIsSet() const
{
    return idIsSet_;
}

void IssueEntity::unsetid()
{
    idIsSet_ = false;
}

std::string IssueEntity::getTitle() const
{
    return title_;
}

void IssueEntity::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueEntity::titleIsSet() const
{
    return titleIsSet_;
}

void IssueEntity::unsettitle()
{
    titleIsSet_ = false;
}

std::string IssueEntity::getDescription() const
{
    return description_;
}

void IssueEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IssueEntity::getType() const
{
    return type_;
}

void IssueEntity::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IssueEntity::typeIsSet() const
{
    return typeIsSet_;
}

void IssueEntity::unsettype()
{
    typeIsSet_ = false;
}

std::string IssueEntity::getNumber() const
{
    return number_;
}

void IssueEntity::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssueEntity::numberIsSet() const
{
    return numberIsSet_;
}

void IssueEntity::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssueEntity::getCategory() const
{
    return category_;
}

void IssueEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool IssueEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void IssueEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string IssueEntity::getParentId() const
{
    return parentId_;
}

void IssueEntity::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool IssueEntity::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void IssueEntity::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string IssueEntity::getProjectId() const
{
    return projectId_;
}

void IssueEntity::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IssueEntity::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IssueEntity::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string IssueEntity::getStatus() const
{
    return status_;
}

void IssueEntity::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueEntity::statusIsSet() const
{
    return statusIsSet_;
}

void IssueEntity::unsetstatus()
{
    statusIsSet_ = false;
}

std::string IssueEntity::getState() const
{
    return state_;
}

void IssueEntity::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool IssueEntity::stateIsSet() const
{
    return stateIsSet_;
}

void IssueEntity::unsetstate()
{
    stateIsSet_ = false;
}

UserEntity IssueEntity::getAssignee() const
{
    return assignee_;
}

void IssueEntity::setAssignee(const UserEntity& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool IssueEntity::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void IssueEntity::unsetassignee()
{
    assigneeIsSet_ = false;
}

UserEntity IssueEntity::getCreatedBy() const
{
    return createdBy_;
}

void IssueEntity::setCreatedBy(const UserEntity& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool IssueEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void IssueEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string IssueEntity::getCreatedTime() const
{
    return createdTime_;
}

void IssueEntity::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool IssueEntity::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void IssueEntity::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

UserEntity IssueEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void IssueEntity::setModifiedBy(const UserEntity& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool IssueEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void IssueEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string IssueEntity::getModifiedTime() const
{
    return modifiedTime_;
}

void IssueEntity::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool IssueEntity::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void IssueEntity::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string IssueEntity::getPlanEndDate() const
{
    return planEndDate_;
}

void IssueEntity::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IssueEntity::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IssueEntity::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string IssueEntity::getCloseTime() const
{
    return closeTime_;
}

void IssueEntity::setCloseTime(const std::string& value)
{
    closeTime_ = value;
    closeTimeIsSet_ = true;
}

bool IssueEntity::closeTimeIsSet() const
{
    return closeTimeIsSet_;
}

void IssueEntity::unsetcloseTime()
{
    closeTimeIsSet_ = false;
}

std::string IssueEntity::getWorkload() const
{
    return workload_;
}

void IssueEntity::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool IssueEntity::workloadIsSet() const
{
    return workloadIsSet_;
}

void IssueEntity::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string IssueEntity::getWorkloadSum() const
{
    return workloadSum_;
}

void IssueEntity::setWorkloadSum(const std::string& value)
{
    workloadSum_ = value;
    workloadSumIsSet_ = true;
}

bool IssueEntity::workloadSumIsSet() const
{
    return workloadSumIsSet_;
}

void IssueEntity::unsetworkloadSum()
{
    workloadSumIsSet_ = false;
}

std::string IssueEntity::getTenantId() const
{
    return tenantId_;
}

void IssueEntity::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool IssueEntity::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void IssueEntity::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string IssueEntity::getLink() const
{
    return link_;
}

void IssueEntity::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool IssueEntity::linkIsSet() const
{
    return linkIsSet_;
}

void IssueEntity::unsetlink()
{
    linkIsSet_ = false;
}

bool IssueEntity::isSuspended() const
{
    return suspended_;
}

void IssueEntity::setSuspended(bool value)
{
    suspended_ = value;
    suspendedIsSet_ = true;
}

bool IssueEntity::suspendedIsSet() const
{
    return suspendedIsSet_;
}

void IssueEntity::unsetsuspended()
{
    suspendedIsSet_ = false;
}

std::string IssueEntity::getStatusModifiedTime() const
{
    return statusModifiedTime_;
}

void IssueEntity::setStatusModifiedTime(const std::string& value)
{
    statusModifiedTime_ = value;
    statusModifiedTimeIsSet_ = true;
}

bool IssueEntity::statusModifiedTimeIsSet() const
{
    return statusModifiedTimeIsSet_;
}

void IssueEntity::unsetstatusModifiedTime()
{
    statusModifiedTimeIsSet_ = false;
}

std::vector<LabelEntity>& IssueEntity::getLabels()
{
    return labels_;
}

void IssueEntity::setLabels(const std::vector<LabelEntity>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool IssueEntity::labelsIsSet() const
{
    return labelsIsSet_;
}

void IssueEntity::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<FieldCodeValuePair>& IssueEntity::getCustomFields()
{
    return customFields_;
}

void IssueEntity::setCustomFields(const std::vector<FieldCodeValuePair>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool IssueEntity::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void IssueEntity::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<IssueEntity>& IssueEntity::getChildren()
{
    return *children_;
}

void IssueEntity::setChildren(const std::vector<IssueEntity>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool IssueEntity::childrenIsSet() const
{
    return childrenIsSet_;
}

void IssueEntity::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string IssueEntity::getPath() const
{
    return path_;
}

void IssueEntity::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool IssueEntity::pathIsSet() const
{
    return pathIsSet_;
}

void IssueEntity::unsetpath()
{
    pathIsSet_ = false;
}

std::string IssueEntity::getIr2feature() const
{
    return ir2feature_;
}

void IssueEntity::setIr2feature(const std::string& value)
{
    ir2feature_ = value;
    ir2featureIsSet_ = true;
}

bool IssueEntity::ir2featureIsSet() const
{
    return ir2featureIsSet_;
}

void IssueEntity::unsetir2feature()
{
    ir2featureIsSet_ = false;
}

std::string IssueEntity::getNeedBreak() const
{
    return needBreak_;
}

void IssueEntity::setNeedBreak(const std::string& value)
{
    needBreak_ = value;
    needBreakIsSet_ = true;
}

bool IssueEntity::needBreakIsSet() const
{
    return needBreakIsSet_;
}

void IssueEntity::unsetneedBreak()
{
    needBreakIsSet_ = false;
}

std::string IssueEntity::getBreakStatus() const
{
    return breakStatus_;
}

void IssueEntity::setBreakStatus(const std::string& value)
{
    breakStatus_ = value;
    breakStatusIsSet_ = true;
}

bool IssueEntity::breakStatusIsSet() const
{
    return breakStatusIsSet_;
}

void IssueEntity::unsetbreakStatus()
{
    breakStatusIsSet_ = false;
}

std::string IssueEntity::getBaseline() const
{
    return baseline_;
}

void IssueEntity::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool IssueEntity::baselineIsSet() const
{
    return baselineIsSet_;
}

void IssueEntity::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string IssueEntity::getPriority() const
{
    return priority_;
}

void IssueEntity::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueEntity::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueEntity::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string IssueEntity::getRelatedNetworkSecurity() const
{
    return relatedNetworkSecurity_;
}

void IssueEntity::setRelatedNetworkSecurity(const std::string& value)
{
    relatedNetworkSecurity_ = value;
    relatedNetworkSecurityIsSet_ = true;
}

bool IssueEntity::relatedNetworkSecurityIsSet() const
{
    return relatedNetworkSecurityIsSet_;
}

void IssueEntity::unsetrelatedNetworkSecurity()
{
    relatedNetworkSecurityIsSet_ = false;
}

std::string IssueEntity::getCollaboratives() const
{
    return collaboratives_;
}

void IssueEntity::setCollaboratives(const std::string& value)
{
    collaboratives_ = value;
    collaborativesIsSet_ = true;
}

bool IssueEntity::collaborativesIsSet() const
{
    return collaborativesIsSet_;
}

void IssueEntity::unsetcollaboratives()
{
    collaborativesIsSet_ = false;
}

std::string IssueEntity::getBusinessDomain() const
{
    return businessDomain_;
}

void IssueEntity::setBusinessDomain(const std::string& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool IssueEntity::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void IssueEntity::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string IssueEntity::getPlanPi() const
{
    return planPi_;
}

void IssueEntity::setPlanPi(const std::string& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool IssueEntity::planPiIsSet() const
{
    return planPiIsSet_;
}

void IssueEntity::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::string IssueEntity::getChangeStatus() const
{
    return changeStatus_;
}

void IssueEntity::setChangeStatus(const std::string& value)
{
    changeStatus_ = value;
    changeStatusIsSet_ = true;
}

bool IssueEntity::changeStatusIsSet() const
{
    return changeStatusIsSet_;
}

void IssueEntity::unsetchangeStatus()
{
    changeStatusIsSet_ = false;
}

std::string IssueEntity::getNoBreakReason() const
{
    return noBreakReason_;
}

void IssueEntity::setNoBreakReason(const std::string& value)
{
    noBreakReason_ = value;
    noBreakReasonIsSet_ = true;
}

bool IssueEntity::noBreakReasonIsSet() const
{
    return noBreakReasonIsSet_;
}

void IssueEntity::unsetnoBreakReason()
{
    noBreakReasonIsSet_ = false;
}

std::string IssueEntity::getSubmittedBy() const
{
    return submittedBy_;
}

void IssueEntity::setSubmittedBy(const std::string& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool IssueEntity::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void IssueEntity::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string IssueEntity::getIr2rr() const
{
    return ir2rr_;
}

void IssueEntity::setIr2rr(const std::string& value)
{
    ir2rr_ = value;
    ir2rrIsSet_ = true;
}

bool IssueEntity::ir2rrIsSet() const
{
    return ir2rrIsSet_;
}

void IssueEntity::unsetir2rr()
{
    ir2rrIsSet_ = false;
}

}
}
}
}
}



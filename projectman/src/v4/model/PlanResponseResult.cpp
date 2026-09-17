

#include "huaweicloud/projectman/v4/model/PlanResponseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PlanResponseResult::PlanResponseResult()
{
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    childrenIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    planStartDate_ = 0L;
    planStartDateIsSet_ = false;
    planEndDate_ = 0L;
    planEndDateIsSet_ = false;
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    baseline_ = "";
    baselineIsSet_ = false;
    workload_ = "";
    workloadIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

PlanResponseResult::~PlanResponseResult() = default;

void PlanResponseResult::validate()
{
}

web::json::value PlanResponseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }
    if(workloadIsSet_) {
        val[utility::conversions::to_string_t("workload")] = ModelBase::toJson(workload_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool PlanResponseResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<PlanResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("baseline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseline(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string PlanResponseResult::getId() const
{
    return id_;
}

void PlanResponseResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PlanResponseResult::idIsSet() const
{
    return idIsSet_;
}

void PlanResponseResult::unsetid()
{
    idIsSet_ = false;
}

std::string PlanResponseResult::getTitle() const
{
    return title_;
}

void PlanResponseResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PlanResponseResult::titleIsSet() const
{
    return titleIsSet_;
}

void PlanResponseResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string PlanResponseResult::getCategory() const
{
    return category_;
}

void PlanResponseResult::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool PlanResponseResult::categoryIsSet() const
{
    return categoryIsSet_;
}

void PlanResponseResult::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string PlanResponseResult::getDescription() const
{
    return description_;
}

void PlanResponseResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PlanResponseResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PlanResponseResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PlanResponseResult::getState() const
{
    return state_;
}

void PlanResponseResult::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool PlanResponseResult::stateIsSet() const
{
    return stateIsSet_;
}

void PlanResponseResult::unsetstate()
{
    stateIsSet_ = false;
}

std::string PlanResponseResult::getStatus() const
{
    return status_;
}

void PlanResponseResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PlanResponseResult::statusIsSet() const
{
    return statusIsSet_;
}

void PlanResponseResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<PlanResponseResult>& PlanResponseResult::getChildren()
{
    return *children_;
}

void PlanResponseResult::setChildren(const std::vector<PlanResponseResult>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool PlanResponseResult::childrenIsSet() const
{
    return childrenIsSet_;
}

void PlanResponseResult::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string PlanResponseResult::getCreatedBy() const
{
    return createdBy_;
}

void PlanResponseResult::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool PlanResponseResult::createdByIsSet() const
{
    return createdByIsSet_;
}

void PlanResponseResult::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string PlanResponseResult::getModifiedBy() const
{
    return modifiedBy_;
}

void PlanResponseResult::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool PlanResponseResult::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void PlanResponseResult::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

int64_t PlanResponseResult::getPlanStartDate() const
{
    return planStartDate_;
}

void PlanResponseResult::setPlanStartDate(int64_t value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool PlanResponseResult::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void PlanResponseResult::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t PlanResponseResult::getPlanEndDate() const
{
    return planEndDate_;
}

void PlanResponseResult::setPlanEndDate(int64_t value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool PlanResponseResult::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void PlanResponseResult::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int64_t PlanResponseResult::getCreatedDate() const
{
    return createdDate_;
}

void PlanResponseResult::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool PlanResponseResult::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void PlanResponseResult::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string PlanResponseResult::getParentId() const
{
    return parentId_;
}

void PlanResponseResult::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool PlanResponseResult::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void PlanResponseResult::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string PlanResponseResult::getBaseline() const
{
    return baseline_;
}

void PlanResponseResult::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool PlanResponseResult::baselineIsSet() const
{
    return baselineIsSet_;
}

void PlanResponseResult::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string PlanResponseResult::getWorkload() const
{
    return workload_;
}

void PlanResponseResult::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool PlanResponseResult::workloadIsSet() const
{
    return workloadIsSet_;
}

void PlanResponseResult::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string PlanResponseResult::getOwner() const
{
    return owner_;
}

void PlanResponseResult::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PlanResponseResult::ownerIsSet() const
{
    return ownerIsSet_;
}

void PlanResponseResult::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}



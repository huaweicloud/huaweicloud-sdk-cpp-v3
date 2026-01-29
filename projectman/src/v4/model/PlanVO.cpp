

#include "huaweicloud/projectman/v4/model/PlanVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PlanVO::PlanVO()
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
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    planEndDate_ = "";
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

PlanVO::~PlanVO() = default;

void PlanVO::validate()
{
}

web::json::value PlanVO::toJson() const
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
bool PlanVO::fromJson(const web::json::value& val)
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
            std::vector<PlanVO> refVal;
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
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


std::string PlanVO::getId() const
{
    return id_;
}

void PlanVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PlanVO::idIsSet() const
{
    return idIsSet_;
}

void PlanVO::unsetid()
{
    idIsSet_ = false;
}

std::string PlanVO::getTitle() const
{
    return title_;
}

void PlanVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PlanVO::titleIsSet() const
{
    return titleIsSet_;
}

void PlanVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string PlanVO::getCategory() const
{
    return category_;
}

void PlanVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool PlanVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void PlanVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string PlanVO::getDescription() const
{
    return description_;
}

void PlanVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PlanVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PlanVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PlanVO::getState() const
{
    return state_;
}

void PlanVO::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool PlanVO::stateIsSet() const
{
    return stateIsSet_;
}

void PlanVO::unsetstate()
{
    stateIsSet_ = false;
}

std::string PlanVO::getStatus() const
{
    return status_;
}

void PlanVO::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PlanVO::statusIsSet() const
{
    return statusIsSet_;
}

void PlanVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<PlanVO>& PlanVO::getChildren()
{
    return *children_;
}

void PlanVO::setChildren(const std::vector<PlanVO>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool PlanVO::childrenIsSet() const
{
    return childrenIsSet_;
}

void PlanVO::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string PlanVO::getCreatedBy() const
{
    return createdBy_;
}

void PlanVO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool PlanVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void PlanVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string PlanVO::getModifiedBy() const
{
    return modifiedBy_;
}

void PlanVO::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool PlanVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void PlanVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string PlanVO::getPlanStartDate() const
{
    return planStartDate_;
}

void PlanVO::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool PlanVO::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void PlanVO::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

std::string PlanVO::getPlanEndDate() const
{
    return planEndDate_;
}

void PlanVO::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool PlanVO::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void PlanVO::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int64_t PlanVO::getCreatedDate() const
{
    return createdDate_;
}

void PlanVO::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool PlanVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void PlanVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string PlanVO::getParentId() const
{
    return parentId_;
}

void PlanVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool PlanVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void PlanVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string PlanVO::getBaseline() const
{
    return baseline_;
}

void PlanVO::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool PlanVO::baselineIsSet() const
{
    return baselineIsSet_;
}

void PlanVO::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string PlanVO::getWorkload() const
{
    return workload_;
}

void PlanVO::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool PlanVO::workloadIsSet() const
{
    return workloadIsSet_;
}

void PlanVO::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string PlanVO::getOwner() const
{
    return owner_;
}

void PlanVO::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PlanVO::ownerIsSet() const
{
    return ownerIsSet_;
}

void PlanVO::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}



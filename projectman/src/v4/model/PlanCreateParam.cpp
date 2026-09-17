

#include "huaweicloud/projectman/v4/model/PlanCreateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PlanCreateParam::PlanCreateParam()
{
    title_ = "";
    titleIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    workload_ = "";
    workloadIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

PlanCreateParam::~PlanCreateParam() = default;

void PlanCreateParam::validate()
{
}

web::json::value PlanCreateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(workloadIsSet_) {
        val[utility::conversions::to_string_t("workload")] = ModelBase::toJson(workload_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool PlanCreateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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


std::string PlanCreateParam::getTitle() const
{
    return title_;
}

void PlanCreateParam::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PlanCreateParam::titleIsSet() const
{
    return titleIsSet_;
}

void PlanCreateParam::unsettitle()
{
    titleIsSet_ = false;
}

std::string PlanCreateParam::getCategory() const
{
    return category_;
}

void PlanCreateParam::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool PlanCreateParam::categoryIsSet() const
{
    return categoryIsSet_;
}

void PlanCreateParam::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string PlanCreateParam::getDescription() const
{
    return description_;
}

void PlanCreateParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PlanCreateParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PlanCreateParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PlanCreateParam::getPlanStartDate() const
{
    return planStartDate_;
}

void PlanCreateParam::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool PlanCreateParam::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void PlanCreateParam::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

std::string PlanCreateParam::getPlanEndDate() const
{
    return planEndDate_;
}

void PlanCreateParam::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool PlanCreateParam::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void PlanCreateParam::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string PlanCreateParam::getParentId() const
{
    return parentId_;
}

void PlanCreateParam::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool PlanCreateParam::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void PlanCreateParam::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string PlanCreateParam::getWorkload() const
{
    return workload_;
}

void PlanCreateParam::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool PlanCreateParam::workloadIsSet() const
{
    return workloadIsSet_;
}

void PlanCreateParam::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string PlanCreateParam::getOwner() const
{
    return owner_;
}

void PlanCreateParam::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PlanCreateParam::ownerIsSet() const
{
    return ownerIsSet_;
}

void PlanCreateParam::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}



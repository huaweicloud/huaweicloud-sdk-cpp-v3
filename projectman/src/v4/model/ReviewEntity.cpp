

#include "huaweicloud/projectman/v4/model/ReviewEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ReviewEntity::ReviewEntity()
{
    id_ = "";
    idIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    createdByIsSet_ = false;
    modifiedByIsSet_ = false;
    assignedCcIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    closeTime_ = "";
    closeTimeIsSet_ = false;
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    approver_ = "";
    approverIsSet_ = false;
    reviewer_ = "";
    reviewerIsSet_ = false;
    cosIsSet_ = false;
    ccbsIsSet_ = false;
    oldStatusIsSet_ = false;
    ccIsSet_ = false;
}

ReviewEntity::~ReviewEntity() = default;

void ReviewEntity::validate()
{
}

web::json::value ReviewEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(assignedCcIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc")] = ModelBase::toJson(assignedCc_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(closeTimeIsSet_) {
        val[utility::conversions::to_string_t("close_time")] = ModelBase::toJson(closeTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(cosIsSet_) {
        val[utility::conversions::to_string_t("cos")] = ModelBase::toJson(cos_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }
    if(oldStatusIsSet_) {
        val[utility::conversions::to_string_t("old_status")] = ModelBase::toJson(oldStatus_);
    }
    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }

    return val;
}
bool ReviewEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assigned_cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatusEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cos"));
        if(!fieldValue.is_null())
        {
            std::vector<COEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::vector<CcbEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_status"));
        if(!fieldValue.is_null())
        {
            StatusEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCc(refVal);
        }
    }
    return ok;
}


std::string ReviewEntity::getId() const
{
    return id_;
}

void ReviewEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReviewEntity::idIsSet() const
{
    return idIsSet_;
}

void ReviewEntity::unsetid()
{
    idIsSet_ = false;
}

std::string ReviewEntity::getNumber() const
{
    return number_;
}

void ReviewEntity::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ReviewEntity::numberIsSet() const
{
    return numberIsSet_;
}

void ReviewEntity::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ReviewEntity::getState() const
{
    return state_;
}

void ReviewEntity::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ReviewEntity::stateIsSet() const
{
    return stateIsSet_;
}

void ReviewEntity::unsetstate()
{
    stateIsSet_ = false;
}

std::string ReviewEntity::getTitle() const
{
    return title_;
}

void ReviewEntity::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ReviewEntity::titleIsSet() const
{
    return titleIsSet_;
}

void ReviewEntity::unsettitle()
{
    titleIsSet_ = false;
}

std::string ReviewEntity::getCategory() const
{
    return category_;
}

void ReviewEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ReviewEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void ReviewEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

UserEntity ReviewEntity::getCreatedBy() const
{
    return createdBy_;
}

void ReviewEntity::setCreatedBy(const UserEntity& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ReviewEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void ReviewEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

UserEntity ReviewEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void ReviewEntity::setModifiedBy(const UserEntity& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ReviewEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ReviewEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::vector<UserEntity>& ReviewEntity::getAssignedCc()
{
    return assignedCc_;
}

void ReviewEntity::setAssignedCc(const std::vector<UserEntity>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool ReviewEntity::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void ReviewEntity::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string ReviewEntity::getCreatedTime() const
{
    return createdTime_;
}

void ReviewEntity::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ReviewEntity::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ReviewEntity::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ReviewEntity::getModifiedTime() const
{
    return modifiedTime_;
}

void ReviewEntity::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool ReviewEntity::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void ReviewEntity::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string ReviewEntity::getPlanEndDate() const
{
    return planEndDate_;
}

void ReviewEntity::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool ReviewEntity::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void ReviewEntity::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string ReviewEntity::getPlanStartDate() const
{
    return planStartDate_;
}

void ReviewEntity::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool ReviewEntity::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void ReviewEntity::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

std::string ReviewEntity::getCloseTime() const
{
    return closeTime_;
}

void ReviewEntity::setCloseTime(const std::string& value)
{
    closeTime_ = value;
    closeTimeIsSet_ = true;
}

bool ReviewEntity::closeTimeIsSet() const
{
    return closeTimeIsSet_;
}

void ReviewEntity::unsetcloseTime()
{
    closeTimeIsSet_ = false;
}

StatusEntity ReviewEntity::getStatus() const
{
    return status_;
}

void ReviewEntity::setStatus(const StatusEntity& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReviewEntity::statusIsSet() const
{
    return statusIsSet_;
}

void ReviewEntity::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReviewEntity::getDescription() const
{
    return description_;
}

void ReviewEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ReviewEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ReviewEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ReviewEntity::getClosedTime() const
{
    return closedTime_;
}

void ReviewEntity::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ReviewEntity::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ReviewEntity::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ReviewEntity::getApprover() const
{
    return approver_;
}

void ReviewEntity::setApprover(const std::string& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool ReviewEntity::approverIsSet() const
{
    return approverIsSet_;
}

void ReviewEntity::unsetapprover()
{
    approverIsSet_ = false;
}

std::string ReviewEntity::getReviewer() const
{
    return reviewer_;
}

void ReviewEntity::setReviewer(const std::string& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool ReviewEntity::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void ReviewEntity::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::vector<COEntity>& ReviewEntity::getCos()
{
    return cos_;
}

void ReviewEntity::setCos(const std::vector<COEntity>& value)
{
    cos_ = value;
    cosIsSet_ = true;
}

bool ReviewEntity::cosIsSet() const
{
    return cosIsSet_;
}

void ReviewEntity::unsetcos()
{
    cosIsSet_ = false;
}

std::vector<CcbEntity>& ReviewEntity::getCcbs()
{
    return ccbs_;
}

void ReviewEntity::setCcbs(const std::vector<CcbEntity>& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool ReviewEntity::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void ReviewEntity::unsetccbs()
{
    ccbsIsSet_ = false;
}

StatusEntity ReviewEntity::getOldStatus() const
{
    return oldStatus_;
}

void ReviewEntity::setOldStatus(const StatusEntity& value)
{
    oldStatus_ = value;
    oldStatusIsSet_ = true;
}

bool ReviewEntity::oldStatusIsSet() const
{
    return oldStatusIsSet_;
}

void ReviewEntity::unsetoldStatus()
{
    oldStatusIsSet_ = false;
}

std::vector<UserEntity>& ReviewEntity::getCc()
{
    return cc_;
}

void ReviewEntity::setCc(const std::vector<UserEntity>& value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool ReviewEntity::ccIsSet() const
{
    return ccIsSet_;
}

void ReviewEntity::unsetcc()
{
    ccIsSet_ = false;
}

}
}
}
}
}



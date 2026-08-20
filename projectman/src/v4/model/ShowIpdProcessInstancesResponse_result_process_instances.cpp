

#include "huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result_process_instances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdProcessInstancesResponse_result_process_instances::ShowIpdProcessInstancesResponse_result_process_instances()
{
    cc_ = "";
    ccIsSet_ = false;
    approver_ = "";
    approverIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    reviewer_ = "";
    reviewerIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdByIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    needApproval_ = "";
    needApprovalIsSet_ = false;
    modifiedByIsSet_ = false;
    approvalTime_ = "";
    approvalTimeIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    statusIsSet_ = false;
    ccbsIsSet_ = false;
    opinionsIsSet_ = false;
}

ShowIpdProcessInstancesResponse_result_process_instances::~ShowIpdProcessInstancesResponse_result_process_instances() = default;

void ShowIpdProcessInstancesResponse_result_process_instances::validate()
{
}

web::json::value ShowIpdProcessInstancesResponse_result_process_instances::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(needApprovalIsSet_) {
        val[utility::conversions::to_string_t("need_approval")] = ModelBase::toJson(needApproval_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(approvalTimeIsSet_) {
        val[utility::conversions::to_string_t("approval_time")] = ModelBase::toJson(approvalTime_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }
    if(opinionsIsSet_) {
        val[utility::conversions::to_string_t("opinions")] = ModelBase::toJson(opinions_);
    }

    return val;
}
bool ShowIpdProcessInstancesResponse_result_process_instances::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("need_approval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_approval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ShowIpdProcessInstancesResponse_result_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::vector<UserObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinions"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowIpdProcessInstancesResponse_result_opinions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinions(refVal);
        }
    }
    return ok;
}


std::string ShowIpdProcessInstancesResponse_result_process_instances::getCc() const
{
    return cc_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setCc(const std::string& value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::ccIsSet() const
{
    return ccIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetcc()
{
    ccIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getApprover() const
{
    return approver_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setApprover(const std::string& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::approverIsSet() const
{
    return approverIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetapprover()
{
    approverIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getClosedTime() const
{
    return closedTime_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getReviewer() const
{
    return reviewer_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setReviewer(const std::string& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getType() const
{
    return type_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::typeIsSet() const
{
    return typeIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getTitle() const
{
    return title_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::titleIsSet() const
{
    return titleIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getModifiedDate() const
{
    return modifiedDate_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

UserVO ShowIpdProcessInstancesResponse_result_process_instances::getCreatedBy() const
{
    return createdBy_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setCreatedBy(const UserVO& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::createdByIsSet() const
{
    return createdByIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getDomainId() const
{
    return domainId_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getNumber() const
{
    return number_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::numberIsSet() const
{
    return numberIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getNeedApproval() const
{
    return needApproval_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setNeedApproval(const std::string& value)
{
    needApproval_ = value;
    needApprovalIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::needApprovalIsSet() const
{
    return needApprovalIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetneedApproval()
{
    needApprovalIsSet_ = false;
}

UserVO ShowIpdProcessInstancesResponse_result_process_instances::getModifiedBy() const
{
    return modifiedBy_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setModifiedBy(const UserVO& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getApprovalTime() const
{
    return approvalTime_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setApprovalTime(const std::string& value)
{
    approvalTime_ = value;
    approvalTimeIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::approvalTimeIsSet() const
{
    return approvalTimeIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetapprovalTime()
{
    approvalTimeIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getPlanEndDate() const
{
    return planEndDate_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getId() const
{
    return id_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::idIsSet() const
{
    return idIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetid()
{
    idIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getState() const
{
    return state_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::stateIsSet() const
{
    return stateIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getCreatedDate() const
{
    return createdDate_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getCategory() const
{
    return category_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::categoryIsSet() const
{
    return categoryIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ShowIpdProcessInstancesResponse_result_process_instances::getPlanStartDate() const
{
    return planStartDate_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

ShowIpdProcessInstancesResponse_result_status ShowIpdProcessInstancesResponse_result_process_instances::getStatus() const
{
    return status_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setStatus(const ShowIpdProcessInstancesResponse_result_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<UserObject>& ShowIpdProcessInstancesResponse_result_process_instances::getCcbs()
{
    return ccbs_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setCcbs(const std::vector<UserObject>& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetccbs()
{
    ccbsIsSet_ = false;
}

std::vector<ShowIpdProcessInstancesResponse_result_opinions>& ShowIpdProcessInstancesResponse_result_process_instances::getOpinions()
{
    return opinions_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::setOpinions(const std::vector<ShowIpdProcessInstancesResponse_result_opinions>& value)
{
    opinions_ = value;
    opinionsIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result_process_instances::opinionsIsSet() const
{
    return opinionsIsSet_;
}

void ShowIpdProcessInstancesResponse_result_process_instances::unsetopinions()
{
    opinionsIsSet_ = false;
}

}
}
}
}
}



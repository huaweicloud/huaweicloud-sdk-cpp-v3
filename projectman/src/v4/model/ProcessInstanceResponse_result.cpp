

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result::ProcessInstanceResponse_result()
{
    cc_ = "";
    ccIsSet_ = false;
    approver_ = "";
    approverIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
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
    needApproval_ = false;
    needApprovalIsSet_ = false;
    br2co_ = "";
    br2coIsSet_ = false;
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
    reviewConfigIsSet_ = false;
    statusIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    opinionsIsSet_ = false;
    opinionCommentsIsSet_ = false;
    attachmentsIsSet_ = false;
    wikisIsSet_ = false;
    associatedocumentsIsSet_ = false;
    cosIsSet_ = false;
    approvalPhaseResult_ = "";
    approvalPhaseResultIsSet_ = false;
    ccbsIsSet_ = false;
}

ProcessInstanceResponse_result::~ProcessInstanceResponse_result() = default;

void ProcessInstanceResponse_result::validate()
{
}

web::json::value ProcessInstanceResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(br2coIsSet_) {
        val[utility::conversions::to_string_t("br2co")] = ModelBase::toJson(br2co_);
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
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(opinionsIsSet_) {
        val[utility::conversions::to_string_t("opinions")] = ModelBase::toJson(opinions_);
    }
    if(opinionCommentsIsSet_) {
        val[utility::conversions::to_string_t("opinion_comments")] = ModelBase::toJson(opinionComments_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }
    if(wikisIsSet_) {
        val[utility::conversions::to_string_t("wikis")] = ModelBase::toJson(wikis_);
    }
    if(associatedocumentsIsSet_) {
        val[utility::conversions::to_string_t("associatedocuments")] = ModelBase::toJson(associatedocuments_);
    }
    if(cosIsSet_) {
        val[utility::conversions::to_string_t("cos")] = ModelBase::toJson(cos_);
    }
    if(approvalPhaseResultIsSet_) {
        val[utility::conversions::to_string_t("approval_phase_result")] = ModelBase::toJson(approvalPhaseResult_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }

    return val;
}
bool ProcessInstanceResponse_result::fromJson(const web::json::value& val)
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
            ProcessInstanceResponse_result_created_by refVal;
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("br2co"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("br2co"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBr2co(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_modified_by refVal;
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
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_review_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProcessInstanceResponse_result_opinions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion_comments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinionComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wikis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wikis"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associatedocuments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associatedocuments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedocuments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cos"));
        if(!fieldValue.is_null())
        {
            std::vector<ProcessInstanceResponse_result_cos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_phase_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_phase_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalPhaseResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::vector<ProcessInstanceResponse_result_ccbs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    return ok;
}


std::string ProcessInstanceResponse_result::getCc() const
{
    return cc_;
}

void ProcessInstanceResponse_result::setCc(const std::string& value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool ProcessInstanceResponse_result::ccIsSet() const
{
    return ccIsSet_;
}

void ProcessInstanceResponse_result::unsetcc()
{
    ccIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getApprover() const
{
    return approver_;
}

void ProcessInstanceResponse_result::setApprover(const std::string& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool ProcessInstanceResponse_result::approverIsSet() const
{
    return approverIsSet_;
}

void ProcessInstanceResponse_result::unsetapprover()
{
    approverIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getDescription() const
{
    return description_;
}

void ProcessInstanceResponse_result::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProcessInstanceResponse_result::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getClosedTime() const
{
    return closedTime_;
}

void ProcessInstanceResponse_result::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ProcessInstanceResponse_result::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ProcessInstanceResponse_result::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getReviewer() const
{
    return reviewer_;
}

void ProcessInstanceResponse_result::setReviewer(const std::string& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool ProcessInstanceResponse_result::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void ProcessInstanceResponse_result::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getType() const
{
    return type_;
}

void ProcessInstanceResponse_result::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProcessInstanceResponse_result::typeIsSet() const
{
    return typeIsSet_;
}

void ProcessInstanceResponse_result::unsettype()
{
    typeIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getTitle() const
{
    return title_;
}

void ProcessInstanceResponse_result::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ProcessInstanceResponse_result::titleIsSet() const
{
    return titleIsSet_;
}

void ProcessInstanceResponse_result::unsettitle()
{
    titleIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getModifiedDate() const
{
    return modifiedDate_;
}

void ProcessInstanceResponse_result::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ProcessInstanceResponse_result::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ProcessInstanceResponse_result::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

ProcessInstanceResponse_result_created_by ProcessInstanceResponse_result::getCreatedBy() const
{
    return createdBy_;
}

void ProcessInstanceResponse_result::setCreatedBy(const ProcessInstanceResponse_result_created_by& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ProcessInstanceResponse_result::createdByIsSet() const
{
    return createdByIsSet_;
}

void ProcessInstanceResponse_result::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getNumber() const
{
    return number_;
}

void ProcessInstanceResponse_result::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ProcessInstanceResponse_result::numberIsSet() const
{
    return numberIsSet_;
}

void ProcessInstanceResponse_result::unsetnumber()
{
    numberIsSet_ = false;
}

bool ProcessInstanceResponse_result::isNeedApproval() const
{
    return needApproval_;
}

void ProcessInstanceResponse_result::setNeedApproval(bool value)
{
    needApproval_ = value;
    needApprovalIsSet_ = true;
}

bool ProcessInstanceResponse_result::needApprovalIsSet() const
{
    return needApprovalIsSet_;
}

void ProcessInstanceResponse_result::unsetneedApproval()
{
    needApprovalIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getBr2co() const
{
    return br2co_;
}

void ProcessInstanceResponse_result::setBr2co(const std::string& value)
{
    br2co_ = value;
    br2coIsSet_ = true;
}

bool ProcessInstanceResponse_result::br2coIsSet() const
{
    return br2coIsSet_;
}

void ProcessInstanceResponse_result::unsetbr2co()
{
    br2coIsSet_ = false;
}

ProcessInstanceResponse_result_modified_by ProcessInstanceResponse_result::getModifiedBy() const
{
    return modifiedBy_;
}

void ProcessInstanceResponse_result::setModifiedBy(const ProcessInstanceResponse_result_modified_by& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ProcessInstanceResponse_result::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ProcessInstanceResponse_result::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getApprovalTime() const
{
    return approvalTime_;
}

void ProcessInstanceResponse_result::setApprovalTime(const std::string& value)
{
    approvalTime_ = value;
    approvalTimeIsSet_ = true;
}

bool ProcessInstanceResponse_result::approvalTimeIsSet() const
{
    return approvalTimeIsSet_;
}

void ProcessInstanceResponse_result::unsetapprovalTime()
{
    approvalTimeIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getPlanEndDate() const
{
    return planEndDate_;
}

void ProcessInstanceResponse_result::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool ProcessInstanceResponse_result::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void ProcessInstanceResponse_result::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getId() const
{
    return id_;
}

void ProcessInstanceResponse_result::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessInstanceResponse_result::idIsSet() const
{
    return idIsSet_;
}

void ProcessInstanceResponse_result::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getState() const
{
    return state_;
}

void ProcessInstanceResponse_result::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProcessInstanceResponse_result::stateIsSet() const
{
    return stateIsSet_;
}

void ProcessInstanceResponse_result::unsetstate()
{
    stateIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getCreatedDate() const
{
    return createdDate_;
}

void ProcessInstanceResponse_result::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ProcessInstanceResponse_result::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ProcessInstanceResponse_result::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getCategory() const
{
    return category_;
}

void ProcessInstanceResponse_result::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ProcessInstanceResponse_result::categoryIsSet() const
{
    return categoryIsSet_;
}

void ProcessInstanceResponse_result::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getPlanStartDate() const
{
    return planStartDate_;
}

void ProcessInstanceResponse_result::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool ProcessInstanceResponse_result::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void ProcessInstanceResponse_result::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

ProcessInstanceResponse_result_review_config ProcessInstanceResponse_result::getReviewConfig() const
{
    return reviewConfig_;
}

void ProcessInstanceResponse_result::setReviewConfig(const ProcessInstanceResponse_result_review_config& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ProcessInstanceResponse_result::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ProcessInstanceResponse_result::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ProcessInstanceResponse_result_status ProcessInstanceResponse_result::getStatus() const
{
    return status_;
}

void ProcessInstanceResponse_result::setStatus(const ProcessInstanceResponse_result_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProcessInstanceResponse_result::statusIsSet() const
{
    return statusIsSet_;
}

void ProcessInstanceResponse_result::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getStage() const
{
    return stage_;
}

void ProcessInstanceResponse_result::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool ProcessInstanceResponse_result::stageIsSet() const
{
    return stageIsSet_;
}

void ProcessInstanceResponse_result::unsetstage()
{
    stageIsSet_ = false;
}

std::vector<ProcessInstanceResponse_result_opinions>& ProcessInstanceResponse_result::getOpinions()
{
    return opinions_;
}

void ProcessInstanceResponse_result::setOpinions(const std::vector<ProcessInstanceResponse_result_opinions>& value)
{
    opinions_ = value;
    opinionsIsSet_ = true;
}

bool ProcessInstanceResponse_result::opinionsIsSet() const
{
    return opinionsIsSet_;
}

void ProcessInstanceResponse_result::unsetopinions()
{
    opinionsIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result::getOpinionComments()
{
    return opinionComments_;
}

void ProcessInstanceResponse_result::setOpinionComments(const std::vector<std::string>& value)
{
    opinionComments_ = value;
    opinionCommentsIsSet_ = true;
}

bool ProcessInstanceResponse_result::opinionCommentsIsSet() const
{
    return opinionCommentsIsSet_;
}

void ProcessInstanceResponse_result::unsetopinionComments()
{
    opinionCommentsIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result::getAttachments()
{
    return attachments_;
}

void ProcessInstanceResponse_result::setAttachments(const std::vector<std::string>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool ProcessInstanceResponse_result::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void ProcessInstanceResponse_result::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result::getWikis()
{
    return wikis_;
}

void ProcessInstanceResponse_result::setWikis(const std::vector<std::string>& value)
{
    wikis_ = value;
    wikisIsSet_ = true;
}

bool ProcessInstanceResponse_result::wikisIsSet() const
{
    return wikisIsSet_;
}

void ProcessInstanceResponse_result::unsetwikis()
{
    wikisIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result::getAssociatedocuments()
{
    return associatedocuments_;
}

void ProcessInstanceResponse_result::setAssociatedocuments(const std::vector<std::string>& value)
{
    associatedocuments_ = value;
    associatedocumentsIsSet_ = true;
}

bool ProcessInstanceResponse_result::associatedocumentsIsSet() const
{
    return associatedocumentsIsSet_;
}

void ProcessInstanceResponse_result::unsetassociatedocuments()
{
    associatedocumentsIsSet_ = false;
}

std::vector<ProcessInstanceResponse_result_cos>& ProcessInstanceResponse_result::getCos()
{
    return cos_;
}

void ProcessInstanceResponse_result::setCos(const std::vector<ProcessInstanceResponse_result_cos>& value)
{
    cos_ = value;
    cosIsSet_ = true;
}

bool ProcessInstanceResponse_result::cosIsSet() const
{
    return cosIsSet_;
}

void ProcessInstanceResponse_result::unsetcos()
{
    cosIsSet_ = false;
}

std::string ProcessInstanceResponse_result::getApprovalPhaseResult() const
{
    return approvalPhaseResult_;
}

void ProcessInstanceResponse_result::setApprovalPhaseResult(const std::string& value)
{
    approvalPhaseResult_ = value;
    approvalPhaseResultIsSet_ = true;
}

bool ProcessInstanceResponse_result::approvalPhaseResultIsSet() const
{
    return approvalPhaseResultIsSet_;
}

void ProcessInstanceResponse_result::unsetapprovalPhaseResult()
{
    approvalPhaseResultIsSet_ = false;
}

std::vector<ProcessInstanceResponse_result_ccbs>& ProcessInstanceResponse_result::getCcbs()
{
    return ccbs_;
}

void ProcessInstanceResponse_result::setCcbs(const std::vector<ProcessInstanceResponse_result_ccbs>& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool ProcessInstanceResponse_result::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void ProcessInstanceResponse_result::unsetccbs()
{
    ccbsIsSet_ = false;
}

}
}
}
}
}



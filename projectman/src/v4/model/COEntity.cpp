

#include "huaweicloud/projectman/v4/model/COEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




COEntity::COEntity()
{
    afterChange_ = "";
    afterChangeIsSet_ = false;
    reviewCompleteTime_ = "";
    reviewCompleteTimeIsSet_ = false;
    reviewPhaseResult_ = "";
    reviewPhaseResultIsSet_ = false;
    reviewTime_ = "";
    reviewTimeIsSet_ = false;
    beforeChange_ = "";
    beforeChangeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    ccbInfoIsSet_ = false;
    ccbsIsSet_ = false;
    changeType_ = "";
    changeTypeIsSet_ = false;
    co2review_ = "";
    co2reviewIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueNumber_ = "";
    issueNumberIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    opinionsIsSet_ = false;
    opinionCommentsIsSet_ = false;
    reviewCommentsIsSet_ = false;
    approvalCommentsIsSet_ = false;
    reviewerIsSet_ = false;
    approverIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

COEntity::~COEntity() = default;

void COEntity::validate()
{
}

web::json::value COEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(afterChangeIsSet_) {
        val[utility::conversions::to_string_t("after_change")] = ModelBase::toJson(afterChange_);
    }
    if(reviewCompleteTimeIsSet_) {
        val[utility::conversions::to_string_t("review_complete_time")] = ModelBase::toJson(reviewCompleteTime_);
    }
    if(reviewPhaseResultIsSet_) {
        val[utility::conversions::to_string_t("review_phase_result")] = ModelBase::toJson(reviewPhaseResult_);
    }
    if(reviewTimeIsSet_) {
        val[utility::conversions::to_string_t("review_time")] = ModelBase::toJson(reviewTime_);
    }
    if(beforeChangeIsSet_) {
        val[utility::conversions::to_string_t("before_change")] = ModelBase::toJson(beforeChange_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(ccbInfoIsSet_) {
        val[utility::conversions::to_string_t("ccb_info")] = ModelBase::toJson(ccbInfo_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }
    if(changeTypeIsSet_) {
        val[utility::conversions::to_string_t("change_type")] = ModelBase::toJson(changeType_);
    }
    if(co2reviewIsSet_) {
        val[utility::conversions::to_string_t("co2review")] = ModelBase::toJson(co2review_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueNumberIsSet_) {
        val[utility::conversions::to_string_t("issue_number")] = ModelBase::toJson(issueNumber_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(opinionsIsSet_) {
        val[utility::conversions::to_string_t("opinions")] = ModelBase::toJson(opinions_);
    }
    if(opinionCommentsIsSet_) {
        val[utility::conversions::to_string_t("opinion_comments")] = ModelBase::toJson(opinionComments_);
    }
    if(reviewCommentsIsSet_) {
        val[utility::conversions::to_string_t("review_comments")] = ModelBase::toJson(reviewComments_);
    }
    if(approvalCommentsIsSet_) {
        val[utility::conversions::to_string_t("approval_comments")] = ModelBase::toJson(approvalComments_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool COEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("after_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_complete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_complete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCompleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_phase_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_phase_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewPhaseResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeChange(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ccb_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccb_info"));
        if(!fieldValue.is_null())
        {
            CcbEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co2review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co2review"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCo2review(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinions"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion_comments"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewOpinionEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinionComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_comments"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewCommentEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_comments"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewCommentEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprover(refVal);
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
    return ok;
}


std::string COEntity::getAfterChange() const
{
    return afterChange_;
}

void COEntity::setAfterChange(const std::string& value)
{
    afterChange_ = value;
    afterChangeIsSet_ = true;
}

bool COEntity::afterChangeIsSet() const
{
    return afterChangeIsSet_;
}

void COEntity::unsetafterChange()
{
    afterChangeIsSet_ = false;
}

std::string COEntity::getReviewCompleteTime() const
{
    return reviewCompleteTime_;
}

void COEntity::setReviewCompleteTime(const std::string& value)
{
    reviewCompleteTime_ = value;
    reviewCompleteTimeIsSet_ = true;
}

bool COEntity::reviewCompleteTimeIsSet() const
{
    return reviewCompleteTimeIsSet_;
}

void COEntity::unsetreviewCompleteTime()
{
    reviewCompleteTimeIsSet_ = false;
}

std::string COEntity::getReviewPhaseResult() const
{
    return reviewPhaseResult_;
}

void COEntity::setReviewPhaseResult(const std::string& value)
{
    reviewPhaseResult_ = value;
    reviewPhaseResultIsSet_ = true;
}

bool COEntity::reviewPhaseResultIsSet() const
{
    return reviewPhaseResultIsSet_;
}

void COEntity::unsetreviewPhaseResult()
{
    reviewPhaseResultIsSet_ = false;
}

std::string COEntity::getReviewTime() const
{
    return reviewTime_;
}

void COEntity::setReviewTime(const std::string& value)
{
    reviewTime_ = value;
    reviewTimeIsSet_ = true;
}

bool COEntity::reviewTimeIsSet() const
{
    return reviewTimeIsSet_;
}

void COEntity::unsetreviewTime()
{
    reviewTimeIsSet_ = false;
}

std::string COEntity::getBeforeChange() const
{
    return beforeChange_;
}

void COEntity::setBeforeChange(const std::string& value)
{
    beforeChange_ = value;
    beforeChangeIsSet_ = true;
}

bool COEntity::beforeChangeIsSet() const
{
    return beforeChangeIsSet_;
}

void COEntity::unsetbeforeChange()
{
    beforeChangeIsSet_ = false;
}

std::string COEntity::getCategory() const
{
    return category_;
}

void COEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool COEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void COEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

CcbEntity COEntity::getCcbInfo() const
{
    return ccbInfo_;
}

void COEntity::setCcbInfo(const CcbEntity& value)
{
    ccbInfo_ = value;
    ccbInfoIsSet_ = true;
}

bool COEntity::ccbInfoIsSet() const
{
    return ccbInfoIsSet_;
}

void COEntity::unsetccbInfo()
{
    ccbInfoIsSet_ = false;
}

std::vector<UserEntity>& COEntity::getCcbs()
{
    return ccbs_;
}

void COEntity::setCcbs(const std::vector<UserEntity>& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool COEntity::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void COEntity::unsetccbs()
{
    ccbsIsSet_ = false;
}

std::string COEntity::getChangeType() const
{
    return changeType_;
}

void COEntity::setChangeType(const std::string& value)
{
    changeType_ = value;
    changeTypeIsSet_ = true;
}

bool COEntity::changeTypeIsSet() const
{
    return changeTypeIsSet_;
}

void COEntity::unsetchangeType()
{
    changeTypeIsSet_ = false;
}

std::string COEntity::getCo2review() const
{
    return co2review_;
}

void COEntity::setCo2review(const std::string& value)
{
    co2review_ = value;
    co2reviewIsSet_ = true;
}

bool COEntity::co2reviewIsSet() const
{
    return co2reviewIsSet_;
}

void COEntity::unsetco2review()
{
    co2reviewIsSet_ = false;
}

std::string COEntity::getCreatedBy() const
{
    return createdBy_;
}

void COEntity::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool COEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void COEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string COEntity::getCreatedDate() const
{
    return createdDate_;
}

void COEntity::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool COEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void COEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string COEntity::getDescription() const
{
    return description_;
}

void COEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool COEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void COEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string COEntity::getId() const
{
    return id_;
}

void COEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool COEntity::idIsSet() const
{
    return idIsSet_;
}

void COEntity::unsetid()
{
    idIsSet_ = false;
}

std::string COEntity::getIssueId() const
{
    return issueId_;
}

void COEntity::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool COEntity::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void COEntity::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string COEntity::getIssueNumber() const
{
    return issueNumber_;
}

void COEntity::setIssueNumber(const std::string& value)
{
    issueNumber_ = value;
    issueNumberIsSet_ = true;
}

bool COEntity::issueNumberIsSet() const
{
    return issueNumberIsSet_;
}

void COEntity::unsetissueNumber()
{
    issueNumberIsSet_ = false;
}

std::string COEntity::getIssueCategory() const
{
    return issueCategory_;
}

void COEntity::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool COEntity::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void COEntity::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string COEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void COEntity::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool COEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void COEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string COEntity::getModifiedDate() const
{
    return modifiedDate_;
}

void COEntity::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool COEntity::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void COEntity::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::vector<UserEntity>& COEntity::getOpinions()
{
    return opinions_;
}

void COEntity::setOpinions(const std::vector<UserEntity>& value)
{
    opinions_ = value;
    opinionsIsSet_ = true;
}

bool COEntity::opinionsIsSet() const
{
    return opinionsIsSet_;
}

void COEntity::unsetopinions()
{
    opinionsIsSet_ = false;
}

std::vector<ReviewOpinionEntity>& COEntity::getOpinionComments()
{
    return opinionComments_;
}

void COEntity::setOpinionComments(const std::vector<ReviewOpinionEntity>& value)
{
    opinionComments_ = value;
    opinionCommentsIsSet_ = true;
}

bool COEntity::opinionCommentsIsSet() const
{
    return opinionCommentsIsSet_;
}

void COEntity::unsetopinionComments()
{
    opinionCommentsIsSet_ = false;
}

std::vector<ReviewCommentEntity>& COEntity::getReviewComments()
{
    return reviewComments_;
}

void COEntity::setReviewComments(const std::vector<ReviewCommentEntity>& value)
{
    reviewComments_ = value;
    reviewCommentsIsSet_ = true;
}

bool COEntity::reviewCommentsIsSet() const
{
    return reviewCommentsIsSet_;
}

void COEntity::unsetreviewComments()
{
    reviewCommentsIsSet_ = false;
}

std::vector<ReviewCommentEntity>& COEntity::getApprovalComments()
{
    return approvalComments_;
}

void COEntity::setApprovalComments(const std::vector<ReviewCommentEntity>& value)
{
    approvalComments_ = value;
    approvalCommentsIsSet_ = true;
}

bool COEntity::approvalCommentsIsSet() const
{
    return approvalCommentsIsSet_;
}

void COEntity::unsetapprovalComments()
{
    approvalCommentsIsSet_ = false;
}

std::vector<std::string>& COEntity::getReviewer()
{
    return reviewer_;
}

void COEntity::setReviewer(const std::vector<std::string>& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool COEntity::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void COEntity::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::vector<std::string>& COEntity::getApprover()
{
    return approver_;
}

void COEntity::setApprover(const std::vector<std::string>& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool COEntity::approverIsSet() const
{
    return approverIsSet_;
}

void COEntity::unsetapprover()
{
    approverIsSet_ = false;
}

std::string COEntity::getStatus() const
{
    return status_;
}

void COEntity::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool COEntity::statusIsSet() const
{
    return statusIsSet_;
}

void COEntity::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



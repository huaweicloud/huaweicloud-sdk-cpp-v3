

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_cos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_cos::ProcessInstanceResponse_result_cos()
{
    region_ = "";
    regionIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    assigneeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    co2cr_ = "";
    co2crIsSet_ = false;
    co2br_ = "";
    co2brIsSet_ = false;
    co2gr_ = "";
    co2grIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    beforeChange_ = "";
    beforeChangeIsSet_ = false;
    afterChange_ = "";
    afterChangeIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    statusMap_ = "";
    statusMapIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    sourceSystem_ = "";
    sourceSystemIsSet_ = false;
    sourceSystemLink_ = "";
    sourceSystemLinkIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueStatusIsSet_ = false;
    issueSeverity_ = "";
    issueSeverityIsSet_ = false;
    issuePriorityIsSet_ = false;
    domainTitle_ = "";
    domainTitleIsSet_ = false;
    srcDomainTitle_ = "";
    srcDomainTitleIsSet_ = false;
    issueAssigneeName_ = "";
    issueAssigneeNameIsSet_ = false;
    changeReason_ = "";
    changeReasonIsSet_ = false;
    changeType_ = "";
    changeTypeIsSet_ = false;
    sourceSystemId_ = "";
    sourceSystemIdIsSet_ = false;
    changeDescription_ = "";
    changeDescriptionIsSet_ = false;
    hasDeleted_ = "";
    hasDeletedIsSet_ = false;
    approvalPhaseResult_ = "";
    approvalPhaseResultIsSet_ = false;
    approvalCompleteTime_ = "";
    approvalCompleteTimeIsSet_ = false;
    ccbDescription_ = "";
    ccbDescriptionIsSet_ = false;
    actualCcb_ = "";
    actualCcbIsSet_ = false;
    ccbs_ = "";
    ccbsIsSet_ = false;
    ccbInfo_ = "";
    ccbInfoIsSet_ = false;
    opinions_ = "";
    opinionsIsSet_ = false;
    opinionComments_ = "";
    opinionCommentsIsSet_ = false;
    approvalTime_ = "";
    approvalTimeIsSet_ = false;
    srcDomainId_ = "";
    srcDomainIdIsSet_ = false;
    crossDomain_ = "";
    crossDomainIsSet_ = false;
    domainMoved_ = "";
    domainMovedIsSet_ = false;
    reviewerIsSet_ = false;
    approverIsSet_ = false;
    rounds_ = "";
    roundsIsSet_ = false;
    lastRoundResult_ = "";
    lastRoundResultIsSet_ = false;
}

ProcessInstanceResponse_result_cos::~ProcessInstanceResponse_result_cos() = default;

void ProcessInstanceResponse_result_cos::validate()
{
}

web::json::value ProcessInstanceResponse_result_cos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(co2crIsSet_) {
        val[utility::conversions::to_string_t("co2cr")] = ModelBase::toJson(co2cr_);
    }
    if(co2brIsSet_) {
        val[utility::conversions::to_string_t("co2br")] = ModelBase::toJson(co2br_);
    }
    if(co2grIsSet_) {
        val[utility::conversions::to_string_t("co2gr")] = ModelBase::toJson(co2gr_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(beforeChangeIsSet_) {
        val[utility::conversions::to_string_t("before_change")] = ModelBase::toJson(beforeChange_);
    }
    if(afterChangeIsSet_) {
        val[utility::conversions::to_string_t("after_change")] = ModelBase::toJson(afterChange_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(statusMapIsSet_) {
        val[utility::conversions::to_string_t("status_map")] = ModelBase::toJson(statusMap_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(sourceSystemIsSet_) {
        val[utility::conversions::to_string_t("source_system")] = ModelBase::toJson(sourceSystem_);
    }
    if(sourceSystemLinkIsSet_) {
        val[utility::conversions::to_string_t("source_system_link")] = ModelBase::toJson(sourceSystemLink_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueStatusIsSet_) {
        val[utility::conversions::to_string_t("issue_status")] = ModelBase::toJson(issueStatus_);
    }
    if(issueSeverityIsSet_) {
        val[utility::conversions::to_string_t("issue_severity")] = ModelBase::toJson(issueSeverity_);
    }
    if(issuePriorityIsSet_) {
        val[utility::conversions::to_string_t("issue_priority")] = ModelBase::toJson(issuePriority_);
    }
    if(domainTitleIsSet_) {
        val[utility::conversions::to_string_t("domain_title")] = ModelBase::toJson(domainTitle_);
    }
    if(srcDomainTitleIsSet_) {
        val[utility::conversions::to_string_t("src_domain_title")] = ModelBase::toJson(srcDomainTitle_);
    }
    if(issueAssigneeNameIsSet_) {
        val[utility::conversions::to_string_t("issue_assignee_name")] = ModelBase::toJson(issueAssigneeName_);
    }
    if(changeReasonIsSet_) {
        val[utility::conversions::to_string_t("change_reason")] = ModelBase::toJson(changeReason_);
    }
    if(changeTypeIsSet_) {
        val[utility::conversions::to_string_t("change_type")] = ModelBase::toJson(changeType_);
    }
    if(sourceSystemIdIsSet_) {
        val[utility::conversions::to_string_t("source_system_id")] = ModelBase::toJson(sourceSystemId_);
    }
    if(changeDescriptionIsSet_) {
        val[utility::conversions::to_string_t("change_description")] = ModelBase::toJson(changeDescription_);
    }
    if(hasDeletedIsSet_) {
        val[utility::conversions::to_string_t("has_deleted")] = ModelBase::toJson(hasDeleted_);
    }
    if(approvalPhaseResultIsSet_) {
        val[utility::conversions::to_string_t("approval_phase_result")] = ModelBase::toJson(approvalPhaseResult_);
    }
    if(approvalCompleteTimeIsSet_) {
        val[utility::conversions::to_string_t("approval_complete_time")] = ModelBase::toJson(approvalCompleteTime_);
    }
    if(ccbDescriptionIsSet_) {
        val[utility::conversions::to_string_t("ccb_description")] = ModelBase::toJson(ccbDescription_);
    }
    if(actualCcbIsSet_) {
        val[utility::conversions::to_string_t("actual_ccb")] = ModelBase::toJson(actualCcb_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }
    if(ccbInfoIsSet_) {
        val[utility::conversions::to_string_t("ccb_info")] = ModelBase::toJson(ccbInfo_);
    }
    if(opinionsIsSet_) {
        val[utility::conversions::to_string_t("opinions")] = ModelBase::toJson(opinions_);
    }
    if(opinionCommentsIsSet_) {
        val[utility::conversions::to_string_t("opinion_comments")] = ModelBase::toJson(opinionComments_);
    }
    if(approvalTimeIsSet_) {
        val[utility::conversions::to_string_t("approval_time")] = ModelBase::toJson(approvalTime_);
    }
    if(srcDomainIdIsSet_) {
        val[utility::conversions::to_string_t("src_domain_id")] = ModelBase::toJson(srcDomainId_);
    }
    if(crossDomainIsSet_) {
        val[utility::conversions::to_string_t("cross_domain")] = ModelBase::toJson(crossDomain_);
    }
    if(domainMovedIsSet_) {
        val[utility::conversions::to_string_t("domain_moved")] = ModelBase::toJson(domainMoved_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(roundsIsSet_) {
        val[utility::conversions::to_string_t("rounds")] = ModelBase::toJson(rounds_);
    }
    if(lastRoundResultIsSet_) {
        val[utility::conversions::to_string_t("last_round_result")] = ModelBase::toJson(lastRoundResult_);
    }

    return val;
}
bool ProcessInstanceResponse_result_cos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_assignee refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("co2cr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co2cr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCo2cr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co2br"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co2br"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCo2br(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co2gr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co2gr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCo2gr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("before_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterChange(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_map"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusMap(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_system_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_system_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSystemLink(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_status"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_issue_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_priority"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_issue_priority refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_domain_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_domain_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDomainTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_assignee_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_assignee_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueAssigneeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_system_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_system_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSystemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasDeleted(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("approval_complete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_complete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalCompleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccb_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccb_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_ccb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_ccb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualCcb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccb_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccb_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion_comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinionComments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cross_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrossDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_moved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_moved"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainMoved(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rounds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rounds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRounds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_round_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_round_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastRoundResult(refVal);
        }
    }
    return ok;
}


std::string ProcessInstanceResponse_result_cos::getRegion() const
{
    return region_;
}

void ProcessInstanceResponse_result_cos::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::regionIsSet() const
{
    return regionIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCategory() const
{
    return category_;
}

void ProcessInstanceResponse_result_cos::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::categoryIsSet() const
{
    return categoryIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getTitle() const
{
    return title_;
}

void ProcessInstanceResponse_result_cos::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::titleIsSet() const
{
    return titleIsSet_;
}

void ProcessInstanceResponse_result_cos::unsettitle()
{
    titleIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getStatus() const
{
    return status_;
}

void ProcessInstanceResponse_result_cos::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::statusIsSet() const
{
    return statusIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetstatus()
{
    statusIsSet_ = false;
}

ProcessInstanceResponse_result_assignee ProcessInstanceResponse_result_cos::getAssignee() const
{
    return assignee_;
}

void ProcessInstanceResponse_result_cos::setAssignee(const ProcessInstanceResponse_result_assignee& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getDescription() const
{
    return description_;
}

void ProcessInstanceResponse_result_cos::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getNumber() const
{
    return number_;
}

void ProcessInstanceResponse_result_cos::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::numberIsSet() const
{
    return numberIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getOrder() const
{
    return order_;
}

void ProcessInstanceResponse_result_cos::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::orderIsSet() const
{
    return orderIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetorder()
{
    orderIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCo2cr() const
{
    return co2cr_;
}

void ProcessInstanceResponse_result_cos::setCo2cr(const std::string& value)
{
    co2cr_ = value;
    co2crIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::co2crIsSet() const
{
    return co2crIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetco2cr()
{
    co2crIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCo2br() const
{
    return co2br_;
}

void ProcessInstanceResponse_result_cos::setCo2br(const std::string& value)
{
    co2br_ = value;
    co2brIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::co2brIsSet() const
{
    return co2brIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetco2br()
{
    co2brIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCo2gr() const
{
    return co2gr_;
}

void ProcessInstanceResponse_result_cos::setCo2gr(const std::string& value)
{
    co2gr_ = value;
    co2grIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::co2grIsSet() const
{
    return co2grIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetco2gr()
{
    co2grIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getId() const
{
    return id_;
}

void ProcessInstanceResponse_result_cos::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::idIsSet() const
{
    return idIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getType() const
{
    return type_;
}

void ProcessInstanceResponse_result_cos::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::typeIsSet() const
{
    return typeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsettype()
{
    typeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getState() const
{
    return state_;
}

void ProcessInstanceResponse_result_cos::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::stateIsSet() const
{
    return stateIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetstate()
{
    stateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getBeforeChange() const
{
    return beforeChange_;
}

void ProcessInstanceResponse_result_cos::setBeforeChange(const std::string& value)
{
    beforeChange_ = value;
    beforeChangeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::beforeChangeIsSet() const
{
    return beforeChangeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetbeforeChange()
{
    beforeChangeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getAfterChange() const
{
    return afterChange_;
}

void ProcessInstanceResponse_result_cos::setAfterChange(const std::string& value)
{
    afterChange_ = value;
    afterChangeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::afterChangeIsSet() const
{
    return afterChangeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetafterChange()
{
    afterChangeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getModifiedBy() const
{
    return modifiedBy_;
}

void ProcessInstanceResponse_result_cos::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getModifiedDate() const
{
    return modifiedDate_;
}

void ProcessInstanceResponse_result_cos::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCreatedBy() const
{
    return createdBy_;
}

void ProcessInstanceResponse_result_cos::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::createdByIsSet() const
{
    return createdByIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCreatedDate() const
{
    return createdDate_;
}

void ProcessInstanceResponse_result_cos::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getTenantId() const
{
    return tenantId_;
}

void ProcessInstanceResponse_result_cos::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ProcessInstanceResponse_result_cos::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getStatusMap() const
{
    return statusMap_;
}

void ProcessInstanceResponse_result_cos::setStatusMap(const std::string& value)
{
    statusMap_ = value;
    statusMapIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::statusMapIsSet() const
{
    return statusMapIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetstatusMap()
{
    statusMapIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result_cos::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getSourceSystem() const
{
    return sourceSystem_;
}

void ProcessInstanceResponse_result_cos::setSourceSystem(const std::string& value)
{
    sourceSystem_ = value;
    sourceSystemIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::sourceSystemIsSet() const
{
    return sourceSystemIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetsourceSystem()
{
    sourceSystemIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getSourceSystemLink() const
{
    return sourceSystemLink_;
}

void ProcessInstanceResponse_result_cos::setSourceSystemLink(const std::string& value)
{
    sourceSystemLink_ = value;
    sourceSystemLinkIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::sourceSystemLinkIsSet() const
{
    return sourceSystemLinkIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetsourceSystemLink()
{
    sourceSystemLinkIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getIssueCategory() const
{
    return issueCategory_;
}

void ProcessInstanceResponse_result_cos::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getIssueId() const
{
    return issueId_;
}

void ProcessInstanceResponse_result_cos::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissueId()
{
    issueIdIsSet_ = false;
}

ProcessInstanceResponse_result_issue_status ProcessInstanceResponse_result_cos::getIssueStatus() const
{
    return issueStatus_;
}

void ProcessInstanceResponse_result_cos::setIssueStatus(const ProcessInstanceResponse_result_issue_status& value)
{
    issueStatus_ = value;
    issueStatusIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issueStatusIsSet() const
{
    return issueStatusIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissueStatus()
{
    issueStatusIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getIssueSeverity() const
{
    return issueSeverity_;
}

void ProcessInstanceResponse_result_cos::setIssueSeverity(const std::string& value)
{
    issueSeverity_ = value;
    issueSeverityIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issueSeverityIsSet() const
{
    return issueSeverityIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissueSeverity()
{
    issueSeverityIsSet_ = false;
}

ProcessInstanceResponse_result_issue_priority ProcessInstanceResponse_result_cos::getIssuePriority() const
{
    return issuePriority_;
}

void ProcessInstanceResponse_result_cos::setIssuePriority(const ProcessInstanceResponse_result_issue_priority& value)
{
    issuePriority_ = value;
    issuePriorityIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issuePriorityIsSet() const
{
    return issuePriorityIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissuePriority()
{
    issuePriorityIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getDomainTitle() const
{
    return domainTitle_;
}

void ProcessInstanceResponse_result_cos::setDomainTitle(const std::string& value)
{
    domainTitle_ = value;
    domainTitleIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::domainTitleIsSet() const
{
    return domainTitleIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetdomainTitle()
{
    domainTitleIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getSrcDomainTitle() const
{
    return srcDomainTitle_;
}

void ProcessInstanceResponse_result_cos::setSrcDomainTitle(const std::string& value)
{
    srcDomainTitle_ = value;
    srcDomainTitleIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::srcDomainTitleIsSet() const
{
    return srcDomainTitleIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetsrcDomainTitle()
{
    srcDomainTitleIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getIssueAssigneeName() const
{
    return issueAssigneeName_;
}

void ProcessInstanceResponse_result_cos::setIssueAssigneeName(const std::string& value)
{
    issueAssigneeName_ = value;
    issueAssigneeNameIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::issueAssigneeNameIsSet() const
{
    return issueAssigneeNameIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetissueAssigneeName()
{
    issueAssigneeNameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getChangeReason() const
{
    return changeReason_;
}

void ProcessInstanceResponse_result_cos::setChangeReason(const std::string& value)
{
    changeReason_ = value;
    changeReasonIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::changeReasonIsSet() const
{
    return changeReasonIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetchangeReason()
{
    changeReasonIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getChangeType() const
{
    return changeType_;
}

void ProcessInstanceResponse_result_cos::setChangeType(const std::string& value)
{
    changeType_ = value;
    changeTypeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::changeTypeIsSet() const
{
    return changeTypeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetchangeType()
{
    changeTypeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getSourceSystemId() const
{
    return sourceSystemId_;
}

void ProcessInstanceResponse_result_cos::setSourceSystemId(const std::string& value)
{
    sourceSystemId_ = value;
    sourceSystemIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::sourceSystemIdIsSet() const
{
    return sourceSystemIdIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetsourceSystemId()
{
    sourceSystemIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getChangeDescription() const
{
    return changeDescription_;
}

void ProcessInstanceResponse_result_cos::setChangeDescription(const std::string& value)
{
    changeDescription_ = value;
    changeDescriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::changeDescriptionIsSet() const
{
    return changeDescriptionIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetchangeDescription()
{
    changeDescriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getHasDeleted() const
{
    return hasDeleted_;
}

void ProcessInstanceResponse_result_cos::setHasDeleted(const std::string& value)
{
    hasDeleted_ = value;
    hasDeletedIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::hasDeletedIsSet() const
{
    return hasDeletedIsSet_;
}

void ProcessInstanceResponse_result_cos::unsethasDeleted()
{
    hasDeletedIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getApprovalPhaseResult() const
{
    return approvalPhaseResult_;
}

void ProcessInstanceResponse_result_cos::setApprovalPhaseResult(const std::string& value)
{
    approvalPhaseResult_ = value;
    approvalPhaseResultIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::approvalPhaseResultIsSet() const
{
    return approvalPhaseResultIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetapprovalPhaseResult()
{
    approvalPhaseResultIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getApprovalCompleteTime() const
{
    return approvalCompleteTime_;
}

void ProcessInstanceResponse_result_cos::setApprovalCompleteTime(const std::string& value)
{
    approvalCompleteTime_ = value;
    approvalCompleteTimeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::approvalCompleteTimeIsSet() const
{
    return approvalCompleteTimeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetapprovalCompleteTime()
{
    approvalCompleteTimeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCcbDescription() const
{
    return ccbDescription_;
}

void ProcessInstanceResponse_result_cos::setCcbDescription(const std::string& value)
{
    ccbDescription_ = value;
    ccbDescriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::ccbDescriptionIsSet() const
{
    return ccbDescriptionIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetccbDescription()
{
    ccbDescriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getActualCcb() const
{
    return actualCcb_;
}

void ProcessInstanceResponse_result_cos::setActualCcb(const std::string& value)
{
    actualCcb_ = value;
    actualCcbIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::actualCcbIsSet() const
{
    return actualCcbIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetactualCcb()
{
    actualCcbIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCcbs() const
{
    return ccbs_;
}

void ProcessInstanceResponse_result_cos::setCcbs(const std::string& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetccbs()
{
    ccbsIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCcbInfo() const
{
    return ccbInfo_;
}

void ProcessInstanceResponse_result_cos::setCcbInfo(const std::string& value)
{
    ccbInfo_ = value;
    ccbInfoIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::ccbInfoIsSet() const
{
    return ccbInfoIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetccbInfo()
{
    ccbInfoIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getOpinions() const
{
    return opinions_;
}

void ProcessInstanceResponse_result_cos::setOpinions(const std::string& value)
{
    opinions_ = value;
    opinionsIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::opinionsIsSet() const
{
    return opinionsIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetopinions()
{
    opinionsIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getOpinionComments() const
{
    return opinionComments_;
}

void ProcessInstanceResponse_result_cos::setOpinionComments(const std::string& value)
{
    opinionComments_ = value;
    opinionCommentsIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::opinionCommentsIsSet() const
{
    return opinionCommentsIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetopinionComments()
{
    opinionCommentsIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getApprovalTime() const
{
    return approvalTime_;
}

void ProcessInstanceResponse_result_cos::setApprovalTime(const std::string& value)
{
    approvalTime_ = value;
    approvalTimeIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::approvalTimeIsSet() const
{
    return approvalTimeIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetapprovalTime()
{
    approvalTimeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getSrcDomainId() const
{
    return srcDomainId_;
}

void ProcessInstanceResponse_result_cos::setSrcDomainId(const std::string& value)
{
    srcDomainId_ = value;
    srcDomainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::srcDomainIdIsSet() const
{
    return srcDomainIdIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetsrcDomainId()
{
    srcDomainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getCrossDomain() const
{
    return crossDomain_;
}

void ProcessInstanceResponse_result_cos::setCrossDomain(const std::string& value)
{
    crossDomain_ = value;
    crossDomainIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::crossDomainIsSet() const
{
    return crossDomainIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetcrossDomain()
{
    crossDomainIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getDomainMoved() const
{
    return domainMoved_;
}

void ProcessInstanceResponse_result_cos::setDomainMoved(const std::string& value)
{
    domainMoved_ = value;
    domainMovedIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::domainMovedIsSet() const
{
    return domainMovedIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetdomainMoved()
{
    domainMovedIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result_cos::getReviewer()
{
    return reviewer_;
}

void ProcessInstanceResponse_result_cos::setReviewer(const std::vector<std::string>& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::vector<std::string>& ProcessInstanceResponse_result_cos::getApprover()
{
    return approver_;
}

void ProcessInstanceResponse_result_cos::setApprover(const std::vector<std::string>& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::approverIsSet() const
{
    return approverIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetapprover()
{
    approverIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getRounds() const
{
    return rounds_;
}

void ProcessInstanceResponse_result_cos::setRounds(const std::string& value)
{
    rounds_ = value;
    roundsIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::roundsIsSet() const
{
    return roundsIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetrounds()
{
    roundsIsSet_ = false;
}

std::string ProcessInstanceResponse_result_cos::getLastRoundResult() const
{
    return lastRoundResult_;
}

void ProcessInstanceResponse_result_cos::setLastRoundResult(const std::string& value)
{
    lastRoundResult_ = value;
    lastRoundResultIsSet_ = true;
}

bool ProcessInstanceResponse_result_cos::lastRoundResultIsSet() const
{
    return lastRoundResultIsSet_;
}

void ProcessInstanceResponse_result_cos::unsetlastRoundResult()
{
    lastRoundResultIsSet_ = false;
}

}
}
}
}
}



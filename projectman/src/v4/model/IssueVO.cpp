

#include "huaweicloud/projectman/v4/model/IssueVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueVO::IssueVO()
{
    sysAnalysisConclusion_ = "";
    sysAnalysisConclusionIsSet_ = false;
    sysRemark_ = "";
    sysRemarkIsSet_ = false;
    promisedIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    belongInside_ = "";
    belongInsideIsSet_ = false;
    srcDomainIsSet_ = false;
    domainIdIsSet_ = false;
    sendFrom_ = "";
    sendFromIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    sendTo_ = "";
    sendToIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    workloadManDay_ = "";
    workloadManDayIsSet_ = false;
    sysCheckConclusion_ = "";
    sysCheckConclusionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    stayDays_ = 0;
    stayDaysIsSet_ = false;
    assignedCcIsSet_ = false;
    submitTime_ = "";
    submitTimeIsSet_ = false;
    workitem2labelIsSet_ = false;
    sysReturnConclusion_ = "";
    sysReturnConclusionIsSet_ = false;
    closeTime_ = "";
    closeTimeIsSet_ = false;
    priorityIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdByIsSet_ = false;
    breakStatusIsSet_ = false;
    statusModifiedDate_ = "";
    statusModifiedDateIsSet_ = false;
    expectDeliveryTime_ = "";
    expectDeliveryTimeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    assigneeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    planPiIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isSuspendedIsSet_ = false;
    changeStatusIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    sumWorkloadManDay_ = "";
    sumWorkloadManDayIsSet_ = false;
    sysCloseReason_ = "";
    sysCloseReasonIsSet_ = false;
    sysResubmitReason_ = "";
    sysResubmitReasonIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    rr2ir_ = "";
    rr2irIsSet_ = false;
    categoryLayerId_ = "";
    categoryLayerIdIsSet_ = false;
    submittedByIsSet_ = false;
    rr2us_ = "";
    rr2usIsSet_ = false;
    sysNoDevelopReason_ = "";
    sysNoDevelopReasonIsSet_ = false;
    planIterationIsSet_ = false;
    sysReturnReason_ = "";
    sysReturnReasonIsSet_ = false;
    cascadeDelete_ = "";
    cascadeDeleteIsSet_ = false;
    recipientIsSet_ = false;
    modifiedByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    collaborativeStatusIsSet_ = false;
    projectIsSet_ = false;
    childIssuesIsSet_ = false;
    activateTimes_ = 0;
    activateTimesIsSet_ = false;
    baselineIsSet_ = false;
    businessDomainIsSet_ = false;
    children_ = "";
    childrenIsSet_ = false;
    collaborativeHistory_ = "";
    collaborativeHistoryIsSet_ = false;
    collaboratives_ = "";
    collaborativesIsSet_ = false;
    convolutionActualHours_ = "";
    convolutionActualHoursIsSet_ = false;
    convolutionPlanHours_ = "";
    convolutionPlanHoursIsSet_ = false;
    developOwner_ = "";
    developOwnerIsSet_ = false;
    doneRatioIsSet_ = false;
    expectedRepairDate_ = "";
    expectedRepairDateIsSet_ = false;
    feature2ir_ = "";
    feature2irIsSet_ = false;
    featureSetIsSet_ = false;
    foundEnvIsSet_ = false;
    foundIterationIsSet_ = false;
    foundPiIsSet_ = false;
    functionScene_ = "";
    functionSceneIsSet_ = false;
    ir2feature_ = "";
    ir2featureIsSet_ = false;
    ir2rr_ = "";
    ir2rrIsSet_ = false;
    issueOpinionId_ = "";
    issueOpinionIdIsSet_ = false;
    issueReviewId_ = "";
    issueReviewIdIsSet_ = false;
    moduleIsSet_ = false;
    needBreakIsSet_ = false;
    needDevelopIsSet_ = false;
    noBreakReason_ = "";
    noBreakReasonIsSet_ = false;
    noDevelopReason_ = "";
    noDevelopReasonIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    planDevEndDate_ = "";
    planDevEndDateIsSet_ = false;
    planProcessingEndDate_ = "";
    planProcessingEndDateIsSet_ = false;
    planResearchanddevelopEndDate_ = "";
    planResearchanddevelopEndDateIsSet_ = false;
    planTestEndDate_ = "";
    planTestEndDateIsSet_ = false;
    positionFloat_ = "";
    positionFloatIsSet_ = false;
    processingOwner_ = "";
    processingOwnerIsSet_ = false;
    reasonAnalysis_ = "";
    reasonAnalysisIsSet_ = false;
    regressionFailureNumber_ = 0;
    regressionFailureNumberIsSet_ = false;
    relatedNetworkSecurityIsSet_ = false;
    repairSolution_ = "";
    repairSolutionIsSet_ = false;
    researchanddevelopOwner_ = "";
    researchanddevelopOwnerIsSet_ = false;
    severityIsSet_ = false;
    sysActivationReason_ = "";
    sysActivationReasonIsSet_ = false;
    sysNoRepairReason_ = "";
    sysNoRepairReasonIsSet_ = false;
    testFailuresTimes_ = 0;
    testFailuresTimesIsSet_ = false;
    testOwner_ = "";
    testOwnerIsSet_ = false;
    testReport_ = "";
    testReportIsSet_ = false;
    valFeatureIsSet_ = false;
    workitem2ganttchart_ = "";
    workitem2ganttchartIsSet_ = false;
    workitem2mindmap_ = "";
    workitem2mindmapIsSet_ = false;
}

IssueVO::~IssueVO() = default;

void IssueVO::validate()
{
}

web::json::value IssueVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sysAnalysisConclusionIsSet_) {
        val[utility::conversions::to_string_t("sys_analysis_conclusion")] = ModelBase::toJson(sysAnalysisConclusion_);
    }
    if(sysRemarkIsSet_) {
        val[utility::conversions::to_string_t("sys_remark")] = ModelBase::toJson(sysRemark_);
    }
    if(promisedIsSet_) {
        val[utility::conversions::to_string_t("promised")] = ModelBase::toJson(promised_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(belongInsideIsSet_) {
        val[utility::conversions::to_string_t("belong_inside")] = ModelBase::toJson(belongInside_);
    }
    if(srcDomainIsSet_) {
        val[utility::conversions::to_string_t("src_domain")] = ModelBase::toJson(srcDomain_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(sendFromIsSet_) {
        val[utility::conversions::to_string_t("send_from")] = ModelBase::toJson(sendFrom_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(sendToIsSet_) {
        val[utility::conversions::to_string_t("send_to")] = ModelBase::toJson(sendTo_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(workloadManDayIsSet_) {
        val[utility::conversions::to_string_t("workload_man_day")] = ModelBase::toJson(workloadManDay_);
    }
    if(sysCheckConclusionIsSet_) {
        val[utility::conversions::to_string_t("sys_check_conclusion")] = ModelBase::toJson(sysCheckConclusion_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(stayDaysIsSet_) {
        val[utility::conversions::to_string_t("stay_days")] = ModelBase::toJson(stayDays_);
    }
    if(assignedCcIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc")] = ModelBase::toJson(assignedCc_);
    }
    if(submitTimeIsSet_) {
        val[utility::conversions::to_string_t("submit_time")] = ModelBase::toJson(submitTime_);
    }
    if(workitem2labelIsSet_) {
        val[utility::conversions::to_string_t("workitem2label")] = ModelBase::toJson(workitem2label_);
    }
    if(sysReturnConclusionIsSet_) {
        val[utility::conversions::to_string_t("sys_return_conclusion")] = ModelBase::toJson(sysReturnConclusion_);
    }
    if(closeTimeIsSet_) {
        val[utility::conversions::to_string_t("close_time")] = ModelBase::toJson(closeTime_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(breakStatusIsSet_) {
        val[utility::conversions::to_string_t("break_status")] = ModelBase::toJson(breakStatus_);
    }
    if(statusModifiedDateIsSet_) {
        val[utility::conversions::to_string_t("status_modified_date")] = ModelBase::toJson(statusModifiedDate_);
    }
    if(expectDeliveryTimeIsSet_) {
        val[utility::conversions::to_string_t("expect_delivery_time")] = ModelBase::toJson(expectDeliveryTime_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(planPiIsSet_) {
        val[utility::conversions::to_string_t("plan_pi")] = ModelBase::toJson(planPi_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isSuspendedIsSet_) {
        val[utility::conversions::to_string_t("is_suspended")] = ModelBase::toJson(isSuspended_);
    }
    if(changeStatusIsSet_) {
        val[utility::conversions::to_string_t("change_status")] = ModelBase::toJson(changeStatus_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(sumWorkloadManDayIsSet_) {
        val[utility::conversions::to_string_t("sum_workload_man_day")] = ModelBase::toJson(sumWorkloadManDay_);
    }
    if(sysCloseReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_close_reason")] = ModelBase::toJson(sysCloseReason_);
    }
    if(sysResubmitReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_resubmit_reason")] = ModelBase::toJson(sysResubmitReason_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(rr2irIsSet_) {
        val[utility::conversions::to_string_t("rr2ir")] = ModelBase::toJson(rr2ir_);
    }
    if(categoryLayerIdIsSet_) {
        val[utility::conversions::to_string_t("category_layer_id")] = ModelBase::toJson(categoryLayerId_);
    }
    if(submittedByIsSet_) {
        val[utility::conversions::to_string_t("submitted_by")] = ModelBase::toJson(submittedBy_);
    }
    if(rr2usIsSet_) {
        val[utility::conversions::to_string_t("rr2us")] = ModelBase::toJson(rr2us_);
    }
    if(sysNoDevelopReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_no_develop_reason")] = ModelBase::toJson(sysNoDevelopReason_);
    }
    if(planIterationIsSet_) {
        val[utility::conversions::to_string_t("plan_iteration")] = ModelBase::toJson(planIteration_);
    }
    if(sysReturnReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_return_reason")] = ModelBase::toJson(sysReturnReason_);
    }
    if(cascadeDeleteIsSet_) {
        val[utility::conversions::to_string_t("cascade_delete")] = ModelBase::toJson(cascadeDelete_);
    }
    if(recipientIsSet_) {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(recipient_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(collaborativeStatusIsSet_) {
        val[utility::conversions::to_string_t("collaborative_status")] = ModelBase::toJson(collaborativeStatus_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(childIssuesIsSet_) {
        val[utility::conversions::to_string_t("child_issues")] = ModelBase::toJson(*childIssues_);
    }
    if(activateTimesIsSet_) {
        val[utility::conversions::to_string_t("activate_times")] = ModelBase::toJson(activateTimes_);
    }
    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }
    if(businessDomainIsSet_) {
        val[utility::conversions::to_string_t("business_domain")] = ModelBase::toJson(businessDomain_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }
    if(collaborativeHistoryIsSet_) {
        val[utility::conversions::to_string_t("collaborative_history")] = ModelBase::toJson(collaborativeHistory_);
    }
    if(collaborativesIsSet_) {
        val[utility::conversions::to_string_t("collaboratives")] = ModelBase::toJson(collaboratives_);
    }
    if(convolutionActualHoursIsSet_) {
        val[utility::conversions::to_string_t("convolution_actual_hours")] = ModelBase::toJson(convolutionActualHours_);
    }
    if(convolutionPlanHoursIsSet_) {
        val[utility::conversions::to_string_t("convolution_plan_hours")] = ModelBase::toJson(convolutionPlanHours_);
    }
    if(developOwnerIsSet_) {
        val[utility::conversions::to_string_t("develop_owner")] = ModelBase::toJson(developOwner_);
    }
    if(doneRatioIsSet_) {
        val[utility::conversions::to_string_t("done_ratio")] = ModelBase::toJson(doneRatio_);
    }
    if(expectedRepairDateIsSet_) {
        val[utility::conversions::to_string_t("expected_repair_date")] = ModelBase::toJson(expectedRepairDate_);
    }
    if(feature2irIsSet_) {
        val[utility::conversions::to_string_t("feature2ir")] = ModelBase::toJson(feature2ir_);
    }
    if(featureSetIsSet_) {
        val[utility::conversions::to_string_t("feature_set")] = ModelBase::toJson(featureSet_);
    }
    if(foundEnvIsSet_) {
        val[utility::conversions::to_string_t("found_env")] = ModelBase::toJson(foundEnv_);
    }
    if(foundIterationIsSet_) {
        val[utility::conversions::to_string_t("found_iteration")] = ModelBase::toJson(foundIteration_);
    }
    if(foundPiIsSet_) {
        val[utility::conversions::to_string_t("found_pi")] = ModelBase::toJson(foundPi_);
    }
    if(functionSceneIsSet_) {
        val[utility::conversions::to_string_t("function_scene")] = ModelBase::toJson(functionScene_);
    }
    if(ir2featureIsSet_) {
        val[utility::conversions::to_string_t("ir2feature")] = ModelBase::toJson(ir2feature_);
    }
    if(ir2rrIsSet_) {
        val[utility::conversions::to_string_t("ir2rr")] = ModelBase::toJson(ir2rr_);
    }
    if(issueOpinionIdIsSet_) {
        val[utility::conversions::to_string_t("issue_opinion_id")] = ModelBase::toJson(issueOpinionId_);
    }
    if(issueReviewIdIsSet_) {
        val[utility::conversions::to_string_t("issue_review_id")] = ModelBase::toJson(issueReviewId_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(needBreakIsSet_) {
        val[utility::conversions::to_string_t("need_break")] = ModelBase::toJson(needBreak_);
    }
    if(needDevelopIsSet_) {
        val[utility::conversions::to_string_t("need_develop")] = ModelBase::toJson(needDevelop_);
    }
    if(noBreakReasonIsSet_) {
        val[utility::conversions::to_string_t("no_break_reason")] = ModelBase::toJson(noBreakReason_);
    }
    if(noDevelopReasonIsSet_) {
        val[utility::conversions::to_string_t("no_develop_reason")] = ModelBase::toJson(noDevelopReason_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(planDevEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_dev_end_date")] = ModelBase::toJson(planDevEndDate_);
    }
    if(planProcessingEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_processing_end_date")] = ModelBase::toJson(planProcessingEndDate_);
    }
    if(planResearchanddevelopEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_researchanddevelop_end_date")] = ModelBase::toJson(planResearchanddevelopEndDate_);
    }
    if(planTestEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_test_end_date")] = ModelBase::toJson(planTestEndDate_);
    }
    if(positionFloatIsSet_) {
        val[utility::conversions::to_string_t("position_float")] = ModelBase::toJson(positionFloat_);
    }
    if(processingOwnerIsSet_) {
        val[utility::conversions::to_string_t("processing_owner")] = ModelBase::toJson(processingOwner_);
    }
    if(reasonAnalysisIsSet_) {
        val[utility::conversions::to_string_t("reason_analysis")] = ModelBase::toJson(reasonAnalysis_);
    }
    if(regressionFailureNumberIsSet_) {
        val[utility::conversions::to_string_t("regression_failure_number")] = ModelBase::toJson(regressionFailureNumber_);
    }
    if(relatedNetworkSecurityIsSet_) {
        val[utility::conversions::to_string_t("related_network_security")] = ModelBase::toJson(relatedNetworkSecurity_);
    }
    if(repairSolutionIsSet_) {
        val[utility::conversions::to_string_t("repair_solution")] = ModelBase::toJson(repairSolution_);
    }
    if(researchanddevelopOwnerIsSet_) {
        val[utility::conversions::to_string_t("researchanddevelop_owner")] = ModelBase::toJson(researchanddevelopOwner_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(sysActivationReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_activation_reason")] = ModelBase::toJson(sysActivationReason_);
    }
    if(sysNoRepairReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_no_repair_reason")] = ModelBase::toJson(sysNoRepairReason_);
    }
    if(testFailuresTimesIsSet_) {
        val[utility::conversions::to_string_t("test_failures_times")] = ModelBase::toJson(testFailuresTimes_);
    }
    if(testOwnerIsSet_) {
        val[utility::conversions::to_string_t("test_owner")] = ModelBase::toJson(testOwner_);
    }
    if(testReportIsSet_) {
        val[utility::conversions::to_string_t("test_report")] = ModelBase::toJson(testReport_);
    }
    if(valFeatureIsSet_) {
        val[utility::conversions::to_string_t("val_feature")] = ModelBase::toJson(valFeature_);
    }
    if(workitem2ganttchartIsSet_) {
        val[utility::conversions::to_string_t("workitem2ganttchart")] = ModelBase::toJson(workitem2ganttchart_);
    }
    if(workitem2mindmapIsSet_) {
        val[utility::conversions::to_string_t("workitem2mindmap")] = ModelBase::toJson(workitem2mindmap_);
    }

    return val;
}
bool IssueVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sys_analysis_conclusion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_analysis_conclusion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysAnalysisConclusion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promised"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promised"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromised(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("belong_inside"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_inside"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongInside(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_domain"));
        if(!fieldValue.is_null())
        {
            DomainVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            DomainVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendFrom(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("send_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendTo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workload_man_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload_man_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkloadManDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_check_conclusion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_check_conclusion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysCheckConclusion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stay_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stay_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStayDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc"));
        if(!fieldValue.is_null())
        {
            std::vector<UserVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submit_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workitem2label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem2label"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemLabelVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitem2label(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_return_conclusion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_return_conclusion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysReturnConclusion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("break_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("break_status"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBreakStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_delivery_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_delivery_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectDeliveryTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AlmStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_pi"));
        if(!fieldValue.is_null())
        {
            PlanVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanPi(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_suspended"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_suspended"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSuspended(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_status"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sum_workload_man_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum_workload_man_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSumWorkloadManDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_close_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_close_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysCloseReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_resubmit_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_resubmit_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysResubmitReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rr2ir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rr2ir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRr2ir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_layer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_layer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryLayerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submitted_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submitted_by"));
        if(!fieldValue.is_null())
        {
            std::vector<UserVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmittedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rr2us"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rr2us"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRr2us(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_no_develop_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_no_develop_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysNoDevelopReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_iteration"));
        if(!fieldValue.is_null())
        {
            PlanVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_return_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_return_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysReturnReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cascade_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cascade_delete"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCascadeDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            std::vector<UserVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecipient(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("collaborative_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collaborative_status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollaborativeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            DomainVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_issues"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, IssueVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildIssues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activate_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activate_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActivateTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_domain"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collaborative_history"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collaborative_history"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollaborativeHistory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("convolution_actual_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("convolution_actual_hours"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConvolutionActualHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("convolution_plan_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("convolution_plan_hours"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConvolutionPlanHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("develop_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("done_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("done_ratio"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDoneRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expected_repair_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected_repair_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedRepairDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature2ir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature2ir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature2ir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_set"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("found_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_env"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("found_iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_iteration"));
        if(!fieldValue.is_null())
        {
            PlanVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("found_pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_pi"));
        if(!fieldValue.is_null())
        {
            PlanVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundPi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionScene(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ir2rr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ir2rr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIr2rr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_opinion_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_opinion_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueOpinionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_review_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_review_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueReviewId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_break"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_break"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedBreak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_develop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_develop"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedDevelop(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("no_develop_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_develop_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoDevelopReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_dev_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_dev_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanDevEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_processing_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_processing_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanProcessingEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_researchanddevelop_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_researchanddevelop_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanResearchanddevelopEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_test_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_test_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanTestEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_float"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position_float"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPositionFloat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processing_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processing_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessingOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason_analysis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReasonAnalysis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regression_failure_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regression_failure_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegressionFailureNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_network_security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_network_security"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedNetworkSecurity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("researchanddevelop_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("researchanddevelop_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResearchanddevelopOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_activation_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_activation_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysActivationReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_no_repair_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_no_repair_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysNoRepairReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_failures_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_failures_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestFailuresTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_report"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestReport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("val_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("val_feature"));
        if(!fieldValue.is_null())
        {
            OptionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workitem2ganttchart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem2ganttchart"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitem2ganttchart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workitem2mindmap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem2mindmap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitem2mindmap(refVal);
        }
    }
    return ok;
}


std::string IssueVO::getSysAnalysisConclusion() const
{
    return sysAnalysisConclusion_;
}

void IssueVO::setSysAnalysisConclusion(const std::string& value)
{
    sysAnalysisConclusion_ = value;
    sysAnalysisConclusionIsSet_ = true;
}

bool IssueVO::sysAnalysisConclusionIsSet() const
{
    return sysAnalysisConclusionIsSet_;
}

void IssueVO::unsetsysAnalysisConclusion()
{
    sysAnalysisConclusionIsSet_ = false;
}

std::string IssueVO::getSysRemark() const
{
    return sysRemark_;
}

void IssueVO::setSysRemark(const std::string& value)
{
    sysRemark_ = value;
    sysRemarkIsSet_ = true;
}

bool IssueVO::sysRemarkIsSet() const
{
    return sysRemarkIsSet_;
}

void IssueVO::unsetsysRemark()
{
    sysRemarkIsSet_ = false;
}

OptionVO IssueVO::getPromised() const
{
    return promised_;
}

void IssueVO::setPromised(const OptionVO& value)
{
    promised_ = value;
    promisedIsSet_ = true;
}

bool IssueVO::promisedIsSet() const
{
    return promisedIsSet_;
}

void IssueVO::unsetpromised()
{
    promisedIsSet_ = false;
}

std::string IssueVO::getType() const
{
    return type_;
}

void IssueVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IssueVO::typeIsSet() const
{
    return typeIsSet_;
}

void IssueVO::unsettype()
{
    typeIsSet_ = false;
}

std::string IssueVO::getBelongInside() const
{
    return belongInside_;
}

void IssueVO::setBelongInside(const std::string& value)
{
    belongInside_ = value;
    belongInsideIsSet_ = true;
}

bool IssueVO::belongInsideIsSet() const
{
    return belongInsideIsSet_;
}

void IssueVO::unsetbelongInside()
{
    belongInsideIsSet_ = false;
}

DomainVO IssueVO::getSrcDomain() const
{
    return srcDomain_;
}

void IssueVO::setSrcDomain(const DomainVO& value)
{
    srcDomain_ = value;
    srcDomainIsSet_ = true;
}

bool IssueVO::srcDomainIsSet() const
{
    return srcDomainIsSet_;
}

void IssueVO::unsetsrcDomain()
{
    srcDomainIsSet_ = false;
}

DomainVO IssueVO::getDomainId() const
{
    return domainId_;
}

void IssueVO::setDomainId(const DomainVO& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool IssueVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void IssueVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string IssueVO::getSendFrom() const
{
    return sendFrom_;
}

void IssueVO::setSendFrom(const std::string& value)
{
    sendFrom_ = value;
    sendFromIsSet_ = true;
}

bool IssueVO::sendFromIsSet() const
{
    return sendFromIsSet_;
}

void IssueVO::unsetsendFrom()
{
    sendFromIsSet_ = false;
}

std::string IssueVO::getNumber() const
{
    return number_;
}

void IssueVO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssueVO::numberIsSet() const
{
    return numberIsSet_;
}

void IssueVO::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssueVO::getSendTo() const
{
    return sendTo_;
}

void IssueVO::setSendTo(const std::string& value)
{
    sendTo_ = value;
    sendToIsSet_ = true;
}

bool IssueVO::sendToIsSet() const
{
    return sendToIsSet_;
}

void IssueVO::unsetsendTo()
{
    sendToIsSet_ = false;
}

std::string IssueVO::getPath() const
{
    return path_;
}

void IssueVO::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool IssueVO::pathIsSet() const
{
    return pathIsSet_;
}

void IssueVO::unsetpath()
{
    pathIsSet_ = false;
}

std::string IssueVO::getWorkloadManDay() const
{
    return workloadManDay_;
}

void IssueVO::setWorkloadManDay(const std::string& value)
{
    workloadManDay_ = value;
    workloadManDayIsSet_ = true;
}

bool IssueVO::workloadManDayIsSet() const
{
    return workloadManDayIsSet_;
}

void IssueVO::unsetworkloadManDay()
{
    workloadManDayIsSet_ = false;
}

std::string IssueVO::getSysCheckConclusion() const
{
    return sysCheckConclusion_;
}

void IssueVO::setSysCheckConclusion(const std::string& value)
{
    sysCheckConclusion_ = value;
    sysCheckConclusionIsSet_ = true;
}

bool IssueVO::sysCheckConclusionIsSet() const
{
    return sysCheckConclusionIsSet_;
}

void IssueVO::unsetsysCheckConclusion()
{
    sysCheckConclusionIsSet_ = false;
}

std::string IssueVO::getId() const
{
    return id_;
}

void IssueVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueVO::idIsSet() const
{
    return idIsSet_;
}

void IssueVO::unsetid()
{
    idIsSet_ = false;
}

std::string IssueVO::getState() const
{
    return state_;
}

void IssueVO::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool IssueVO::stateIsSet() const
{
    return stateIsSet_;
}

void IssueVO::unsetstate()
{
    stateIsSet_ = false;
}

int32_t IssueVO::getStayDays() const
{
    return stayDays_;
}

void IssueVO::setStayDays(int32_t value)
{
    stayDays_ = value;
    stayDaysIsSet_ = true;
}

bool IssueVO::stayDaysIsSet() const
{
    return stayDaysIsSet_;
}

void IssueVO::unsetstayDays()
{
    stayDaysIsSet_ = false;
}

std::vector<UserVO>& IssueVO::getAssignedCc()
{
    return assignedCc_;
}

void IssueVO::setAssignedCc(const std::vector<UserVO>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool IssueVO::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void IssueVO::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string IssueVO::getSubmitTime() const
{
    return submitTime_;
}

void IssueVO::setSubmitTime(const std::string& value)
{
    submitTime_ = value;
    submitTimeIsSet_ = true;
}

bool IssueVO::submitTimeIsSet() const
{
    return submitTimeIsSet_;
}

void IssueVO::unsetsubmitTime()
{
    submitTimeIsSet_ = false;
}

std::vector<WorkItemLabelVO>& IssueVO::getWorkitem2label()
{
    return workitem2label_;
}

void IssueVO::setWorkitem2label(const std::vector<WorkItemLabelVO>& value)
{
    workitem2label_ = value;
    workitem2labelIsSet_ = true;
}

bool IssueVO::workitem2labelIsSet() const
{
    return workitem2labelIsSet_;
}

void IssueVO::unsetworkitem2label()
{
    workitem2labelIsSet_ = false;
}

std::string IssueVO::getSysReturnConclusion() const
{
    return sysReturnConclusion_;
}

void IssueVO::setSysReturnConclusion(const std::string& value)
{
    sysReturnConclusion_ = value;
    sysReturnConclusionIsSet_ = true;
}

bool IssueVO::sysReturnConclusionIsSet() const
{
    return sysReturnConclusionIsSet_;
}

void IssueVO::unsetsysReturnConclusion()
{
    sysReturnConclusionIsSet_ = false;
}

std::string IssueVO::getCloseTime() const
{
    return closeTime_;
}

void IssueVO::setCloseTime(const std::string& value)
{
    closeTime_ = value;
    closeTimeIsSet_ = true;
}

bool IssueVO::closeTimeIsSet() const
{
    return closeTimeIsSet_;
}

void IssueVO::unsetcloseTime()
{
    closeTimeIsSet_ = false;
}

OptionVO IssueVO::getPriority() const
{
    return priority_;
}

void IssueVO::setPriority(const OptionVO& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueVO::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueVO::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string IssueVO::getModifiedDate() const
{
    return modifiedDate_;
}

void IssueVO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool IssueVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void IssueVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

UserVO IssueVO::getCreatedBy() const
{
    return createdBy_;
}

void IssueVO::setCreatedBy(const UserVO& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool IssueVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void IssueVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

OptionVO IssueVO::getBreakStatus() const
{
    return breakStatus_;
}

void IssueVO::setBreakStatus(const OptionVO& value)
{
    breakStatus_ = value;
    breakStatusIsSet_ = true;
}

bool IssueVO::breakStatusIsSet() const
{
    return breakStatusIsSet_;
}

void IssueVO::unsetbreakStatus()
{
    breakStatusIsSet_ = false;
}

std::string IssueVO::getStatusModifiedDate() const
{
    return statusModifiedDate_;
}

void IssueVO::setStatusModifiedDate(const std::string& value)
{
    statusModifiedDate_ = value;
    statusModifiedDateIsSet_ = true;
}

bool IssueVO::statusModifiedDateIsSet() const
{
    return statusModifiedDateIsSet_;
}

void IssueVO::unsetstatusModifiedDate()
{
    statusModifiedDateIsSet_ = false;
}

std::string IssueVO::getExpectDeliveryTime() const
{
    return expectDeliveryTime_;
}

void IssueVO::setExpectDeliveryTime(const std::string& value)
{
    expectDeliveryTime_ = value;
    expectDeliveryTimeIsSet_ = true;
}

bool IssueVO::expectDeliveryTimeIsSet() const
{
    return expectDeliveryTimeIsSet_;
}

void IssueVO::unsetexpectDeliveryTime()
{
    expectDeliveryTimeIsSet_ = false;
}

std::string IssueVO::getParentId() const
{
    return parentId_;
}

void IssueVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool IssueVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void IssueVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

UserVO IssueVO::getAssignee() const
{
    return assignee_;
}

void IssueVO::setAssignee(const UserVO& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool IssueVO::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void IssueVO::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::string IssueVO::getRegion() const
{
    return region_;
}

void IssueVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool IssueVO::regionIsSet() const
{
    return regionIsSet_;
}

void IssueVO::unsetregion()
{
    regionIsSet_ = false;
}

AlmStatus IssueVO::getStatus() const
{
    return status_;
}

void IssueVO::setStatus(const AlmStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueVO::statusIsSet() const
{
    return statusIsSet_;
}

void IssueVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string IssueVO::getTenantId() const
{
    return tenantId_;
}

void IssueVO::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool IssueVO::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void IssueVO::unsettenantId()
{
    tenantIdIsSet_ = false;
}

PlanVO IssueVO::getPlanPi() const
{
    return planPi_;
}

void IssueVO::setPlanPi(const PlanVO& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool IssueVO::planPiIsSet() const
{
    return planPiIsSet_;
}

void IssueVO::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::string IssueVO::getLink() const
{
    return link_;
}

void IssueVO::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool IssueVO::linkIsSet() const
{
    return linkIsSet_;
}

void IssueVO::unsetlink()
{
    linkIsSet_ = false;
}

std::string IssueVO::getDescription() const
{
    return description_;
}

void IssueVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

OptionVO IssueVO::getIsSuspended() const
{
    return isSuspended_;
}

void IssueVO::setIsSuspended(const OptionVO& value)
{
    isSuspended_ = value;
    isSuspendedIsSet_ = true;
}

bool IssueVO::isSuspendedIsSet() const
{
    return isSuspendedIsSet_;
}

void IssueVO::unsetisSuspended()
{
    isSuspendedIsSet_ = false;
}

OptionVO IssueVO::getChangeStatus() const
{
    return changeStatus_;
}

void IssueVO::setChangeStatus(const OptionVO& value)
{
    changeStatus_ = value;
    changeStatusIsSet_ = true;
}

bool IssueVO::changeStatusIsSet() const
{
    return changeStatusIsSet_;
}

void IssueVO::unsetchangeStatus()
{
    changeStatusIsSet_ = false;
}

std::string IssueVO::getTitle() const
{
    return title_;
}

void IssueVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueVO::titleIsSet() const
{
    return titleIsSet_;
}

void IssueVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string IssueVO::getSumWorkloadManDay() const
{
    return sumWorkloadManDay_;
}

void IssueVO::setSumWorkloadManDay(const std::string& value)
{
    sumWorkloadManDay_ = value;
    sumWorkloadManDayIsSet_ = true;
}

bool IssueVO::sumWorkloadManDayIsSet() const
{
    return sumWorkloadManDayIsSet_;
}

void IssueVO::unsetsumWorkloadManDay()
{
    sumWorkloadManDayIsSet_ = false;
}

std::string IssueVO::getSysCloseReason() const
{
    return sysCloseReason_;
}

void IssueVO::setSysCloseReason(const std::string& value)
{
    sysCloseReason_ = value;
    sysCloseReasonIsSet_ = true;
}

bool IssueVO::sysCloseReasonIsSet() const
{
    return sysCloseReasonIsSet_;
}

void IssueVO::unsetsysCloseReason()
{
    sysCloseReasonIsSet_ = false;
}

std::string IssueVO::getSysResubmitReason() const
{
    return sysResubmitReason_;
}

void IssueVO::setSysResubmitReason(const std::string& value)
{
    sysResubmitReason_ = value;
    sysResubmitReasonIsSet_ = true;
}

bool IssueVO::sysResubmitReasonIsSet() const
{
    return sysResubmitReasonIsSet_;
}

void IssueVO::unsetsysResubmitReason()
{
    sysResubmitReasonIsSet_ = false;
}

std::string IssueVO::getPlanEndDate() const
{
    return planEndDate_;
}

void IssueVO::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IssueVO::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IssueVO::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string IssueVO::getRr2ir() const
{
    return rr2ir_;
}

void IssueVO::setRr2ir(const std::string& value)
{
    rr2ir_ = value;
    rr2irIsSet_ = true;
}

bool IssueVO::rr2irIsSet() const
{
    return rr2irIsSet_;
}

void IssueVO::unsetrr2ir()
{
    rr2irIsSet_ = false;
}

std::string IssueVO::getCategoryLayerId() const
{
    return categoryLayerId_;
}

void IssueVO::setCategoryLayerId(const std::string& value)
{
    categoryLayerId_ = value;
    categoryLayerIdIsSet_ = true;
}

bool IssueVO::categoryLayerIdIsSet() const
{
    return categoryLayerIdIsSet_;
}

void IssueVO::unsetcategoryLayerId()
{
    categoryLayerIdIsSet_ = false;
}

std::vector<UserVO>& IssueVO::getSubmittedBy()
{
    return submittedBy_;
}

void IssueVO::setSubmittedBy(const std::vector<UserVO>& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool IssueVO::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void IssueVO::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string IssueVO::getRr2us() const
{
    return rr2us_;
}

void IssueVO::setRr2us(const std::string& value)
{
    rr2us_ = value;
    rr2usIsSet_ = true;
}

bool IssueVO::rr2usIsSet() const
{
    return rr2usIsSet_;
}

void IssueVO::unsetrr2us()
{
    rr2usIsSet_ = false;
}

std::string IssueVO::getSysNoDevelopReason() const
{
    return sysNoDevelopReason_;
}

void IssueVO::setSysNoDevelopReason(const std::string& value)
{
    sysNoDevelopReason_ = value;
    sysNoDevelopReasonIsSet_ = true;
}

bool IssueVO::sysNoDevelopReasonIsSet() const
{
    return sysNoDevelopReasonIsSet_;
}

void IssueVO::unsetsysNoDevelopReason()
{
    sysNoDevelopReasonIsSet_ = false;
}

PlanVO IssueVO::getPlanIteration() const
{
    return planIteration_;
}

void IssueVO::setPlanIteration(const PlanVO& value)
{
    planIteration_ = value;
    planIterationIsSet_ = true;
}

bool IssueVO::planIterationIsSet() const
{
    return planIterationIsSet_;
}

void IssueVO::unsetplanIteration()
{
    planIterationIsSet_ = false;
}

std::string IssueVO::getSysReturnReason() const
{
    return sysReturnReason_;
}

void IssueVO::setSysReturnReason(const std::string& value)
{
    sysReturnReason_ = value;
    sysReturnReasonIsSet_ = true;
}

bool IssueVO::sysReturnReasonIsSet() const
{
    return sysReturnReasonIsSet_;
}

void IssueVO::unsetsysReturnReason()
{
    sysReturnReasonIsSet_ = false;
}

std::string IssueVO::getCascadeDelete() const
{
    return cascadeDelete_;
}

void IssueVO::setCascadeDelete(const std::string& value)
{
    cascadeDelete_ = value;
    cascadeDeleteIsSet_ = true;
}

bool IssueVO::cascadeDeleteIsSet() const
{
    return cascadeDeleteIsSet_;
}

void IssueVO::unsetcascadeDelete()
{
    cascadeDeleteIsSet_ = false;
}

std::vector<UserVO>& IssueVO::getRecipient()
{
    return recipient_;
}

void IssueVO::setRecipient(const std::vector<UserVO>& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool IssueVO::recipientIsSet() const
{
    return recipientIsSet_;
}

void IssueVO::unsetrecipient()
{
    recipientIsSet_ = false;
}

UserVO IssueVO::getModifiedBy() const
{
    return modifiedBy_;
}

void IssueVO::setModifiedBy(const UserVO& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool IssueVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void IssueVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string IssueVO::getCreatedDate() const
{
    return createdDate_;
}

void IssueVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool IssueVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void IssueVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string IssueVO::getCategory() const
{
    return category_;
}

void IssueVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool IssueVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void IssueVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<std::string>& IssueVO::getCollaborativeStatus()
{
    return collaborativeStatus_;
}

void IssueVO::setCollaborativeStatus(const std::vector<std::string>& value)
{
    collaborativeStatus_ = value;
    collaborativeStatusIsSet_ = true;
}

bool IssueVO::collaborativeStatusIsSet() const
{
    return collaborativeStatusIsSet_;
}

void IssueVO::unsetcollaborativeStatus()
{
    collaborativeStatusIsSet_ = false;
}

DomainVO IssueVO::getProject() const
{
    return project_;
}

void IssueVO::setProject(const DomainVO& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool IssueVO::projectIsSet() const
{
    return projectIsSet_;
}

void IssueVO::unsetproject()
{
    projectIsSet_ = false;
}

std::map<std::string, IssueVO>& IssueVO::getChildIssues()
{
    return *childIssues_;
}

void IssueVO::setChildIssues(const std::map<std::string, IssueVO>& value)
{
    *childIssues_ = value;
    childIssuesIsSet_ = true;
}

bool IssueVO::childIssuesIsSet() const
{
    return childIssuesIsSet_;
}

void IssueVO::unsetchildIssues()
{
    childIssuesIsSet_ = false;
}

int32_t IssueVO::getActivateTimes() const
{
    return activateTimes_;
}

void IssueVO::setActivateTimes(int32_t value)
{
    activateTimes_ = value;
    activateTimesIsSet_ = true;
}

bool IssueVO::activateTimesIsSet() const
{
    return activateTimesIsSet_;
}

void IssueVO::unsetactivateTimes()
{
    activateTimesIsSet_ = false;
}

OptionVO IssueVO::getBaseline() const
{
    return baseline_;
}

void IssueVO::setBaseline(const OptionVO& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool IssueVO::baselineIsSet() const
{
    return baselineIsSet_;
}

void IssueVO::unsetbaseline()
{
    baselineIsSet_ = false;
}

OptionVO IssueVO::getBusinessDomain() const
{
    return businessDomain_;
}

void IssueVO::setBusinessDomain(const OptionVO& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool IssueVO::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void IssueVO::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string IssueVO::getChildren() const
{
    return children_;
}

void IssueVO::setChildren(const std::string& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool IssueVO::childrenIsSet() const
{
    return childrenIsSet_;
}

void IssueVO::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string IssueVO::getCollaborativeHistory() const
{
    return collaborativeHistory_;
}

void IssueVO::setCollaborativeHistory(const std::string& value)
{
    collaborativeHistory_ = value;
    collaborativeHistoryIsSet_ = true;
}

bool IssueVO::collaborativeHistoryIsSet() const
{
    return collaborativeHistoryIsSet_;
}

void IssueVO::unsetcollaborativeHistory()
{
    collaborativeHistoryIsSet_ = false;
}

std::string IssueVO::getCollaboratives() const
{
    return collaboratives_;
}

void IssueVO::setCollaboratives(const std::string& value)
{
    collaboratives_ = value;
    collaborativesIsSet_ = true;
}

bool IssueVO::collaborativesIsSet() const
{
    return collaborativesIsSet_;
}

void IssueVO::unsetcollaboratives()
{
    collaborativesIsSet_ = false;
}

std::string IssueVO::getConvolutionActualHours() const
{
    return convolutionActualHours_;
}

void IssueVO::setConvolutionActualHours(const std::string& value)
{
    convolutionActualHours_ = value;
    convolutionActualHoursIsSet_ = true;
}

bool IssueVO::convolutionActualHoursIsSet() const
{
    return convolutionActualHoursIsSet_;
}

void IssueVO::unsetconvolutionActualHours()
{
    convolutionActualHoursIsSet_ = false;
}

std::string IssueVO::getConvolutionPlanHours() const
{
    return convolutionPlanHours_;
}

void IssueVO::setConvolutionPlanHours(const std::string& value)
{
    convolutionPlanHours_ = value;
    convolutionPlanHoursIsSet_ = true;
}

bool IssueVO::convolutionPlanHoursIsSet() const
{
    return convolutionPlanHoursIsSet_;
}

void IssueVO::unsetconvolutionPlanHours()
{
    convolutionPlanHoursIsSet_ = false;
}

std::string IssueVO::getDevelopOwner() const
{
    return developOwner_;
}

void IssueVO::setDevelopOwner(const std::string& value)
{
    developOwner_ = value;
    developOwnerIsSet_ = true;
}

bool IssueVO::developOwnerIsSet() const
{
    return developOwnerIsSet_;
}

void IssueVO::unsetdevelopOwner()
{
    developOwnerIsSet_ = false;
}

OptionVO IssueVO::getDoneRatio() const
{
    return doneRatio_;
}

void IssueVO::setDoneRatio(const OptionVO& value)
{
    doneRatio_ = value;
    doneRatioIsSet_ = true;
}

bool IssueVO::doneRatioIsSet() const
{
    return doneRatioIsSet_;
}

void IssueVO::unsetdoneRatio()
{
    doneRatioIsSet_ = false;
}

std::string IssueVO::getExpectedRepairDate() const
{
    return expectedRepairDate_;
}

void IssueVO::setExpectedRepairDate(const std::string& value)
{
    expectedRepairDate_ = value;
    expectedRepairDateIsSet_ = true;
}

bool IssueVO::expectedRepairDateIsSet() const
{
    return expectedRepairDateIsSet_;
}

void IssueVO::unsetexpectedRepairDate()
{
    expectedRepairDateIsSet_ = false;
}

std::string IssueVO::getFeature2ir() const
{
    return feature2ir_;
}

void IssueVO::setFeature2ir(const std::string& value)
{
    feature2ir_ = value;
    feature2irIsSet_ = true;
}

bool IssueVO::feature2irIsSet() const
{
    return feature2irIsSet_;
}

void IssueVO::unsetfeature2ir()
{
    feature2irIsSet_ = false;
}

OptionVO IssueVO::getFeatureSet() const
{
    return featureSet_;
}

void IssueVO::setFeatureSet(const OptionVO& value)
{
    featureSet_ = value;
    featureSetIsSet_ = true;
}

bool IssueVO::featureSetIsSet() const
{
    return featureSetIsSet_;
}

void IssueVO::unsetfeatureSet()
{
    featureSetIsSet_ = false;
}

OptionVO IssueVO::getFoundEnv() const
{
    return foundEnv_;
}

void IssueVO::setFoundEnv(const OptionVO& value)
{
    foundEnv_ = value;
    foundEnvIsSet_ = true;
}

bool IssueVO::foundEnvIsSet() const
{
    return foundEnvIsSet_;
}

void IssueVO::unsetfoundEnv()
{
    foundEnvIsSet_ = false;
}

PlanVO IssueVO::getFoundIteration() const
{
    return foundIteration_;
}

void IssueVO::setFoundIteration(const PlanVO& value)
{
    foundIteration_ = value;
    foundIterationIsSet_ = true;
}

bool IssueVO::foundIterationIsSet() const
{
    return foundIterationIsSet_;
}

void IssueVO::unsetfoundIteration()
{
    foundIterationIsSet_ = false;
}

PlanVO IssueVO::getFoundPi() const
{
    return foundPi_;
}

void IssueVO::setFoundPi(const PlanVO& value)
{
    foundPi_ = value;
    foundPiIsSet_ = true;
}

bool IssueVO::foundPiIsSet() const
{
    return foundPiIsSet_;
}

void IssueVO::unsetfoundPi()
{
    foundPiIsSet_ = false;
}

std::string IssueVO::getFunctionScene() const
{
    return functionScene_;
}

void IssueVO::setFunctionScene(const std::string& value)
{
    functionScene_ = value;
    functionSceneIsSet_ = true;
}

bool IssueVO::functionSceneIsSet() const
{
    return functionSceneIsSet_;
}

void IssueVO::unsetfunctionScene()
{
    functionSceneIsSet_ = false;
}

std::string IssueVO::getIr2feature() const
{
    return ir2feature_;
}

void IssueVO::setIr2feature(const std::string& value)
{
    ir2feature_ = value;
    ir2featureIsSet_ = true;
}

bool IssueVO::ir2featureIsSet() const
{
    return ir2featureIsSet_;
}

void IssueVO::unsetir2feature()
{
    ir2featureIsSet_ = false;
}

std::string IssueVO::getIr2rr() const
{
    return ir2rr_;
}

void IssueVO::setIr2rr(const std::string& value)
{
    ir2rr_ = value;
    ir2rrIsSet_ = true;
}

bool IssueVO::ir2rrIsSet() const
{
    return ir2rrIsSet_;
}

void IssueVO::unsetir2rr()
{
    ir2rrIsSet_ = false;
}

std::string IssueVO::getIssueOpinionId() const
{
    return issueOpinionId_;
}

void IssueVO::setIssueOpinionId(const std::string& value)
{
    issueOpinionId_ = value;
    issueOpinionIdIsSet_ = true;
}

bool IssueVO::issueOpinionIdIsSet() const
{
    return issueOpinionIdIsSet_;
}

void IssueVO::unsetissueOpinionId()
{
    issueOpinionIdIsSet_ = false;
}

std::string IssueVO::getIssueReviewId() const
{
    return issueReviewId_;
}

void IssueVO::setIssueReviewId(const std::string& value)
{
    issueReviewId_ = value;
    issueReviewIdIsSet_ = true;
}

bool IssueVO::issueReviewIdIsSet() const
{
    return issueReviewIdIsSet_;
}

void IssueVO::unsetissueReviewId()
{
    issueReviewIdIsSet_ = false;
}

OptionVO IssueVO::getModule() const
{
    return module_;
}

void IssueVO::setModule(const OptionVO& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool IssueVO::moduleIsSet() const
{
    return moduleIsSet_;
}

void IssueVO::unsetmodule()
{
    moduleIsSet_ = false;
}

OptionVO IssueVO::getNeedBreak() const
{
    return needBreak_;
}

void IssueVO::setNeedBreak(const OptionVO& value)
{
    needBreak_ = value;
    needBreakIsSet_ = true;
}

bool IssueVO::needBreakIsSet() const
{
    return needBreakIsSet_;
}

void IssueVO::unsetneedBreak()
{
    needBreakIsSet_ = false;
}

OptionVO IssueVO::getNeedDevelop() const
{
    return needDevelop_;
}

void IssueVO::setNeedDevelop(const OptionVO& value)
{
    needDevelop_ = value;
    needDevelopIsSet_ = true;
}

bool IssueVO::needDevelopIsSet() const
{
    return needDevelopIsSet_;
}

void IssueVO::unsetneedDevelop()
{
    needDevelopIsSet_ = false;
}

std::string IssueVO::getNoBreakReason() const
{
    return noBreakReason_;
}

void IssueVO::setNoBreakReason(const std::string& value)
{
    noBreakReason_ = value;
    noBreakReasonIsSet_ = true;
}

bool IssueVO::noBreakReasonIsSet() const
{
    return noBreakReasonIsSet_;
}

void IssueVO::unsetnoBreakReason()
{
    noBreakReasonIsSet_ = false;
}

std::string IssueVO::getNoDevelopReason() const
{
    return noDevelopReason_;
}

void IssueVO::setNoDevelopReason(const std::string& value)
{
    noDevelopReason_ = value;
    noDevelopReasonIsSet_ = true;
}

bool IssueVO::noDevelopReasonIsSet() const
{
    return noDevelopReasonIsSet_;
}

void IssueVO::unsetnoDevelopReason()
{
    noDevelopReasonIsSet_ = false;
}

std::string IssueVO::getOrder() const
{
    return order_;
}

void IssueVO::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool IssueVO::orderIsSet() const
{
    return orderIsSet_;
}

void IssueVO::unsetorder()
{
    orderIsSet_ = false;
}

std::string IssueVO::getPlanDevEndDate() const
{
    return planDevEndDate_;
}

void IssueVO::setPlanDevEndDate(const std::string& value)
{
    planDevEndDate_ = value;
    planDevEndDateIsSet_ = true;
}

bool IssueVO::planDevEndDateIsSet() const
{
    return planDevEndDateIsSet_;
}

void IssueVO::unsetplanDevEndDate()
{
    planDevEndDateIsSet_ = false;
}

std::string IssueVO::getPlanProcessingEndDate() const
{
    return planProcessingEndDate_;
}

void IssueVO::setPlanProcessingEndDate(const std::string& value)
{
    planProcessingEndDate_ = value;
    planProcessingEndDateIsSet_ = true;
}

bool IssueVO::planProcessingEndDateIsSet() const
{
    return planProcessingEndDateIsSet_;
}

void IssueVO::unsetplanProcessingEndDate()
{
    planProcessingEndDateIsSet_ = false;
}

std::string IssueVO::getPlanResearchanddevelopEndDate() const
{
    return planResearchanddevelopEndDate_;
}

void IssueVO::setPlanResearchanddevelopEndDate(const std::string& value)
{
    planResearchanddevelopEndDate_ = value;
    planResearchanddevelopEndDateIsSet_ = true;
}

bool IssueVO::planResearchanddevelopEndDateIsSet() const
{
    return planResearchanddevelopEndDateIsSet_;
}

void IssueVO::unsetplanResearchanddevelopEndDate()
{
    planResearchanddevelopEndDateIsSet_ = false;
}

std::string IssueVO::getPlanTestEndDate() const
{
    return planTestEndDate_;
}

void IssueVO::setPlanTestEndDate(const std::string& value)
{
    planTestEndDate_ = value;
    planTestEndDateIsSet_ = true;
}

bool IssueVO::planTestEndDateIsSet() const
{
    return planTestEndDateIsSet_;
}

void IssueVO::unsetplanTestEndDate()
{
    planTestEndDateIsSet_ = false;
}

std::string IssueVO::getPositionFloat() const
{
    return positionFloat_;
}

void IssueVO::setPositionFloat(const std::string& value)
{
    positionFloat_ = value;
    positionFloatIsSet_ = true;
}

bool IssueVO::positionFloatIsSet() const
{
    return positionFloatIsSet_;
}

void IssueVO::unsetpositionFloat()
{
    positionFloatIsSet_ = false;
}

std::string IssueVO::getProcessingOwner() const
{
    return processingOwner_;
}

void IssueVO::setProcessingOwner(const std::string& value)
{
    processingOwner_ = value;
    processingOwnerIsSet_ = true;
}

bool IssueVO::processingOwnerIsSet() const
{
    return processingOwnerIsSet_;
}

void IssueVO::unsetprocessingOwner()
{
    processingOwnerIsSet_ = false;
}

std::string IssueVO::getReasonAnalysis() const
{
    return reasonAnalysis_;
}

void IssueVO::setReasonAnalysis(const std::string& value)
{
    reasonAnalysis_ = value;
    reasonAnalysisIsSet_ = true;
}

bool IssueVO::reasonAnalysisIsSet() const
{
    return reasonAnalysisIsSet_;
}

void IssueVO::unsetreasonAnalysis()
{
    reasonAnalysisIsSet_ = false;
}

int32_t IssueVO::getRegressionFailureNumber() const
{
    return regressionFailureNumber_;
}

void IssueVO::setRegressionFailureNumber(int32_t value)
{
    regressionFailureNumber_ = value;
    regressionFailureNumberIsSet_ = true;
}

bool IssueVO::regressionFailureNumberIsSet() const
{
    return regressionFailureNumberIsSet_;
}

void IssueVO::unsetregressionFailureNumber()
{
    regressionFailureNumberIsSet_ = false;
}

OptionVO IssueVO::getRelatedNetworkSecurity() const
{
    return relatedNetworkSecurity_;
}

void IssueVO::setRelatedNetworkSecurity(const OptionVO& value)
{
    relatedNetworkSecurity_ = value;
    relatedNetworkSecurityIsSet_ = true;
}

bool IssueVO::relatedNetworkSecurityIsSet() const
{
    return relatedNetworkSecurityIsSet_;
}

void IssueVO::unsetrelatedNetworkSecurity()
{
    relatedNetworkSecurityIsSet_ = false;
}

std::string IssueVO::getRepairSolution() const
{
    return repairSolution_;
}

void IssueVO::setRepairSolution(const std::string& value)
{
    repairSolution_ = value;
    repairSolutionIsSet_ = true;
}

bool IssueVO::repairSolutionIsSet() const
{
    return repairSolutionIsSet_;
}

void IssueVO::unsetrepairSolution()
{
    repairSolutionIsSet_ = false;
}

std::string IssueVO::getResearchanddevelopOwner() const
{
    return researchanddevelopOwner_;
}

void IssueVO::setResearchanddevelopOwner(const std::string& value)
{
    researchanddevelopOwner_ = value;
    researchanddevelopOwnerIsSet_ = true;
}

bool IssueVO::researchanddevelopOwnerIsSet() const
{
    return researchanddevelopOwnerIsSet_;
}

void IssueVO::unsetresearchanddevelopOwner()
{
    researchanddevelopOwnerIsSet_ = false;
}

OptionVO IssueVO::getSeverity() const
{
    return severity_;
}

void IssueVO::setSeverity(const OptionVO& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool IssueVO::severityIsSet() const
{
    return severityIsSet_;
}

void IssueVO::unsetseverity()
{
    severityIsSet_ = false;
}

std::string IssueVO::getSysActivationReason() const
{
    return sysActivationReason_;
}

void IssueVO::setSysActivationReason(const std::string& value)
{
    sysActivationReason_ = value;
    sysActivationReasonIsSet_ = true;
}

bool IssueVO::sysActivationReasonIsSet() const
{
    return sysActivationReasonIsSet_;
}

void IssueVO::unsetsysActivationReason()
{
    sysActivationReasonIsSet_ = false;
}

std::string IssueVO::getSysNoRepairReason() const
{
    return sysNoRepairReason_;
}

void IssueVO::setSysNoRepairReason(const std::string& value)
{
    sysNoRepairReason_ = value;
    sysNoRepairReasonIsSet_ = true;
}

bool IssueVO::sysNoRepairReasonIsSet() const
{
    return sysNoRepairReasonIsSet_;
}

void IssueVO::unsetsysNoRepairReason()
{
    sysNoRepairReasonIsSet_ = false;
}

int32_t IssueVO::getTestFailuresTimes() const
{
    return testFailuresTimes_;
}

void IssueVO::setTestFailuresTimes(int32_t value)
{
    testFailuresTimes_ = value;
    testFailuresTimesIsSet_ = true;
}

bool IssueVO::testFailuresTimesIsSet() const
{
    return testFailuresTimesIsSet_;
}

void IssueVO::unsettestFailuresTimes()
{
    testFailuresTimesIsSet_ = false;
}

std::string IssueVO::getTestOwner() const
{
    return testOwner_;
}

void IssueVO::setTestOwner(const std::string& value)
{
    testOwner_ = value;
    testOwnerIsSet_ = true;
}

bool IssueVO::testOwnerIsSet() const
{
    return testOwnerIsSet_;
}

void IssueVO::unsettestOwner()
{
    testOwnerIsSet_ = false;
}

std::string IssueVO::getTestReport() const
{
    return testReport_;
}

void IssueVO::setTestReport(const std::string& value)
{
    testReport_ = value;
    testReportIsSet_ = true;
}

bool IssueVO::testReportIsSet() const
{
    return testReportIsSet_;
}

void IssueVO::unsettestReport()
{
    testReportIsSet_ = false;
}

OptionVO IssueVO::getValFeature() const
{
    return valFeature_;
}

void IssueVO::setValFeature(const OptionVO& value)
{
    valFeature_ = value;
    valFeatureIsSet_ = true;
}

bool IssueVO::valFeatureIsSet() const
{
    return valFeatureIsSet_;
}

void IssueVO::unsetvalFeature()
{
    valFeatureIsSet_ = false;
}

std::string IssueVO::getWorkitem2ganttchart() const
{
    return workitem2ganttchart_;
}

void IssueVO::setWorkitem2ganttchart(const std::string& value)
{
    workitem2ganttchart_ = value;
    workitem2ganttchartIsSet_ = true;
}

bool IssueVO::workitem2ganttchartIsSet() const
{
    return workitem2ganttchartIsSet_;
}

void IssueVO::unsetworkitem2ganttchart()
{
    workitem2ganttchartIsSet_ = false;
}

std::string IssueVO::getWorkitem2mindmap() const
{
    return workitem2mindmap_;
}

void IssueVO::setWorkitem2mindmap(const std::string& value)
{
    workitem2mindmap_ = value;
    workitem2mindmapIsSet_ = true;
}

bool IssueVO::workitem2mindmapIsSet() const
{
    return workitem2mindmapIsSet_;
}

void IssueVO::unsetworkitem2mindmap()
{
    workitem2mindmapIsSet_ = false;
}

}
}
}
}
}



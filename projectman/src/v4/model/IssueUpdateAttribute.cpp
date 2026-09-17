

#include "huaweicloud/projectman/v4/model/IssueUpdateAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueUpdateAttribute::IssueUpdateAttribute()
{
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    assigneeIsSet_ = false;
    assignedCcIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    workload_ = "";
    workloadIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    labelsIsSet_ = false;
    customFieldsIsSet_ = false;
    ir2feature_ = "";
    ir2featureIsSet_ = false;
    needBreak_ = "";
    needBreakIsSet_ = false;
    baseline_ = "";
    baselineIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    relatedNetworkSecurity_ = "";
    relatedNetworkSecurityIsSet_ = false;
    businessDomain_ = "";
    businessDomainIsSet_ = false;
    planPi_ = "";
    planPiIsSet_ = false;
    planIteration_ = "";
    planIterationIsSet_ = false;
    noBreakReason_ = "";
    noBreakReasonIsSet_ = false;
    submittedByIsSet_ = false;
    ir2rr_ = "";
    ir2rrIsSet_ = false;
    featureSet_ = "";
    featureSetIsSet_ = false;
    expectedRepairDate_ = "";
    expectedRepairDateIsSet_ = false;
    foundPi_ = "";
    foundPiIsSet_ = false;
    foundIteration_ = "";
    foundIterationIsSet_ = false;
    reasonAnalysis_ = "";
    reasonAnalysisIsSet_ = false;
    repairSolution_ = "";
    repairSolutionIsSet_ = false;
    testReport_ = "";
    testReportIsSet_ = false;
    sysNoRepairReason_ = "";
    sysNoRepairReasonIsSet_ = false;
    sysActivationReason_ = "";
    sysActivationReasonIsSet_ = false;
    sysReturnReason_ = "";
    sysReturnReasonIsSet_ = false;
    testFailuresTimes_ = 0;
    testFailuresTimesIsSet_ = false;
    closeType_ = "";
    closeTypeIsSet_ = false;
    securityLevel_ = "";
    securityLevelIsSet_ = false;
    planOwnerIsSet_ = false;
    doingOwnerIsSet_ = false;
    deliveredOwnerIsSet_ = false;
    checkingOwnerIsSet_ = false;
    testOwnerIsSet_ = false;
    developOwnerIsSet_ = false;
    processingOwnerIsSet_ = false;
    fixedOwnerIsSet_ = false;
    researchanddevelopOwnerIsSet_ = false;
    analyseOwnerIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    expectDeliveryTime_ = "";
    expectDeliveryTimeIsSet_ = false;
    planTestEndDate_ = "";
    planTestEndDateIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    promised_ = "";
    promisedIsSet_ = false;
    recipientIsSet_ = false;
    sysNoDevelopReason_ = "";
    sysNoDevelopReasonIsSet_ = false;
    valFeature_ = "";
    valFeatureIsSet_ = false;
    functionScene_ = "";
    functionSceneIsSet_ = false;
}

IssueUpdateAttribute::~IssueUpdateAttribute() = default;

void IssueUpdateAttribute::validate()
{
}

web::json::value IssueUpdateAttribute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(assignedCcIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc")] = ModelBase::toJson(assignedCc_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(workloadIsSet_) {
        val[utility::conversions::to_string_t("workload")] = ModelBase::toJson(workload_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }
    if(ir2featureIsSet_) {
        val[utility::conversions::to_string_t("ir2feature")] = ModelBase::toJson(ir2feature_);
    }
    if(needBreakIsSet_) {
        val[utility::conversions::to_string_t("need_break")] = ModelBase::toJson(needBreak_);
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
    if(businessDomainIsSet_) {
        val[utility::conversions::to_string_t("business_domain")] = ModelBase::toJson(businessDomain_);
    }
    if(planPiIsSet_) {
        val[utility::conversions::to_string_t("plan_pi")] = ModelBase::toJson(planPi_);
    }
    if(planIterationIsSet_) {
        val[utility::conversions::to_string_t("plan_iteration")] = ModelBase::toJson(planIteration_);
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
    if(featureSetIsSet_) {
        val[utility::conversions::to_string_t("feature_set")] = ModelBase::toJson(featureSet_);
    }
    if(expectedRepairDateIsSet_) {
        val[utility::conversions::to_string_t("expected_repair_date")] = ModelBase::toJson(expectedRepairDate_);
    }
    if(foundPiIsSet_) {
        val[utility::conversions::to_string_t("found_pi")] = ModelBase::toJson(foundPi_);
    }
    if(foundIterationIsSet_) {
        val[utility::conversions::to_string_t("found_iteration")] = ModelBase::toJson(foundIteration_);
    }
    if(reasonAnalysisIsSet_) {
        val[utility::conversions::to_string_t("reason_analysis")] = ModelBase::toJson(reasonAnalysis_);
    }
    if(repairSolutionIsSet_) {
        val[utility::conversions::to_string_t("repair_solution")] = ModelBase::toJson(repairSolution_);
    }
    if(testReportIsSet_) {
        val[utility::conversions::to_string_t("test_report")] = ModelBase::toJson(testReport_);
    }
    if(sysNoRepairReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_no_repair_reason")] = ModelBase::toJson(sysNoRepairReason_);
    }
    if(sysActivationReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_activation_reason")] = ModelBase::toJson(sysActivationReason_);
    }
    if(sysReturnReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_return_reason")] = ModelBase::toJson(sysReturnReason_);
    }
    if(testFailuresTimesIsSet_) {
        val[utility::conversions::to_string_t("test_failures_times")] = ModelBase::toJson(testFailuresTimes_);
    }
    if(closeTypeIsSet_) {
        val[utility::conversions::to_string_t("close_type")] = ModelBase::toJson(closeType_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }
    if(planOwnerIsSet_) {
        val[utility::conversions::to_string_t("plan_owner")] = ModelBase::toJson(planOwner_);
    }
    if(doingOwnerIsSet_) {
        val[utility::conversions::to_string_t("doing_owner")] = ModelBase::toJson(doingOwner_);
    }
    if(deliveredOwnerIsSet_) {
        val[utility::conversions::to_string_t("delivered_owner")] = ModelBase::toJson(deliveredOwner_);
    }
    if(checkingOwnerIsSet_) {
        val[utility::conversions::to_string_t("checking_owner")] = ModelBase::toJson(checkingOwner_);
    }
    if(testOwnerIsSet_) {
        val[utility::conversions::to_string_t("test_owner")] = ModelBase::toJson(testOwner_);
    }
    if(developOwnerIsSet_) {
        val[utility::conversions::to_string_t("develop_owner")] = ModelBase::toJson(developOwner_);
    }
    if(processingOwnerIsSet_) {
        val[utility::conversions::to_string_t("processing_owner")] = ModelBase::toJson(processingOwner_);
    }
    if(fixedOwnerIsSet_) {
        val[utility::conversions::to_string_t("fixed_owner")] = ModelBase::toJson(fixedOwner_);
    }
    if(researchanddevelopOwnerIsSet_) {
        val[utility::conversions::to_string_t("researchanddevelop_owner")] = ModelBase::toJson(researchanddevelopOwner_);
    }
    if(analyseOwnerIsSet_) {
        val[utility::conversions::to_string_t("analyse_owner")] = ModelBase::toJson(analyseOwner_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(expectDeliveryTimeIsSet_) {
        val[utility::conversions::to_string_t("expect_delivery_time")] = ModelBase::toJson(expectDeliveryTime_);
    }
    if(planTestEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_test_end_date")] = ModelBase::toJson(planTestEndDate_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(promisedIsSet_) {
        val[utility::conversions::to_string_t("promised")] = ModelBase::toJson(promised_);
    }
    if(recipientIsSet_) {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(recipient_);
    }
    if(sysNoDevelopReasonIsSet_) {
        val[utility::conversions::to_string_t("sys_no_develop_reason")] = ModelBase::toJson(sysNoDevelopReason_);
    }
    if(valFeatureIsSet_) {
        val[utility::conversions::to_string_t("val_feature")] = ModelBase::toJson(valFeature_);
    }
    if(functionSceneIsSet_) {
        val[utility::conversions::to_string_t("function_scene")] = ModelBase::toJson(functionScene_);
    }

    return val;
}
bool IssueUpdateAttribute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc"));
        if(!fieldValue.is_null())
        {
            std::vector<UserUpdateAttribute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workload"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkload(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_iteration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanIteration(refVal);
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
            std::vector<UserUpdateAttribute> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("feature_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureSet(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("found_pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_pi"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundPi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("found_iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_iteration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundIteration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repair_solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairSolution(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sys_no_repair_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_no_repair_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysNoRepairReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sys_return_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_return_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysReturnReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("close_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doing_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doing_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDoingOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delivered_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delivered_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeliveredOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checking_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checking_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckingOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("develop_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processing_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processing_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessingOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("researchanddevelop_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("researchanddevelop_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResearchanddevelopOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("analyse_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analyse_owner"));
        if(!fieldValue.is_null())
        {
            UserUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalyseOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expect_delivery_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_delivery_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectDeliveryTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promised"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promised"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromised(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            std::vector<UserUpdateAttribute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecipient(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("val_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("val_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValFeature(refVal);
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
    return ok;
}


std::string IssueUpdateAttribute::getCategory() const
{
    return category_;
}

void IssueUpdateAttribute::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool IssueUpdateAttribute::categoryIsSet() const
{
    return categoryIsSet_;
}

void IssueUpdateAttribute::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string IssueUpdateAttribute::getDescription() const
{
    return description_;
}

void IssueUpdateAttribute::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueUpdateAttribute::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueUpdateAttribute::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IssueUpdateAttribute::getParentId() const
{
    return parentId_;
}

void IssueUpdateAttribute::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool IssueUpdateAttribute::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void IssueUpdateAttribute::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string IssueUpdateAttribute::getStatus() const
{
    return status_;
}

void IssueUpdateAttribute::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueUpdateAttribute::statusIsSet() const
{
    return statusIsSet_;
}

void IssueUpdateAttribute::unsetstatus()
{
    statusIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getAssignee() const
{
    return assignee_;
}

void IssueUpdateAttribute::setAssignee(const UserUpdateAttribute& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool IssueUpdateAttribute::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void IssueUpdateAttribute::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::vector<UserUpdateAttribute>& IssueUpdateAttribute::getAssignedCc()
{
    return assignedCc_;
}

void IssueUpdateAttribute::setAssignedCc(const std::vector<UserUpdateAttribute>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool IssueUpdateAttribute::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void IssueUpdateAttribute::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string IssueUpdateAttribute::getPlanEndDate() const
{
    return planEndDate_;
}

void IssueUpdateAttribute::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IssueUpdateAttribute::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IssueUpdateAttribute::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string IssueUpdateAttribute::getWorkload() const
{
    return workload_;
}

void IssueUpdateAttribute::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool IssueUpdateAttribute::workloadIsSet() const
{
    return workloadIsSet_;
}

void IssueUpdateAttribute::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string IssueUpdateAttribute::getLink() const
{
    return link_;
}

void IssueUpdateAttribute::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool IssueUpdateAttribute::linkIsSet() const
{
    return linkIsSet_;
}

void IssueUpdateAttribute::unsetlink()
{
    linkIsSet_ = false;
}

std::vector<LabelEntity>& IssueUpdateAttribute::getLabels()
{
    return labels_;
}

void IssueUpdateAttribute::setLabels(const std::vector<LabelEntity>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool IssueUpdateAttribute::labelsIsSet() const
{
    return labelsIsSet_;
}

void IssueUpdateAttribute::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<FieldCodeValuePair>& IssueUpdateAttribute::getCustomFields()
{
    return customFields_;
}

void IssueUpdateAttribute::setCustomFields(const std::vector<FieldCodeValuePair>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool IssueUpdateAttribute::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void IssueUpdateAttribute::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::string IssueUpdateAttribute::getIr2feature() const
{
    return ir2feature_;
}

void IssueUpdateAttribute::setIr2feature(const std::string& value)
{
    ir2feature_ = value;
    ir2featureIsSet_ = true;
}

bool IssueUpdateAttribute::ir2featureIsSet() const
{
    return ir2featureIsSet_;
}

void IssueUpdateAttribute::unsetir2feature()
{
    ir2featureIsSet_ = false;
}

std::string IssueUpdateAttribute::getNeedBreak() const
{
    return needBreak_;
}

void IssueUpdateAttribute::setNeedBreak(const std::string& value)
{
    needBreak_ = value;
    needBreakIsSet_ = true;
}

bool IssueUpdateAttribute::needBreakIsSet() const
{
    return needBreakIsSet_;
}

void IssueUpdateAttribute::unsetneedBreak()
{
    needBreakIsSet_ = false;
}

std::string IssueUpdateAttribute::getBaseline() const
{
    return baseline_;
}

void IssueUpdateAttribute::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool IssueUpdateAttribute::baselineIsSet() const
{
    return baselineIsSet_;
}

void IssueUpdateAttribute::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string IssueUpdateAttribute::getPriority() const
{
    return priority_;
}

void IssueUpdateAttribute::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueUpdateAttribute::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueUpdateAttribute::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string IssueUpdateAttribute::getRelatedNetworkSecurity() const
{
    return relatedNetworkSecurity_;
}

void IssueUpdateAttribute::setRelatedNetworkSecurity(const std::string& value)
{
    relatedNetworkSecurity_ = value;
    relatedNetworkSecurityIsSet_ = true;
}

bool IssueUpdateAttribute::relatedNetworkSecurityIsSet() const
{
    return relatedNetworkSecurityIsSet_;
}

void IssueUpdateAttribute::unsetrelatedNetworkSecurity()
{
    relatedNetworkSecurityIsSet_ = false;
}

std::string IssueUpdateAttribute::getBusinessDomain() const
{
    return businessDomain_;
}

void IssueUpdateAttribute::setBusinessDomain(const std::string& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool IssueUpdateAttribute::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void IssueUpdateAttribute::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string IssueUpdateAttribute::getPlanPi() const
{
    return planPi_;
}

void IssueUpdateAttribute::setPlanPi(const std::string& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool IssueUpdateAttribute::planPiIsSet() const
{
    return planPiIsSet_;
}

void IssueUpdateAttribute::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::string IssueUpdateAttribute::getPlanIteration() const
{
    return planIteration_;
}

void IssueUpdateAttribute::setPlanIteration(const std::string& value)
{
    planIteration_ = value;
    planIterationIsSet_ = true;
}

bool IssueUpdateAttribute::planIterationIsSet() const
{
    return planIterationIsSet_;
}

void IssueUpdateAttribute::unsetplanIteration()
{
    planIterationIsSet_ = false;
}

std::string IssueUpdateAttribute::getNoBreakReason() const
{
    return noBreakReason_;
}

void IssueUpdateAttribute::setNoBreakReason(const std::string& value)
{
    noBreakReason_ = value;
    noBreakReasonIsSet_ = true;
}

bool IssueUpdateAttribute::noBreakReasonIsSet() const
{
    return noBreakReasonIsSet_;
}

void IssueUpdateAttribute::unsetnoBreakReason()
{
    noBreakReasonIsSet_ = false;
}

std::vector<UserUpdateAttribute>& IssueUpdateAttribute::getSubmittedBy()
{
    return submittedBy_;
}

void IssueUpdateAttribute::setSubmittedBy(const std::vector<UserUpdateAttribute>& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool IssueUpdateAttribute::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void IssueUpdateAttribute::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string IssueUpdateAttribute::getIr2rr() const
{
    return ir2rr_;
}

void IssueUpdateAttribute::setIr2rr(const std::string& value)
{
    ir2rr_ = value;
    ir2rrIsSet_ = true;
}

bool IssueUpdateAttribute::ir2rrIsSet() const
{
    return ir2rrIsSet_;
}

void IssueUpdateAttribute::unsetir2rr()
{
    ir2rrIsSet_ = false;
}

std::string IssueUpdateAttribute::getFeatureSet() const
{
    return featureSet_;
}

void IssueUpdateAttribute::setFeatureSet(const std::string& value)
{
    featureSet_ = value;
    featureSetIsSet_ = true;
}

bool IssueUpdateAttribute::featureSetIsSet() const
{
    return featureSetIsSet_;
}

void IssueUpdateAttribute::unsetfeatureSet()
{
    featureSetIsSet_ = false;
}

std::string IssueUpdateAttribute::getExpectedRepairDate() const
{
    return expectedRepairDate_;
}

void IssueUpdateAttribute::setExpectedRepairDate(const std::string& value)
{
    expectedRepairDate_ = value;
    expectedRepairDateIsSet_ = true;
}

bool IssueUpdateAttribute::expectedRepairDateIsSet() const
{
    return expectedRepairDateIsSet_;
}

void IssueUpdateAttribute::unsetexpectedRepairDate()
{
    expectedRepairDateIsSet_ = false;
}

std::string IssueUpdateAttribute::getFoundPi() const
{
    return foundPi_;
}

void IssueUpdateAttribute::setFoundPi(const std::string& value)
{
    foundPi_ = value;
    foundPiIsSet_ = true;
}

bool IssueUpdateAttribute::foundPiIsSet() const
{
    return foundPiIsSet_;
}

void IssueUpdateAttribute::unsetfoundPi()
{
    foundPiIsSet_ = false;
}

std::string IssueUpdateAttribute::getFoundIteration() const
{
    return foundIteration_;
}

void IssueUpdateAttribute::setFoundIteration(const std::string& value)
{
    foundIteration_ = value;
    foundIterationIsSet_ = true;
}

bool IssueUpdateAttribute::foundIterationIsSet() const
{
    return foundIterationIsSet_;
}

void IssueUpdateAttribute::unsetfoundIteration()
{
    foundIterationIsSet_ = false;
}

std::string IssueUpdateAttribute::getReasonAnalysis() const
{
    return reasonAnalysis_;
}

void IssueUpdateAttribute::setReasonAnalysis(const std::string& value)
{
    reasonAnalysis_ = value;
    reasonAnalysisIsSet_ = true;
}

bool IssueUpdateAttribute::reasonAnalysisIsSet() const
{
    return reasonAnalysisIsSet_;
}

void IssueUpdateAttribute::unsetreasonAnalysis()
{
    reasonAnalysisIsSet_ = false;
}

std::string IssueUpdateAttribute::getRepairSolution() const
{
    return repairSolution_;
}

void IssueUpdateAttribute::setRepairSolution(const std::string& value)
{
    repairSolution_ = value;
    repairSolutionIsSet_ = true;
}

bool IssueUpdateAttribute::repairSolutionIsSet() const
{
    return repairSolutionIsSet_;
}

void IssueUpdateAttribute::unsetrepairSolution()
{
    repairSolutionIsSet_ = false;
}

std::string IssueUpdateAttribute::getTestReport() const
{
    return testReport_;
}

void IssueUpdateAttribute::setTestReport(const std::string& value)
{
    testReport_ = value;
    testReportIsSet_ = true;
}

bool IssueUpdateAttribute::testReportIsSet() const
{
    return testReportIsSet_;
}

void IssueUpdateAttribute::unsettestReport()
{
    testReportIsSet_ = false;
}

std::string IssueUpdateAttribute::getSysNoRepairReason() const
{
    return sysNoRepairReason_;
}

void IssueUpdateAttribute::setSysNoRepairReason(const std::string& value)
{
    sysNoRepairReason_ = value;
    sysNoRepairReasonIsSet_ = true;
}

bool IssueUpdateAttribute::sysNoRepairReasonIsSet() const
{
    return sysNoRepairReasonIsSet_;
}

void IssueUpdateAttribute::unsetsysNoRepairReason()
{
    sysNoRepairReasonIsSet_ = false;
}

std::string IssueUpdateAttribute::getSysActivationReason() const
{
    return sysActivationReason_;
}

void IssueUpdateAttribute::setSysActivationReason(const std::string& value)
{
    sysActivationReason_ = value;
    sysActivationReasonIsSet_ = true;
}

bool IssueUpdateAttribute::sysActivationReasonIsSet() const
{
    return sysActivationReasonIsSet_;
}

void IssueUpdateAttribute::unsetsysActivationReason()
{
    sysActivationReasonIsSet_ = false;
}

std::string IssueUpdateAttribute::getSysReturnReason() const
{
    return sysReturnReason_;
}

void IssueUpdateAttribute::setSysReturnReason(const std::string& value)
{
    sysReturnReason_ = value;
    sysReturnReasonIsSet_ = true;
}

bool IssueUpdateAttribute::sysReturnReasonIsSet() const
{
    return sysReturnReasonIsSet_;
}

void IssueUpdateAttribute::unsetsysReturnReason()
{
    sysReturnReasonIsSet_ = false;
}

int32_t IssueUpdateAttribute::getTestFailuresTimes() const
{
    return testFailuresTimes_;
}

void IssueUpdateAttribute::setTestFailuresTimes(int32_t value)
{
    testFailuresTimes_ = value;
    testFailuresTimesIsSet_ = true;
}

bool IssueUpdateAttribute::testFailuresTimesIsSet() const
{
    return testFailuresTimesIsSet_;
}

void IssueUpdateAttribute::unsettestFailuresTimes()
{
    testFailuresTimesIsSet_ = false;
}

std::string IssueUpdateAttribute::getCloseType() const
{
    return closeType_;
}

void IssueUpdateAttribute::setCloseType(const std::string& value)
{
    closeType_ = value;
    closeTypeIsSet_ = true;
}

bool IssueUpdateAttribute::closeTypeIsSet() const
{
    return closeTypeIsSet_;
}

void IssueUpdateAttribute::unsetcloseType()
{
    closeTypeIsSet_ = false;
}

std::string IssueUpdateAttribute::getSecurityLevel() const
{
    return securityLevel_;
}

void IssueUpdateAttribute::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool IssueUpdateAttribute::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void IssueUpdateAttribute::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getPlanOwner() const
{
    return planOwner_;
}

void IssueUpdateAttribute::setPlanOwner(const UserUpdateAttribute& value)
{
    planOwner_ = value;
    planOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::planOwnerIsSet() const
{
    return planOwnerIsSet_;
}

void IssueUpdateAttribute::unsetplanOwner()
{
    planOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getDoingOwner() const
{
    return doingOwner_;
}

void IssueUpdateAttribute::setDoingOwner(const UserUpdateAttribute& value)
{
    doingOwner_ = value;
    doingOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::doingOwnerIsSet() const
{
    return doingOwnerIsSet_;
}

void IssueUpdateAttribute::unsetdoingOwner()
{
    doingOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getDeliveredOwner() const
{
    return deliveredOwner_;
}

void IssueUpdateAttribute::setDeliveredOwner(const UserUpdateAttribute& value)
{
    deliveredOwner_ = value;
    deliveredOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::deliveredOwnerIsSet() const
{
    return deliveredOwnerIsSet_;
}

void IssueUpdateAttribute::unsetdeliveredOwner()
{
    deliveredOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getCheckingOwner() const
{
    return checkingOwner_;
}

void IssueUpdateAttribute::setCheckingOwner(const UserUpdateAttribute& value)
{
    checkingOwner_ = value;
    checkingOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::checkingOwnerIsSet() const
{
    return checkingOwnerIsSet_;
}

void IssueUpdateAttribute::unsetcheckingOwner()
{
    checkingOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getTestOwner() const
{
    return testOwner_;
}

void IssueUpdateAttribute::setTestOwner(const UserUpdateAttribute& value)
{
    testOwner_ = value;
    testOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::testOwnerIsSet() const
{
    return testOwnerIsSet_;
}

void IssueUpdateAttribute::unsettestOwner()
{
    testOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getDevelopOwner() const
{
    return developOwner_;
}

void IssueUpdateAttribute::setDevelopOwner(const UserUpdateAttribute& value)
{
    developOwner_ = value;
    developOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::developOwnerIsSet() const
{
    return developOwnerIsSet_;
}

void IssueUpdateAttribute::unsetdevelopOwner()
{
    developOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getProcessingOwner() const
{
    return processingOwner_;
}

void IssueUpdateAttribute::setProcessingOwner(const UserUpdateAttribute& value)
{
    processingOwner_ = value;
    processingOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::processingOwnerIsSet() const
{
    return processingOwnerIsSet_;
}

void IssueUpdateAttribute::unsetprocessingOwner()
{
    processingOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getFixedOwner() const
{
    return fixedOwner_;
}

void IssueUpdateAttribute::setFixedOwner(const UserUpdateAttribute& value)
{
    fixedOwner_ = value;
    fixedOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::fixedOwnerIsSet() const
{
    return fixedOwnerIsSet_;
}

void IssueUpdateAttribute::unsetfixedOwner()
{
    fixedOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getResearchanddevelopOwner() const
{
    return researchanddevelopOwner_;
}

void IssueUpdateAttribute::setResearchanddevelopOwner(const UserUpdateAttribute& value)
{
    researchanddevelopOwner_ = value;
    researchanddevelopOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::researchanddevelopOwnerIsSet() const
{
    return researchanddevelopOwnerIsSet_;
}

void IssueUpdateAttribute::unsetresearchanddevelopOwner()
{
    researchanddevelopOwnerIsSet_ = false;
}

UserUpdateAttribute IssueUpdateAttribute::getAnalyseOwner() const
{
    return analyseOwner_;
}

void IssueUpdateAttribute::setAnalyseOwner(const UserUpdateAttribute& value)
{
    analyseOwner_ = value;
    analyseOwnerIsSet_ = true;
}

bool IssueUpdateAttribute::analyseOwnerIsSet() const
{
    return analyseOwnerIsSet_;
}

void IssueUpdateAttribute::unsetanalyseOwner()
{
    analyseOwnerIsSet_ = false;
}

std::string IssueUpdateAttribute::getPlanStartDate() const
{
    return planStartDate_;
}

void IssueUpdateAttribute::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool IssueUpdateAttribute::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void IssueUpdateAttribute::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

std::string IssueUpdateAttribute::getExpectDeliveryTime() const
{
    return expectDeliveryTime_;
}

void IssueUpdateAttribute::setExpectDeliveryTime(const std::string& value)
{
    expectDeliveryTime_ = value;
    expectDeliveryTimeIsSet_ = true;
}

bool IssueUpdateAttribute::expectDeliveryTimeIsSet() const
{
    return expectDeliveryTimeIsSet_;
}

void IssueUpdateAttribute::unsetexpectDeliveryTime()
{
    expectDeliveryTimeIsSet_ = false;
}

std::string IssueUpdateAttribute::getPlanTestEndDate() const
{
    return planTestEndDate_;
}

void IssueUpdateAttribute::setPlanTestEndDate(const std::string& value)
{
    planTestEndDate_ = value;
    planTestEndDateIsSet_ = true;
}

bool IssueUpdateAttribute::planTestEndDateIsSet() const
{
    return planTestEndDateIsSet_;
}

void IssueUpdateAttribute::unsetplanTestEndDate()
{
    planTestEndDateIsSet_ = false;
}

std::string IssueUpdateAttribute::getSeverity() const
{
    return severity_;
}

void IssueUpdateAttribute::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool IssueUpdateAttribute::severityIsSet() const
{
    return severityIsSet_;
}

void IssueUpdateAttribute::unsetseverity()
{
    severityIsSet_ = false;
}

std::string IssueUpdateAttribute::getPromised() const
{
    return promised_;
}

void IssueUpdateAttribute::setPromised(const std::string& value)
{
    promised_ = value;
    promisedIsSet_ = true;
}

bool IssueUpdateAttribute::promisedIsSet() const
{
    return promisedIsSet_;
}

void IssueUpdateAttribute::unsetpromised()
{
    promisedIsSet_ = false;
}

std::vector<UserUpdateAttribute>& IssueUpdateAttribute::getRecipient()
{
    return recipient_;
}

void IssueUpdateAttribute::setRecipient(const std::vector<UserUpdateAttribute>& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool IssueUpdateAttribute::recipientIsSet() const
{
    return recipientIsSet_;
}

void IssueUpdateAttribute::unsetrecipient()
{
    recipientIsSet_ = false;
}

std::string IssueUpdateAttribute::getSysNoDevelopReason() const
{
    return sysNoDevelopReason_;
}

void IssueUpdateAttribute::setSysNoDevelopReason(const std::string& value)
{
    sysNoDevelopReason_ = value;
    sysNoDevelopReasonIsSet_ = true;
}

bool IssueUpdateAttribute::sysNoDevelopReasonIsSet() const
{
    return sysNoDevelopReasonIsSet_;
}

void IssueUpdateAttribute::unsetsysNoDevelopReason()
{
    sysNoDevelopReasonIsSet_ = false;
}

std::string IssueUpdateAttribute::getValFeature() const
{
    return valFeature_;
}

void IssueUpdateAttribute::setValFeature(const std::string& value)
{
    valFeature_ = value;
    valFeatureIsSet_ = true;
}

bool IssueUpdateAttribute::valFeatureIsSet() const
{
    return valFeatureIsSet_;
}

void IssueUpdateAttribute::unsetvalFeature()
{
    valFeatureIsSet_ = false;
}

std::string IssueUpdateAttribute::getFunctionScene() const
{
    return functionScene_;
}

void IssueUpdateAttribute::setFunctionScene(const std::string& value)
{
    functionScene_ = value;
    functionSceneIsSet_ = true;
}

bool IssueUpdateAttribute::functionSceneIsSet() const
{
    return functionSceneIsSet_;
}

void IssueUpdateAttribute::unsetfunctionScene()
{
    functionSceneIsSet_ = false;
}

}
}
}
}
}



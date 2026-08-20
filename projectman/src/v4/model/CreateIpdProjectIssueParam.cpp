

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueParam::CreateIpdProjectIssueParam()
{
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    srcDomain_ = "";
    srcDomainIsSet_ = false;
    submittedBy_ = "";
    submittedByIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    recipientIsSet_ = false;
    expectDeliveryTime_ = 0L;
    expectDeliveryTimeIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    assignedCcIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    assignee_ = "";
    assigneeIsSet_ = false;
    planPi_ = "";
    planPiIsSet_ = false;
    planIteration_ = "";
    planIterationIsSet_ = false;
    planStartDate_ = 0L;
    planStartDateIsSet_ = false;
    planEndDate_ = 0L;
    planEndDateIsSet_ = false;
    workloadManDay_ = 0;
    workloadManDayIsSet_ = false;
    businessDomain_ = "";
    businessDomainIsSet_ = false;
    needBreak_ = "";
    needBreakIsSet_ = false;
}

CreateIpdProjectIssueParam::~CreateIpdProjectIssueParam() = default;

void CreateIpdProjectIssueParam::validate()
{
}

web::json::value CreateIpdProjectIssueParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(srcDomainIsSet_) {
        val[utility::conversions::to_string_t("src_domain")] = ModelBase::toJson(srcDomain_);
    }
    if(submittedByIsSet_) {
        val[utility::conversions::to_string_t("submitted_by")] = ModelBase::toJson(submittedBy_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(recipientIsSet_) {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(recipient_);
    }
    if(expectDeliveryTimeIsSet_) {
        val[utility::conversions::to_string_t("expect_delivery_time")] = ModelBase::toJson(expectDeliveryTime_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(assignedCcIsSet_) {
        val[utility::conversions::to_string_t("assigned_cc")] = ModelBase::toJson(assignedCc_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(planPiIsSet_) {
        val[utility::conversions::to_string_t("plan_pi")] = ModelBase::toJson(planPi_);
    }
    if(planIterationIsSet_) {
        val[utility::conversions::to_string_t("plan_iteration")] = ModelBase::toJson(planIteration_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(workloadManDayIsSet_) {
        val[utility::conversions::to_string_t("workload_man_day")] = ModelBase::toJson(workloadManDay_);
    }
    if(businessDomainIsSet_) {
        val[utility::conversions::to_string_t("business_domain")] = ModelBase::toJson(businessDomain_);
    }
    if(needBreakIsSet_) {
        val[utility::conversions::to_string_t("need_break")] = ModelBase::toJson(needBreak_);
    }

    return val;
}
bool CreateIpdProjectIssueParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submitted_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submitted_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmittedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecipient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_delivery_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_delivery_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectDeliveryTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assigned_cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_cc"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedCc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workload_man_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload_man_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkloadManDay(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("need_break"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_break"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedBreak(refVal);
        }
    }
    return ok;
}


std::string CreateIpdProjectIssueParam::getTitle() const
{
    return title_;
}

void CreateIpdProjectIssueParam::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateIpdProjectIssueParam::titleIsSet() const
{
    return titleIsSet_;
}

void CreateIpdProjectIssueParam::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getDescription() const
{
    return description_;
}

void CreateIpdProjectIssueParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateIpdProjectIssueParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateIpdProjectIssueParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getStatus() const
{
    return status_;
}

void CreateIpdProjectIssueParam::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdProjectIssueParam::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdProjectIssueParam::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getSrcDomain() const
{
    return srcDomain_;
}

void CreateIpdProjectIssueParam::setSrcDomain(const std::string& value)
{
    srcDomain_ = value;
    srcDomainIsSet_ = true;
}

bool CreateIpdProjectIssueParam::srcDomainIsSet() const
{
    return srcDomainIsSet_;
}

void CreateIpdProjectIssueParam::unsetsrcDomain()
{
    srcDomainIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getSubmittedBy() const
{
    return submittedBy_;
}

void CreateIpdProjectIssueParam::setSubmittedBy(const std::string& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool CreateIpdProjectIssueParam::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void CreateIpdProjectIssueParam::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getDomainId() const
{
    return domainId_;
}

void CreateIpdProjectIssueParam::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateIpdProjectIssueParam::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateIpdProjectIssueParam::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<std::string>& CreateIpdProjectIssueParam::getRecipient()
{
    return recipient_;
}

void CreateIpdProjectIssueParam::setRecipient(const std::vector<std::string>& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool CreateIpdProjectIssueParam::recipientIsSet() const
{
    return recipientIsSet_;
}

void CreateIpdProjectIssueParam::unsetrecipient()
{
    recipientIsSet_ = false;
}

int64_t CreateIpdProjectIssueParam::getExpectDeliveryTime() const
{
    return expectDeliveryTime_;
}

void CreateIpdProjectIssueParam::setExpectDeliveryTime(int64_t value)
{
    expectDeliveryTime_ = value;
    expectDeliveryTimeIsSet_ = true;
}

bool CreateIpdProjectIssueParam::expectDeliveryTimeIsSet() const
{
    return expectDeliveryTimeIsSet_;
}

void CreateIpdProjectIssueParam::unsetexpectDeliveryTime()
{
    expectDeliveryTimeIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getPriority() const
{
    return priority_;
}

void CreateIpdProjectIssueParam::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CreateIpdProjectIssueParam::priorityIsSet() const
{
    return priorityIsSet_;
}

void CreateIpdProjectIssueParam::unsetpriority()
{
    priorityIsSet_ = false;
}

std::vector<std::string>& CreateIpdProjectIssueParam::getAssignedCc()
{
    return assignedCc_;
}

void CreateIpdProjectIssueParam::setAssignedCc(const std::vector<std::string>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool CreateIpdProjectIssueParam::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void CreateIpdProjectIssueParam::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getCategory() const
{
    return category_;
}

void CreateIpdProjectIssueParam::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateIpdProjectIssueParam::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateIpdProjectIssueParam::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getAssignee() const
{
    return assignee_;
}

void CreateIpdProjectIssueParam::setAssignee(const std::string& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CreateIpdProjectIssueParam::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CreateIpdProjectIssueParam::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getPlanPi() const
{
    return planPi_;
}

void CreateIpdProjectIssueParam::setPlanPi(const std::string& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool CreateIpdProjectIssueParam::planPiIsSet() const
{
    return planPiIsSet_;
}

void CreateIpdProjectIssueParam::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getPlanIteration() const
{
    return planIteration_;
}

void CreateIpdProjectIssueParam::setPlanIteration(const std::string& value)
{
    planIteration_ = value;
    planIterationIsSet_ = true;
}

bool CreateIpdProjectIssueParam::planIterationIsSet() const
{
    return planIterationIsSet_;
}

void CreateIpdProjectIssueParam::unsetplanIteration()
{
    planIterationIsSet_ = false;
}

int64_t CreateIpdProjectIssueParam::getPlanStartDate() const
{
    return planStartDate_;
}

void CreateIpdProjectIssueParam::setPlanStartDate(int64_t value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool CreateIpdProjectIssueParam::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void CreateIpdProjectIssueParam::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t CreateIpdProjectIssueParam::getPlanEndDate() const
{
    return planEndDate_;
}

void CreateIpdProjectIssueParam::setPlanEndDate(int64_t value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool CreateIpdProjectIssueParam::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void CreateIpdProjectIssueParam::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int32_t CreateIpdProjectIssueParam::getWorkloadManDay() const
{
    return workloadManDay_;
}

void CreateIpdProjectIssueParam::setWorkloadManDay(int32_t value)
{
    workloadManDay_ = value;
    workloadManDayIsSet_ = true;
}

bool CreateIpdProjectIssueParam::workloadManDayIsSet() const
{
    return workloadManDayIsSet_;
}

void CreateIpdProjectIssueParam::unsetworkloadManDay()
{
    workloadManDayIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getBusinessDomain() const
{
    return businessDomain_;
}

void CreateIpdProjectIssueParam::setBusinessDomain(const std::string& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool CreateIpdProjectIssueParam::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void CreateIpdProjectIssueParam::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string CreateIpdProjectIssueParam::getNeedBreak() const
{
    return needBreak_;
}

void CreateIpdProjectIssueParam::setNeedBreak(const std::string& value)
{
    needBreak_ = value;
    needBreakIsSet_ = true;
}

bool CreateIpdProjectIssueParam::needBreakIsSet() const
{
    return needBreakIsSet_;
}

void CreateIpdProjectIssueParam::unsetneedBreak()
{
    needBreakIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueRequestBody::CreateIpdProjectIssueRequestBody()
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

CreateIpdProjectIssueRequestBody::~CreateIpdProjectIssueRequestBody() = default;

void CreateIpdProjectIssueRequestBody::validate()
{
}

web::json::value CreateIpdProjectIssueRequestBody::toJson() const
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
bool CreateIpdProjectIssueRequestBody::fromJson(const web::json::value& val)
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


std::string CreateIpdProjectIssueRequestBody::getTitle() const
{
    return title_;
}

void CreateIpdProjectIssueRequestBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::titleIsSet() const
{
    return titleIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getDescription() const
{
    return description_;
}

void CreateIpdProjectIssueRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getStatus() const
{
    return status_;
}

void CreateIpdProjectIssueRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getSrcDomain() const
{
    return srcDomain_;
}

void CreateIpdProjectIssueRequestBody::setSrcDomain(const std::string& value)
{
    srcDomain_ = value;
    srcDomainIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::srcDomainIsSet() const
{
    return srcDomainIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetsrcDomain()
{
    srcDomainIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getSubmittedBy() const
{
    return submittedBy_;
}

void CreateIpdProjectIssueRequestBody::setSubmittedBy(const std::string& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getDomainId() const
{
    return domainId_;
}

void CreateIpdProjectIssueRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<std::string>& CreateIpdProjectIssueRequestBody::getRecipient()
{
    return recipient_;
}

void CreateIpdProjectIssueRequestBody::setRecipient(const std::vector<std::string>& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::recipientIsSet() const
{
    return recipientIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetrecipient()
{
    recipientIsSet_ = false;
}

int64_t CreateIpdProjectIssueRequestBody::getExpectDeliveryTime() const
{
    return expectDeliveryTime_;
}

void CreateIpdProjectIssueRequestBody::setExpectDeliveryTime(int64_t value)
{
    expectDeliveryTime_ = value;
    expectDeliveryTimeIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::expectDeliveryTimeIsSet() const
{
    return expectDeliveryTimeIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetexpectDeliveryTime()
{
    expectDeliveryTimeIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getPriority() const
{
    return priority_;
}

void CreateIpdProjectIssueRequestBody::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::priorityIsSet() const
{
    return priorityIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetpriority()
{
    priorityIsSet_ = false;
}

std::vector<std::string>& CreateIpdProjectIssueRequestBody::getAssignedCc()
{
    return assignedCc_;
}

void CreateIpdProjectIssueRequestBody::setAssignedCc(const std::vector<std::string>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getCategory() const
{
    return category_;
}

void CreateIpdProjectIssueRequestBody::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getAssignee() const
{
    return assignee_;
}

void CreateIpdProjectIssueRequestBody::setAssignee(const std::string& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getPlanPi() const
{
    return planPi_;
}

void CreateIpdProjectIssueRequestBody::setPlanPi(const std::string& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::planPiIsSet() const
{
    return planPiIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getPlanIteration() const
{
    return planIteration_;
}

void CreateIpdProjectIssueRequestBody::setPlanIteration(const std::string& value)
{
    planIteration_ = value;
    planIterationIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::planIterationIsSet() const
{
    return planIterationIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetplanIteration()
{
    planIterationIsSet_ = false;
}

int64_t CreateIpdProjectIssueRequestBody::getPlanStartDate() const
{
    return planStartDate_;
}

void CreateIpdProjectIssueRequestBody::setPlanStartDate(int64_t value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t CreateIpdProjectIssueRequestBody::getPlanEndDate() const
{
    return planEndDate_;
}

void CreateIpdProjectIssueRequestBody::setPlanEndDate(int64_t value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int32_t CreateIpdProjectIssueRequestBody::getWorkloadManDay() const
{
    return workloadManDay_;
}

void CreateIpdProjectIssueRequestBody::setWorkloadManDay(int32_t value)
{
    workloadManDay_ = value;
    workloadManDayIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::workloadManDayIsSet() const
{
    return workloadManDayIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetworkloadManDay()
{
    workloadManDayIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getBusinessDomain() const
{
    return businessDomain_;
}

void CreateIpdProjectIssueRequestBody::setBusinessDomain(const std::string& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string CreateIpdProjectIssueRequestBody::getNeedBreak() const
{
    return needBreak_;
}

void CreateIpdProjectIssueRequestBody::setNeedBreak(const std::string& value)
{
    needBreak_ = value;
    needBreakIsSet_ = true;
}

bool CreateIpdProjectIssueRequestBody::needBreakIsSet() const
{
    return needBreakIsSet_;
}

void CreateIpdProjectIssueRequestBody::unsetneedBreak()
{
    needBreakIsSet_ = false;
}

}
}
}
}
}



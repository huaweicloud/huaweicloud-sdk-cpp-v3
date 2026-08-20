

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_opinions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_opinions::ProcessInstanceResponse_result_opinions()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    rounds_ = "";
    roundsIsSet_ = false;
    opinion_ = "";
    opinionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    currOwnerIsSet_ = false;
    coId_ = "";
    coIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    opinionIssueId_ = "";
    opinionIssueIdIsSet_ = false;
    opinionIssueCategory_ = "";
    opinionIssueCategoryIsSet_ = false;
}

ProcessInstanceResponse_result_opinions::~ProcessInstanceResponse_result_opinions() = default;

void ProcessInstanceResponse_result_opinions::validate()
{
}

web::json::value ProcessInstanceResponse_result_opinions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(roundsIsSet_) {
        val[utility::conversions::to_string_t("rounds")] = ModelBase::toJson(rounds_);
    }
    if(opinionIsSet_) {
        val[utility::conversions::to_string_t("opinion")] = ModelBase::toJson(opinion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(currOwnerIsSet_) {
        val[utility::conversions::to_string_t("curr_owner")] = ModelBase::toJson(currOwner_);
    }
    if(coIdIsSet_) {
        val[utility::conversions::to_string_t("co_id")] = ModelBase::toJson(coId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(opinionIssueIdIsSet_) {
        val[utility::conversions::to_string_t("opinion_issue_id")] = ModelBase::toJson(opinionIssueId_);
    }
    if(opinionIssueCategoryIsSet_) {
        val[utility::conversions::to_string_t("opinion_issue_category")] = ModelBase::toJson(opinionIssueCategory_);
    }

    return val;
}
bool ProcessInstanceResponse_result_opinions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rounds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rounds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRounds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinion(refVal);
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
            ProcessInstanceResponse_result_created_by_1 refVal;
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("curr_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curr_owner"));
        if(!fieldValue.is_null())
        {
            ProcessInstanceResponse_result_curr_owner refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion_issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion_issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinionIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinion_issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinion_issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinionIssueCategory(refVal);
        }
    }
    return ok;
}


std::string ProcessInstanceResponse_result_opinions::getId() const
{
    return id_;
}

void ProcessInstanceResponse_result_opinions::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::idIsSet() const
{
    return idIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getType() const
{
    return type_;
}

void ProcessInstanceResponse_result_opinions::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::typeIsSet() const
{
    return typeIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsettype()
{
    typeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getState() const
{
    return state_;
}

void ProcessInstanceResponse_result_opinions::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::stateIsSet() const
{
    return stateIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetstate()
{
    stateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getStatus() const
{
    return status_;
}

void ProcessInstanceResponse_result_opinions::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::statusIsSet() const
{
    return statusIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getRegion() const
{
    return region_;
}

void ProcessInstanceResponse_result_opinions::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::regionIsSet() const
{
    return regionIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getCategory() const
{
    return category_;
}

void ProcessInstanceResponse_result_opinions::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::categoryIsSet() const
{
    return categoryIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getTitle() const
{
    return title_;
}

void ProcessInstanceResponse_result_opinions::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::titleIsSet() const
{
    return titleIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsettitle()
{
    titleIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getRounds() const
{
    return rounds_;
}

void ProcessInstanceResponse_result_opinions::setRounds(const std::string& value)
{
    rounds_ = value;
    roundsIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::roundsIsSet() const
{
    return roundsIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetrounds()
{
    roundsIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getOpinion() const
{
    return opinion_;
}

void ProcessInstanceResponse_result_opinions::setOpinion(const std::string& value)
{
    opinion_ = value;
    opinionIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::opinionIsSet() const
{
    return opinionIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetopinion()
{
    opinionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getDescription() const
{
    return description_;
}

void ProcessInstanceResponse_result_opinions::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getModifiedBy() const
{
    return modifiedBy_;
}

void ProcessInstanceResponse_result_opinions::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getModifiedDate() const
{
    return modifiedDate_;
}

void ProcessInstanceResponse_result_opinions::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

ProcessInstanceResponse_result_created_by_1 ProcessInstanceResponse_result_opinions::getCreatedBy() const
{
    return createdBy_;
}

void ProcessInstanceResponse_result_opinions::setCreatedBy(const ProcessInstanceResponse_result_created_by_1& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::createdByIsSet() const
{
    return createdByIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getCreatedDate() const
{
    return createdDate_;
}

void ProcessInstanceResponse_result_opinions::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getTenantId() const
{
    return tenantId_;
}

void ProcessInstanceResponse_result_opinions::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result_opinions::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getIssueCategory() const
{
    return issueCategory_;
}

void ProcessInstanceResponse_result_opinions::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getIssueId() const
{
    return issueId_;
}

void ProcessInstanceResponse_result_opinions::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetissueId()
{
    issueIdIsSet_ = false;
}

ProcessInstanceResponse_result_curr_owner ProcessInstanceResponse_result_opinions::getCurrOwner() const
{
    return currOwner_;
}

void ProcessInstanceResponse_result_opinions::setCurrOwner(const ProcessInstanceResponse_result_curr_owner& value)
{
    currOwner_ = value;
    currOwnerIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::currOwnerIsSet() const
{
    return currOwnerIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetcurrOwner()
{
    currOwnerIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getCoId() const
{
    return coId_;
}

void ProcessInstanceResponse_result_opinions::setCoId(const std::string& value)
{
    coId_ = value;
    coIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::coIdIsSet() const
{
    return coIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetcoId()
{
    coIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getUserId() const
{
    return userId_;
}

void ProcessInstanceResponse_result_opinions::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::userIdIsSet() const
{
    return userIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getOpinionIssueId() const
{
    return opinionIssueId_;
}

void ProcessInstanceResponse_result_opinions::setOpinionIssueId(const std::string& value)
{
    opinionIssueId_ = value;
    opinionIssueIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::opinionIssueIdIsSet() const
{
    return opinionIssueIdIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetopinionIssueId()
{
    opinionIssueIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_opinions::getOpinionIssueCategory() const
{
    return opinionIssueCategory_;
}

void ProcessInstanceResponse_result_opinions::setOpinionIssueCategory(const std::string& value)
{
    opinionIssueCategory_ = value;
    opinionIssueCategoryIsSet_ = true;
}

bool ProcessInstanceResponse_result_opinions::opinionIssueCategoryIsSet() const
{
    return opinionIssueCategoryIsSet_;
}

void ProcessInstanceResponse_result_opinions::unsetopinionIssueCategory()
{
    opinionIssueCategoryIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/IssueCreateEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCreateEntity::IssueCreateEntity()
{
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    categoryLayerId_ = "";
    categoryLayerIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    assigneeIsSet_ = false;
    recipientIsSet_ = false;
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
    priority_ = "";
    priorityIsSet_ = false;
    relatedNetworkSecurity_ = "";
    relatedNetworkSecurityIsSet_ = false;
    collaboratives_ = "";
    collaborativesIsSet_ = false;
    businessDomain_ = "";
    businessDomainIsSet_ = false;
    planPi_ = "";
    planPiIsSet_ = false;
    submittedByIsSet_ = false;
    ir2rr_ = "";
    ir2rrIsSet_ = false;
    featureSet_ = "";
    featureSetIsSet_ = false;
    securityLevel_ = "";
    securityLevelIsSet_ = false;
}

IssueCreateEntity::~IssueCreateEntity() = default;

void IssueCreateEntity::validate()
{
}

web::json::value IssueCreateEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(categoryLayerIdIsSet_) {
        val[utility::conversions::to_string_t("category_layer_id")] = ModelBase::toJson(categoryLayerId_);
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
    if(recipientIsSet_) {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(recipient_);
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
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(relatedNetworkSecurityIsSet_) {
        val[utility::conversions::to_string_t("related_network_security")] = ModelBase::toJson(relatedNetworkSecurity_);
    }
    if(collaborativesIsSet_) {
        val[utility::conversions::to_string_t("collaboratives")] = ModelBase::toJson(collaboratives_);
    }
    if(businessDomainIsSet_) {
        val[utility::conversions::to_string_t("business_domain")] = ModelBase::toJson(businessDomain_);
    }
    if(planPiIsSet_) {
        val[utility::conversions::to_string_t("plan_pi")] = ModelBase::toJson(planPi_);
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
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }

    return val;
}
bool IssueCreateEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecipient(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("collaboratives"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collaboratives"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollaboratives(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("submitted_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submitted_by"));
        if(!fieldValue.is_null())
        {
            std::vector<UserEntity> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    return ok;
}


std::string IssueCreateEntity::getTitle() const
{
    return title_;
}

void IssueCreateEntity::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueCreateEntity::titleIsSet() const
{
    return titleIsSet_;
}

void IssueCreateEntity::unsettitle()
{
    titleIsSet_ = false;
}

std::string IssueCreateEntity::getDescription() const
{
    return description_;
}

void IssueCreateEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueCreateEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueCreateEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IssueCreateEntity::getCategory() const
{
    return category_;
}

void IssueCreateEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool IssueCreateEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void IssueCreateEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string IssueCreateEntity::getCategoryLayerId() const
{
    return categoryLayerId_;
}

void IssueCreateEntity::setCategoryLayerId(const std::string& value)
{
    categoryLayerId_ = value;
    categoryLayerIdIsSet_ = true;
}

bool IssueCreateEntity::categoryLayerIdIsSet() const
{
    return categoryLayerIdIsSet_;
}

void IssueCreateEntity::unsetcategoryLayerId()
{
    categoryLayerIdIsSet_ = false;
}

std::string IssueCreateEntity::getParentId() const
{
    return parentId_;
}

void IssueCreateEntity::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool IssueCreateEntity::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void IssueCreateEntity::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string IssueCreateEntity::getStatus() const
{
    return status_;
}

void IssueCreateEntity::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IssueCreateEntity::statusIsSet() const
{
    return statusIsSet_;
}

void IssueCreateEntity::unsetstatus()
{
    statusIsSet_ = false;
}

UserEntity IssueCreateEntity::getAssignee() const
{
    return assignee_;
}

void IssueCreateEntity::setAssignee(const UserEntity& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool IssueCreateEntity::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void IssueCreateEntity::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::vector<UserEntity>& IssueCreateEntity::getRecipient()
{
    return recipient_;
}

void IssueCreateEntity::setRecipient(const std::vector<UserEntity>& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool IssueCreateEntity::recipientIsSet() const
{
    return recipientIsSet_;
}

void IssueCreateEntity::unsetrecipient()
{
    recipientIsSet_ = false;
}

std::vector<UserEntity>& IssueCreateEntity::getAssignedCc()
{
    return assignedCc_;
}

void IssueCreateEntity::setAssignedCc(const std::vector<UserEntity>& value)
{
    assignedCc_ = value;
    assignedCcIsSet_ = true;
}

bool IssueCreateEntity::assignedCcIsSet() const
{
    return assignedCcIsSet_;
}

void IssueCreateEntity::unsetassignedCc()
{
    assignedCcIsSet_ = false;
}

std::string IssueCreateEntity::getPlanEndDate() const
{
    return planEndDate_;
}

void IssueCreateEntity::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IssueCreateEntity::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IssueCreateEntity::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string IssueCreateEntity::getWorkload() const
{
    return workload_;
}

void IssueCreateEntity::setWorkload(const std::string& value)
{
    workload_ = value;
    workloadIsSet_ = true;
}

bool IssueCreateEntity::workloadIsSet() const
{
    return workloadIsSet_;
}

void IssueCreateEntity::unsetworkload()
{
    workloadIsSet_ = false;
}

std::string IssueCreateEntity::getLink() const
{
    return link_;
}

void IssueCreateEntity::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool IssueCreateEntity::linkIsSet() const
{
    return linkIsSet_;
}

void IssueCreateEntity::unsetlink()
{
    linkIsSet_ = false;
}

std::vector<LabelEntity>& IssueCreateEntity::getLabels()
{
    return labels_;
}

void IssueCreateEntity::setLabels(const std::vector<LabelEntity>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool IssueCreateEntity::labelsIsSet() const
{
    return labelsIsSet_;
}

void IssueCreateEntity::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<FieldCodeValuePair>& IssueCreateEntity::getCustomFields()
{
    return customFields_;
}

void IssueCreateEntity::setCustomFields(const std::vector<FieldCodeValuePair>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool IssueCreateEntity::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void IssueCreateEntity::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::string IssueCreateEntity::getIr2feature() const
{
    return ir2feature_;
}

void IssueCreateEntity::setIr2feature(const std::string& value)
{
    ir2feature_ = value;
    ir2featureIsSet_ = true;
}

bool IssueCreateEntity::ir2featureIsSet() const
{
    return ir2featureIsSet_;
}

void IssueCreateEntity::unsetir2feature()
{
    ir2featureIsSet_ = false;
}

std::string IssueCreateEntity::getPriority() const
{
    return priority_;
}

void IssueCreateEntity::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool IssueCreateEntity::priorityIsSet() const
{
    return priorityIsSet_;
}

void IssueCreateEntity::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string IssueCreateEntity::getRelatedNetworkSecurity() const
{
    return relatedNetworkSecurity_;
}

void IssueCreateEntity::setRelatedNetworkSecurity(const std::string& value)
{
    relatedNetworkSecurity_ = value;
    relatedNetworkSecurityIsSet_ = true;
}

bool IssueCreateEntity::relatedNetworkSecurityIsSet() const
{
    return relatedNetworkSecurityIsSet_;
}

void IssueCreateEntity::unsetrelatedNetworkSecurity()
{
    relatedNetworkSecurityIsSet_ = false;
}

std::string IssueCreateEntity::getCollaboratives() const
{
    return collaboratives_;
}

void IssueCreateEntity::setCollaboratives(const std::string& value)
{
    collaboratives_ = value;
    collaborativesIsSet_ = true;
}

bool IssueCreateEntity::collaborativesIsSet() const
{
    return collaborativesIsSet_;
}

void IssueCreateEntity::unsetcollaboratives()
{
    collaborativesIsSet_ = false;
}

std::string IssueCreateEntity::getBusinessDomain() const
{
    return businessDomain_;
}

void IssueCreateEntity::setBusinessDomain(const std::string& value)
{
    businessDomain_ = value;
    businessDomainIsSet_ = true;
}

bool IssueCreateEntity::businessDomainIsSet() const
{
    return businessDomainIsSet_;
}

void IssueCreateEntity::unsetbusinessDomain()
{
    businessDomainIsSet_ = false;
}

std::string IssueCreateEntity::getPlanPi() const
{
    return planPi_;
}

void IssueCreateEntity::setPlanPi(const std::string& value)
{
    planPi_ = value;
    planPiIsSet_ = true;
}

bool IssueCreateEntity::planPiIsSet() const
{
    return planPiIsSet_;
}

void IssueCreateEntity::unsetplanPi()
{
    planPiIsSet_ = false;
}

std::vector<UserEntity>& IssueCreateEntity::getSubmittedBy()
{
    return submittedBy_;
}

void IssueCreateEntity::setSubmittedBy(const std::vector<UserEntity>& value)
{
    submittedBy_ = value;
    submittedByIsSet_ = true;
}

bool IssueCreateEntity::submittedByIsSet() const
{
    return submittedByIsSet_;
}

void IssueCreateEntity::unsetsubmittedBy()
{
    submittedByIsSet_ = false;
}

std::string IssueCreateEntity::getIr2rr() const
{
    return ir2rr_;
}

void IssueCreateEntity::setIr2rr(const std::string& value)
{
    ir2rr_ = value;
    ir2rrIsSet_ = true;
}

bool IssueCreateEntity::ir2rrIsSet() const
{
    return ir2rrIsSet_;
}

void IssueCreateEntity::unsetir2rr()
{
    ir2rrIsSet_ = false;
}

std::string IssueCreateEntity::getFeatureSet() const
{
    return featureSet_;
}

void IssueCreateEntity::setFeatureSet(const std::string& value)
{
    featureSet_ = value;
    featureSetIsSet_ = true;
}

bool IssueCreateEntity::featureSetIsSet() const
{
    return featureSetIsSet_;
}

void IssueCreateEntity::unsetfeatureSet()
{
    featureSetIsSet_ = false;
}

std::string IssueCreateEntity::getSecurityLevel() const
{
    return securityLevel_;
}

void IssueCreateEntity::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool IssueCreateEntity::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void IssueCreateEntity::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

}
}
}
}
}



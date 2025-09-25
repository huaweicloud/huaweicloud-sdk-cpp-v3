

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestNoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestNoteDto::UpdateMergeRequestNoteDto()
{
    body_ = "";
    bodyIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    assigneeId_ = "";
    assigneeIdIsSet_ = false;
    reviewCategories_ = "";
    reviewCategoriesIsSet_ = false;
    reviewModules_ = "";
    reviewModulesIsSet_ = false;
    proposerId_ = "";
    proposerIdIsSet_ = false;
    resolved_ = false;
    resolvedIsSet_ = false;
}

UpdateMergeRequestNoteDto::~UpdateMergeRequestNoteDto() = default;

void UpdateMergeRequestNoteDto::validate()
{
}

web::json::value UpdateMergeRequestNoteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(assigneeIdIsSet_) {
        val[utility::conversions::to_string_t("assignee_id")] = ModelBase::toJson(assigneeId_);
    }
    if(reviewCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_categories")] = ModelBase::toJson(reviewCategories_);
    }
    if(reviewModulesIsSet_) {
        val[utility::conversions::to_string_t("review_modules")] = ModelBase::toJson(reviewModules_);
    }
    if(proposerIdIsSet_) {
        val[utility::conversions::to_string_t("proposer_id")] = ModelBase::toJson(proposerId_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
    }

    return val;
}
bool UpdateMergeRequestNoteDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_modules"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewModules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proposer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proposer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProposerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolved(refVal);
        }
    }
    return ok;
}


std::string UpdateMergeRequestNoteDto::getBody() const
{
    return body_;
}

void UpdateMergeRequestNoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestNoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

std::string UpdateMergeRequestNoteDto::getSeverity() const
{
    return severity_;
}

void UpdateMergeRequestNoteDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::severityIsSet() const
{
    return severityIsSet_;
}

void UpdateMergeRequestNoteDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string UpdateMergeRequestNoteDto::getAssigneeId() const
{
    return assigneeId_;
}

void UpdateMergeRequestNoteDto::setAssigneeId(const std::string& value)
{
    assigneeId_ = value;
    assigneeIdIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::assigneeIdIsSet() const
{
    return assigneeIdIsSet_;
}

void UpdateMergeRequestNoteDto::unsetassigneeId()
{
    assigneeIdIsSet_ = false;
}

std::string UpdateMergeRequestNoteDto::getReviewCategories() const
{
    return reviewCategories_;
}

void UpdateMergeRequestNoteDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void UpdateMergeRequestNoteDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string UpdateMergeRequestNoteDto::getReviewModules() const
{
    return reviewModules_;
}

void UpdateMergeRequestNoteDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void UpdateMergeRequestNoteDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string UpdateMergeRequestNoteDto::getProposerId() const
{
    return proposerId_;
}

void UpdateMergeRequestNoteDto::setProposerId(const std::string& value)
{
    proposerId_ = value;
    proposerIdIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::proposerIdIsSet() const
{
    return proposerIdIsSet_;
}

void UpdateMergeRequestNoteDto::unsetproposerId()
{
    proposerIdIsSet_ = false;
}

bool UpdateMergeRequestNoteDto::isResolved() const
{
    return resolved_;
}

void UpdateMergeRequestNoteDto::setResolved(bool value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool UpdateMergeRequestNoteDto::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void UpdateMergeRequestNoteDto::unsetresolved()
{
    resolvedIsSet_ = false;
}

}
}
}
}
}



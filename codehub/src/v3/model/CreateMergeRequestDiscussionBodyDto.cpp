

#include "huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionBodyDto::CreateMergeRequestDiscussionBodyDto()
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
    positionIsSet_ = false;
}

CreateMergeRequestDiscussionBodyDto::~CreateMergeRequestDiscussionBodyDto() = default;

void CreateMergeRequestDiscussionBodyDto::validate()
{
}

web::json::value CreateMergeRequestDiscussionBodyDto::toJson() const
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
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }

    return val;
}
bool CreateMergeRequestDiscussionBodyDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            PositionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    return ok;
}


std::string CreateMergeRequestDiscussionBodyDto::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionBodyDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetbody()
{
    bodyIsSet_ = false;
}

std::string CreateMergeRequestDiscussionBodyDto::getSeverity() const
{
    return severity_;
}

void CreateMergeRequestDiscussionBodyDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::severityIsSet() const
{
    return severityIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CreateMergeRequestDiscussionBodyDto::getAssigneeId() const
{
    return assigneeId_;
}

void CreateMergeRequestDiscussionBodyDto::setAssigneeId(const std::string& value)
{
    assigneeId_ = value;
    assigneeIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::assigneeIdIsSet() const
{
    return assigneeIdIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetassigneeId()
{
    assigneeIdIsSet_ = false;
}

std::string CreateMergeRequestDiscussionBodyDto::getReviewCategories() const
{
    return reviewCategories_;
}

void CreateMergeRequestDiscussionBodyDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionBodyDto::getReviewModules() const
{
    return reviewModules_;
}

void CreateMergeRequestDiscussionBodyDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CreateMergeRequestDiscussionBodyDto::getProposerId() const
{
    return proposerId_;
}

void CreateMergeRequestDiscussionBodyDto::setProposerId(const std::string& value)
{
    proposerId_ = value;
    proposerIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::proposerIdIsSet() const
{
    return proposerIdIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetproposerId()
{
    proposerIdIsSet_ = false;
}

PositionDto CreateMergeRequestDiscussionBodyDto::getPosition() const
{
    return position_;
}

void CreateMergeRequestDiscussionBodyDto::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool CreateMergeRequestDiscussionBodyDto::positionIsSet() const
{
    return positionIsSet_;
}

void CreateMergeRequestDiscussionBodyDto::unsetposition()
{
    positionIsSet_ = false;
}

}
}
}
}
}



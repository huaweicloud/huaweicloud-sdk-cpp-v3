

#include "huaweicloud/codeartsrepo/v4/model/CreateMergeRequestNoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateMergeRequestNoteDto::CreateMergeRequestNoteDto()
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
    lineTypes_ = "";
    lineTypesIsSet_ = false;
    positionIsSet_ = false;
}

CreateMergeRequestNoteDto::~CreateMergeRequestNoteDto() = default;

void CreateMergeRequestNoteDto::validate()
{
}

web::json::value CreateMergeRequestNoteDto::toJson() const
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
    if(lineTypesIsSet_) {
        val[utility::conversions::to_string_t("line_types")] = ModelBase::toJson(lineTypes_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }

    return val;
}
bool CreateMergeRequestNoteDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("line_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineTypes(refVal);
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


std::string CreateMergeRequestNoteDto::getBody() const
{
    return body_;
}

void CreateMergeRequestNoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestNoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestNoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getSeverity() const
{
    return severity_;
}

void CreateMergeRequestNoteDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CreateMergeRequestNoteDto::severityIsSet() const
{
    return severityIsSet_;
}

void CreateMergeRequestNoteDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getAssigneeId() const
{
    return assigneeId_;
}

void CreateMergeRequestNoteDto::setAssigneeId(const std::string& value)
{
    assigneeId_ = value;
    assigneeIdIsSet_ = true;
}

bool CreateMergeRequestNoteDto::assigneeIdIsSet() const
{
    return assigneeIdIsSet_;
}

void CreateMergeRequestNoteDto::unsetassigneeId()
{
    assigneeIdIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getReviewCategories() const
{
    return reviewCategories_;
}

void CreateMergeRequestNoteDto::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool CreateMergeRequestNoteDto::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void CreateMergeRequestNoteDto::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getReviewModules() const
{
    return reviewModules_;
}

void CreateMergeRequestNoteDto::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CreateMergeRequestNoteDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CreateMergeRequestNoteDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getProposerId() const
{
    return proposerId_;
}

void CreateMergeRequestNoteDto::setProposerId(const std::string& value)
{
    proposerId_ = value;
    proposerIdIsSet_ = true;
}

bool CreateMergeRequestNoteDto::proposerIdIsSet() const
{
    return proposerIdIsSet_;
}

void CreateMergeRequestNoteDto::unsetproposerId()
{
    proposerIdIsSet_ = false;
}

std::string CreateMergeRequestNoteDto::getLineTypes() const
{
    return lineTypes_;
}

void CreateMergeRequestNoteDto::setLineTypes(const std::string& value)
{
    lineTypes_ = value;
    lineTypesIsSet_ = true;
}

bool CreateMergeRequestNoteDto::lineTypesIsSet() const
{
    return lineTypesIsSet_;
}

void CreateMergeRequestNoteDto::unsetlineTypes()
{
    lineTypesIsSet_ = false;
}

PositionDto CreateMergeRequestNoteDto::getPosition() const
{
    return position_;
}

void CreateMergeRequestNoteDto::setPosition(const PositionDto& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool CreateMergeRequestNoteDto::positionIsSet() const
{
    return positionIsSet_;
}

void CreateMergeRequestNoteDto::unsetposition()
{
    positionIsSet_ = false;
}

}
}
}
}
}



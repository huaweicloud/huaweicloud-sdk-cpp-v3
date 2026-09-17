

#include "huaweicloud/projectman/v4/model/CommentCreateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentCreateVO::CommentCreateVO()
{
    category_ = "";
    categoryIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    at_ = "";
    atIsSet_ = false;
}

CommentCreateVO::~CommentCreateVO() = default;

void CommentCreateVO::validate()
{
}

web::json::value CommentCreateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(atIsSet_) {
        val[utility::conversions::to_string_t("at")] = ModelBase::toJson(at_);
    }

    return val;
}
bool CommentCreateVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAt(refVal);
        }
    }
    return ok;
}


std::string CommentCreateVO::getCategory() const
{
    return category_;
}

void CommentCreateVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CommentCreateVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void CommentCreateVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CommentCreateVO::getIssueCategory() const
{
    return issueCategory_;
}

void CommentCreateVO::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool CommentCreateVO::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void CommentCreateVO::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string CommentCreateVO::getDescription() const
{
    return description_;
}

void CommentCreateVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommentCreateVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommentCreateVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommentCreateVO::getParentId() const
{
    return parentId_;
}

void CommentCreateVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CommentCreateVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CommentCreateVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string CommentCreateVO::getRootId() const
{
    return rootId_;
}

void CommentCreateVO::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool CommentCreateVO::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void CommentCreateVO::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string CommentCreateVO::getAt() const
{
    return at_;
}

void CommentCreateVO::setAt(const std::string& value)
{
    at_ = value;
    atIsSet_ = true;
}

bool CommentCreateVO::atIsSet() const
{
    return atIsSet_;
}

void CommentCreateVO::unsetat()
{
    atIsSet_ = false;
}

}
}
}
}
}



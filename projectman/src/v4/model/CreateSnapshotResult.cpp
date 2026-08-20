

#include "huaweicloud/projectman/v4/model/CreateSnapshotResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSnapshotResult::CreateSnapshotResult()
{
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    deletable_ = false;
    deletableIsSet_ = false;
    errormsg_ = "";
    errormsgIsSet_ = false;
}

CreateSnapshotResult::~CreateSnapshotResult() = default;

void CreateSnapshotResult::validate()
{
}

web::json::value CreateSnapshotResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(deletableIsSet_) {
        val[utility::conversions::to_string_t("deletable")] = ModelBase::toJson(deletable_);
    }
    if(errormsgIsSet_) {
        val[utility::conversions::to_string_t("errormsg")] = ModelBase::toJson(errormsg_);
    }

    return val;
}
bool CreateSnapshotResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errormsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errormsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrormsg(refVal);
        }
    }
    return ok;
}


std::string CreateSnapshotResult::getId() const
{
    return id_;
}

void CreateSnapshotResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateSnapshotResult::idIsSet() const
{
    return idIsSet_;
}

void CreateSnapshotResult::unsetid()
{
    idIsSet_ = false;
}

std::string CreateSnapshotResult::getTitle() const
{
    return title_;
}

void CreateSnapshotResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateSnapshotResult::titleIsSet() const
{
    return titleIsSet_;
}

void CreateSnapshotResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateSnapshotResult::getCategory() const
{
    return category_;
}

void CreateSnapshotResult::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateSnapshotResult::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateSnapshotResult::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CreateSnapshotResult::getIssueId() const
{
    return issueId_;
}

void CreateSnapshotResult::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CreateSnapshotResult::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CreateSnapshotResult::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string CreateSnapshotResult::getCreatedBy() const
{
    return createdBy_;
}

void CreateSnapshotResult::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool CreateSnapshotResult::createdByIsSet() const
{
    return createdByIsSet_;
}

void CreateSnapshotResult::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

bool CreateSnapshotResult::isDeletable() const
{
    return deletable_;
}

void CreateSnapshotResult::setDeletable(bool value)
{
    deletable_ = value;
    deletableIsSet_ = true;
}

bool CreateSnapshotResult::deletableIsSet() const
{
    return deletableIsSet_;
}

void CreateSnapshotResult::unsetdeletable()
{
    deletableIsSet_ = false;
}

std::string CreateSnapshotResult::getErrormsg() const
{
    return errormsg_;
}

void CreateSnapshotResult::setErrormsg(const std::string& value)
{
    errormsg_ = value;
    errormsgIsSet_ = true;
}

bool CreateSnapshotResult::errormsgIsSet() const
{
    return errormsgIsSet_;
}

void CreateSnapshotResult::unseterrormsg()
{
    errormsgIsSet_ = false;
}

}
}
}
}
}



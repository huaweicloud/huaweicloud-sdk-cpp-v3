

#include "huaweicloud/projectman/v4/model/ReviewOpinionEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ReviewOpinionEntity::ReviewOpinionEntity()
{
    category_ = "";
    categoryIsSet_ = false;
    coId_ = "";
    coIdIsSet_ = false;
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    currOwnerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    reviewComments_ = "";
    reviewCommentsIsSet_ = false;
}

ReviewOpinionEntity::~ReviewOpinionEntity() = default;

void ReviewOpinionEntity::validate()
{
}

web::json::value ReviewOpinionEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(coIdIsSet_) {
        val[utility::conversions::to_string_t("co_id")] = ModelBase::toJson(coId_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(currOwnerIsSet_) {
        val[utility::conversions::to_string_t("curr_owner")] = ModelBase::toJson(currOwner_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(reviewCommentsIsSet_) {
        val[utility::conversions::to_string_t("review_comments")] = ModelBase::toJson(reviewComments_);
    }

    return val;
}
bool ReviewOpinionEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("co_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
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
    if(val.has_field(utility::conversions::to_string_t("curr_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curr_owner"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("review_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewComments(refVal);
        }
    }
    return ok;
}


std::string ReviewOpinionEntity::getCategory() const
{
    return category_;
}

void ReviewOpinionEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ReviewOpinionEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void ReviewOpinionEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ReviewOpinionEntity::getCoId() const
{
    return coId_;
}

void ReviewOpinionEntity::setCoId(const std::string& value)
{
    coId_ = value;
    coIdIsSet_ = true;
}

bool ReviewOpinionEntity::coIdIsSet() const
{
    return coIdIsSet_;
}

void ReviewOpinionEntity::unsetcoId()
{
    coIdIsSet_ = false;
}

UserEntity ReviewOpinionEntity::getCreatedBy() const
{
    return createdBy_;
}

void ReviewOpinionEntity::setCreatedBy(const UserEntity& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ReviewOpinionEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void ReviewOpinionEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ReviewOpinionEntity::getCreatedDate() const
{
    return createdDate_;
}

void ReviewOpinionEntity::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ReviewOpinionEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ReviewOpinionEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

UserEntity ReviewOpinionEntity::getCurrOwner() const
{
    return currOwner_;
}

void ReviewOpinionEntity::setCurrOwner(const UserEntity& value)
{
    currOwner_ = value;
    currOwnerIsSet_ = true;
}

bool ReviewOpinionEntity::currOwnerIsSet() const
{
    return currOwnerIsSet_;
}

void ReviewOpinionEntity::unsetcurrOwner()
{
    currOwnerIsSet_ = false;
}

std::string ReviewOpinionEntity::getId() const
{
    return id_;
}

void ReviewOpinionEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReviewOpinionEntity::idIsSet() const
{
    return idIsSet_;
}

void ReviewOpinionEntity::unsetid()
{
    idIsSet_ = false;
}

std::string ReviewOpinionEntity::getModifiedDate() const
{
    return modifiedDate_;
}

void ReviewOpinionEntity::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ReviewOpinionEntity::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ReviewOpinionEntity::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string ReviewOpinionEntity::getReviewComments() const
{
    return reviewComments_;
}

void ReviewOpinionEntity::setReviewComments(const std::string& value)
{
    reviewComments_ = value;
    reviewCommentsIsSet_ = true;
}

bool ReviewOpinionEntity::reviewCommentsIsSet() const
{
    return reviewCommentsIsSet_;
}

void ReviewOpinionEntity::unsetreviewComments()
{
    reviewCommentsIsSet_ = false;
}

}
}
}
}
}



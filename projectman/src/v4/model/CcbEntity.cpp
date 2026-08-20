

#include "huaweicloud/projectman/v4/model/CcbEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CcbEntity::CcbEntity()
{
    approvalTime_ = "";
    approvalTimeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    ccb2review_ = "";
    ccb2reviewIsSet_ = false;
    coId_ = "";
    coIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ownerIsSet_ = false;
    approvalComments_ = "";
    approvalCommentsIsSet_ = false;
}

CcbEntity::~CcbEntity() = default;

void CcbEntity::validate()
{
}

web::json::value CcbEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approvalTimeIsSet_) {
        val[utility::conversions::to_string_t("approval_time")] = ModelBase::toJson(approvalTime_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(ccb2reviewIsSet_) {
        val[utility::conversions::to_string_t("ccb2review")] = ModelBase::toJson(ccb2review_);
    }
    if(coIdIsSet_) {
        val[utility::conversions::to_string_t("co_id")] = ModelBase::toJson(coId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(approvalCommentsIsSet_) {
        val[utility::conversions::to_string_t("approval_comments")] = ModelBase::toJson(approvalComments_);
    }

    return val;
}
bool CcbEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approval_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ccb2review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccb2review"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcb2review(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalComments(refVal);
        }
    }
    return ok;
}


std::string CcbEntity::getApprovalTime() const
{
    return approvalTime_;
}

void CcbEntity::setApprovalTime(const std::string& value)
{
    approvalTime_ = value;
    approvalTimeIsSet_ = true;
}

bool CcbEntity::approvalTimeIsSet() const
{
    return approvalTimeIsSet_;
}

void CcbEntity::unsetapprovalTime()
{
    approvalTimeIsSet_ = false;
}

std::string CcbEntity::getCategory() const
{
    return category_;
}

void CcbEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CcbEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void CcbEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CcbEntity::getCcb2review() const
{
    return ccb2review_;
}

void CcbEntity::setCcb2review(const std::string& value)
{
    ccb2review_ = value;
    ccb2reviewIsSet_ = true;
}

bool CcbEntity::ccb2reviewIsSet() const
{
    return ccb2reviewIsSet_;
}

void CcbEntity::unsetccb2review()
{
    ccb2reviewIsSet_ = false;
}

std::string CcbEntity::getCoId() const
{
    return coId_;
}

void CcbEntity::setCoId(const std::string& value)
{
    coId_ = value;
    coIdIsSet_ = true;
}

bool CcbEntity::coIdIsSet() const
{
    return coIdIsSet_;
}

void CcbEntity::unsetcoId()
{
    coIdIsSet_ = false;
}

std::string CcbEntity::getId() const
{
    return id_;
}

void CcbEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CcbEntity::idIsSet() const
{
    return idIsSet_;
}

void CcbEntity::unsetid()
{
    idIsSet_ = false;
}

UserEntity CcbEntity::getOwner() const
{
    return owner_;
}

void CcbEntity::setOwner(const UserEntity& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CcbEntity::ownerIsSet() const
{
    return ownerIsSet_;
}

void CcbEntity::unsetowner()
{
    ownerIsSet_ = false;
}

std::string CcbEntity::getApprovalComments() const
{
    return approvalComments_;
}

void CcbEntity::setApprovalComments(const std::string& value)
{
    approvalComments_ = value;
    approvalCommentsIsSet_ = true;
}

bool CcbEntity::approvalCommentsIsSet() const
{
    return approvalCommentsIsSet_;
}

void CcbEntity::unsetapprovalComments()
{
    approvalCommentsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/projectman/v4/model/CommentEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentEntity::CommentEntity()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    top_ = false;
    topIsSet_ = false;
    topTime_ = "";
    topTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    topFlag_ = false;
    topFlagIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    creatorInfoIsSet_ = false;
    extendAttribute_ = "";
    extendAttributeIsSet_ = false;
    extendAttributeObjIsSet_ = false;
    extendAttributeObjsIsSet_ = false;
}

CommentEntity::~CommentEntity() = default;

void CommentEntity::validate()
{
}

web::json::value CommentEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(topIsSet_) {
        val[utility::conversions::to_string_t("top")] = ModelBase::toJson(top_);
    }
    if(topTimeIsSet_) {
        val[utility::conversions::to_string_t("top_time")] = ModelBase::toJson(topTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(topFlagIsSet_) {
        val[utility::conversions::to_string_t("top_flag")] = ModelBase::toJson(topFlag_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(creatorInfoIsSet_) {
        val[utility::conversions::to_string_t("creator_info")] = ModelBase::toJson(creatorInfo_);
    }
    if(extendAttributeIsSet_) {
        val[utility::conversions::to_string_t("extend_attribute")] = ModelBase::toJson(extendAttribute_);
    }
    if(extendAttributeObjIsSet_) {
        val[utility::conversions::to_string_t("extend_attribute_obj")] = ModelBase::toJson(extendAttributeObj_);
    }
    if(extendAttributeObjsIsSet_) {
        val[utility::conversions::to_string_t("extend_attribute_objs")] = ModelBase::toJson(extendAttributeObjs_);
    }

    return val;
}
bool CommentEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("top"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopFlag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_info"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_attribute"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendAttribute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_attribute_obj"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_attribute_obj"));
        if(!fieldValue.is_null())
        {
            CommentExtendAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendAttributeObj(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_attribute_objs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_attribute_objs"));
        if(!fieldValue.is_null())
        {
            std::vector<CommentExtendAttribute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendAttributeObjs(refVal);
        }
    }
    return ok;
}


std::string CommentEntity::getId() const
{
    return id_;
}

void CommentEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommentEntity::idIsSet() const
{
    return idIsSet_;
}

void CommentEntity::unsetid()
{
    idIsSet_ = false;
}

std::string CommentEntity::getCategory() const
{
    return category_;
}

void CommentEntity::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CommentEntity::categoryIsSet() const
{
    return categoryIsSet_;
}

void CommentEntity::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CommentEntity::getType() const
{
    return type_;
}

void CommentEntity::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CommentEntity::typeIsSet() const
{
    return typeIsSet_;
}

void CommentEntity::unsettype()
{
    typeIsSet_ = false;
}

bool CommentEntity::isTop() const
{
    return top_;
}

void CommentEntity::setTop(bool value)
{
    top_ = value;
    topIsSet_ = true;
}

bool CommentEntity::topIsSet() const
{
    return topIsSet_;
}

void CommentEntity::unsettop()
{
    topIsSet_ = false;
}

std::string CommentEntity::getTopTime() const
{
    return topTime_;
}

void CommentEntity::setTopTime(const std::string& value)
{
    topTime_ = value;
    topTimeIsSet_ = true;
}

bool CommentEntity::topTimeIsSet() const
{
    return topTimeIsSet_;
}

void CommentEntity::unsettopTime()
{
    topTimeIsSet_ = false;
}

std::string CommentEntity::getDescription() const
{
    return description_;
}

void CommentEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommentEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommentEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommentEntity::getIssueId() const
{
    return issueId_;
}

void CommentEntity::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CommentEntity::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CommentEntity::unsetissueId()
{
    issueIdIsSet_ = false;
}

bool CommentEntity::isTopFlag() const
{
    return topFlag_;
}

void CommentEntity::setTopFlag(bool value)
{
    topFlag_ = value;
    topFlagIsSet_ = true;
}

bool CommentEntity::topFlagIsSet() const
{
    return topFlagIsSet_;
}

void CommentEntity::unsettopFlag()
{
    topFlagIsSet_ = false;
}

std::string CommentEntity::getCreatedBy() const
{
    return createdBy_;
}

void CommentEntity::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool CommentEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void CommentEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string CommentEntity::getCreatedDate() const
{
    return createdDate_;
}

void CommentEntity::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool CommentEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void CommentEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

UserVO CommentEntity::getCreatorInfo() const
{
    return creatorInfo_;
}

void CommentEntity::setCreatorInfo(const UserVO& value)
{
    creatorInfo_ = value;
    creatorInfoIsSet_ = true;
}

bool CommentEntity::creatorInfoIsSet() const
{
    return creatorInfoIsSet_;
}

void CommentEntity::unsetcreatorInfo()
{
    creatorInfoIsSet_ = false;
}

std::string CommentEntity::getExtendAttribute() const
{
    return extendAttribute_;
}

void CommentEntity::setExtendAttribute(const std::string& value)
{
    extendAttribute_ = value;
    extendAttributeIsSet_ = true;
}

bool CommentEntity::extendAttributeIsSet() const
{
    return extendAttributeIsSet_;
}

void CommentEntity::unsetextendAttribute()
{
    extendAttributeIsSet_ = false;
}

CommentExtendAttribute CommentEntity::getExtendAttributeObj() const
{
    return extendAttributeObj_;
}

void CommentEntity::setExtendAttributeObj(const CommentExtendAttribute& value)
{
    extendAttributeObj_ = value;
    extendAttributeObjIsSet_ = true;
}

bool CommentEntity::extendAttributeObjIsSet() const
{
    return extendAttributeObjIsSet_;
}

void CommentEntity::unsetextendAttributeObj()
{
    extendAttributeObjIsSet_ = false;
}

std::vector<CommentExtendAttribute>& CommentEntity::getExtendAttributeObjs()
{
    return extendAttributeObjs_;
}

void CommentEntity::setExtendAttributeObjs(const std::vector<CommentExtendAttribute>& value)
{
    extendAttributeObjs_ = value;
    extendAttributeObjsIsSet_ = true;
}

bool CommentEntity::extendAttributeObjsIsSet() const
{
    return extendAttributeObjsIsSet_;
}

void CommentEntity::unsetextendAttributeObjs()
{
    extendAttributeObjsIsSet_ = false;
}

}
}
}
}
}



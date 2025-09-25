

#include "huaweicloud/codehub/v4/model/MergeRequestBaseEvaluationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestBaseEvaluationDto::MergeRequestBaseEvaluationDto()
{
    id_ = 0;
    idIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    userIsSet_ = false;
}

MergeRequestBaseEvaluationDto::~MergeRequestBaseEvaluationDto() = default;

void MergeRequestBaseEvaluationDto::validate()
{
}

web::json::value MergeRequestBaseEvaluationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool MergeRequestBaseEvaluationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestBaseEvaluationDto::getId() const
{
    return id_;
}

void MergeRequestBaseEvaluationDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestBaseEvaluationDto::getMergeRequestId() const
{
    return mergeRequestId_;
}

void MergeRequestBaseEvaluationDto::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

int32_t MergeRequestBaseEvaluationDto::getLevel() const
{
    return level_;
}

void MergeRequestBaseEvaluationDto::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::levelIsSet() const
{
    return levelIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetlevel()
{
    levelIsSet_ = false;
}

std::string MergeRequestBaseEvaluationDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestBaseEvaluationDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestBaseEvaluationDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestBaseEvaluationDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeRequestBaseEvaluationDto::getContent() const
{
    return content_;
}

void MergeRequestBaseEvaluationDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::contentIsSet() const
{
    return contentIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetcontent()
{
    contentIsSet_ = false;
}

UserBasicDto MergeRequestBaseEvaluationDto::getUser() const
{
    return user_;
}

void MergeRequestBaseEvaluationDto::setUser(const UserBasicDto& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool MergeRequestBaseEvaluationDto::userIsSet() const
{
    return userIsSet_;
}

void MergeRequestBaseEvaluationDto::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}



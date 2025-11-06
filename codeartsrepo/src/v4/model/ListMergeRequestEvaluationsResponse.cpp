

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestEvaluationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestEvaluationsResponse::ListMergeRequestEvaluationsResponse()
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
    customEvaluationsIsSet_ = false;
}

ListMergeRequestEvaluationsResponse::~ListMergeRequestEvaluationsResponse() = default;

void ListMergeRequestEvaluationsResponse::validate()
{
}

web::json::value ListMergeRequestEvaluationsResponse::toJson() const
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
    if(customEvaluationsIsSet_) {
        val[utility::conversions::to_string_t("custom_evaluations")] = ModelBase::toJson(customEvaluations_);
    }

    return val;
}
bool ListMergeRequestEvaluationsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("custom_evaluations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_evaluations"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomEvaluationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomEvaluations(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestEvaluationsResponse::getId() const
{
    return id_;
}

void ListMergeRequestEvaluationsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::idIsSet() const
{
    return idIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ListMergeRequestEvaluationsResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ListMergeRequestEvaluationsResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

int32_t ListMergeRequestEvaluationsResponse::getLevel() const
{
    return level_;
}

void ListMergeRequestEvaluationsResponse::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::levelIsSet() const
{
    return levelIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListMergeRequestEvaluationsResponse::getCreatedAt() const
{
    return createdAt_;
}

void ListMergeRequestEvaluationsResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ListMergeRequestEvaluationsResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ListMergeRequestEvaluationsResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ListMergeRequestEvaluationsResponse::getContent() const
{
    return content_;
}

void ListMergeRequestEvaluationsResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetcontent()
{
    contentIsSet_ = false;
}

UserBasicDto ListMergeRequestEvaluationsResponse::getUser() const
{
    return user_;
}

void ListMergeRequestEvaluationsResponse::setUser(const UserBasicDto& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::userIsSet() const
{
    return userIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetuser()
{
    userIsSet_ = false;
}

std::vector<CustomEvaluationDto>& ListMergeRequestEvaluationsResponse::getCustomEvaluations()
{
    return customEvaluations_;
}

void ListMergeRequestEvaluationsResponse::setCustomEvaluations(const std::vector<CustomEvaluationDto>& value)
{
    customEvaluations_ = value;
    customEvaluationsIsSet_ = true;
}

bool ListMergeRequestEvaluationsResponse::customEvaluationsIsSet() const
{
    return customEvaluationsIsSet_;
}

void ListMergeRequestEvaluationsResponse::unsetcustomEvaluations()
{
    customEvaluationsIsSet_ = false;
}

}
}
}
}
}



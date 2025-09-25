

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestVoteResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestVoteResponse::UpdateMergeRequestVoteResponse()
{
    id_ = 0;
    idIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    score_ = 0;
    scoreIsSet_ = false;
    authorIsSet_ = false;
}

UpdateMergeRequestVoteResponse::~UpdateMergeRequestVoteResponse() = default;

void UpdateMergeRequestVoteResponse::validate()
{
}

web::json::value UpdateMergeRequestVoteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }

    return val;
}
bool UpdateMergeRequestVoteResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserSafeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestVoteResponse::getId() const
{
    return id_;
}

void UpdateMergeRequestVoteResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMergeRequestVoteResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateMergeRequestVoteResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateMergeRequestVoteResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void UpdateMergeRequestVoteResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool UpdateMergeRequestVoteResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void UpdateMergeRequestVoteResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

int32_t UpdateMergeRequestVoteResponse::getScore() const
{
    return score_;
}

void UpdateMergeRequestVoteResponse::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool UpdateMergeRequestVoteResponse::scoreIsSet() const
{
    return scoreIsSet_;
}

void UpdateMergeRequestVoteResponse::unsetscore()
{
    scoreIsSet_ = false;
}

UserSafeDto UpdateMergeRequestVoteResponse::getAuthor() const
{
    return author_;
}

void UpdateMergeRequestVoteResponse::setAuthor(const UserSafeDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool UpdateMergeRequestVoteResponse::authorIsSet() const
{
    return authorIsSet_;
}

void UpdateMergeRequestVoteResponse::unsetauthor()
{
    authorIsSet_ = false;
}

}
}
}
}
}



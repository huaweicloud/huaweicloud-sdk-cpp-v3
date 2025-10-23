

#include "huaweicloud/codehub/v4/model/ListMergeRequestVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestVersionsResponse::ListMergeRequestVersionsResponse()
{
    id_ = 0;
    idIsSet_ = false;
    headCommitSha_ = "";
    headCommitShaIsSet_ = false;
    baseCommitSha_ = "";
    baseCommitShaIsSet_ = false;
    startCommitSha_ = "";
    startCommitShaIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    realSize_ = "";
    realSizeIsSet_ = false;
}

ListMergeRequestVersionsResponse::~ListMergeRequestVersionsResponse() = default;

void ListMergeRequestVersionsResponse::validate()
{
}

web::json::value ListMergeRequestVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(headCommitShaIsSet_) {
        val[utility::conversions::to_string_t("head_commit_sha")] = ModelBase::toJson(headCommitSha_);
    }
    if(baseCommitShaIsSet_) {
        val[utility::conversions::to_string_t("base_commit_sha")] = ModelBase::toJson(baseCommitSha_);
    }
    if(startCommitShaIsSet_) {
        val[utility::conversions::to_string_t("start_commit_sha")] = ModelBase::toJson(startCommitSha_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(realSizeIsSet_) {
        val[utility::conversions::to_string_t("real_size")] = ModelBase::toJson(realSize_);
    }

    return val;
}
bool ListMergeRequestVersionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("head_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartCommitSha(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealSize(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestVersionsResponse::getId() const
{
    return id_;
}

void ListMergeRequestVersionsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::idIsSet() const
{
    return idIsSet_;
}

void ListMergeRequestVersionsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getHeadCommitSha() const
{
    return headCommitSha_;
}

void ListMergeRequestVersionsResponse::setHeadCommitSha(const std::string& value)
{
    headCommitSha_ = value;
    headCommitShaIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::headCommitShaIsSet() const
{
    return headCommitShaIsSet_;
}

void ListMergeRequestVersionsResponse::unsetheadCommitSha()
{
    headCommitShaIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getBaseCommitSha() const
{
    return baseCommitSha_;
}

void ListMergeRequestVersionsResponse::setBaseCommitSha(const std::string& value)
{
    baseCommitSha_ = value;
    baseCommitShaIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::baseCommitShaIsSet() const
{
    return baseCommitShaIsSet_;
}

void ListMergeRequestVersionsResponse::unsetbaseCommitSha()
{
    baseCommitShaIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getStartCommitSha() const
{
    return startCommitSha_;
}

void ListMergeRequestVersionsResponse::setStartCommitSha(const std::string& value)
{
    startCommitSha_ = value;
    startCommitShaIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::startCommitShaIsSet() const
{
    return startCommitShaIsSet_;
}

void ListMergeRequestVersionsResponse::unsetstartCommitSha()
{
    startCommitShaIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getCreatedAt() const
{
    return createdAt_;
}

void ListMergeRequestVersionsResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListMergeRequestVersionsResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t ListMergeRequestVersionsResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ListMergeRequestVersionsResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ListMergeRequestVersionsResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getState() const
{
    return state_;
}

void ListMergeRequestVersionsResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ListMergeRequestVersionsResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListMergeRequestVersionsResponse::getRealSize() const
{
    return realSize_;
}

void ListMergeRequestVersionsResponse::setRealSize(const std::string& value)
{
    realSize_ = value;
    realSizeIsSet_ = true;
}

bool ListMergeRequestVersionsResponse::realSizeIsSet() const
{
    return realSizeIsSet_;
}

void ListMergeRequestVersionsResponse::unsetrealSize()
{
    realSizeIsSet_ = false;
}

}
}
}
}
}



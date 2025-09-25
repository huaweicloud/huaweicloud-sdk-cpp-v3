

#include "huaweicloud/codehub/v3/model/MergeRequestDiff.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




MergeRequestDiff::MergeRequestDiff()
{
    baseCommitSha_ = "";
    baseCommitShaIsSet_ = false;
    commitsCount_ = 0.0;
    commitsCountIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    headCommitSha_ = "";
    headCommitShaIsSet_ = false;
    mergeRequestId_ = 0.0;
    mergeRequestIdIsSet_ = false;
    startCommitSha_ = "";
    startCommitShaIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

MergeRequestDiff::~MergeRequestDiff() = default;

void MergeRequestDiff::validate()
{
}

web::json::value MergeRequestDiff::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseCommitShaIsSet_) {
        val[utility::conversions::to_string_t("base_commit_sha")] = ModelBase::toJson(baseCommitSha_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(headCommitShaIsSet_) {
        val[utility::conversions::to_string_t("head_commit_sha")] = ModelBase::toJson(headCommitSha_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(startCommitShaIsSet_) {
        val[utility::conversions::to_string_t("start_commit_sha")] = ModelBase::toJson(startCommitSha_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool MergeRequestDiff::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits_count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitsCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("head_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string MergeRequestDiff::getBaseCommitSha() const
{
    return baseCommitSha_;
}

void MergeRequestDiff::setBaseCommitSha(const std::string& value)
{
    baseCommitSha_ = value;
    baseCommitShaIsSet_ = true;
}

bool MergeRequestDiff::baseCommitShaIsSet() const
{
    return baseCommitShaIsSet_;
}

void MergeRequestDiff::unsetbaseCommitSha()
{
    baseCommitShaIsSet_ = false;
}

double MergeRequestDiff::getCommitsCount() const
{
    return commitsCount_;
}

void MergeRequestDiff::setCommitsCount(double value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool MergeRequestDiff::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void MergeRequestDiff::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

std::string MergeRequestDiff::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestDiff::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestDiff::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestDiff::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestDiff::getHeadCommitSha() const
{
    return headCommitSha_;
}

void MergeRequestDiff::setHeadCommitSha(const std::string& value)
{
    headCommitSha_ = value;
    headCommitShaIsSet_ = true;
}

bool MergeRequestDiff::headCommitShaIsSet() const
{
    return headCommitShaIsSet_;
}

void MergeRequestDiff::unsetheadCommitSha()
{
    headCommitShaIsSet_ = false;
}

double MergeRequestDiff::getMergeRequestId() const
{
    return mergeRequestId_;
}

void MergeRequestDiff::setMergeRequestId(double value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool MergeRequestDiff::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void MergeRequestDiff::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

std::string MergeRequestDiff::getStartCommitSha() const
{
    return startCommitSha_;
}

void MergeRequestDiff::setStartCommitSha(const std::string& value)
{
    startCommitSha_ = value;
    startCommitShaIsSet_ = true;
}

bool MergeRequestDiff::startCommitShaIsSet() const
{
    return startCommitShaIsSet_;
}

void MergeRequestDiff::unsetstartCommitSha()
{
    startCommitShaIsSet_ = false;
}

std::string MergeRequestDiff::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestDiff::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestDiff::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestDiff::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


